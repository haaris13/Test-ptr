/*
	File : fn_storageEntreprise.sqf
	Author: IronBlade

	Description:
*/
private["_object","_attachPos"];

if (life_container_active) exitWith {};

life_container_active = true;
closeDialog 0;
_object = "CargoNet_01_box_F" createVehicle (position player);
life_container_activeObj = _object;
_attachPos = [0, 3, 0.5];
_object attachTo[player, _attachPos];
_object enableSimulationGlobal false;
clearWeaponCargoGlobal _object;
clearMagazineCargoGlobal _object;
clearItemCargoGlobal _object;
clearBackpackCargoGlobal _object;
//_object setVariable ["ace_cargo_canLoad",0, true];

["Action","Caisse",true] spawn life_fnc_showHelp;