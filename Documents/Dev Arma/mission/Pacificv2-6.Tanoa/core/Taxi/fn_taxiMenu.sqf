/*
	File: fn_taxiMenu.sqf
	Author: IronBlade
	
	Description:
*/

if(!(createDialog "life_taxi_selection")) exitWith {[] call life_fnc_taxiMenu;};

_spCfg = [] call life_fnc_taxiPointCfg;

_ctrl = ((findDisplay 38600) displayCtrl 38610);
{
	_ctrl lnbAddRow[(_spCfg select _ForEachIndex) select 1,(_spCfg select _ForEachIndex) select 0,""];
	_ctrl lnbSetPicture[[_ForEachIndex,0],(_spCfg select _ForEachIndex) select 2];
	_ctrl lnbSetData[[_ForEachIndex,0],(_spCfg select _ForEachIndex) select 0];
} foreach _spCfg;

_sp = _spCfg select 0; //First option is set by default

[((findDisplay 38600) displayCtrl 38602),1,0.1,getMarkerPos (_sp select 0)] call life_fnc_setMapPosition;
life_taxi_point = _sp;

ctrlSetText[38601,format["%2: %1",_sp select 1,localize "STR_Spawn_CSP"]];