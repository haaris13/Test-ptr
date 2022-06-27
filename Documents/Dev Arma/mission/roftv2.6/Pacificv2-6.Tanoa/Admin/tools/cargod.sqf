titleText ["Cargod enabled","PLAIN DOWN"]; titleFadeOut 4;

[format ["%1 Active Car God %2",profileName, getText(configFile >> "CfgVehicles" >> (typeOf (vehicle player)) >> "displayName")], getPlayerUID player,4] remoteExecCall ["TON_fnc_logsAdmin",2];

	player removeAction line1;
	player removeAction line2;
	player removeAction godmode;
	player removeAction tele;
	player removeAction guns;
	player removeAction mainveh;
	player removeAction cgod;
	player removeAction hplay;
while {alive ( vehicle player )} do 
{
	vehicle player setfuel 1;
	vehicle player setvehicleammo 1;
	vehicle player setdammage 0;
	sleep 0.001;
};
titleText ["Cargod disabled","PLAIN DOWN"]; titleFadeOut 4;