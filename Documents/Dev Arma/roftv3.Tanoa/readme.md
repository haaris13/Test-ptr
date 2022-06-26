# Commande admin rendant bien service
## Donne le nom de la class de l'objet grace à la molette sourri (à exécuter en local)
```
player addAction ["House to RPT", {diag_log format ["Building: %1", typeOf cursorTarget]; hint format ["%1 Saved!", typeOf cursorTarget]}];
```


## Donne le nom de la class de l'objet grace à la molette sourri (à exécuter en local)
```
player addAction["Test 3",life_fnc_targetTrainingOpenIntMenu,"CopPm",0,false,false,"",'playerSide == west && player distance _target < 4'];
player addAction["bbbbb",{life_fnc_targetTrainingOpenIntMenu}];
player addAction ["bla bla", {diag_log format ["Building: %1", playerSide]; hint format ["%1 Saved!", playerSide]}];

this addAction ["Pole emploi",{execVM "script\nekro\pole_emploi\menu\scripts\executemenu.sqf";}];
```

## Donne le nom de la class de l'objet grace à la molette sourri (à exécuter en local)
```
_entrepriseId = "49";
_name_ent = "Anatoly Corp";
_pdg_pid = "76561198050669838";
_pdg_name = "Emmett Dalton";
_members = [['76561198050669838','Emmett Dalton',2],['76561198059757685','Alharis Thess',0]];
_location = "entreprise20";
_maxStock = "20000";
_prices_ent = [['raisin',0],['Empty_Glass_Bottle',0],['wine_process_bottle',100],['Farm_Sandpile',0],['Jus_Pomme_Raisin',0],['Jus_Pomme_Banane',0],['Jus_Pomme_Coco',0],['banane',0],['coco',0],['apple',0],['peach',0],['cacao',0],['gpstracker',0],['palette_export',0],['copper_unrefined',0],['copper_refined',0],['iron_unrefined',0],['iron_refined',0],['tin_ore',0],['tin_bar',0],['silver_ore',0],['silver_bar',0],['rhodium_ore',0],['rhodium_bar',0],['platinum_ore',0],['platinum_bar',0],['iridium_ore',0],['iridium_bar',0],['graphite_ore',0],['graphite_bar',0],['gold_ore',0],['gold_bar',0],['Metal_Tin_Can',0],['multifruit',0],['Land_TablePlastic_01_F',0]];
_items_ent = [['wine_process_bottle',3067],['Farm_Sandpile',52],['raisin',2735],['Empty_Glass_Bottle',362]];
_bankacc_ent = "10898450";
_items_2_ent = [['waterBottle',46],['tbacon',43],['redgull',22],['pickaxe',5],['shovel',6],['axe',4],['gpstracker',8],['tacos',2],['biere',3],['fuelFull',1],['Land_PortableLight_single_F',10],['Land_PortableLight_double_F',13],['Land_Bench_01_F',1],['Roft_table_modele_1',3],['Land_ChairWood_F',4],['Land_CampingChair_V2_F',5],['Land_CampingChair_V1_F',13],['Land_WoodenTable_small_F',2],['Land_Portable_generator_F',3],['Land_CampingTable_small_F',2],['Land_CampingTable_F',2],['Land_Defibrillator_F',1],['Land_PartyTent_01_F',4],['Land_TablePlastic_01_F',8],['Land_Bench_02_F',1],['Land_Bench_03_F',1],['Land_Bench_04_F',2],['Land_TentDome_F',1],['Land_TentA_F',1],['Land_Camping_Light_F',1],['boutrhum',1],['Land_TableSmall_01_F',1],['Land_ArmChair_01_F',3],['Land_Sofa_01_F',1],['Land_WaterCooler_01_new_F',1],['Roft_Thess_Chiken',7],['Land_Sunshade_01_F',1],['Land_ChairPlastic_F',17],['Land_TableBig_01_F',1],['Land_Bench_F',1],['Land_WoodenTable_large_F',2]];
_maxstock_2_ent = "1500";
_type = "sa";

_entreprise = createSimpleObject ["FlexibleTank_01_sand_F",[0,0,((round (random 10000)) + 50000)]];
_entreprise hideObjectGlobal true;

_entreprise setVariable ["entreprise_id",_entrepriseId,true];
_entreprise setVariable ["entreprise_name",_name_ent,true];
_entreprise setVariable ["entreprise_pdg_pid",_pdg_pid,true];
_entreprise setVariable ["entreprise_pdg_name",_pdg_name,true];
_entreprise setVariable ["entreprise_members",_members,true];
_entreprise setVariable ["entreprise_prices",_prices_ent,true];
_entreprise setVariable ["entreprise_items",_items_ent,true];
_entreprise setVariable ["entreprise_maxstock",_maxStock,true];
_entreprise setVariable ["entreprise_bankacc",_bankacc_ent,true];
_entreprise setVariable ["entreprise_position",_location,true];
_entreprise setVariable ["entreprise_objects_txt","",true];
_entreprise setVariable ["entreprise_items_2",_items_2_ent,true];
_entreprise setVariable ["entreprise_maxstock_2",_maxstock_2_ent,true];
_entreprise setVariable ["entreprise_type",_type,true];
_entreprise setVariable ["entreprise_stockage_openned",false,true];
_entreprise setVariable ["entreprise_stockage_openned_by",objNull,true];
_entreprise setVariable ["entreprise_stockage2_openned",false,true];
_entreprise setVariable ["entreprise_stockage2_openned_by",objNull,true];
_entreprise setVariable ["entreprise_status",true,true];
player setVariable ["current_entreprise",_entreprise];
[] spawn max_entreprise_fnc_openMenu;
```

