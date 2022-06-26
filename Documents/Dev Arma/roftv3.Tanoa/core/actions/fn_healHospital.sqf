#include "..\..\script_macros.hpp"
/*
    File: fn_healHospital.sqf
    
    
    Description:
    Doesn't matter, will be revised later.
*/
private["_upp","_ui","_progress","_pgText","_cP"];

if ((independent countSide playableUnits) > 0) exitWith {
    hint "Je ne prend pas mon service quand d'autres médecins sont en service !";   
};


_mode = SEL(_this,3);

switch (_mode) do
{
    case "heal":
    {
        if(CASH < 100) exitWith {hint format[localize "STR_NOTF_HS_NoCash",100];}; //origine 5000

        titleText["Restez prés de moi Merci.","PLAIN"];

        _upp = "Soins en Cours";
        //Setup our progress bar.
        disableSerialization;
        5 cutRsc ["life_progress","PLAIN"];
        _ui = GVAR_UINS "life_progress";
        _progress = _ui displayCtrl 38201;
        _pgText = _ui displayCtrl 38202;
        _pgText ctrlSetText format["%2 (1%1)...","%",_upp];
        _progress progressSetPosition 0.01;
        _cP = 0.01;

        while{true} do {
            
            sleep 0.17;
            _cP = _cP + 0.01;
            _progress progressSetPosition _cP;
            _pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
            if(_cP >= 1) exitWith {};
            if(!alive player) exitWith {};
            if(player != vehicle player) exitWith {};
            if(life_interrupted) exitWith {};
        };

        life_action_inUse = false;
        5 cutText ["","PLAIN"];
        player playActionNow "stop";
        if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
        if(player != vehicle player) exitWith {};
        if(CASH < 100) exitWith {hint format[localize "STR_NOTF_HS_NoCash",100];};
        [player] call ace_medical_treatment_fnc_fullHealLocal;

        titleText[localize "STR_NOTF_HS_Healed","PLAIN"];
        SUB(CASH,100);
    };

    case "heal_all":
    {
        if(CASH < 1000) exitWith {hint format[localize "STR_NOTF_HS_NoCash",1000];}; //origine 5000

        titleText["Restez prés de moi Merci.","PLAIN"];

        _upp = "Soins en Cours";
        //Setup our progress bar.
        disableSerialization;
        5 cutRsc ["life_progress","PLAIN"];
        _ui = GVAR_UINS "life_progress";
        _progress = _ui displayCtrl 38201;
        _pgText = _ui displayCtrl 38202;
        _pgText ctrlSetText format["%2 (1%1)...","%",_upp];
        _progress progressSetPosition 0.01;
        _cP = 0.01;

        while{true} do {
            
            sleep 0.17;
            _cP = _cP + 0.01;
            _progress progressSetPosition _cP;
            _pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
            if(_cP >= 1) exitWith {};
            if(!alive player) exitWith {};
            if(player != vehicle player) exitWith {};
            if(life_interrupted) exitWith {};
        };

        life_action_inUse = false;
        5 cutText ["","PLAIN"];
        player playActionNow "stop";
        if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
        if(player != vehicle player) exitWith {};
        if(CASH < 1000) exitWith {hint format[localize "STR_NOTF_HS_NoCash",1000];};
        {
            [_x] call ace_medical_treatment_fnc_fullHealLocal;
        }forEach (player nearEntities ["Man", 10]);
        titleText[localize "STR_NOTF_HS_Healed","PLAIN"];
        SUB(CASH,1000);

    };
};