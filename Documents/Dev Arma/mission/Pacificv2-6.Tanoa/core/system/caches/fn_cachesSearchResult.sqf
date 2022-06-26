/*
	File: fn_cachesSearchResult.sqf
	
	Autor: Iron
*/
_good = [_this,0,false,[false]] call BIS_fnc_param;
_cache = [_this,1,[],[[]]] call BIS_fnc_param;
_info = [_this,2,0,[0]] call BIS_fnc_param;


if (!_good) exitWith {
	if (_info == 0) then {
		["Error", "Cache déja en cours d'utilisation."] spawn life_fnc_showPredefinedNotification;
	} else {
		["Error", "Vous avez déja une cache."] spawn life_fnc_showPredefinedNotification;
	};
};

[_cache] spawn life_fnc_cachesOpenMenu;