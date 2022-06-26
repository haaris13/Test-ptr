/*
	File: fn_adminShowBullet.sqf

	Autor: IronBlade
*/
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if(isNil "_unit") exitwith {};
if(isNull _unit) exitWith {};
if(([] call(life_adminlevel)) < 4) exitWith {closeDialog 0; ["Error", localize "STR_ANOTF_ErrorLevel"] spawn life_fnc_showPredefinedNotification;};

if (_unit in life_bulletsPlayer) then {

	[_unit, 0] spawn ADMIN_fnc_adminTraceBullet;

	["InfoWithSound", format["Travers Désactivé Pour %1!", name _unit]] spawn life_fnc_showPredefinedNotification;

	life_bulletsPlayer = life_bulletsPlayer - [_unit];
} else {
	life_bulletsPlayer pushBack _unit;

	[_unit, 30] spawn ADMIN_fnc_adminTraceBullet;
	
	["Accepted", format["Travers Activée Pour %1!", name _unit]] spawn life_fnc_showPredefinedNotification;
};