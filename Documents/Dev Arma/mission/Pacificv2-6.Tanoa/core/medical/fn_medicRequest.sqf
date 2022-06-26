/*
	File: fn_medicRequest.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Notifies the medics that someone has requested emergency and prompts them
	if they want to take the request or not.
*/
params [
	["_caller",objNull,[objNull]],
	["_callerName","Unknown Player",[""]]
];

if(isNull _caller) exitWith {}; //Bad data

["MedicalRequestEmerg",[format[localize "STR_Medic_Request",_callerName]]] call BIS_fnc_showNotification;


_mrkName = format["need_heal_m_%1", floor(random 74000)];
_mrk = createMarkerLocal[_mrkName, position _caller];
_mrk setMarkerShapeLocal "ICON";
_mrk setMarkerTypeLocal "loc_heal";
_mrk setMarkerSizeLocal [1.5,1.5];
_mrk setMarkerColorLocal "ColorRed";
_mrk setMarkerAlphaLocal 1;
_mrk setMarkerTextLocal "Aide demandé";

while {true} do {
	uiSleep 3;
	if (isNull _caller) exitWith {};
	if (_caller getVariable ["Revive", false]) exitWith {};
};

deleteMarkerLocal _mrk;