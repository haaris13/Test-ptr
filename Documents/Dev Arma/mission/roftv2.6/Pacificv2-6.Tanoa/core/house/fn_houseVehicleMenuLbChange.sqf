#include "..\..\script_macros.hpp"
/*
	File: fn_houseVehicleMenuLbChange.sqf

	Autor: IronBlade
*/

_type = CONTROL_DATA(16201);

(CONTROL(16200,16202)) ctrlSetStructuredText parseText format ["<t size='1' color='#b2ec00'>Prêt à ranger</t>"];

CONTROL(16200,16203) ctrlEnable true;