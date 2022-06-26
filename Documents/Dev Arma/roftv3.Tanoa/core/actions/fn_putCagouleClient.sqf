#include "..\..\script_macros.hpp"
/*
	File: fn_putCagouleClient.sqf


	Autor: Iron
*/
params [
	["_unit",objNull,[objNull]]
];
if(isNull _unit) exitWith {};

if (life_iseffectCagoule) exitWith {};

player setVariable ["cagoule",true,true];

life_iseffectCagoule = true;

life_effectCagoule = ppEffectCreate ["colorCorrections", 301];
life_effectCagoule ppEffectEnable true;
life_effectCagoule ppEffectAdjust [0.2, 1, 0, [0, 0, 0, 0], [0, 0, 0, 0],[1, 1, 1, 0]]; 
life_effectCagoule ppEffectCommit 3;

hint "Une Cagoule vous a été mit sur la tete !";

player unassignItem "NVGoggles";
player unassignItem "NVGoggles_OPFOR";
player unassignItem "NVGoggles_INDEP";
player unassignItem "NVGoggles_tna_F";
player unassignItem "O_NVGoggles_ghex_F";
player unassignItem "O_NVGoggles_hex_F";
player unassignItem "O_NVGoggles_urb_F";

player addGoggles "G_Balaclava_lowprofile";