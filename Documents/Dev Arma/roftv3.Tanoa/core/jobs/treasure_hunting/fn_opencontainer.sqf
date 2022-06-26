#include "..\..\..\script_macros.hpp"
/*
	File: fn_openContainer.sqf
		
	Author: IronBlade
*/
private ["_amount","_artifacts","_txt","_itemToAdd","_itemArr","_baseContents","_containerLoot","_finding","_contentsAmount","_combinedWeight","_lvl"];
closeDialog 0;closeDialog 0;
_container = _this select 0;
_amount = 1;
_itemArr = [];
_containerLoot = [];
_combinedWeight = 0;
_prof = 1;


// switch _container type
switch (_container) do { 
	case "woodencontainer" : {	_lvl = 0; 	_baseContents = 6; _prof = 1; _itemArr = [["pottery",25],["tissu",25],["ver",25],["silvercoins",18],["plastique",15],["goldcoins",6],["aluminium",4],["steel",2],["kevlar",1],["neoprene",1]]};
	case "smallchest" :		 {	_lvl = 50; 	_baseContents = 9; _prof = 2;  _itemArr = [["pottery",25],["tissu",25],["ver",25],["silvercoins",18],["plastique",15],["goldcoins",6],["aluminium",4],["steel",2],["kevlar",2],["neoprene",1]]};
	case "mediumchest" : 	 {	_lvl = 100; _baseContents = 12; _prof = 3; _itemArr = [["pottery",25],["tissu",25],["ver",25],["silvercoins",18],["plastique",15],["goldcoins",6],["aluminium",4],["steel",2],["kevlar",3],["neoprene",2]]};
	case "leadbox" : 		 {	_lvl = 200; _baseContents = 15; _prof = 3; _itemArr = [["pottery",25],["ver",25],["tissu",25],["silvercoins",18],["plastique",15],["goldcoins",7],["aluminium",5],["steel",3],["kevlar",4],["neoprene",3]]};
	case "largechest" : 	 {	_lvl = 300; _baseContents = 18; _prof = 4;	_itemArr = [["pottery",25],["ver",25],["tissu",25],["silvercoins",18],["plastique",16],["goldcoins",8],["aluminium",6],["steel",3],["kevlar",5],["neoprene",4]]};
	case "hugechest" : 		 {	_lvl = 400; _baseContents = 21; _prof = 5; _itemArr = [["pottery",25],["ver",25],["tissu",25],["silvercoins",18],["plastique",16],["goldcoins",8],["aluminium",7],["steel",4],["kevlar",6],["neoprene",5]]};
	case "piratechest" :     {  _lvl = 600; _baseContents = 40; _prof = 15; _itemArr = [["boutrhum",40],["pottery",30],["silvercoins",40],["goldcoins",40],["aluminium",20],["kevlar",20],["neoprene",20]]};};


if ((missionNamespace getVariable ["prof_treasure",0]) < _lvl) exitWith {hint "Votre niveau de Chasse aux trésors est pas assez élevé pour ouvrir ce coffre."};

_contentsAmount = round(random[_baseContents - floor(_baseContents / 2),_baseContents,_baseContents + floor(_baseContents * 2)]);

for "_i" from 0 to _contentsAmount do {
	_finding = [_itemArr] call LB_SelectByChance;
	_containerLoot pushBack _finding;
	_weight = M_CONFIG(getNumber,"VirtualItems",_finding,"weight");
	_combinedWeight = _combinedWeight + _weight;
};

if (_combinedWeight > (life_maxWeight - life_carryWeight)) then { 
	hint "Vous n'avez pas assez de place pour ouvrir cette caisse !";	
} else {
	[false,_container,1] call life_fnc_handleInv;
	{
		[true,_x,1] call life_fnc_handleInv;
	}forEach _containerLoot;
	[_containerLoot,true] call life_fnc_receivedItemsUI;
	["prof_treasure",_prof,100] call life_fnc_levelProfession;
};