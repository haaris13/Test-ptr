#include "..\..\..\..\script_macros.hpp"
#include "script_ice_container.hpp"
/*
	File: fn_iceContainerTake.sqf

	Autor:IronBlade
*/
disableSerialization;

if (life_iceChimie_type == "") exitWith {};

if(!alive player) exitwith {closeDialog 0;};

if((lbCurSel TrunkGear) == -1) exitWith {hint localize "STR_Global_NoSelection";};
_ctrl = ctrlSelData(TrunkGear);
_num = ctrlText TrunkEdit;
if(!([_num] call TON_fnc_isnumber)) exitWith {hint localize "STR_MISC_WrongNumFormat";};
_num = parseNumber(_num);
if(_num < 1) exitWith {hint localize "STR_MISC_Under1";};

_invData = (life_iceChimie_compo select 0);

_index = [_ctrl,_invData] call TON_fnc_index;
if(_index == -1) exitWith {};

_value = _invData select _index select 1;
if(_num > _value) exitWith {hint localize "STR_MISC_NotEnough"};

if([true,_ctrl,_num] call life_fnc_handleInv) then {
	if(_num == _value) then {
		_invData deleteAt _index;
	} else {
		_invData set[_index,[_ctrl,(_value - _num)]];
	};

	life_iceChimie_compo set[0, _invData];

	missionNamespace setVariable[format["ice_compo_%1", life_iceChimie_type], life_iceChimie_compo];

	[] spawn life_fnc_iceContainerDiag;

} else {
	hint localize "STR_NOTF_InvFull";
};
