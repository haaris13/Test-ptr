#include "..\..\script_macros.hpp"
/*
	File: fn_breakChestBank.sqf


	
*/

_chest = cursorTarget;

if (isNull _chest) exitWith {};

_build = _chest getVariable ["build", objNull];

if (isNull _build) exitWith {};

if (!(_build getVariable["open_vault2",false])) exitWith {};
if (!(_build getVariable["open_vault",false])) exitWith {};

if (_chest getVariable["rob",false]) exitWith {};

if (_chest getVariable["inRob",false]) exitWith {};

if (_chest getVariable["on_open",""] == (getPlayerUID player)) exitWith {[_chest] spawn life_fnc_bankopenChest;};

if (_chest getVariable["owner",getPlayerUID player] != (getPlayerUID player)) exitWith {};

if (isNil "bank_nb_breaker") exitWith {hint "Vous n'étes pas le poseur de la bombe !";};

_chest setVariable ["owner", getPlayerUID player, true]; 

life_interrupted = false;

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_upp = "Récupération de l'argent...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
_cpRate = 0.02;

_chest setVariable ["owner", getPlayerUID player,true];

["Le coffre est en train d'étre ouvert !"] remoteExecCall ["life_fnc_dynamicText",west];

while{true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 0.15;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if (_cP >= 1) exitWith {};
	if (!alive player) exitWith {};
	if (player != vehicle player) exitWith {};
	if (life_interrupted) exitWith {};
	if (dialog) exitWith {};
	if (_chest getVariable["owner", getPlayerUID player] != (getPlayerUID player)) exitWith {};
};

//Stop player
5 cutText ["","PLAIN"];
player playActionNow "stop";

_chest setVariable ["inRob", nil,true];

if (dialog || life_interrupted || (player != vehicle player) || (!alive player) || (_chest getVariable["owner", getPlayerUID player] != (getPlayerUID player))) exitWith {};

_items = (_chest getVariable ["items",[]]);

if (count (_items) <= 0) exitWith {hint "Il n'y a pas d'argent dans le coffre !";};

_nb = 0;
{
	if ((_x distance _chest) < 30 && (alive _x) && (_x != player)) then {
		_nb = _nb + 1;
	};
} forEach (units group player);

if (_nb < bank_nb_breaker) then {
	bank_nb_breaker = _nb;
};

if (bank_nb_breaker >= 10) then {
	[format ["La banque fait par %1, il y a %2 membres sur l'action",profileName,(bank_nb_breaker)], getPlayerUID player] remoteExecCall ["TON_fnc_AlertAllAdmins",2];
	bank_nb_breaker = 10;
};

for "_i" from 1 to bank_nb_breaker do {
	_items pushBack "goldBar";
	_items pushBack "goldBar";
};

_chest setVariable ["items", _items, true];

diag_log format["Money: %1",str(_items)];

if (_cP >= 1) then {

	[_chest] spawn life_fnc_bankopenChest;

	_chest setVariable ["on_open", getPlayerUID player, true];
	_chest setVariable ["rob_money", _items,true];

	if (!(alive player)) exitWith {};
};