#include "..\..\..\script_macros.hpp"
/*
	File: fn_clanVehicleStoreMenuLb.sqf

	Autor: IronBlade
*/

_btn = CONTROL(6800,6803);

if (lbCurSel 6802 == -1) exitWith {_btn ctrlEnable false;};

_btn ctrlEnable true;

(CONTROL(6800,6804)) ctrlSetStructuredText parseText format ["<t size='1' color='#b2ec00'>Pret à Ranger</t>"];