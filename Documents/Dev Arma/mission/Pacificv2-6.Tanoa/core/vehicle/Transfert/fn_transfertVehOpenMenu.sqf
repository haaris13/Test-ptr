/*
	File: fn_transfertVehOpenMenu.sqf

	Autor: Iron
	Date: 29 Feb 2020 13:58:04
	Version: 0.1
*/

if (vehicle player != player) exitWith {};
if (side player != civilian) exitWith {};
if (life_trans_on) exitWith {diag_log "fn_transfertVehOpenMenu: En cours";};
disableSerialization;

life_trans_veh_pnj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

_nearVehicles = nearestObjects [position life_trans_veh_pnj, ["Car", "Truck", "Air", "Ship"],25];

if (count _nearVehicles == 0) exitWith {titleText[localize "STR_Shop_NoVehNear","PLAIN"];};

createDialog "Veh_Trans_Select";

life_trans_type = (_this select 3) select 0;

_display = findDisplay 73400;
_control = _display displayCtrl 73402;

life_trans_vehs = [];
_index = -1;

{
	_veh = _x;

	_db = _veh getVariable ["dbInfo",["",""]];
	_uid = (_db select 0);
	_plate = (_db select 1);

	if ((alive _veh) && (_uid isEqualTo (getPlayerUID player))) then {
		_index = _index + 1;
		life_trans_vehs pushBack _veh;

		_className = typeOf _veh;
		_displayName = getText(configFile >> "CfgVehicles" >> _className >> "displayName");
		_picture = getText(configFile >> "CfgVehicles" >> _className >> "picture");

		_price = [_className] call life_fnc_transfertVehGetPrice;

		_control lbAdd _displayName;
		_control lbSetData [(lbSize _control)-1, str(_index)];
		_control lbSetPicture [(lbSize _control)-1,_picture];
		_control lbSetValue [(lbSize _control)-1,_price];
	};
} foreach _nearVehicles;

_validBtn = _display displayCtrl 73403;
_validBtn ctrlEnable false;