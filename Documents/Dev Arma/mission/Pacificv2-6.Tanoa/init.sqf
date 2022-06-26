StartProgress = false;
introSpawn = nil;
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "SelectChance_fnc.sqf";
[] execVM "scripts\fn_hideObjects.sqf";
[] execVM "scripts\nightLight.sqf";


StartProgress = true;

[] execVM "Admin\loop.sqf";
[] execVM "scripts\fn_statusBar.sqf";
//[] execVM "initAce.sqf";
//[] execVM "scripts\DynamicWeatherEffects.sqf";

diag_log "init life";

if (isDedicated && isNil("markerIsConfig")) then {

	[] execVM "core\functions\fn_mapMarker.sqf";
	 
	"markerIsConfig" addPublicVariableEventHandler
	{
		diag_log format["Marker is config %1", _this select 1];
	};
};

call compile preProcessFile "configFunctions.sqf";

startpositions = [[5358.042, 10564.713, 20.743], [5361.119, 10604.815, 20.956], [5337.242, 10540.636, 19.301]];

// Fog disabled
//execVM "scripts\randomWeather2.sqf";

tf_radio_channel_name = "tfr26";  // Nom du Channel TeamSpeak  
tf_radio_channel_password = "123456";  // Mot de passe du channel TeamSpeak 

0 enableChannel false;
1 enableChannel false;
2 enableChannel false;
4 enableChannel false;
6 enableChannel false;

3 enableChannel false; //GROUP
5 enableChannel false; //DIRECT


0 setFog 0;
forceWeatherChange;
999999 setFog 0;