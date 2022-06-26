#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceActionFusion.sqf

	Autor: IronBlade
*/
diag_log "fn_iceActionFusion";

if (life_iceChimie_action) exitWith {diag_log "life_iceChimie_action !";};

if (((life_iceChimie_fiole select 0) select 0) == 0) exitWith {hint "Une des fioles est vide !";};
if (((life_iceChimie_fiole select 1) select 0) == 0) exitWith {hint "Une des fioles est vide !";};

life_iceChimie_action = true;

_compo1 = ((life_iceChimie_fiole select 0) select 1) select 0;
_compo2 = ((life_iceChimie_fiole select 1) select 1) select 0;

if (_compo1 == _compo2) exitWith {

	_newAmmount = (((life_iceChimie_fiole select 0) select 0) + ((life_iceChimie_fiole select 1) select 0));
	_newTemp = (((life_iceChimie_fiole select 0) select 2) + ((life_iceChimie_fiole select 1) select 2)) / 2;
	_newColor = ((life_iceChimie_fiole select 0) select 3);

	_pure1 = ((life_iceChimie_fiole select 0) select 1) select 1;
	_pure2 = ((life_iceChimie_fiole select 1) select 1) select 1;

	_newPure = if (_pure1 < _pure2) then {_pure1} else {_pure2};

	[[_newAmmount, [_compo1, _newPure], _newTemp, _newColor]] spawn life_fnc_iceServerFioleFusion;
};

["all", (life_iceChimie_fiole select 0), (life_iceChimie_fiole select 1), player] remoteExecCall ["TON_fnc_iceChimieFusionFiole",2];