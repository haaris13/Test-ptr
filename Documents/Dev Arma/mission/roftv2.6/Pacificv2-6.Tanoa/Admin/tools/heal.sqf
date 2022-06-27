["Info", "Traitement médical en cours..."] spawn life_fnc_showPredefinedNotification;
sleep 2;
player setDamage 0;
(vehicle player) setDamage 0;
["InfoWithSound", "Soins terminé !"] spawn life_fnc_showPredefinedNotification;

life_thirst = 100;
life_hunger = 100;
[] call life_fnc_hudUpdate;

[format ["%1 Se soigne",profileName], getPlayerUID player, 6] remoteExecCall ["TON_fnc_logsAdmin",2];