## Test changement variable d'un obj (porte dans batiment) à un emplacement
```
_building = nearestObjects [[5105.29,2988.25,-0.778], ["Land_CommonwealthBank"], 50] select 0;
_building animate ["Vault_Door", 1];
_building setVariable ["lock_vault", 1, true];
_building setVariable ["lock_vault_2", 1, true];
```

## Dévérouillage de coffre
```
cursorObject setVariable["trunk_in_use",false,true];
```

## Spawn d'un objet avec action pour le retirer (Roft_Thess_Chiken, Roft_Panneau)
```
player addAction ["Poser panneau", {
	_className = "Roft_Thess_Chiken";
	_object = createVehicle [_className, [0,0,0], [], 0, "NONE"];  
	_conPos = [0,5.5,1];
	_object attachTo[player,_conPos];
	_object setVariable["item","objectDeployed",true];
	roft_action_objectDeploy = player addAction["<t color='#5CFF77'>Déposer</t>",{if(!isNull roft_object) then {detach roft_object; roft_object = ObjNull;}; player removeAction roft_action_objectDeploy; roft_action_objectDeploy = nil;},"",999,false,false,"",'!isNull roft_object'];
	roft_object = _object;
	[roft_object, ["<t color='#ff0000'>Ranger</t>", {deleteVehicle (cursorObject);}]] remoteExec ["addAction",2];
	[roft_object, ["Alert", {hint "Vive les poulets !";}]] remoteExec ["addAction",2];
	waitUntil {isNull roft_object};
	if(!isNil "roft_action_objectDeploy") then {player removeAction roft_action_objectDeploy;};
	if(isNull _object) exitWith {roft_object = ObjNull;};
	_object setPos [(getPos _object select 0),(getPos _object select 1),0];
}];
```

## Spawn d'un véhicule
```
"A320_ch_VY" createVehicle (getPos player);
"IvecoCh_civ_noir" createVehicle (getPos player);
"chbalayeuse" createVehicle (getPos player);
"chGrue_Mobile" createVehicle (getPos player);
"Peugeot_Expert_vp" createVehicle (getPos player);
"chbetonniere" createVehicle (getPos player);
"chgrue" createVehicle (getPos player);
"chTransport_L" createVehicle (getPos player);
"roller" createVehicle (getPos player);
"trafic3_ml" createVehicle (getPos player);
"C_Heli_Light_01_civil_F" createVehicle (getPos player);
"d3s_cullinan_19_BB" createVehicle (getPos player);
```

## Info des variables d'un objet
```
cursorObject enableSimulation true; 
_varall = allVariables cursorObject; 
hint format ["to: %1", _varall];

cursorObject animateDoor['Door',2,true];
```

## Spaw chien qui nous suit  CHEVRE: Fin_random_F / Goat_random_F / Mouton: Sheep_random_F / chien: Alsatian_Random_F / 
```
_dog = createAgent ["Fin_random_F", getPosATL player, [], 5, "NONE"];
_dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
[_dog] spawn {
	params ["_dog"];
	_dog playMove "Dog_Sprint";
	while { sleep 1; alive _dog } do
	{
		_dog moveTo getPosATL player;
	};
};
```

```
player addAction ["Attach obj", {
	_player = cursorTarget;
	_dog = createAgent ["Fin_random_F", getPosATL _player, [], 5, "NONE"];
	_dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
	[_dog] spawn {
		params ["_dog"];
		_dog playMove "Dog_Sprint";
		while { sleep 1; alive _dog } do
		{
			_dog moveTo getPosATL _player;
		};
	};
}];


player addAction ["Attach obj", {
	"Roft_Thess_Chiken" createVehicle (getPos player);
}];
```

