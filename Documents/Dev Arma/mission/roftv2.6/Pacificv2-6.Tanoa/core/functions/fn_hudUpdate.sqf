#include "..\..\script_macros.hpp"
/*
	File: fn_hudUpdate.sqf
	Author: Daniel Stuart

	Description:
	Updates the HUD when it needs to.
*/
#define LIFEdisplay (GVAR_UINS ["playerHUD",displayNull])
#define LIFEctrl(ctrl) ((GVAR_UINS ["playerHUD",displayNull]) displayCtrl ctrl)

disableSerialization;


if !(isNull (findDisplay 7300)) exitWith {}; //Sometimes likes to open on the deathscreen
if(isNull LIFEdisplay) then {[] spawn life_fnc_hudSetup;};

LIFEctrl(1000) ctrlsetText format["%1%2", life_hunger, "%"];
LIFEctrl(1001) ctrlsetText format["%1%2", life_thirst,"%"];
LIFEctrl(1002) ctrlsetText format["%1%2", round((1 - (damage player)) * 100),"%"];

_dmg = round((1 - (damage player)) * 100);

_colorOrange = [0.953,0.439,0.129,1];
_colorRed = [1, 0, 0, 1];

switch (true) do { 
	case (life_hunger <= 10) : {LIFEctrl(1000) ctrlSetTextColor _colorRed;}; 
	case (life_hunger <= 30) : {LIFEctrl(1000) ctrlSetTextColor _colorOrange;}; 
	default {LIFEctrl(1000) ctrlSetTextColor [1,1,1,1];}; 
};

switch (true) do { 
	case (life_thirst <= 10) : {LIFEctrl(1001) ctrlSetTextColor _colorRed;}; 
	case (life_thirst <= 30) : {LIFEctrl(1001) ctrlSetTextColor _colorOrange;}; 
	default {LIFEctrl(1001) ctrlSetTextColor [1,1,1,1];}; 
};

switch (true) do { 
	case (_dmg <= 10) : {LIFEctrl(1002) ctrlSetTextColor _colorRed;}; 
	case (_dmg <= 30) : {LIFEctrl(1002) ctrlSetTextColor _colorOrange;}; 
	default {LIFEctrl(1002) ctrlSetTextColor [1,1,1,1];}; 
};