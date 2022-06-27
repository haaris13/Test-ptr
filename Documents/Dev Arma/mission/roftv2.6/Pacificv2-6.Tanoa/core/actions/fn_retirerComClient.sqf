#include "..\..\script_macros.hpp"
/*

	File: fn_retirerComClient.sqf

	Autor: IronBlade

*/
params [
	["_comUnit",objNull,[objNull]]
];
if(isNull _comUnit) exitWith {};

["<t color='#ff0000'>Attention, Un Brouilleur a été placé sur votre équipement, Tout les moyens de communications et de geolocalisation sont Hors Service ! !</t>"] call life_fnc_dynamicText;

player unassignItem "ItemMap";
player unassignItem "ItemGPS";
player unassignItem (call TFAR_fnc_activeSwRadio);