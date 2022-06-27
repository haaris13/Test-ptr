["Open",true] call BIS_fnc_arsenal;

[format ["%1 Ouvre Arsenal",profileName], getPlayerUID player,1] remoteExecCall ["TON_fnc_logsAdmin",2];