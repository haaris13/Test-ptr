#include "..\..\script_macros.hpp"
/*
	File: fn_taxiPointCfg.sqf
	Author: IronBlade
*/

_tab = [
			["taxi_1","Georgetown","\a3\ui_f\data\map\Markers\NATO\o_motor_inf.paa"],
			["taxi_2","La Rochelle","\a3\ui_f\data\map\Markers\NATO\o_motor_inf.paa"],
			["taxi_3","Katkoula","\a3\ui_f\data\map\Markers\NATO\o_motor_inf.paa"],
			["taxi_4","Tanouka","\a3\ui_f\data\map\Markers\NATO\o_motor_inf.paa"],
			["taxi_3","Aéoroport Intérnational","\a3\ui_f\data\map\Markers\NATO\o_motor_inf.paa"]
];

_return = [];

{
	_config = _x;

	_mark = (_x select 0);

	if ((player distance2D (getMarkerPos _mark)) > 1000) then {
		_return pushBack _x;
	};
} forEach _tab;

_return;