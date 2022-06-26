/*

	Anti Cheat !



[] spawn {
	if (!(language in ["French","English"])) then {
		sleep 2.5;
		failMission "Langue";
	};
};

[] spawn {
	_AntiCheat_AddonsList = configSourceAddonList(configFile);

	_addons = getArray(missionConfigFile >> "Life_Settings" >> "addonsList");

	if (!(_addons isEqualTo _AntiCheat_AddonsList)) then {

		listofaddons = [];

		{
			if (!(_x in _addons)) then {
				listofaddons pushBack _x;
			};
		} forEach _AntiCheat_AddonsList;

		[format ["%1 Use Mod %2 [Cheat]",profileName,str(listofaddons)], getPlayerUID player,3] remoteExecCall ["TON_fnc_logsAdmin",2];

		sleep 2.5;

		preProcessFile "SpyGlass\endoftheline.sqf";
		sleep 2.5;
		failMission "Blacklisted";
	};
};

[] spawn {
	_patchs = ["A3_Functions_F","babe_EM_UI","A3_Sounds_F","Pub_A","Centrelink","AustraliaPost","HouseA","Mattaust_Objects","mm_showroom","skin_pnt","tuto","A3_Data_F","A3_Data_F_ParticleEffects","A3_Dubbing_Radio_F","A3_Editor_F","A3_Functions_F_Curator","A3_Language_F","A3_Modules_F_DynO","A3_Modules_F_Beta_FiringDrills","A3_Music_F","A3_Structures_F","A3_Structures_F_Mil_Flags","velosch_AddOn_Cars","plp_markers","A3_Animals_F","A3_Animals_F_Fishes","A3_Animals_F_Rabbit","A3_Animals_F_Snakes","A3_Animals_F_Turtle","A3_Animals_F_Beta_Chicken","A3_Animals_F_Beta_Dog","A3_Animals_F_Beta_Goat","A3_Animals_F_Beta_Sheep","A3_Map_Stratis","A3_Ui_F","A3_Ui_F_Curator","A3_Weapons_F","RH_de_cfg","A3_Characters_F","A3_Characters_F_Heads","A3_Map_Altis","A3_Missions_F","A3_Static_F","A3_Weapons_F_Acc","babe_core_UI","BaBe_EM","A3_Armor_F","A3_Missions_F_EPA","brancardch_AddOn_Cars","devidoirch_AddOn_Cars","mm_bank","mm_buildings2","mm_buildings","HouseDoubleAL","A3_Data_F_Kart_ParticleEffects","A3_Missions_F_Kart","A3_Ui_F_Kart","A3_Data_F_Bootcamp","A3_Missions_F_Bootcamp","A3_Missions_F_Heli","A3_Data_F_Mark","A3_Functions_F_MP_Mark","A3_Modules_F_MP_Mark_Objectives","A3_Ui_F_MP_Mark","A3_Weapons_F_Mark","A3_Anims_F_Mark_Deployment","A3_Ui_F_Exp_A","A3_Data_F_Exp_B","A3_3DEN","tanoa_bridges_export","task_force_radio_items","A3_Data_F_Exp_ParticleEffects","A3_Dubbing_Radio_F_EXP","A3_Weapons_F_Exp","A3_Data_F_Jets","A3_Data_F_Argo","A3_Map_Malden","A3_Map_Tanoabuka","A3_Ui_F_Orange","A3_Weapons_F_Orange","A3_Weapons_F_Orange_Explosives","A3_Sounds_F_Orange","A3_Ui_F_Tacops","A3_Missions_F_Warlords","A3_Ui_F_Tank","cba_common","cba_events","cba_keybinding","cba_settings","cba_xeh","A3_Data_F_Sams","cba_diagnostic","cba_help","cba_jr","cba_ui","ace_main","ace_medical_blood","ace_common","ace_cookoff","ace_goggles","ace_grenades","ace_hitreactions","ace_huntir","ace_interact_menu","ace_interaction","ace_map","ace_medical","ace_medical_ai","ace_medical_menu","ace_microdagr","ace_missileguidance","ace_mk6mortar","ace_movement","ace_optionsmenu","ace_rearm","ace_reload","ace_repair","ace_spectator","ace_tagging","ace_ui","ace_yardage450","hlcweapons_core","hlcweapons_aks","hlcweapons_AUG","hlcweapons_G36","hlcweapons_m14","hlcweapons_mp5","niaweapons_226","hlcweapons_SG550","task_force_radio","ace_advanced_fatigue","ace_aircraft","ace_arsenal","ace_attach","ace_backpacks","ace_cargo","ace_chemlights","ace_dagr","ace_disarming","ace_explosives","ace_fcs","ace_kestrel4500","ace_minedetector","ace_zeus","ace_advanced_ballistics","ace_atragmx","ace_pylons","ace_rangecard"]
	_binConfigPatches = configFile >> "CfgPatches";
	for "_i" from 0 to count (_binConfigPatches)-1 do {
		_patchEntry = _binConfigPatches select _i;
		if(isClass _patchEntry) then {
			if(!((configName _patchEntry) in _patchs)) exitWith {
				[format ["%1 Use Mod %2 [Cheat2]",profileName,(configName _patchEntry)], getPlayerUID player,3] remoteExecCall ["TON_fnc_logsAdmin",2];
				sleep 2.5;

				preProcessFile "SpyGlass\endoftheline.sqf";
				sleep 0.5;
				failMission "SpyGlass";
			};
		};
	};
};
*/
/*


_tab = [];
_binConfigPatches = configFile >> "CfgPatches";
	for "_i" from 0 to count (_binConfigPatches)-1 do {
		_patchEntry = _binConfigPatches select _i;
		if(isClass _patchEntry) then {
			_tab pushback (configName _patchEntry);
		};
	};
copytoClipboard str(_tab);


*/
