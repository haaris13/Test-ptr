/*
	File: fn_civLoadout.sqf
	Author: Tobias 'Xetoxyc' Sittenauer
	
	Description:
	Loads the civs out with the default gear, with randomized clothing.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

_clothings = ["U_I_C_Soldier_Bandit_5_F"];
_uniform = selectRandom _clothings;

_groupID = (group player) getVariable["gang_id",-1];
if (_groupID == 68) then {
	_uniform = "U_Rangemaster";
	player addBackpack "B_Carryall_cbr";
};
player addUniform _uniform;



/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";

[] call life_fnc_playerSkins;
[] call life_fnc_updateClothing;
[] call life_fnc_saveGear;