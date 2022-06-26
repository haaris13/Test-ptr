#include "..\..\script_macros.hpp"
/*
	File: fn_virt_menu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Initialize the virtual shop menu.
*/
private["_shop"];
_shop = _this select 3;
if(isNil {_shop}) exitWith {};
life_shop_type = _shop;
life_shop_npc = _this select 0;
if (_shop == "cop" && playerSide != west) exitWith {["Error", localize "STR_NOTF_NotACop"] spawn life_fnc_showPredefinedNotification;};
if (_shop == "medic" && playerSide != independent) exitWith {["Error", "Vous n'êtes pas médecin !"] spawn life_fnc_showPredefinedNotification;};
if (_shop == "depan" && (call life_depanLevel) < 1) exitWith {["Error", "Vous n'êtes pas dépaneur !"] spawn life_fnc_showPredefinedNotification;};
if (_shop == "mafia" && !license_civ_mafia) exitWith {["Error", "Vous n'avez pas l'entrainement Mafieux !"] spawn life_fnc_showPredefinedNotification;};
if (_shop == "rebel" && !license_civ_insurge) exitWith {["Error", "Vous n'avez pas l'entrainement !"] spawn life_fnc_showPredefinedNotification;};
if (_shop == "polloPalace" && !("polloPalacePlus" in life_entreprises)) exitWith {["Error", "Je ne vous connais pas !"] spawn life_fnc_showPredefinedNotification;};
if (_shop == "fournisseur_bar" && !("pomme" in life_entreprises)) exitWith {["Error", "Je ne vous connais pas !"] spawn life_fnc_showPredefinedNotification;};

/*
if (_shop == "drugdealer") exitWith {
	["Error", "Merci les poukaves ! Depuis que la gendarmerie m'est tombé dessus, il faut que je me fasse discret un moment..."] spawn life_fnc_showPredefinedNotification;
};
*/

if (_shop == "drugdealer" && !("Dealer" in life_player_unLocks)) exitWith {
	["Error", "T'es qui mec ?"] spawn life_fnc_showPredefinedNotification;
};

_dayTime = daytime;

if (_shop in ["hacker", "contreband_shop"] && !license_civ_mafia) exitWith {
	["Error", "Hum. Vous ne faites pas parti de la mafia vous, non ?"] spawn life_fnc_showPredefinedNotification;
};

if (_shop == "contreband_shop" && (_dayTime > 6 && _dayTime < 22)) exitWith {
	["Error", "Hum. On est fermé, revenez plus tard."] spawn life_fnc_showPredefinedNotification;
};

createDialog "shops_menu";

_shopClass = (missionConfigFile >> "VirtualShops" >> _shop);
life_shop_payment_type = getText(_shopClass >> "paymentType");

if (life_shop_payment_type == "") then {
	life_shop_payment_type = "cash";
};

[] call life_fnc_virt_update;

["Shop","Item",false] spawn life_fnc_showHelp;