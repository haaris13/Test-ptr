#include "..\..\script_macros.hpp"
/*
    File: fn_processAction.sqf
        
    Author: Tonic, IronBlade
*/
private["_totalCost","_exit","_vendor","_type","_itemInfo","_oldItem","_newItem","_cost","_upp","_hasLicense","_itemName","_oldVal","_ui","_progress","_pgText","_cP","_cpRate"];
_vendor = life_vendortarget;
_type = CONTROL_DATA(16001);
_price = CONTROL_VALUE(16001);
_totalCost = 0;
//Error check
if(isNull _vendor OR EQUAL(_type,"") OR (player distance _vendor > 10)) exitWith {};

_oldItem = M_CONFIG(getArray,"Processing",_type,"Required");
_newItem = M_CONFIG(getArray,"Processing",_type,"Given");
_cost = M_CONFIG(getNumber,"Processing",_type,"Cost");
_upp = M_CONFIG(getText,"Processing",_type,"Text");
_illegal = M_CONFIG(getNumber,"Processing",_type,"illegal");

_requirement = getText(missionConfigFile >> "Processing" >> _type >> "marker");

if (_requirement != "" && !(_requirement in life_markers_zone_visible_cfg)) exitWith {
    ["Error", "Ah non ! Vous ne pouvez pas faire ça !"] spawn life_fnc_showPredefinedNotification;
};

//Error checking
if((EQUAL(count _oldItem,0)) || (EQUAL(count _newItem,0))) exitWith {};

_exit = false;
_totalConversions = [];
{
    _var = ITEM_VALUE(_x select 0);
    if (_var isEqualTo 0) exitWith {_exit = true;}; //Would process your raw mats into nothing
    if (_var < (_x select 1)) exitWith {_exit = true;}; //You have less than required?
    _totalConversions pushBack (floor (_var/(_x select 1)));

    _totalCost = _totalCost + (_cost * _var);

} forEach _oldItem;

life_action_inUse = true;

if (_exit) exitWith {life_is_processing = false; life_action_inUse = false; ["Error", "Vous ne disposez pas de suffisamment d'objets pour traiter !"] spawn life_fnc_showPredefinedNotification;};

//License Stuff

_hasLicense = LICENSE_VALUE(_type,"civ");

_minimumConversions = _totalConversions call BIS_fnc_lowestNum;
_oldItemWeight = 0;
{
    _weight = ([_x select 0] call life_fnc_itemWeight) * (_x select 1);
    _oldItemWeight = _oldItemWeight + _weight;
} count _oldItem;

_newItemWeight = 0;
{
    _weight = ([_x select 0] call life_fnc_itemWeight) * (_x select 1);
    _newItemWeight = _newItemWeight + _weight;
} count _newItem;

_exit = false;

if (_newItemWeight > _oldItemWeight) then {

    _exit = true;

    // Dont Work:
    /*_netChange = _newItemWeight - _oldItemWeight;
    _freeSpace = life_maxWeight - life_carryWeight;
    if (_freeSpace < _netChange) exitWith {_exit = true;};
    _minimumConversions = floor(_freeSpace / _netChange);*/
};

if (_exit) exitWith {["Error", localize "STR_Process_Weight"] spawn life_fnc_showPredefinedNotification; life_is_processing = false; life_action_inUse = false;};
//Close Shop dialog
closeDialog 0;

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

_cpRate = 0.01;

if (_illegal == 0 && ["processLegalV1"] call life_fnc_hasPerk) then {
    _cpRate = _cpRate * 1.1;
};

if (_illegal == 0 && ["processLegalV2"] call life_fnc_hasPerk) then {
    _cpRate = _cpRate * 1.1;
};

if (_illegal == 1 && ["processNoLegalV1"] call life_fnc_hasPerk) then {
    _cpRate = _cpRate * 1.1;
};

if (_illegal == 1 && ["processNoLegalV2"] call life_fnc_hasPerk) then {
    _cpRate = _cpRate * 1.1;
};

if (_illegal == 1 && ["blunt2"] call life_fnc_hasAtouts) then {
    _cpRate = _cpRate * 1.5;
};

life_is_processing = true;

if (_hasLicense) then {

    for "_i" from 0 to 1 step 0 do {
        sleep  0.28;
        _cP = _cP + _cpRate;
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
        if (_cP >= 1) exitWith {};
        if (player distance _vendor > 10) exitWith {};
    };

    if (player distance _vendor > 10) exitWith {["Error", "Vous êtes parti trop loin"] spawn life_fnc_showPredefinedNotification; 5 cutText ["","PLAIN"]; life_is_processing = false; life_action_inUse = false;};

    _nbToRemove = 0;

    //Remove old item(s), add new one
    {
        _nbToRemove = _nbToRemove + ((_x select 1)*(_minimumConversions));
        [false,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv;
    } count _oldItem;

    {[true,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv;} count _newItem;

    5 cutText ["","PLAIN"];
    if (_minimumConversions isEqualTo (_totalConversions call BIS_fnc_lowestNum)) then {
        ["Accepted", localize "STR_NOTF_ItemProcess"] spawn life_fnc_showPredefinedNotification;
    } else {
        ["Warning", localize "STR_Process_Partial"] spawn life_fnc_showPredefinedNotification;
    };
    
    life_is_processing = false;
    life_action_inUse = false;

    _level = [_type, _nbToRemove] call life_fnc_getLevelByProcess;
    _level call life_fnc_levelProfession;
} else {

    if (CASH < _totalCost) exitWith {["Error", format[localize "STR_Process_License",[_totalCost] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification; 5 cutText ["","PLAIN"]; life_is_processing = false; life_action_inUse = false;};

    for "_i" from 0 to 1 step 0 do {
        sleep  0.6;
        _cP = _cP + _cpRate;
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
        if (_cP >= 1) exitWith {};
        if (player distance _vendor > 10) exitWith {};
    };

    if (player distance _vendor > 10) exitWith {["Error", localize "STR_Process_Stay"] spawn life_fnc_showPredefinedNotification; 5 cutText ["","PLAIN"]; life_is_processing = false; life_action_inUse = false;};
    if (CASH < _totalCost) exitWith {["Error", format[localize "STR_Process_License",[_totalCost] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification; 5 cutText ["","PLAIN"]; life_is_processing = false; life_action_inUse = false;};

    _nbToRemove = 0;

    //Remove old item(s), add new one
    {
        _nbToRemove = _nbToRemove + ((_x select 1)*(_minimumConversions));
        [false,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv;
    } count _oldItem;

    {[true,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv;} count _newItem;

    5 cutText ["","PLAIN"];
    if (_minimumConversions isEqualTo (_totalConversions call BIS_fnc_lowestNum)) then {
            ["Accepted", localize "STR_NOTF_ItemProcess"] spawn life_fnc_showPredefinedNotification;
        } else {
            ["Error", localize "STR_Process_Partial"] spawn life_fnc_showPredefinedNotification;
        };
    CASH = CASH - _totalCost;
    life_is_processing = false;
    life_action_inUse = false;

    _level = [_type, _nbToRemove] call life_fnc_getLevelByProcess;
    _level call life_fnc_levelProfession;
};

["Farm","Process",false] spawn life_fnc_showHelp;