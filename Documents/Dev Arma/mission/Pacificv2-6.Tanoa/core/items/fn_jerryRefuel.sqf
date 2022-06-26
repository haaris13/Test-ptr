#include "..\..\script_macros.hpp"
/*
	File: fn_jerryRefuel.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Refuels the vehicle if the player has a fuel can.
*/
private["_vehicle","_displayName","_upp","_ui","_progress","_pgText","_cP","_previousState"];
_vehicle = cursorTarget;
life_interrupted = false;

if(isNull _vehicle) exitWith {["Error", localize "STR_ISTR_Jerry_NotLooking"] spawn life_fnc_showPredefinedNotification;};
if(!(_vehicle isKindOF "LandVehicle") && !(_vehicle isKindOf "Air") && !(_vehicle isKindOf "Ship") && !(_vehicle isKindOf "Tank")) exitWith {};
if(player distance _vehicle > 7.5) exitWith {["Error", localize "STR_ISTR_Jerry_NotNear"] spawn life_fnc_showPredefinedNotification;};

if(!([false,"fuelFull",1] call life_fnc_handleInv)) exitWith {};
life_action_inUse = true;

_displayName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf _vehicle),"displayName");

_upp = format[localize "STR_ISTR_Jerry_Process",_displayName];

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

while{true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};
	sleep 0.2;
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = GVAR_UINS "life_progress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + 0.02;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(life_interrupted) exitWith {};
};
life_action_inUse = false;
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(!alive player) exitWith {};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"];};


/*switch (true) do {
	case (_vehicle isKindOF "LandVehicle"): {
		if(!local _vehicle) then {
			[_vehicle,(Fuel _vehicle) + 0.5] remoteExecCall ["life_fnc_setFuel",_vehicle];
		} else {
			_vehicle setFuel ((Fuel _vehicle) + 0.5);
		};
	};

	case (_vehicle isKindOf "Air"): {
		if(!local _vehicle) then {
			[_vehicle,(Fuel _vehicle) + 0.2] remoteExecCall ["life_fnc_setFuel",_vehicle];
		} else {
			_vehicle setFuel ((Fuel _vehicle) + 0.2);
		};
	};

	case (_vehicle isKindOf "Ship"): {
		if(!local _vehicle) then {
			[_vehicle,(Fuel _vehicle) + 0.35] remoteExecCall ["life_fnc_setFuel",_vehicle];
		} else {
			_vehicle setFuel ((Fuel _vehicle) + 0.35);
		};
	};
};*/

_vehicleInfo = [typeOf _vehicle] call life_fnc_fetchVehInfo;
_fuelCapacity = (_vehicleInfo select 12);

_refuel = 20 / _fuelCapacity;

if(!local _vehicle) then {
	[_vehicle,(Fuel _vehicle) + _refuel] remoteExecCall ["life_fnc_setFuel",_vehicle];
} else {
	_vehicle setFuel ((Fuel _vehicle) + _refuel);
};

titleText[format[localize "STR_ISTR_Jerry_Success",_displayName],"PLAIN"];
[true,"fuelEmpty",1] call life_fnc_handleInv;