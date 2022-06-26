#include "..\..\script_macros.hpp"
private ["_action"];
_kit = param[1];
if(!(vehicle player == player)) exitWith {hint format["Sortez du véhicule! (%1)",name player]};
_unit = cursorTarget;
if (count (_unit getVariable ["vehicle_info_owners", []]) < 1 || !(_unit isKindOf "Car")) exitWith {hint "Vous ne pouvez pas installez de nitro ici.";};

life_action_inUse = true;
_action = [
 format ["Installer un kit Nitro?"],
 "Menu d'interaction du véhicule",
 localize "STR_Global_Yes",
 localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if (_action && ((_unit getVariable["nitro", 0]) < 1)) then {
    disableSerialization;
    "progressBar" cutRsc ["life_progress","PLAIN"];
    private _ui = uiNamespace getVariable "life_progress";
    private _progress = _ui displayCtrl 38201;
    private _pgText = _ui displayCtrl 38202;
    private _upp = 'Installation du kit';
    _pgText ctrlSetText format ["%2 (1%1)...","%",_upp];
    _progress progressSetPosition 0.01;
    private _cP = 0.01;
    private _failed = true;

[player,"instalNos",35,1] remoteExecCall ["life_fnc_say3D",RCLIENT];

    for "_i" from 0 to 1 step 0 do {
    if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
        [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
        player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
        player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
    };
    uiSleep 0.25;
    _cP = _cP + 0.01;
    _progress progressSetPosition _cP;
    _pgText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_upp];
    if (_cP >= 1) exitWith {_failed = false};
    if (!alive player) exitWith {};
    if !(isNull objectParent player) exitWith {};
    if (life_interrupted) exitWith {};
    };
    life_action_inUse = false;
"progressBar" cutText ["","PLAIN"];
player playActionNow "stop";

if (_failed) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
switch (_kit) do { 
    case 1 : {
    [false,"nitro",1] call life_fnc_handleinv;
    _unit setVariable["nitro",1,true];
    hint "Nitro installé!"; 
    }; 
    case 2 : {
    [false,"nitro2",1] call life_fnc_handleinv;
    _unit setVariable["nitro",2,true];
    hint "Nitro V2 installé!"; 
    };
    case 3 : {
    [false,"nitro3",1] call life_fnc_handleinv;
    _unit setVariable["nitro",3,true];
    hint "Nitro V3 installé!"; 
    }; 
    default {
    [false,"nitro",1] call life_fnc_handleinv;
    _unit setVariable["nitro",1,true];
    hint "Nitro installé!"; 
    }; 
};
    
    life_action_inUse = false;
} else {
 hint "Nitro déja installé!";
 closeDialog 0;
 life_action_inUse = false;
};