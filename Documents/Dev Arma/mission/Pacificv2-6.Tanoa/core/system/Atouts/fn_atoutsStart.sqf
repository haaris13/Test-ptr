/*
	File: fn_atoutsStart.sqf

	Autor: Iron
	Date: 10 Mar 2020 19:06:28
	Version: 0.1
*/
private ["_item", "_class"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

_cfg = "";

{
	_class = _x;
	_itemVar = getText(_x >> "item");

	if (_item == _itemVar) exitWith {
		_cfg = configName(_class);
	};
} forEach ("true" configClasses (missionConfigFile >> "Atouts"));

if (_cfg == "") exitWith {};

_parent = getText(_class >> "parent");
if ([_parent] call life_fnc_hasAtoutsParent) exitWith {
	_isCoolDown = getNumber(_class >> "isCoolDown");

	if (_isCoolDown == 1) then {
		["Error", "Il faut attendre de s'étre remis avant de pouvoir encore recommencer."] spawn life_fnc_showPredefinedNotification;
	} else {
		["Error", "Vous avez déja l'effet en cours."] spawn life_fnc_showPredefinedNotification;
	};
};

closeDialog 0;
_isOnBar = getNumber(_class >> "onBar");

if (_isOnBar == 1 && (player distance (getMarkerPos "bar_pos") > 100)) exitWith {
	["Error", "Vous étes pas dans la zone du bar."] spawn life_fnc_showPredefinedNotification;
};

_isSigs = getNumber(_class >> "isSigs");
if (_isSigs == 1 && (goggles player) != "") exitWith {
	["Error", "Vous avez déja quelque chose sur le visage."] spawn life_fnc_showPredefinedNotification;
};

if (_isSigs == 1 && !("murshun_cigs_matches" in (magazines player)) && !("murshun_cigs_lighter" in (magazines player))) exitWith {
	["Error", localize "STR_murshun_cigs_no_matches_or_lighter"] spawn life_fnc_showPredefinedNotification;
};

if (!([false, _item, 1] call life_fnc_handleInv)) exitWith {};
[3] call SOCK_fnc_updatePartial;

_sound = getText(_class >> "sound");
_title = getText(_class >> "globalTitle");

if (_sound != "") then {
	player say3D _sound;
};

["Info", format["Début de l'effet %1.", _title]] spawn life_fnc_showPredefinedNotification;

[_cfg] spawn life_fnc_atoutsStartGo;