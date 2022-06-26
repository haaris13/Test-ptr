#include "..\..\script_macros.hpp"
/*
	File: fn_updateClothing.sqf
	Author: Cry
	
	Description:
	Met à jour les skins custom
*/


switch (playerSide) do { 
	case independent : {
		if (uniform player in ["U_C_Scientist"]) then {
			player setObjectTextureGlobal[0,"textures\skins\med\U_C_Scientist.jpg"];
		};

		if (uniform player in ["U_B_Wetsuit"]) then {
			player setObjectTextureGlobal[0,"textures\skins\med\U_B_Wetsuit.jpg"];
		};

		if (backpack player in ["B_Kitbag_rgr","B_Carryall_oli"]) then {
			(unitBackpack player) setObjectTextureGlobal[0,"#(argb,8,8,3)color(0.05,0.05,0.05,1)"];
		};
	};

	case west : {

		if (!life_serviceGhost) then {

			if (uniform player in ["U_I_CombatUniform_shortsleeve","U_I_CombatUniform","U_BG_Guerrilla_6_1"] && (FETCH_CONST(life_coplevel)) > 2) then {
				player setObjectTextureGlobal [0, "textures\skins\police\m81black.paa"];
			};

			if (backpack player in ["B_Kitbag_rgr"] && (FETCH_CONST(life_copUlevel)) == 3) then {

				life_isFed = true;

				(unitBackpack player) setObjectTextureGlobal [0, "textures\skins\police\Kitbag_FR_CE.paa"];
			};

		} else {

			if (uniform player in ["U_I_CombatUniform_shortsleeve","U_I_CombatUniform","U_BG_Guerrilla_6_1"] && (FETCH_CONST(life_coplevel)) > 2) then {
				player setObjectTextureGlobal [0, "textures\skins\police\uniGhost.paa"];
			};

			if (backpack player in ["B_Kitbag_rgr"] && (FETCH_CONST(life_copUlevel)) == 3) then {
				(unitBackpack player) setObjectTextureGlobal [0, "textures\skins\police\backGhost.paa"];
			};
		};
	};

	case civilian : {
		if ((uniform player) in ["U_BG_Guerrilla_6_1"] && (((group player) getVariable ["clan_owner",""]) == "76561198118138558")) then {
			[player,"USP_PATCH_MORALE_MARIJUANA_LEAF"] call bis_fnc_setUnitInsignia;
		};
	};
};