/*
Script fn_spawnbarrier.sqf 
Author:  MonsterZen
*/
selection = _this select 0;
dropbarrier = player addaction [("Poser balisage"),{detach barrier; barrier setVectorUP (surfaceNormal [(getPosATL barrier) select 0,(getPosATL barrier) select 1]); barrier = nil; player removeaction dropbarrier;},[""],0.1,false,true,"","vehicle player isequalto player"];
Barrier_Spawn = 
{
    selectedbarrier = _this select 0;
    hauteur = _this select 1;
    detach barrier;
    barrier = selectedbarrier createVehicle position player;

    barrier attachTo [player, [0, 2, hauteur]];
    barrier allowdamage true;
    dropbarrier;
};
switch selection do
{       
            case "Limitation 30":
            {
                ["p30temp", 0.57] call Barrier_Spawn;
            };
            case "Limitation 50":
            {
                ["p50temp", 0.57] call Barrier_Spawn;
            };             
            case "Barrière barrage":
            {
                ["RoadBarrier_F", 0.57] call Barrier_Spawn;
            };             
            case "Barrière simple":
            {
                ["barriere", 0.57] call Barrier_Spawn;
            };             
            case "Barrière triple":
            {
                ["barriere3", 0.57] call Barrier_Spawn;
            };                         
            case "Cône simple":
            {
                ["cone", 0.57] call Barrier_Spawn;
            };              
            case "Cône drapeau":
            {
                ["coneflag", 0.57] call Barrier_Spawn;
            };             
            case "Cône flash":
            {
                ["coneflash", 0.12] call Barrier_Spawn;
            };            
            case "Cône quadruple":
            {
                ["cone4", 0.57] call Barrier_Spawn;
            };            
            case "Danger":
            {
                ["dangertemp", 0.57] call Barrier_Spawn;
            };           
            case "Déviation droite":
            {
                ["devidr", 0.57] call Barrier_Spawn;
            };           
            case "Déviation gauche":
            {
                ["deviga", 0.57] call Barrier_Spawn;
            };
			case "Direction droite":
            {
                ["tmpdroite", 0.57] call Barrier_Spawn;
            };
			case "Direction gauche":
            {
                ["tmpgauche", 0.57] call Barrier_Spawn;
            };
			case "Fin d'interdiction":
            {
                ["fininttemp", 0.57] call Barrier_Spawn;
            };
			case "Interdit dépasser":
            {
                ["depasstemp", 0.57] call Barrier_Spawn;
            };
			case "Halte Police":
            {
                ["tmppn", 0.57] call Barrier_Spawn;
            };
			case "Rétrecissement":
            {
                ["retritemp", 0.57] call Barrier_Spawn;
            };
			case "Route barrée":
            {
                ["routbarr", 0.57] call Barrier_Spawn;
            };
			case "Sens interdit":
            {
                ["senint", 0.57] call Barrier_Spawn;
            };
			case "Travaux":
            {
                ["travautemp", 0.57] call Barrier_Spawn;
            };
			case "Triflash accident":
            {
                ["triflash", 0.75] call Barrier_Spawn;
            };
			case "Triflash danger":
            {
                ["triflashdng", 0.75] call Barrier_Spawn;
            };
            case "Spot Lumineux":
            {
                ["Land_PortableLight_double_F", 0.57] call Barrier_Spawn;
            };
};