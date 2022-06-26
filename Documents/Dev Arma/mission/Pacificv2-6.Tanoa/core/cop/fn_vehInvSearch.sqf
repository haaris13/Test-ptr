#include "..\..\script_macros.hpp"
/*
	File: fn_vehInvSearch.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Searches the vehicle for illegal items.
*/
private["_vehicle","_vehicleInfo","_value","_list"];
_vehicle = cursorTarget;
_list = ["Air","Ship","LandVehicle"];
closeDialog 0;
if(isNull _vehicle OR {!(KINDOF_ARRAY(_vehicle,_list))}) exitWith {};

_vehicleInfo = _vehicle GVAR ["Trunk",[]];
if(EQUAL(count _vehicleInfo,0)) exitWith {["Error", localize "STR_Cop_VehEmpty"] spawn life_fnc_showPredefinedNotification;};

// Progress
if(life_action_inUse) exitWith {}; 
life_action_inUse = true;
sleep 0.1;
life_interrupted = false;

disableSerialization;

5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_upp = "Fouille en cours...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
_cpRate = 0.015;

if (["searchCopV1"] call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.003;
};

if (["searchCopV2"] call life_fnc_hasPerk) then {
	_cpRate = _cpRate + 0.003;
};

while{true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 0.1;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(player != vehicle player) exitWith {};
	if(life_interrupted) exitWith {};
	if(dialog) exitWith {};
};

//Stop player
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(dialog) exitWith {life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; player playActionNow "stop"; titleText["Fouille Intérompu","PLAIN"]; life_action_inUse = false;};
if(player != vehicle player) exitWith {life_action_inUse = false;};

life_action_inUse = false;

// Fouille

_value = 0;
_illegalValue = 0;
_informer = 0;
_informerG = 0;
_inv = "";
{
	_var = SEL(_x,0);
	_val = SEL(_x,1);

	
	if (_informer == 0 && _var in ["archeTOssements","archeTCasque","archeTUniforme","archeSVin","archeSCoffreB","archeSCoffreT"]) then {
		_informer = 1;
		titleText["Le civil doit avoir la licence d'Archéologie !","PLAIN"];
	};

	_displayName = M_CONFIG(getText,"VirtualItems",_var,"displayName");
	_inv = _inv + format["%1 %2<br/>",_val,(localize _displayName)];

	_isIllegalItem = M_CONFIG(getNumber,"VirtualItems",_var,"illegal");
	if(_isIllegalItem == 1 ) then{
		_illegalPrice = M_CONFIG(getNumber,"VirtualItems",_var,"sellPrice");
		if(!isNull (missionConfigFile >> "VirtualItems" >> _var >> "processedItem")) then {
			_illegalItemProcessed = M_CONFIG(getText,"VirtualItems",_var,"processedItem");
			_illegalPrice = M_CONFIG(getNumber,"VirtualItems",_illegalItemProcessed,"sellPrice");
		};

		_illegalValue = _illegalValue + (round(_val * _illegalPrice));
	};
} foreach (SEL(_vehicleInfo,0));

hint parseText format["<t color='#FFD700'><t size='1.5'><br/>Coffre:</t></t><br/>%1<br/>",_inv];

/*
_value = _illegalValue;
if(_value > 0) then {
	[0,"STR_NOTF_VehContraband",true,[[_value] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
	//ADD(BANK,_value);

	_text = format ["avoir mit la main sur <t color = '#88cc00'>%1$</t> de contrebande",[_value] call life_fnc_numberText];

	gouv_bank_gen = gouv_bank_gen + _value;
	publicVariable "gouv_bank_gen";

	_xp = round (_value / 900);

	if (_xp > 15000) then {_xp = 15000};
	
	["contreband",_xp,200,_text] call life_fnc_eventCopsNear;

	//_vehicle SVAR ["Trunk",[[],0],true];
} else {
	titleText[localize "STR_Cop_NoIllegalVeh","PLAIN"];
};
*/