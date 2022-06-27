/*
	File:fn_weaponFindCategory.sqf

	Autor:IronBlade
*/
private ["_weaponClassName", "_CfgWeaponsCategories", "_CfgWeapon", "_scope", "_categories", "_category", "_categ", "_armaName"];
_weaponClassName = [_this, 0, "", [""]] call BIS_fnc_param;

if (_weaponClassName == "") exitWith {"";};

_CfgWeaponsCategories = (missionConfigFile >> "CfgWeaponsCategories");
_CfgWeapon = (_CfgWeaponsCategories >> "Weapons" >> _weaponClassName);


if (isClass(_CfgWeapon)) exitWith {
	getText(_CfgWeapon >> "category");
};

_scope = getText(configFile >> "CfgWeapons" >> _weaponClassName >> "cursor");
_categories = "true" configClasses (_CfgWeaponsCategories >> "Categories");
_category = "";

{
	_categ = _x;
	_armaName = getText(_categ >> "armaName");

	if (_armaName == _scope) exitWith {
		_category = configName(_categ);
	};

} forEach _categories;

_category;