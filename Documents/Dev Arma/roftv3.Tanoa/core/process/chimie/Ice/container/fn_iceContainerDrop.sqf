#include "..\..\..\..\script_macros.hpp"
#include "script_ice_container.hpp"
/*
	File: fn_iceContainerDrop.sqf

	Autor:IronBlade
*/

disableSerialization;

if (life_iceChimie_type == "") exitWith {};

if((lbCurSel PlayerGear) == -1) exitWith {hint localize "STR_Global_NoSelection";};

_ctrl = ctrlSelData(PlayerGear);
_num = ctrlText PlayerEdit;
if(!([_num] call TON_fnc_isnumber)) exitWith {hint "Invalid Number format";};
_num = parseNumber(_num);
if(_num < 1) exitWith {hint "1 Minimum !";};

//
_invData = (life_iceChimie_compo select 0);

if(!([false,_ctrl,_num] call life_fnc_handleInv)) exitWith {hint "Vous n'avez pas assez d'items !";};

_index = [_ctrl,_invData] call TON_fnc_index;
if(_index == -1) then
{
	_invData pushBack [_ctrl,_num];
}
	else
{
	_val = _invData select _index select 1;
	_invData set[_index,[_ctrl,_val + _num]];
};

life_iceChimie_compo set[0, _invData];

missionNamespace setVariable[format["ice_compo_%1", life_iceChimie_type], life_iceChimie_compo];

[] spawn life_fnc_iceContainerDiag;