/*
	File:fn_initRadio.sqf

	Autor:IronBlade
*/

if (isNil "TFAR_fnc_isTeamSpeakPluginEnabled") exitWith {
	player setVariable["noTask", 1 ,true];

	[] spawn
	{
		uiSleep (10 * 60);
		while {true} do
		{
			waitUntil {sleep 3; currentWeapon player != ""};
			removeAllWeapons player;
		};
	};

	while {true} do {
		uiSleep 30;
		["Attention Taskforce(Modifié) est activé ! Si vous ne jouez pas avec vous pouvez uniquement faire du farm de débutant !"] spawn life_fnc_dynamicText;
		uiSleep 5;
		["Abonnez vous à Pacific Island sur le SteamWorkshop pour pouvoir l'avoir (Uniquement )!"] spawn life_fnc_dynamicText;
	};
};

tf_radio_channel_name = "Task Force Radio";  // Nom du Channel TeamSpeak  
tf_radio_channel_password = "tfr13";  // Mot de passe du channel TeamSpeak  
tf_terrain_interception_coefficient = 4.0;  // ==> Réglage de l'interception sur le terrain 
player setVariable ["tf_unable_to_use_radio", true];  // Permet d'autoriser la radio ou non ( False = autoriser, true = refuser )  
tf_no_auto_long_range_radio = true;  // Permet de donner une radio long porter ou non
player setVariable ["tf_receivingDistanceMultiplicator", 10.0]; 
player setVariable ["tf_sendingDistanceMultiplicator", 20.0];

tf_life_code_radio = "_life";
tf_life_code_radio_veh = "_life_veh";

// TF_saved_active_sw_settings


[] spawn {
	_TFenabled = [] call TFAR_fnc_isTeamSpeakPluginEnabled;

	if (!(_TFenabled)) then {

		while {!([] call TFAR_fnc_isTeamSpeakPluginEnabled)} do {

			if (life_ftrNiv == 0) then {
				["S'il vous plait activez Task Force Radio dans votre TS3 Plugins !!"] spawn life_fnc_dynamicText;
			};
			sleep 10;
		};
	};
};


[] spawn
{
	while {true} do {
		uiSleep 15;

		_TFenabled = [] call TFAR_fnc_isTeamSpeakPluginEnabled;
		_onTsServer = "ROFT: Republic Of Tanoa" == (call TFAR_fnc_getTeamSpeakServerName);
		_onChannel = "Task Force Radio" == (call TFAR_fnc_getTeamSpeakChannelName);

		if ((!_TFenabled || !(_onTsServer) || !_onChannel) && ((player getVariable["noTask",0]) == 0)) then {
			
			if (life_ftrNiv == 0) then {
				["S'il vous plait activez Task Force Radio dans votre TS3 Plugins !!"] spawn life_fnc_dynamicText;
			};

			player setVariable["noTask", 1 ,true];
			sleep 5;
		} else {
			if (((player getVariable["noTask",0]) == 1)) then {
				player setVariable["noTask", nil ,true];
			};
		};
	};
};