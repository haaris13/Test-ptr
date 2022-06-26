#include "..\..\script_macros.hpp"
#include "..\..\defineACE.hpp"
/*
    Author: Casimodo33 [ROFT]
*/
#define LIFEdisplay (GVAR_UINS ["playerHUD",displayNull])
#define LIFEctrl(ctrl) ((GVAR_UINS ["playerHUD",displayNull]) displayCtrl ctrl)
private _bloodvol = player getVariable [VAR_BLOOD_VOL,6];  
disableSerialization;

if !(isNull (findDisplay 7300)) exitWith {}; //Sometimes likes to open on the deathscreen
if(isNull LIFEdisplay) then {[] spawn life_fnc_hudSetup;};

LIFEctrl(2200) progressSetPosition (life_hunger / 100);
//LIFEctrl(2201) progressSetPosition (1 - (damage player));
LIFEctrl(2201) progressSetPosition (round(_bloodvol* 16.7)/100);
LIFEctrl(2202) progressSetPosition (life_thirst / 100);

LIFEctrl(1200) ctrlsetText format["%1%2", life_hunger, "%"];
//LIFEctrl(1201) ctrlsetText format["%1%2", round((1 - (damage player))*100),"%"];
LIFEctrl(1201) ctrlsetText format["%1%2", round(_bloodvol* 16.7),"%"];
LIFEctrl(1202) ctrlsetText format["%1%2", life_thirst,"%"];



/** ******* BEFORE ****************************************** */
// #include "..\..\script_macros.hpp"
// #include "..\..\defineACE.hpp"

// #define LIFEdisplay (GVAR_UINS ["playerHUD",displayNull])
// #define LIFEctrl(ctrl) ((GVAR_UINS ["playerHUD",displayNull]) displayCtrl ctrl)
// private _bloodvol = player getVariable [VAR_BLOOD_VOL,6];  
// disableSerialization;


// if !(isNull (findDisplay 7300)) exitWith {}; //Sometimes likes to open on the deathscreen
// if(isNull LIFEdisplay) then {[] spawn life_fnc_hudSetup;};

// LIFEctrl(1000) ctrlsetText format["%1%2", life_hunger, "%"];
// LIFEctrl(1001) ctrlsetText format["%1%2", life_thirst,"%"];
// LIFEctrl(1002) ctrlsetText format["%1%2", round(_bloodvol* 16.7),"%"];
