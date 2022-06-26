/*
	File: fn_adminShowBullet.sqf

	Autor: IronBlade
*/
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if(isNil "_unit") exitwith {};
if(isNull _unit) exitWith {};
if(([] call(life_adminlevel)) < 2) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

if (_unit in life_bulletsPlayer) then {

	[_unit, 0] spawn ADMIN_fnc_adminTraceBullet;

	hint format["Travers Désactivé Pour %1!", name _unit];

	life_bulletsPlayer = life_bulletsPlayer - [_unit];
} else {
	life_bulletsPlayer pushBack _unit;

	[_unit, 30] spawn ADMIN_fnc_adminTraceBullet;
	
	hint format["Travers Activée Pour %1!", name _unit];
};