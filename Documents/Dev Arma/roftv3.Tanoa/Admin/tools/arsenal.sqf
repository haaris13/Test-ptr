["Open",true] call BIS_fnc_arsenal;

[format ["%1 Ouvrir Arsenal",profileName], getPlayerUID player,1] remoteExecCall ["TON_fnc_logsAdmin",2];