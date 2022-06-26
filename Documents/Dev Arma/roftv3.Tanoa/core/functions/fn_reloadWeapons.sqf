/*
	File: fn_reloadWeapons.sqf

	Autor:IronBlade
*/
_unit = _this select 0;
_weapon = _this select 1;
_muzzle = _this select 2;
_newMagazine = _this select 3;
_oldMagazine = _this select 4;

if (_unit != player) exitWith {};

if (_weapon in ["DDOPP_X26_b"] && playerSide == west) then {
	player setAmmo [handgunWeapon player, 1];
};