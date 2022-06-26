#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceCheckFiole.sqf

	Autor: IronBlade
*/
_type = [_this,0,"",[""]] call BIS_fnc_param;
_etat = [_this,1,0,[0]] call BIS_fnc_param;

switch (true) do { 
	case (_type == "fiole1" && _etat == 1) : {CONTROL(DialogIce,FioleCheck2) cbSetChecked false;};
	case (_type == "fiole2" && _etat == 1) : {CONTROL(DialogIce,FioleCheck1) cbSetChecked false;};
};