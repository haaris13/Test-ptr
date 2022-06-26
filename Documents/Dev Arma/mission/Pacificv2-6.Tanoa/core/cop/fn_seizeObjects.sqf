/*
	File: fn_seizeObjects.sqf
//  Autor: By Koex // CommunityOfGamer.fr
	Description:

*/
_clear = nearestObjects [player,["weaponholder"],3];
_clear = _clear + nearestObjects [player,["GroundWeaponHolder"],3];
_clear = _clear + nearestObjects [player,["WeaponHolderSimulated"],3];

_destroyed = 0;
for "_i" from 0 to count _clear - 1
do
{
	_destroyed = _destroyed + 1;
	[(_clear select _i)] spawn life_fnc_deleteVehicle;
};

[format["%1 objets sur le sols ont été saisis.", _destroyed]] call life_fnc_dynamicText;