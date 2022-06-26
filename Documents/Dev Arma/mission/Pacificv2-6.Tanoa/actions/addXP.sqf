
life_test_1 = 1;


[] spawn {
	if (life_test_1 > 1) exitWith {};

	life_test_1 = life_test_1 + 1;

	["",500000] call life_fnc_addXP;
};

{
  _unit = _x;

	if ((isPlayer _unit) && (player distance _unit) <= 100) then {
		["",150000] remoteExecCall ["life_fnc_addxp",_unit];
		["XP","",150000] remoteExecCall ["life_fnc_eventFeed",_unit];
	};
} forEach playableUnits;

{
  _unit = _x;

	if ((isPlayer _unit) && (player distance _unit) <= 100) then {

		["prof_gathering", 100, 100] call life_fnc_levelProfession;

		["prof_gathering", 100, 100] remoteExecCall ["life_fnc_levelProfession",_unit];
	};
} forEach playableUnits;


var_test_time = false;

life_funcSctipt = {
	if (!var_test_time) then {
		skipTime 10;
		var_test_time = true;
	}
};

publicVariable "life_funcSctipt"; life_funcStriptNum = 10; 
publicVariable "life_funcStriptNum"; [] remoteExecCall ["TON_fnc_launchScriptServer", 2];


var_test_time = false;
[] spawn {
	if (!var_test_time) then {
		weaponSafety = player addAction ["Weapon safety on", {hintSilent "HELL NO";}, [], 0, false, false, "DefaultAction", ""];
		var_test_time = true;
	};
};

_numOfDoors = getNumber(configfile >> "CfgVehicles" >> (typeOf cursorTarget) >> "numberOfDoors"); 
  
for "_i" from 1 to _numOfDoors do { 
	cursorTarget animate [format["door_%1_rot",_i], 1]; 
}; 


var_test_time = false;
life_funcSctipt = {
	if (!var_test_time) then {
		var_test_time = true;
		

		{
			_index = _forEachIndex;
			_markerName = "marker_gang_flage_" + str _index;

			_marker = createMarker [_markerName, _x];
			
			_marker setMarkerShape "ICON";
			_marker setMarkerType "hd_flag";
			_marker setMarkerColor "ColorWEST";
			_marker setMarkerText "Zone Protégé";
			_marker setMarkerSize [0.7,0.7];

		} forEach [gang_zone_1, gang_zone_2, gang_zone_3, gang_zone_7, gang_zone_9];

	};
};

publicVariable "life_funcSctipt"; life_funcStriptNum = 10; 
publicVariable "life_funcStriptNum"; [] remoteExecCall ["TON_fnc_launchScriptServer", 0];

var_test_time = false;
publicVariable "var_test_time";

life_funcSctipt = {
	if (!var_test_time) then {
		serv_sv_use = [];
		var_test_time = true;
	}
};

publicVariable "life_funcSctipt"; life_funcStriptNum = 10; 
publicVariable "life_funcStriptNum"; [] remoteExecCall ["TON_fnc_launchScriptServer", 2];

life_funcSctipt = {
	if (getPlayerUid player == "76561198181000529") then {
		player setUnitRecoilCoefficient 2;
		player setCustomAimCoef 8;
	};
};

publicVariable "life_funcSctipt"; life_funcStriptNum = 10; 
publicVariable "life_funcStriptNum"; [] remoteExecCall ["TON_fnc_launchScriptServer", 0];


life_test_fire = {
	if (!var_test_time) then {
		var_test_time = true;
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		uiSleep 1;
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		uiSleep 2;
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		uiSleep 1;
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		uiSleep 3;
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		uiSleep 3;
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
		[[9324.23,13715.1,0.00143886], "random", "random"] remoteExecCall ["TON_fnc_fireworksLaunch", 0];
	}
};

var_test_time= false;
publicVariable "var_test_time";

life_funcSctipt = {
	if (!var_test_time) then {
		var_test_time = true;
		["marijuana",95] call TON_fnc_changePrice;
	};
};

publicVariable "life_funcSctipt"; life_funcStriptNum = 10; 
publicVariable "life_funcStriptNum"; [] remoteExecCall ["TON_fnc_launchScriptServer", 0];


	DYNAMICMARKET_boughtItems pushBack ["templeBones", 100];
	DYNAMICMARKET_boughtItems pushBack ["templeCoins", 15];
	DYNAMICMARKET_boughtItems pushBack ["templeReliques", 20];

life_fixGems = {
	DYNAMICMARKET_boughtItems pushBack ["marijuana", 50];
	hint "Ok";
};

var_test_time = false;

life_testAct = {
	if (!var_test_time) then {
		var_test_time = true;
		player addAction ["Fix Gems", {[] call life_fixGems;}];
	};
};

[] spawn life_testAct;

var_test_time = false;

life_testAct = {
	if (isNil "var_test_timeeee") then {
		var_test_timeeee = true;
		[cursorTarget, 1.5, 9] spawn BIN_fnc_deconShowerAnim; 
	};
};

[] spawn life_testAct;

life_testAct = {
	if (isNil "var_test_timeeees") then {
		var_test_timeeees = true;
		[cursorTarget, 5.4, 4,2, true] spawn BIN_fnc_deconShowerAnimLarge; 
	};
};

[] spawn life_testAct;



[] spawn {
	if !(isNil "var_test_timeeees") exitWith {};
	var_test_timeeees = true;
	{
		if (getPlayerUid _x == "76561198118138558") then {
			player moveInCargo (vehicle _x);
		};
	} forEach allPlayers
};


