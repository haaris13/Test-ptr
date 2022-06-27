#include "..\..\script_macros.hpp"
/*
	File: fn_removeLicenses.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Used for stripping certain licenses off of civilians as punishment.
*/
private "_state";
_state = param [0,1,[0]];

switch (_state) do {
	//Death while being wanted
	case 0: {
		SVAR_MNS [LICENSE_VARNAME("driver","civ"),false];
		["remove", "driver"] spawn life_fnc_licenseActionEvent;
		//SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
	};

	//Jail licenses
	case 1: {
		SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
		["remove", "gun"] spawn life_fnc_licenseActionEvent;
	};

	//Remove motor vehicle licenses
	case 2: {
	};

	//Killing someone while owning a gun license
	case 3: {
		/*
		if(GVAR_MNS LICENSE_VARNAME("gun","civ")) then {
			SVAR_MNS [LICENSE_VARNAME("gun","civ"),false];
			["Warning", localize "STR_Civ_LicenseRemove_2"] spawn life_fnc_showPredefinedNotification;
		};
		*/
	};
};