## Déblocage place condcteur
```
(vehicle cursorTarget) lockDriver false;
player moveInDriver (vehicle cursorTarget);
```



## Code divers
```
_house = param [1,ObjNull,[ObjNull]];
_garagePos = {6.61572,6.92188,-0.68114};
_garageDir = 90.8595;

_garagePos = _house modelToWorld _garagePos;
_garageDir = (getDir _house) + _garageDir;

_house setVariable["house_garage", 0, true]; 
[_vid, getPlayerUID player, _garagePos, player, 0, _garageDir, 0] remoteExec ["TON_fnc_spawnVehicle", 2]; 
[_house, player] remoteExec ["TON_fnc_houseTakeVeh", 2];
```

```
player addAction ["Attach obj", {
	_house = param [1,ObjNull,[ObjNull]];
	_garagePos = {6.61572,6.92188,-0.68114};
	_garageDir = 90.8595;

	_garagePos = _house modelToWorld _garagePos;
	_garageDir = (getDir _house) + _garageDir;

	_house setVariable["house_garage", 0, true]; 
	[_vid, getPlayerUID player, _garagePos, player, 0, _garageDir, 0] remoteExec ["TON_fnc_spawnVehicle", 2]; 
	[_house, player] remoteExec ["TON_fnc_houseTakeVeh", 2];
}];
```

```
player addAction ["Attach obj", {
	_house = param [1,ObjNull,[ObjNull]];
	_garagePos = {6.61572,6.92188,-0.68114};
	_garageDir = 90.8595;

	hint _garagePos;

	_garagePos = _house modelToWorld _garagePos;
	_garageDir = (getDir _house) + _garageDir;

	"VR_3DSelector_01_default_F" createVehicle _garagePos; 
}];
```

```
_boxes = "VR_3DSelector_01_default_F" createVehicle position player; 
_cargo = "Supply500" createVehicle [0,0,0]; 
_cargo attachTo [_boxes, [0,0,0.85]]; 
 
// optional for objects that can take damage 
_boxes addEventHandler ["Killed", 
{ 
 { 
  detach _x, 
  deleteVehicle _x; 
 } 
 forEach attachedObjects (_this select 0); 
}];
```
```
"VR_3DSelector_01_default_F" createVehicle position player; 
```

## ===================== Exemple code ======================
```
[] spawn {
_obj = "Land_InfoStand_V2_F" createVehicle position player;  
_obj addAction["Uniformes",life_fnc_clothingMenu,"gap",0,false,false,"",'playerSide == independent'];    
_obj addAction["Uniformes",life_fnc_clothingMenu,"gno",0,false,false,"",'playerSide == independent'];   
_obj addAction["Uniformes",life_fnc_clothingMenu,"sssm",0,false,false,"",'playerSide == independent']; 
_obj addAction["Equipements Spécialisations",life_fnc_weaponShopMenu,"spe_medic",0,false,false,"",'playerSide == independent'];  
sleep 5;
hint str _obj;
};
```

```
[] spawn {
_obj = "Land_InfoStand_V2_F" createVehicle position player;  
_obj addAction["Uniformes",life_fnc_clothingMenu,"gap",0,false,false,"",'playerSide == independent'];    
_obj addAction["Uniformes",life_fnc_clothingMenu,"gno",0,false,false,"",'playerSide == independent'];   
_obj addAction["Uniformes",life_fnc_clothingMenu,"sssm",0,false,false,"",'playerSide == independent']; 
_obj addAction["Equipements Spécialisations",life_fnc_weaponShopMenu,"spe_medic",0,false,false,"",'true'];  
sleep 5;
hint str _obj;
};
```

## Executer local
```
objSpawnManu = "Land_InfoStand_V2_F" createVehicle position player;
```

## Executer global
```
[] spawn {
objSpawnManu addAction["Uniformes",life_fnc_clothingMenu,"gap",0,false,false,"",'playerSide == independent'];    
objSpawnManu addAction["Uniformes",life_fnc_clothingMenu,"gno",0,false,false,"",'playerSide == independent'];   
objSpawnManu addAction["Uniformes",life_fnc_clothingMenu,"sssm",0,false,false,"",'playerSide == independent']; 
objSpawnManu addAction["Equipements Spécialisations",life_fnc_weaponShopMenu,"spe_medic",0,false,false,"",'true'];  
sleep 5;
hint str objSpawnManu;
};
```

