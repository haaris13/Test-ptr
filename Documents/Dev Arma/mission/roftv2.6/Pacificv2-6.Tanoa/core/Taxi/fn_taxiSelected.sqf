/*
	File: fn_taxiSelected.sqf
	Author: IronBlade
	
	Description:
	Sorts out the taxi point selected and does a map zoom.
*/
disableSerialization;
_control = [_this,0,controlNull,[controlNull]] call BIS_fnc_param;
_selection = [_this,1,0,[0]] call BIS_fnc_param;

_spCfg = [playerSide] call life_fnc_taxiPointCfg;
_sp = _spCfg select _selection;
[((findDisplay 38600) displayCtrl 38602),1,0.1,getMarkerPos (_sp select 0)] call life_fnc_setMapPosition;
life_taxi_point = _tp;

ctrlSetText[38601,format["%2: %1",_sp select 1,localize "STR_Spawn_CSP"]];