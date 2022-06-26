/*

	Anti Cheat !

*/

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
	_patchs = ["A3_Air_F_RTD"];


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