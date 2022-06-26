/*
	File:fn_achievementLearn.sqf

	Autor:IronBlade
*/
_achievement = [_this,0,"",[""]] call BIS_fnc_param;

_cfgAchievement = (missionConfigFile >> "CfgAchievement");

if (!isClass (_cfgAchievement >> _achievement)) exitWith {diag_log "No Class";};

if (([_achievement] call life_fnc_achievementHas)) exitWith {};

_displayname = getText(_cfgAchievement >> _achievement >> "displayname");
_description = getText(_cfgAchievement >> _achievement >> "description");
_xp = getNumber(_cfgAchievement >> _achievement >> "xp");
_need = getArray(_cfgAchievement >> _achievement >> "need");

_can = true;

if ((count _need) > 0) then {
	{
		if (!(_x in life_achievement)) exitWith {
			_can = false;
		};
	} forEach _need;
};

if (!_can) exitWith {};

life_achievement pushBack _achievement;

[13] spawn SOCK_fnc_updatePartial;

["",_xp] call life_fnc_addXP;

_color = getArray(_cfgAchievement >> "color");
_sound = getText(_cfgAchievement >> "sound");

_displayname = format["<t size='0.9' font='PuristaBold'>Succés Dévérouillé</t><br/><t size='0.8' font='PuristaLight'>%1</t>", _displayname];

[_displayname, _description, _color, _sound] spawn life_fnc_showNotification;