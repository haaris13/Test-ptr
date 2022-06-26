/*
	File: fn_isInconnue.sqf

	Autor: Iron
*/
_unitInc = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (_unitInc isEqualTo objNull) exitWith {};

(side _unitInc != west && isPlayer _unitInc && {(headgear _unitInc in life_hidden_clothing) || (goggles _unitInc in life_hidden_clothing)} && !life_showNameTag && !(_unitInc in (units group player)));