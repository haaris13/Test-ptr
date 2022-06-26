#include "..\..\script_macros.hpp"

_victime = param[0];

if (!(playerSide == independent)) exitWith {
    hint "J'ai besoin d'un medecin!";
};
_prime = 2000;  
disableSerialization;
"progressBar" cutRsc ["life_progress","PLAIN"];
private _ui = uiNamespace getVariable "life_progress";
private _progress = _ui displayCtrl 38201;
private _pgText = _ui displayCtrl 38202;
private _upp = 'Soins';
_pgText ctrlSetText format ["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
private _cP = 0.01;
private _failed = true;

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

["TaskSucceeded",["","Félicitation vous avez secouru la victime"]] call bis_fnc_showNotification;

BANK = BANK + _prime;
_victime hideObject true;
deleteMarkerLocal urgence;
