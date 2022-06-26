#include "..\..\script_macros.hpp"
/*
	File: fn_useItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main function for item effects and functionality through the player menu.
*/

waitUntil{!isNil "life_server_code"};

private ["_item", "_placeables"];
disableSerialization;

if(EQUAL(lbCurSel 2005,-1)) exitWith {
	["Warning", localize "STR_ISTR_SelectItemFirst"] spawn life_fnc_showPredefinedNotification;
};

_item = CONTROL_DATA(2005);

switch (true) do {
	case (_item in ["waterBottle","coffee","redgull"]): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			life_thirst = 100;

			player say3D "Drink";

			if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 0;};
		};
	};
	
	case (_item in ["woodencontainer","smallchest","mediumchest","leadbox","largechest","hugechest","piratechest"]): {
		[_item] call life_fnc_openContainer;
	};
	
	case (EQUAL(_item,"campfire")): {
		[_item] spawn life_fnc_campfire;
		closeDialog 0;
	};

	case (EQUAL(_item,"blastingcharge")): {

		if (playerSide == west) then {
			[cursorObject] spawn life_fnc_blastingChargeCop;
			closeDialog 0;
		} else {
			closeDialog 0;
			closeDialog 0;
			[] spawn life_fnc_bankPlaceCharge;
		};
	};

	
	case (EQUAL(_item,"disqueuse")): {

		/*
		_bankNear = ([] call life_fnc_bankSimpleNear);
		closeDialog 0;
		if (count _bankNear > 0) then {
			[] spawn life_fnc_bankSimpleUseGrinder;
		} else {
			if ((call life_depanLevel) > 0) then {
				[] spawn life_fnc_depanRepairMap;
			};
		};*/

		closeDialog 0;
		if ((call life_depanLevel) > 0) then {
			[] spawn life_fnc_depanRepairMap;
		};	
	};


	case (EQUAL(_item,"defusekit")): {
		//[cursorObject] spawn life_fnc_defuseKit;
	};


	case (EQUAL(_item,"Phone")): {
		[] spawn life_fnc_phoneCreateAction;
	};

	case (EQUAL(_item,"storagebigEntre")): {
		[] call life_fnc_storageEntreprise;
	};
	
	case (EQUAL(_item,"spikeStrip")): {
		if(!isNull life_spikestrip) exitWith {["Error", localize "STR_ISTR_SpikesDeployment"] spawn life_fnc_showPredefinedNotification;};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_spikeStrip;
		};
	};

	case (EQUAL(_item,"fuelFull")): {
		if(vehicle player != player) exitWith {["Error", localize "STR_ISTR_RefuelInVehicle"] spawn life_fnc_showPredefinedNotification;};

		_veh = cursorTarget;

		if((_veh isKindOF "LandVehicle") || (_veh isKindOf "Air") || (_veh isKindOf "Ship")) then {
			[] spawn life_fnc_jerryRefuel;
		} else {
			[] spawn life_fnc_jerryBurnTarget;
		};
	};

	case (EQUAL(_item,"fuelEmpty")): {
		if(vehicle player != player) exitWith {["Error", "Vous ne pouvez pas remplir un jerrican en étant à l'intérieur d'un véhicule!"] spawn life_fnc_showPredefinedNotification;};

		_veh = cursorTarget;

		if((_veh isKindOF "LandVehicle") || (_veh isKindOf "Air") || (_veh isKindOf "Ship")) then {
			[] spawn life_fnc_jerryDefuel;
		};
	};
	
	case (EQUAL(_item,"lockpick")): {
		[] spawn life_fnc_lockpick;
	};

	case (EQUAL(_item,"radar")): {
		[] spawn life_fnc_sonar;
	};

	case (EQUAL(_item,"detecteur_balise")): {
		[] spawn life_fnc_detecteur;
	};

	case (EQUAL(_item,"detecteur")): {
		[] spawn life_fnc_detecteurTraceur;
	};
	
	case (_item in [
		"mais",
		"cacao",
		"raisin",
		"banane",
		"mango",
		"coconut",
		"apple",
		"rabbit",
		"salema",
		"ornate",
		"mackerel",
		"tuna",
		"mullet",
		"catshark",
		"turtlesoup",
		"hen",
		"rooster",
		"sheep",
		"goat",
		"donuts",
		"tbacon",
		"bakedbeans",
		"rice",
		"cereals",
		"franta",
		"spirit",
		"peach",
		"crevettes",
		"rhum",
		"tapas",
		"nachos"
		]): {
		if(!(EQUAL(M_CONFIG(getNumber,"VirtualItems",_item,"edible"),-1))) then {
			if([false,_item,1] call life_fnc_handleInv) then {
				_val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
				_sum = life_hunger + _val;

				if (_item in ["raisin"]) then {
					life_thirst = 100;
				};

				if (_item in ["cereals"]) then {
					life_thirst = life_thirst - 15;
				};

				if (_item in ["rhum"]) then {
					life_thirst = life_thirst - 5;
				};

				if (_item in ["rice"]) then {
					life_thirst = life_thirst - 35;
				};

				if (life_thirst < 1) then {
					life_thirst = 1;
				};

				player say3D "Eat";

				switch (true) do {
					case (_val < 0 && _sum < 1): {life_hunger = 5;}; //This adds the ability to set the entry edible to a negative value and decrease the hunger without death
					case (_sum > 100): {life_hunger = 100;};
					default {life_hunger = _sum;};
				};
			};
		};
	};

	case (_item in [
		"mineralWater",
		"specialCoffee",
		"specialSoda",
		"specialSoda2",
		"whiskey",
		"rum"
		]): {
		if(!(EQUAL(M_CONFIG(getNumber,"VirtualItems",_item,"edible"),-1))) then {
			if([false,_item,1] call life_fnc_handleInv) then {
				_val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
				_sum = life_thirst + _val;

				[_item] spawn life_fnc_alcoolUse;

				player say3D "Drink";

				switch (true) do {
					case (_val < 0 && _sum < 1): {life_thirst = 5;}; //This adds the ability to set the entry edible to a negative value and decrease the hunger without death
					case (_sum > 100): {life_thirst = 100;};
					default {life_thirst = _sum;};
				};
			};
		};
	};

	case (_item in ["pickaxe"]): {

		[] spawn {
			  while {dialog} do {
			   	closeDialog 0;
			   	sleep 0.01;
			  };

		  _zone = [] call life_fnc_nearestZone;
		    if ((_zone select 0 != "")) exitWith {
		        switch (_zone select 1) do {
		            case "mine": {[_zone select 0] spawn life_fnc_mine;};
		            default {};
		        };
		    };
		};
	};

	case (_item in ["axe"]): {

		[] spawn {
			  while {dialog} do {
			   	closeDialog 0;
			   	sleep 0.01;
			  };

		  _zone = [] call life_fnc_nearestZone;
		    if ((_zone select 0 != "")) exitWith {
		        switch (_zone select 1) do {
		            case "axe": {[_zone select 0] spawn life_fnc_axe;};
		            default {};
		        };
		    };
		};
	};

	case (_item in ["shovel"]): {

		[] spawn {
			  while {dialog} do {
			   	closeDialog 0;
			   	sleep 0.01;
			  };

		 	 _zone = [] call life_fnc_nearestZone;
		    if ((_zone select 0 != "")) exitWith {
		        switch (_zone select 1) do {
		            case "shovel": {[_zone select 0] spawn life_fnc_shovel;};
		            default {};
		        };
		    };

		    [] spawn life_fnc_cachesSearchAction;
		};
	};

	case (_item in ["cut"]): {

		[] spawn {
			while {dialog} do {
			   	closeDialog 0;
			   	sleep 0.01;
			};

		  	_zone = [] call life_fnc_nearestZone;
		    if ((_zone select 0 != "")) exitWith {
		        switch (_zone select 1) do {
		            case "cut": {[_zone select 0] spawn life_fnc_cut;};
		            case "gather": {[_zone select 0] spawn life_fnc_gather;};
		            default {};
		        };
		    };
		};
	};

	case (EQUAL(_item,"extracteur")): {
		[] spawn life_fnc_extracteurUse;
	};

	case (EQUAL(_item,"codesBank")): {
		[] spawn life_fnc_crackBank;
	};

	case (EQUAL(_item,"zippo")): {
		[] spawn life_fnc_zippo;
	};

	//Medical Items
	case (EQUAL(_item,"marijuana")): {
		[] spawn life_fnc_weed;
	};

	case (_item in ["roadcone", "roadbarrier", "tapesignsm", "tapesignwarning", "tapesign", "arrowleft", "arrowright", "portablebarrier","portablelight","triflash","coneflash"]): {
		[_item] spawn life_fnc_placeObject;
	};

	case (_item in ["spaceCake", "glaceFolle", "fioleblinded"]): {
		[false,_item,1] call life_fnc_handleInv;
		[_item] spawn life_fnc_drogueUse;
	};

	case (EQUAL(_item,"brouilleur")): {
		[] spawn life_fnc_brouilleur;
	};

	case (_item in ["pince"]) : {
		[] spawn life_fnc_retirerImmatriculation;
	};

	case (_item in ["sushi", "grec", "paela", "rizCantonais"]): {
		if (([false,_item,1] call life_fnc_handleInv)) then {

			life_thirst = 100;
			life_hunger = 100;

			[] call life_fnc_hudUpdate;

			player say3D "Eat";

			[_item,true] spawn life_fnc_launchAtouts;
		};
	};

	case (_item in ["tajin","platJour","tacos"]): {
		[_item] spawn life_fnc_eatItemResto;
	};

	case (_item in ["laptop"]): {

		if (!life_mode_admin) exitWith {};

		[] spawn {
			while {dialog} do {
				closeDialog 0;
			   	sleep 0.01;
			};

		 	["Personal"] spawn life_fnc_shellInitDiag;
		};
	};

	case (_item in ["traceur"]): {

		[] spawn {
			while {dialog} do {
				closeDialog 0;
			   	sleep 0.01;
			};

		 	[] spawn life_fnc_vehPlaceTraceur;
		};
	};

	case (_item in ["sake","vinsRouge","boutrhum","biere","bvodka","bchamp"]): {
		[false,_item,1] call life_fnc_handleInv;
		[_item] spawn life_fnc_alcoolUse;
	};

	case (_item in ["scanner"]): {
		[] spawn life_fnc_vehicleScannerUse;
	};
	
	case (EQUAL(_item,"morphine")): {
		["morphine",true] spawn life_fnc_launchAtouts;
	};

	case (EQUAL(_item,"paper")): {
		[] spawn life_fnc_papierMenuCreateOpen;
	};

	case (_item in ["juice","beer","vodka","cocktail","specialDonuts", "joint1", "joint2", "joint3", "blunt1", "blunt2"]): {
		[_item] spawn life_fnc_atoutsStart;
	};

	case (_item in ([] call life_fnc_caseMoneyFindAllItems)): {
		[_item] call life_fnc_caseMoneyUse;
	};

	default {
		["Error", localize "STR_ISTR_NotUsable"] spawn life_fnc_showPredefinedNotification;
	};
};
	
[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;