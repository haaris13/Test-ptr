#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceGetCheckFiole.sqf

	Autor: IronBlade
*/

disableSerialization;

_check1 = CONTROL(DialogIce,FioleCheck1);
_check2 = CONTROL(DialogIce,FioleCheck2);

_return = "";

switch (true) do { 
	case (cbChecked _check1) : {_return = "fiole1";}; 
	case (cbChecked _check2) : {_return = "fiole2";}; 
	default {_return = "";}; 
};

_return;