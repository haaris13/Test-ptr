/*
Script fn_cleanupbarrier.sqf 
Author:  MonsterZen
*/
_barriertodel = _this select 0;
_actionid = _this select 1;
barrierarray = ["p30temp","p50temp","RoadBarrier_F","barriere","barriere3","cone","coneflag","coneflash","cone4","dangertemp","devidr","deviga","tmpdroite","tmpgauche","fininttemp","depasstemp","tmppn","retritemp","routbarr","senint","travautemp","triflash","triflashdng","Land_PortableLight_double_F"];
switch _actionid do 
{

    case 1:
    {
        switch _barriertodel do
        {
            case "Limitation 30":
            {
                _barrier = position player nearObjects ["p30temp", 8];
                deleteVehicle (_barrier select 0);	
            };
            case "Limitation 50":
            {
                _barrier = position player nearObjects ["p50temp", 3];
                deleteVehicle (_barrier select 0);
            };             
            case "Barrière barrage":
            {
                _barrier = position player nearObjects ["RoadBarrier_F", 3];
                deleteVehicle (_barrier select 0);
            };             
            case "Barrière simple":
            {
                _barrier = position player nearObjects ["barriere", 3.5];
                deleteVehicle (_barrier select 0);
            };             
            case "Barrière triple":
            {
                _barrier = position player nearObjects ["barriere3", 3];
                deleteVehicle (_barrier select 0);
            };              
            case "Cône simple":
            {
                _barrier = position player nearObjects ["cone", 3];
                deleteVehicle (_barrier select 0);
            };                 
            case "Cône drapeau":
            {
                _barrier = position player nearObjects ["coneflag", 3];
                deleteVehicle (_barrier select 0);
            };             
            case "Cône flash":
            {
                _barrier = position player nearObjects ["coneflash", 3];
                deleteVehicle (_barrier select 0);
            };             
            case "Cône quadruple":
            {
                _barrier = position player nearObjects ["cone4", 3];
                deleteVehicle (_barrier select 0);
            };
            case "Danger":
            {
                _barrier = position player nearObjects ["dangertemp", 3];
                deleteVehicle (_barrier select 0);
            }; 
            case "Déviation droite":
            {
                _barrier = position player nearObjects ["devidr", 3.5];
                deleteVehicle (_barrier select 0);
            };             
            case "Déviation gauche":
            {
                _barrier = position player nearObjects ["deviga", 3.5];
                deleteVehicle (_barrier select 0);
            };
			case "Direction droite":
            {
                _barrier = position player nearObjects ["tmpdroite", 3.5];
                deleteVehicle (_barrier select 0);
            };			
			case "Direction gauche":
            {
                _barrier = position player nearObjects ["tmpgauche", 3.5];
                deleteVehicle (_barrier select 0);
            };			
			case "Fin d'interdiction":
            {
                _barrier = position player nearObjects ["fininttemp", 3.5];
                deleteVehicle (_barrier select 0);
            };			
			case "Interdit dépasser":
            {
                _barrier = position player nearObjects ["depasstemp", 3.5];
                deleteVehicle (_barrier select 0);
            };			
			case "Halte Police":
            {
                _barrier = position player nearObjects ["tmppn", 3.5];
                deleteVehicle (_barrier select 0);
            };			
			case "Retrecissement":
            {
                _barrier = position player nearObjects ["retritemp", 3.5];
                deleteVehicle (_barrier select 0);
            };			
			case "Route barrée":
            {
                _barrier = position player nearObjects ["routbarr", 3.5];
                deleteVehicle (_barrier select 0);
            };			
			case "Sens interdit":
            {
                _barrier = position player nearObjects ["senint", 3.5];
                deleteVehicle (_barrier select 0);
            };			
			case "Travaux":
            {
                _barrier = position player nearObjects ["travautemp", 3.5];
                deleteVehicle (_barrier select 0);
            };			
			case "Triflash accident":
            {
                _barrier = position player nearObjects ["triflash", 3.5];
                deleteVehicle (_barrier select 0);
            };			
			case "Triflash danger":
            {
                _barrier = position player nearObjects ["triflashdng", 3.5];
                deleteVehicle (_barrier select 0);
            };			
			case "Spot Lumineux":
            {
                _barrier = position player nearObjects ["Land_PortableLight_double_F", 3.5];
                deleteVehicle (_barrier select 0);
            };			
        };
    };   
    case 2:
    {
        {   
            deleteVehicle _x; 
        }foreach nearestObjects [player,barrierarray,10];
    };
};