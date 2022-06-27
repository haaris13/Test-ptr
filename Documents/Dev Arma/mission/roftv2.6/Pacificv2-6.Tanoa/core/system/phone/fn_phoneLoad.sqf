/*
	File: fn_phoneLoad.sqf

	Author: Iron
*/
diag_log "fn_phoneLoad";
_phones = [_this, 0, [], [[]]] call BIS_fnc_param;

life_phones = _phones;

_used = profileNamespace getVariable ["phone_p_used", -1];
if (_used != -1) then {
	{
		if ((_x select 0) == _used) exitWith {
			life_phone = _x;
		};
	} forEach life_phones;
};

{
	[player, _x select 0] remoteExec ["TON_fnc_phoneLoadContact", 2];
} forEach life_phones;