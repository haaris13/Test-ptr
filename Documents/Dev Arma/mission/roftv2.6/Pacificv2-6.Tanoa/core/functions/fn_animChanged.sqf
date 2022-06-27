/*
	File:fn_animChanged.sqf


	Autor:IronBlade
*/
_unit = _this select 0;
_anim = _this select 1;

if (_unit != player) exitWith {};

if (_anim == "") exitWith {};

if !(_anim in ["asswpercmstpsnonwnondnon","ladderriflestatic","asswpercmrunsnonwnondf"]) exitWith {};

diag_log _anim;
diag_log str(getPosATL player);

if (_anim in ["asswpercmstpsnonwnondnon","asswpercmrunsnonwnondf"] && ((getPosATL player) select 2) > 4) then { uiSleep 0.2; player switchMove "stop"; player setPosAtl [(getPosATL player) select 0, (getPosATL player) select 1, (getPosATL player) select 2 + 0.5]};
