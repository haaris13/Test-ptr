#include "..\..\..\script_macros.hpp"
/*
	File: fn_vInteractionCachesMenu.sqf
	Author: IronBlade
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Title 37401
private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6"];
if(!dialog) then {
	createDialog "vInteraction_Menu";
};
disableSerialization;

_curTarget = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
_isVehicle = if((_curTarget isKindOf "landVehicle")) then {true} else {false};
if(!_isVehicle) exitWith {closeDialog 0; diag_log "not landVehicle";};
if(playerSide != civilian) exitWith {closeDialog 0; diag_log "not civil";};

_display = findDisplay 37400;
_title = _display displayCtrl Title;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
life_vInact_curTarget = _curTarget;
_class = typeOf life_vInact_curTarget;

_title ctrlSetText "Contrebande";

if (!isClass (missionConfigFile >> "LifeCfgVehicles" >> _class >> "caches")) exitWith {
	_Btn1 ctrlSetText "Aucune Cache Disponible";
	_Btn1 buttonSetAction "";
	_Btn1 ctrlEnable false;

	_Btn2 ctrlShow false;
	_Btn3 ctrlShow false;
	_Btn4 ctrlShow false;
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
};

_caches = "true" configClasses (missionConfigFile >> "LifeCfgVehicles" >> _class >> "caches");
_indexBtn = 0;
_btns = [_Btn1, _Btn2, _Btn3, _Btn4, _Btn5, _Btn6, _Btn7, _Btn8, _Btn9];

{
	_classCache = configName(_x);
	_cacheCfg = (missionConfigFile >> "CfgVehicleCaches" >>  _classCache);

	_condArray = getArray(_cacheCfg >> "condition");
	_cond = _condArray select 0;
	_can = true;

	if (_cond != "") then {
		_can = (call compile _cond);
	};
	_displayName = getText(_cacheCfg >> "displayName");

	_Btn = _btns select _indexBtn;
	_Btn ctrlSetText _displayName;
	_Btn buttonSetAction (format["[life_vInact_curTarget, '%1'] spawn life_fnc_vehicleOpenCache; closeDialog 0;", _classCache]);
	if (_can) then {_Btn ctrlEnable true;} else {_Btn ctrlEnable false;};

	_indexBtn = _indexBtn + 1;

} forEach _caches;

for "_i" from _indexBtn to ((count _btns) - 1) do {
	_btn = _btns select _i;
	_btn ctrlShow false;
};