/*
	File: fn_adminShowBullet.sqf

	Autor: IronBlade
*/
private "_unit";
_unit = lbData[2902,lbCurSel (2902)];
_unit = call compile format["%1", _unit];
if(isNil "_unit") exitwith {};
if(isNull _unit) exitWith {};
if(([] call(life_adminlevel)) < 4) exitWith {closeDialog 0; ["Error", localize "STR_ANOTF_ErrorLevel"] spawn life_fnc_showPredefinedNotification;};

if (_unit in life_bulletsPlayer) then {
	

	[_unit, 0] spawn ADMIN_fnc_adminTraceBullet;

	["InfoWithSound", format["Travers Désactivé Pour %1!", name _unit]] spawn life_fnc_showPredefinedNotification;
	[format ["%1 Désactive Travers %1 ",profileName, name _unit], getPlayerUID player,10] remoteExecCall ["TON_fnc_logsAdmin",2];

	life_bulletsPlayer = life_bulletsPlayer - [_unit];
} else {
	life_bulletsPlayer pushBack _unit;

	[_unit, 30] spawn ADMIN_fnc_adminTraceBullet;

	["Accepted", format["Travers Activée Pour %1!", name _unit]] spawn life_fnc_showPredefinedNotification;
	[format ["%1 Active Travers %1 ",profileName, name _unit], getPlayerUID player, 10] remoteExecCall ["TON_fnc_logsAdmin",2];
};