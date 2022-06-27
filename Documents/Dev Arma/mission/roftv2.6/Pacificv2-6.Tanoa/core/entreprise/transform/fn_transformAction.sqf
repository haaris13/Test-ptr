#include "..\..\..\script_macros.hpp"
/*
    File: fn_transformAction.sqf
        
    Author: IronBlade
    
*/
_vendor = life_vendortarget;
_type = CONTROL_DATA(18001);
_id = CONTROL_VALUE(18001);

_entreprises = "true" configClasses (missionconfigFile >> "CfgEntreprise"); 

_entID = "";
{  
    _val = getNumber(_x >> "id");
    if (_val == _id) then {
        _entID = getText(_x >> "variable");
    };

} forEach _entreprises;

_totalCost = 0;
//Error check
if(isNull _vendor OR EQUAL(_type,"") OR (player distance _vendor > 10)) exitWith {};

_oldItem = getArray(missionconfigFile >> "CfgEntreprise" >> _entID >> "Processing" >> _type >> "Required");
_newItem = getArray(missionconfigFile >> "CfgEntreprise" >> _entID >> "Processing" >> _type >> "Given");
_upp = getText(missionconfigFile >> "CfgEntreprise" >> _entID >> "Processing" >> _type >> "Text");

//Error checking
if((EQUAL(count _oldItem,0)) || (EQUAL(count _newItem,0))) exitWith {};

_exit = false;
_totalConversions = [];
_need = [];
{
    _var = ITEM_VALUE(_x select 0);
    if (_var isEqualTo 0) exitWith {_exit = true; _need pushBack [_x select 0, (_x select 1)];}; //Would process your raw mats into nothing
    if (_var < (_x select 1)) exitWith {_exit = true; _need pushBack [_x select 0, (_x select 1) - _var];}; //You have less than required?
    _totalConversions pushBack (floor (_var/(_x select 1)));

} forEach _oldItem;

if (_exit) exitWith {
    life_is_processing = false;
    life_action_inUse = false;

    _text = "";
    {

        _variable = _x select 0;
        _nb = _x select 1;

        _text = _text + format["%1 [x%2] <br/>", localize getText(missionConfigFile >> "VirtualItems" >> _variable >> "displayName"), _nb];
    } forEach _need;

    ["Error", parseText format["<t color='#FF0000'><t size='1.5'>Vous ne disposez pas de suffisamment d'item pour traiter !</t></t><br/><t color='#FFD700'><t size='1.1'><br/>Manque:</t></t><br/>%1<br/>",_text]] spawn life_fnc_showPredefinedNotification;
};


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
    _netChange = _newItemWeight - _oldItemWeight;
    _freeSpace = life_maxWeight - life_carryWeight;
    if (_freeSpace < _netChange) exitWith {_exit = true;};
    _minimumConversions = floor(_freeSpace / _netChange);
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

_cpRate = 0.008;

if (["processor"] call life_fnc_hasPerk) then {
    _cpRate = _cpRate + 0.001;
};

if (["processorV2"] call life_fnc_hasPerk) then {
    _cpRate = _cpRate + 0.001;
};

life_is_processing = true;

while {true} do {
    sleep  0.2;
    _cP = _cP + _cpRate;
    _progress progressSetPosition _cP;
    _pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
    if (_cP >= 1) exitWith {};
    if (player distance _vendor > 10) exitWith {};
};
if (player distance _vendor > 10) exitWith {["Error", "Vous êtes parti trop loin"] spawn life_fnc_showPredefinedNotification; 5 cutText ["","PLAIN"]; life_is_processing = false; life_action_inUse = false;};

//Remove old item(s), add new one
{[false,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv;} count _oldItem;
{[true,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv;} count _newItem;

5 cutText ["","PLAIN"];
if (_minimumConversions isEqualTo (_totalConversions call BIS_fnc_lowestNum)) then {
        ["Accepted", localize "STR_NOTF_ItemProcess"] spawn life_fnc_showPredefinedNotification;
    } else {
        ["Warning", localize "STR_Process_Partial"] spawn life_fnc_showPredefinedNotification;
    };
["process"] call life_fnc_addXP;
life_is_processing = false; 
life_action_inUse = false;