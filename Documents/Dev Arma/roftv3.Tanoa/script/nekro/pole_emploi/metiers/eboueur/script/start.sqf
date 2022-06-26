private ["_random","_markERDF","_positionpb"];

//hint "va mettre la tenu qu'il y a dans le vehicule ! dépeche toi !";
hint parseText format ["<t size='1.50' font='TahomaB' align='center' color='#df520c'>[Eboueur]</t><br/><br/><t size='1.10 'font='TahomaB' align='left'>va mettre la tenue qu'il y a dans le vehicule ! dépeche-toi !</t><br/>"];
moncamion = createVehicle ["Hazendarck_Kamazendarck_1410_Trash_noir",position spawncamionpoubelle,[],3,"FORM"];

life_vehicles pushBack moncamion;

private _uni = "U_C_ConstructionCoverall_Blue_F";
moncamion addItemCargoGlobal [_uni, 1];
waitUntil {(uniform player == _uni)};

//hint "maintenant, va dans ton camion";
hint parseText format ["<t size='1.50' font='TahomaB' align='center' color='#df520c'>[Eboueur]</t><br/><br/><t size='1.10 'font='TahomaB' align='left'>maintenant, va dans ton camion</t><br/>"];


missionpoubelle = 400;
waitUntil {vehicle player == moncamion};

poubelle_fnc = {
	OKcamion = 0;

	if (numberpbl > 4) exitWith
	{
		execVM "script\nekro\pole_emploi\metiers\eboueur\script\executefin.sqf";
	};

	//hint "Va chercher la poubelle qui se situe sur ta carte !";
	hint parseText format ["<t size='1.50' font='TahomaB' align='center' color='#df520c'>[Eboueur]</t><br/><br/><t size='1.10 'font='TahomaB' align='left'>Va chercher la poubelle qui se situe sur ta carte !</t><br/>"];

	_list = nearestObjects [player, ["Hazendarck_Trash"], 3250];

	_random = selectRandom _list;
	uisleep 1;
	_markERDF = createMarkerLocal [format["poubelle"],getpos _random];
	_markERDF setMarkerColorLocal "ColorYellow";
	_markERDF setMarkerTypeLocal "Mil_dot";
	_markERDF setMarkerTextLocal format["Position - Poubelle"];
	thepoubelle = _random;
	waitUntil {position player distance thepoubelle < 5};

	missionpoubelle = 4;

	//hint "prend la poubelle et met la dans le camion";
	hint parseText format ["<t size='1.50' font='TahomaB' align='center' color='#df520c'>[Eboueur]</t><br/><br/><t size='1.10 'font='TahomaB' align='left'>prend la poubelle et met la dans le camion</t><br/>"];


	actionPB = player addAction
	[
	    "recuperer la poubelle",
	    {
	       [thepoubelle] execVM "script\nekro\pole_emploi\metiers\eboueur\script\prendre.sqf";
	    },
	    [],
	    1.5,
	    true,
	    true,
	    "",
	    "missionpoubelle == 4 && (position player distance thepoubelle < 3) && (vehicle player == player) && InMission == 1;",
	    2,
	    false,
	    "",
	    ""
	];

	actionPB1 = player addAction
	[
	    "lacher la poubelle",
	    {
	       [thepoubelle] execVM "script\nekro\pole_emploi\metiers\eboueur\script\lacher.sqf";
	    },
	    [],
	    1.5,
	    true,
	    true,
	    "",
	    "missionpoubelle == 2 && (position player distance thepoubelle < 3) && (vehicle player == player) && InMission == 1;",
	    2,
	    false,
	    "",
	    ""
	];

	actionPB2 = player addAction
	[
	    "recuperer la poubelle",
	    {
	       [thepoubelle] execVM "script\nekro\pole_emploi\metiers\eboueur\script\prendre.sqf";
	    },
	    [],
	    1.5,
	    true,
	    true,
	    "",
	    "missionpoubelle == 3 && (position player distance thepoubelle < 3) && (vehicle player == player) && InMission == 1;",
	    2,
	    false,
	    "",
	    ""
	];
	actionPB3 = player addAction
	[
	    "mettre dans le camion",
	    {
	       [thepoubelle] execVM "script\nekro\pole_emploi\metiers\eboueur\script\incamion.sqf";
	    },
	    [],
	    1.5,
	    true,
	    true,
	    "",
	    "(position player distance thepoubelle < 3) && (vehicle player == player) && InMission == 1 && (thepoubelle distance moncamion < 5.5) && OKcamion == 0;",
	    2.5,
	    false,
	    "",
	    ""
	];
	numberpbl = numberpbl + 1;

	waitUntil {OKcamion == 1;};
	//hint "Va remettre la poubelle a sa place";
	hint parseText format ["<t size='1.50' font='TahomaB' align='center' color='#df520c'>[Eboueur]</t><br/><br/><t size='1.10 'font='TahomaB' align='left'>Va remettre la poubelle a sa place</t><br/>"];


	_positionpb = getMarkerPos _markERDF;


	waitUntil {position thepoubelle distance _positionpb < 2 && missionpoubelle == 3};

	//hint format ["a quel niveau j'en suis... %1", numberpbl];
	player removeAction actionPB1;
	player removeAction actionPB;
	player removeAction actionPB2;
	player removeAction actionPB3;
	deleteMarkerLocal _markERDF;
	sleep 1.5;
	call poubelle_fnc;

};

call poubelle_fnc;