```
"chVario_brinks" createVehicle (getPos player);             120 000
"C_Van_02_vehicle_F" createVehicle (getPos player);         95 000 // Fourgon civil
"suburban" createVehicle (getPos player);                   95 000 // 4x4 blindé civil
"chH1" createVehicle (getPos player);                   	195 000	// gros 4x4 blindé
"chH1_ST" createVehicle (getPos player);				    200 000 // gros 4x4 blindé (décapotable)
"C_Offroad_01_F" createVehicle (getPos player);				95 000  // petit 4x4 
"Manlu" createVehicle (getPos player);				        350 000 // gros camion

"d3s_vklass_17" createVehicle (getPos player);
"Saleenlu_civ" createVehicle (getPos player);
```

## licence cloting, weapons etc..
```
this enableSimulation false;  
this allowDamage false;   
this addAction[localize"STR_MAR_Rebel_Market",life_fnc_virt_menu,"rebel"];  
this addAction[localize "STR_MAR_Rebel_Clothing_Shop",life_fnc_clothingMenu,"reb",0,false,false,"",' license_civ_insurge && playerSide == civilian'];  
this addAction[localize "STR_MAR_Rebel_Weapon_Shop",life_fnc_weaponShopMenu,"rebel",0,false,false,"",' license_civ_insurge && playerSide == civilian'];  
this addAction["<t color='#ADFF2F'>ATM</t>",life_fnc_atmMenu,"",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];  
this addAction["Licence",life_fnc_licenseShopOpen,["insurge"],0,false,false,"",' playerSide == civilian && license_civ_mafia'];
```

# Pour les panneaux
```
[<condition>, <le panneau>, <distance acces>] execVM 'c33\scripts\panneau_pub.sqf';
```

### Exemple (utiliser une distance de 5 pour les très grand panneau)
[true, cursorObject, 10] call c33_fnc_PanneauPub;


### Ce transformer en chien ou autre ( CHEVRE: Fin_random_F / Goat_random_F / Mouton: Sheep_random_F / chien: Alsatian_Random_F /)
dog = createAgent ["Cock_random_F", getPosATL player, [], 5, "NONE"]; 
dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
player hideObjectGlobal true; 
player remoteControl dog; 
player attachto [dog,[0,-2,0]];
player allowDamage false; 






Hen_random_F = poule
Cock_random_F = coque
Fin_sand_F
Fin_blackwhite_F
Fin_ocherwhite_F
Fin_tricolour_F
Fin_random_F
Alsatian_Black_F = chien type bergé almend
Alsatian_Sandblack_F
Alsatian_Random_F
Sheep_random_F = mouton
Rabbit_F
Snake_random_F
Salema_F
School_Salema_F
Ornate_random_F
Mackerel_F
Tuna_F
Mullet_F
CatShark_F
Turtle_F


[roft_object, ["Alert", {hint "Vive les poulets !";}]] remoteExec ["addAction",2];

private ["_dog"];
_dog = createAgent ["Alsatian_Black_F", getPosATL player, [], 5, "NONE"];
_dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
player remoteControl driver _dog;
player attachto [dog,[0,-2,0]];
player allowDamage false;
sleep 2;
[player, true] remoteExec ["hideObject"];


[player, false] remoteExec ["hideObject"];
player detach;
objNull remoteControl driver player;
deleteVehicle _dog;
deleteGroup _dog








dog = createAgent ["Cock_random_F", getPosATL player, [], 5, "NONE"]; 
dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
player hideObjectGlobal true; 
player remoteControl dog; 
player attachto [dog,[0,-2,0]];
player allowDamage false; 

_dog = createAgent ["Hen_random_F", getPosATL player, [], 5, "NONE"];
_dog setVariable ["BIS_fnc_animalBehaviour_disable", true];
[_dog] spawn {
	params ["_dog"];
	_dog playMove "Dog_Sprint";
	while { sleep 1; alive _dog } do
	{
		_dog moveTo getPosATL player;
	};
};



// Panneau MadMax
this addAction ["Cardinal_Grinder",{"Cardinal_Grinder" createVehicle (getPos car_spown_mad1);}];
this addAction ["Chevrolet_Advance_1953",{"Chevrolet_Advance_1953" createVehicle (getPos car_spown_mad1);}];
this addAction ["Ford_Mainline_1954",{"Ford_Mainline_1954" createVehicle (getPos car_spown_mad1);}];
this addAction ["Ford_Model_B_1932",{"Ford_Model_B_1932" createVehicle (getPos car_spown_mad1);}];
this addAction ["Holden_Coupe_Utility_1951",{"Holden_Coupe_Utility_1951" createVehicle (getPos car_spown_mad1);}];
this addAction ["Righteous_Spike",{"Righteous_Spike" createVehicle (getPos car_spown_mad1);}];


// Pour ce TP

this addAction ["go tp",{
_pos = getPosASL egout_pos_2;
hint format ["%1", _pos];
player setPosASL _pos;
}];