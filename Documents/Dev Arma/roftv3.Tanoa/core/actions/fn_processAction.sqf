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
_prof = M_CONFIG(getText,"Processing",_type,"Profession");
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

if (_exit) exitWith {life_is_processing = false; life_action_inUse = false;  hint "Vous ne disposez pas de suffisamment d'item pour traiter !"; };

//License Stuff
/*_hasLicense = LICENSE_VALUE(_type,"civ");
if(_type in ["tropicalCharpente","parcCharpente","parcTonnerie","tropicalTonnerie"]) then {
    _hasLicense = LICENSE_VALUE("forestiere","civ");
};*/
_hasLicense = true;  // Authorise toutes les personnes qui on le perks industriel de pouvoir les utiliser sur tous les traitements !

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
    hint format["ERREUR config transformation ! nouveau poids:%1, ancien poids:%2", _newItemWeight, _oldItemWeight];
    // =======  Mise en commentaire car fait de la dupli à suivre ce problème (si nouveau poids > à l'ancien poids ======
    /*_netChange = _newItemWeight - _oldItemWeight;
    _freeSpace = life_maxWeight - life_carryWeight;
    if (_freeSpace < _netChange) exitWith {_exit = true;};
    _minimumConversions = floor(_freeSpace / _netChange);
    */
};

if (_exit) exitWith {hint localize "STR_Process_Weight"; life_is_processing = false; life_action_inUse = false;};
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

_cpRate = 0.010;
if (["processor"] call life_fnc_hasPerk) then {
    _cpRate = _cpRate + 0.0025;
};
if (["processor1"] call life_fnc_hasPerk) then {
    _cpRate = _cpRate + 0.005;
};

if (["spaceCake"] call life_fnc_hasAtouts) then {
    _cpRate = _cpRate + 0.002;
};

life_is_processing = true;

if (_hasLicense) then {

    // Emmett : Déplacement de la ligne 114 à ici pour éviter les duplie
    {[false,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv;} count _oldItem;

    for "_i" from 0 to 1 step 0 do {
        sleep  0.28;
        _cP = _cP + _cpRate;
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
        if (_cP >= 1) exitWith {};
        if (player distance _vendor > 10) exitWith {};
    };

    if (player distance _vendor > 10) exitWith {hint "Vous étes parti trop loin"; 5 cutText ["","PLAIN"]; life_is_processing = false; life_action_inUse = false;};

    //Remove old item(s), add new one
    //{[false,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv;} count _oldItem;
    {[true,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv;} count _newItem;
    if (["doubleurT"] call life_fnc_hasPerk) then {
        if (random 1 < 0.1) then {
            {[true,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv;} count _newItem;   
        };
    };
    5 cutText ["","PLAIN"];
    if (_minimumConversions isEqualTo (_totalConversions call BIS_fnc_lowestNum)) then {hint localize "STR_NOTF_ItemProcess";} else {hint localize "STR_Process_Partial";};
    ["process"] call life_fnc_addXP;
    life_is_processing = false; 
    life_action_inUse = false;
} else {

    if (CASH < _totalCost) exitWith {hint format[localize "STR_Process_License",[_totalCost] call life_fnc_numberText]; 5 cutText ["","PLAIN"]; life_is_processing = false; life_action_inUse = false;};

    // Emmett : Déplacement de la ligne 149 à ici pour éviter les duplie
    {[false,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv; } count _oldItem;

    for "_i" from 0 to 1 step 0 do {
        sleep  0.6;
        _cP = _cP + 0.01;
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
        if (_cP >= 1) exitWith {};
        if (player distance _vendor > 10) exitWith {};
    };

    if (player distance _vendor > 10) exitWith {hint localize "STR_Process_Stay"; 5 cutText ["","PLAIN"]; life_is_processing = false; life_action_inUse = false;};
    if (CASH < _totalCost) exitWith {hint format[localize "STR_Process_License",[_totalCost] call life_fnc_numberText]; 5 cutText ["","PLAIN"]; life_is_processing = false; life_action_inUse = false;};

    //Remove old item(s), add new one
    {[true,(_x select 0),((_x select 1)*(_minimumConversions))] call life_fnc_handleInv;} count _newItem;

    5 cutText ["","PLAIN"];
    if (_minimumConversions isEqualTo (_totalConversions call BIS_fnc_lowestNum)) then {hint localize "STR_NOTF_ItemProcess";} else {hint localize "STR_Process_Partial";};
    CASH = CASH - _totalCost;
    ["process"] call life_fnc_addXP;
    life_is_processing = false;
    life_action_inUse = false;
    if (_prof == "prof_livraison") then {
      ["prof_livraison",1,100] call life_fnc_levelProfession;
    };
};

["Farm","Process",false] spawn life_fnc_showHelp;