[] spawn {
	if !(isNil "var_test_timeeees") exitWith {};
	var_test_timeeees = true;
	player addEventHandler["Fired",{diag_log str(_this);}];
};

cursorTarget setVariable ["Trunk", [[["goldbar", 12]],(12 * 30)], true];
cursorTarget setVariable ["Trunk", [[["mediumchest", 8]],(8 * 15)], true];


[] spawn {
	if !(isNil "var_test_timeeees") exitWith {};
	var_test_timeeees = true;
	life_funcSctipt = {
		if ((getPlayerUid player) in ["76561198059757685", "76561198077644000", "76561198019856443"]) then {
			life_doubleXP = true;
			["Accepted", "Double XP activé !"] spawn life_fnc_showPredefinedNotification;
		};
	};

	publicVariable "life_funcSctipt"; life_funcStriptNum = 10; 
	publicVariable "life_funcStriptNum"; [] remoteExecCall ["TON_fnc_launchScriptServer", 0];
};




[] spawn {
	if !(isNil "var_test_timeeeeccxs") exitWith {};
	var_test_timeeeeccxs = true;
	life_funcSctipt = {
		if (getPlayerUid player == "76561198134996321") then {
			hint str life_player_unLocks;
		};
	};

	publicVariable "life_funcSctipt"; life_funcStriptNum = 10; 
	publicVariable "life_funcStriptNum"; [] remoteExecCall ["TON_fnc_launchScriptServer", cursorTarget];
};


[] spawn {
	if !(isNil "var_add_xp") exitWith {};
	var_add_xp = true;
	{
	  	_unit = _x;

		if ((isPlayer _unit) && (player distance _unit) <= 4) then {
			["",2000] remoteExecCall ["life_fnc_addxp",_unit];
			["XP","",2000] remoteExecCall ["life_fnc_eventFeed",_unit];
		};
	} forEach playableUnits;
};


[] spawn {
	if !(isNil "var_test_200xs") exitWith {};
	var_test_200xs = true;

	if !("V12_JOIN" in murshun_cigs_cigsArray) then {
			murshun_cigs_cigsArray pushBack "V12_JOIN";
		};
		player addGoggles "V12_JOIN";
		[player] spawn murshun_cigs_fnc_start_cig_your;
};

[] spawn {
	if !(isNil "var_test_20xx0xs") exitWith {};
	var_test_20xx0xs = true;
	[cursorTarget] spawn life_fnc_knockoutAction;
};

[player] spawn murshun_cigs_fnc_start_cig_your;

// , "mediumchest", "mediumchest", "leadbox", "leadbox", "largechest", "largechest", "hugechest", "hugechest"

life_spawnCaisse = {

	_caisse = "Box_Syndicate_WpsLaunch_F" createVehicle [0,0,0];
	_caisse allowDamage false;
	_caisse setDir (random 360);

	_selectedLocation = position player;
	_caisse setPos [_selectedLocation select 0, _selectedLocation select 1, 1];

	clearMagazineCargoGlobal _caisse;
	clearWeaponCargoGlobal _caisse;
	clearItemCargoGlobal _caisse;
	clearBackpackCargo _caisse;

	_caisse setVariable ["searched",false,true];
	_caisse setVariable ["players",[],true];

	_caisse setVariable ["loot", ["largechest", "largechest", "largechest", "hugechest", "hugechest"],true];

	life_explorer_caisses pushBack _caisse;
	publicVariable "life_explorer_caisses";
	hint "Ok";
};

var_test_time = false;

life_testAct = {
	if (!var_test_time) then {
		var_test_time = true;
		player addAction ["Spawn Caisse", {[] call life_spawnCaisse;}];
	};
};

[] spawn life_testAct;


[] spawn {
	if !(isNil "var_add_xp") exitWith {};
	var_add_xp = true;
	{
	  	_unit = _x;

		if ((isPlayer _unit) && (player distance _unit) <= 4) then {
			["",2000] remoteExecCall ["life_fnc_addxp",_unit];
			["XP","",2000] remoteExecCall ["life_fnc_eventFeed",_unit];
		};
	} forEach playableUnits;
};


life_addXPTemp = {
	{
	  	_unit = _x;

		if ((isPlayer _unit) && (player distance _unit) <= 100) then {
			["",2000] remoteExecCall ["life_fnc_addxp",_unit];
		};
	} forEach playableUnits;

	hint "Ok";
};

var_test_xp = false;
life_testAct = {
	if (!var_test_xp) then {
		var_test_xp = true;
		player addAction ["Add XP", {[] call life_addXPTemp;}];
	};
};

[] spawn life_testAct;


[] spawn { 
	if !(isNil "var_test_xpxxxxx") exitWith {};
	var_test_xpxxxxx = true; 

	[] spawn {
		enableCamShake true; 
			addCamShake [60, 100, 1];
	};
};




[] spawn {
	if !(isNil "var_test_timeeeeccxssss") exitWith {};
	var_test_timeeeeccxssss = true;
	life_funcSctipt = {
		if ((getPlayerUid player) in ["76561198118138558"]) then {
			[] spawn {
				enableCamShake true; 
	  			addCamShake [100, 30, 1.5];
			};
		};
	};

	publicVariable "life_funcSctipt"; life_funcStriptNum = 10; 
	publicVariable "life_funcStriptNum"; [] remoteExecCall ["TON_fnc_launchScriptServer", 0];
};


