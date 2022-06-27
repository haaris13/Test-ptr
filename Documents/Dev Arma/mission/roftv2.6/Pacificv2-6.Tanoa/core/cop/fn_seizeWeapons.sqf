#include "..\..\script_macros.hpp"
/*
	asfasas
*/

private["_unit","_id"];
_unit = param [0,ObjNull,[ObjNull]]; //Target
if(isNull _unit) exitWith {}; //Not valid
if(isNil "_unit") exitwith {}; //Not Valid
if(!(_unit isKindOf "Man")) exitWith {}; //Not a unit
if(!isPlayer _unit) exitWith {}; //Not a human
if(!(_unit GVAR "restrained")) exitWith {}; //He's not restrained.

[] remoteExecCall ["life_fnc_dropWeaponsMagazines",_unit];

["Vous avez saisi les armes / chargeurs."] call life_fnc_dynamicText;