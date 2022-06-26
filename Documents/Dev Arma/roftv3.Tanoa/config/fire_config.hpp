class fire_config {
	// Basic
	moneyVariable = "life_atmbank"; // Variable used for money.
	houseBurnTime = 1800; // Maximum time of house burning event (seconds). If this time is exceeded - no payment is provided.
	houseExtPaycheck = 40000; // Amount of money paid for extinguishing fire.
	extinguisherRate = 0.1; // Percent of extunguish per fired ammo.
	markerText = "Feu en cours!"; // Text of map marker indicating that entity is on fire.
	extinguisherWeapon = "ASN_fireextinguisher"; // Weapon class used as extinguisher.
	globalCondition = "(playersNumber independent) >= 2"; // A global condition for fire to start. Code-string.
	firemanGear[] = {"SP_Uniformes_Casque_F1_B2PH","ASN_firemask","ASN_tankpipe","ASN_coveralls_FD_black_uniform","ASN_oxygentank"}; // Headgear, goggles, vest, uniform, backpack. Required to not get inflamed.
	allowedBuildings[] = {
		 "Land_healthCenter_01_F",
		  "Land_House_2B04_F",
		  "Land_House_2B04_F",
		  "Land_Barracks_02_F",
		  "Land_House_Small_06_F",
		  "Land_Shop_Town_01_F",
		  "Land_Shop_Town_01_F",
		 "Land_i_House_Small_03_V1_F"
	};

	// Advanced
	enableVehicleFire = 1; // 1 - allow system to inflame a random vehicle on the map. (Default: 0)
	vehicleFireCondition = "(_vehicle isKindOf 'LandVehicle') AND ((_vehicle getHitPointDamage 'HitEngine') >= 0.8)"; // Condition of vehicle to be set on fire. Default: only land vehicles with damaged engine.
	vehicleFireStageTimers[] = {60,300,300,300}; // Time between stages in seconds. Vehicle is destroyed on stage 4.
	timeSpan = 1800; // Minimum delay between fire events.
	timeSpanRandom = 900; // A random seed time that will be added to timeSpan (random value of this number).

	/* 
		Building scan modes

			Mode 0 - scan for buildings in locations vicinity. Location types can be found here: https://community.bistudio.com/wiki/nearestLocations
			Mode 1 - scan for building in markers vicinity. Areas markers are not supported, only icon types (use Empty ones).
			Mode 2 - scan the whole map for buildings, no restrictions, no setup. This might increase the load on your server. 
	*/
	scanMode = 0; // Can be 0,1,2. Read mode description for more details.
	scanRange = 500; // Scan range for mode 0 and 1, meters from a center of location or marker, recommmended value. Irrelevant for mode 2.
	locationTypes[] = {"NameCityCapital","NameCity","NameVillage","Airport"}; // Read mode description.
	locationExcluded[] = {"Pyrgos","Kavala"}; // Exclude that locations from list
	markerNames[] = {""}; // Marker names (variables) placed in editor.
};