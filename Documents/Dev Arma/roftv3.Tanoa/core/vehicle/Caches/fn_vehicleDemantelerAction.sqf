#include "..\..\..\script_macros.hpp"
/*
	File: fn_vehicleDemantelerAction.sqf

	Auto:IronBlade
*/


disableSerialization;
private["_control","_price","_vehicle","_nearVehicles","_price2"];
_control = CONTROL(81500,81502);
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format["%1", _vehicle];
_nearVehicles = nearestObjects [position life_demanteler_veh, ["Car","Truck", "Ship"],10];

_vehicle = SEL(_nearVehicles,_vehicle);
if(isNull _vehicle) exitWith {};
if (!alive _vehicle) exitWith {};
if (fuel life_demanteler_veh <= 0) exitWith {hint "Pas assez de carburant dans le Véhicule de Démantélement !"};
if (life_demanteler_veh getVariable ["dem_inUse", false]) exitWith {hint "Véhicule déja utilisé !"};
life_demanteler_veh setVariable ["dem_inUse", true, true];
closeDialog 0;

_arrayAnims = [];
_arrayHits = [];
_curIndexAnims = 0;
_curIndexHits = 0;

if (isClass (missionConfigFile >> "CfgVehicleDem" >> (typeOf _vehicle))) then {
	_arrayAnims = getArray(missionConfigFile >> "CfgVehicleDem" >> (typeOf _vehicle) >> "anims");
	_arrayHits = getArray(missionConfigFile >> "CfgVehicleDem" >> (typeOf _vehicle) >> "hits");
};

life_demanteler_veh remoteExec ["life_fnc_soundDem",RCLIENT];

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_title = format["Démantélement en cours..."];
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;
_cPRate = (1 / (5 * 120));
_curcP = _cP;

_demRate = 1;
_demNb = (count _arrayAnims) + (count _arrayHits);

if (_demNb > 0) then {
	_demRate = (1 / _demNb);
};

while {true} do
{

	if (_curcP >= _demRate) then {
		if (_curIndexAnims <= _curIndexHits && (_curIndexAnims < (count _arrayAnims))) then {
			_curAnim = (_arrayAnims select _curIndexAnims);
			_vehicle animate [_curAnim select 0, _curAnim select 1, true];
			_curIndexAnims = _curIndexAnims + 1;
		} else {
			_curHit = (_arrayHits select _curIndexHits);

			if (local _vehicle) then {
				_vehicle setHit _curHit;
			} else {
				_owner = owner _vehicle;
				[_vehicle, (_curHit select 0)] remoteExecCall ["TON_fnc_SetHit", _owner];
			};

			_curIndexHits = _curIndexHits + 1;
		};
		_curcP = 0.01;
	};
	
	sleep 0.5;
	
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = GVAR_UINS "life_p rogress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + _cPRate;
	_curcP = _curcP + _cPRate;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];

	life_demanteler_veh setFuel ((fuel life_demanteler_veh) - 0.0001);
	
	if(_cP >= 1 || !alive player) exitWith {};
	if(life_istazed) exitWith {};
	if((player GVAR ["restrained",false])) exitWith {};
	if(player distance _vehicle > 30) exitWith {_badDistance = true;};
	if(vehicle player != player) exitWith {};
	if(life_demanteler_veh distance _vehicle > 15) exitWith {_badDistance = true;};
	if(isEngineOn life_demanteler_veh) exitWith {};
	if(fuel life_demanteler_veh == 0) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];

life_demanteler_veh setVariable ["dem_inUse", nil, true];

if(!alive player OR life_istazed) exitWith {};
if((player GVAR ["restrained",false])) exitWith {};
if(vehicle player != player) exitWith {};
if(player distance _vehicle > 30) exitWith {hint "Vous étes trop Loin !";};
if(life_demanteler_veh distance _vehicle > 15) exitWith {};
if(isEngineOn life_demanteler_veh) exitWith {hint "Démantélement Annulé";};
if(fuel life_demanteler_veh == 0) exitWith {hint "Pas assez de carburant dans le Véhicule de Démantélement !"};

_caches = (_vehicle getVariable ["trunk_caches", []]);

if (count _caches == 0) exitWith {hint "Aucune Contrebande !";};

_illegalValue = 0;

_textInv = format["<t color='#FF0000' size='2'>Contrebande:</t><br/>"];
{
	_cfg = _x select 0;
	_inv = _x select 1;

	_displayCache = getText(missionConfigFile >> "CfgVehicleCaches" >> _cfg >> "displayName");

	_textInv = format["<br/>%1<t color='#FFD700' size='1.5'>%2</t><br/>", _textInv, _displayCache];

	{
		_nameItem = _x select 0;
		_nb = _x select 1;

		if (_nb > 0) then {
			_displayName = getText(missionConfigFile >> "VirtualItems" >> _nameItem >> "displayName");
			_textInv = _textInv + format["%1 %2<br/>", _nb, (localize _displayName)];
			_isIllegal = getNumber(missionConfigFile >> "VirtualItems" >> _nameItem >> "illegal");

			if (_isIllegal == 1) then {
				_illegalPrice = getNumber(missionConfigFile >> "VirtualItems" >> _nameItem >> "sellPrice");
				if(!isNull (missionConfigFile >> "VirtualItems" >> _nameItem >> "processedItem")) then {
					_illegalItemProcessed = getText(missionConfigFile >> "VirtualItems" >> _nameItem >> "processedItem");
					_illegalPrice = getNumber(missionConfigFile >> "VirtualItems" >> _illegalItemProcessed >> "sellPrice");
				};

				_illegalValue = _illegalValue + (round(_nb * _illegalPrice / 2));
			};
		};
	} forEach _inv;
} forEach _caches;

hint parseText _textInv;

if(_illegalValue > 0) then {
	[0,"STR_NOTF_VehContraband",true,[[_illegalValue] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",RCLIENT];

	_text = format ["avoir mit la main sur <t color = '#88cc00'>%1$</t> de contrebande",[_illegalValue] call life_fnc_numberText];

	_xp = round (_illegalValue / 900);

	if (_xp > 15000) then {_xp = 15000};
	
	["contreband",_xp,200,_text] call life_fnc_eventCopsNear;
} else {
	titleText[localize "STR_Cop_NoIllegalVeh","PLAIN"];
};

_vehicle setVariable ["trunk_caches", nil,true];

_anims = getArray(missionConfigFile >> "LifeCfgVehicles" >> (typeOf _vehicle) >> "addons");

_validAnims = [];
{
	_anim = _x select 0;
	_validAnims pushBack [_anim, (_vehicle animationphase _anim)];
	
} forEach _anims;

[_vehicle, 1, _validAnims] remoteExecCall ["TON_fnc_customVehicle", 2];