#include "..\..\..\script_macros.hpp"
/*
	fn_fluidRefuelStation.sqf
	
	Autor:IronBlade
*/
_station = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_litre = [_this,1,0,[0]] call BIS_fnc_param;

_cfgFuelStation = (missionConfigFile >> "CfgFuelStation");
_cfgAllStations = (_cfgFuelStation >> "AllStations");

if (isNull _station) exitWith {diag_log "Null Station";};

_var = str(_station);
_var = _var select [4];

_volumeStat = getNumber(_cfgAllStations >> _var >> "citerne");
_citerneStat = (_station getVariable ["citerne", 0]);

if ((_citerneStat + _litre) > _volumeStat) exitWith {
	hint "Cela va déborder !";
	playSound "addItemFailed";
};

life_fuel_curVeh setVariable ["citerneAction", true, true];

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_upp = "Remplissage de la citerne...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
_cpRate = 0.005;

while{true} do {

	sleep 0.1;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if (player distance life_fuel_curVeh > 10) exitWith {playSound "addItemFailed";};
	if (life_fuel_curVeh distance _station > 10) exitWith {playSound "addItemFailed";};
};

//Stop player
5 cutText ["","PLAIN"];
life_fuel_curVeh setVariable ["citerneAction", nil, true];

if (player distance life_fuel_curVeh > 10) exitWith {};
if (life_fuel_curVeh distance _station > 10) exitWith {};
if(!alive player) exitWith {};

_citerne = life_fuel_curVeh getVariable ["citerne", ["",0]];
if ((_citerne select 1) < _litre) exitWith {hint "Pas assez dans le réservoir !"; playSound "addItemFailed";};

_citerneStat = _station getVariable ["citerne", 0];

_fuelToSet = _citerneStat + _litre;
_station setVariable ["citerne", _fuelToSet, true];

_configFuel = (missionConfigFile >> "CfgFuelStation");
_priceSell = (([_station] call life_fnc_fuelGetPrice) select 1);

_cash = round(_priceSell * _litre);
life_cash = life_cash + _cash;

_level = floor(_litre / 200);
if (_level > 0) then {
	["prof_livraison", _level, 100] call life_fnc_levelProfession;
};

hint parseText format["<t color='#319345'><t size='1.2'>Citerne Rempli !</t></t><br/><t size='1'><br/>Gains: $%1</t>", [_cash] call life_fnc_numberText];

_valToSetCargo = [(_citerne select 0), (_citerne select 1) - _litre];
if ((_valToSetCargo select 1) <= 0) then {
	_valToSetCargo set[0, ""];
};

life_fuel_curVeh setVariable ["citerne", _valToSetCargo, true];