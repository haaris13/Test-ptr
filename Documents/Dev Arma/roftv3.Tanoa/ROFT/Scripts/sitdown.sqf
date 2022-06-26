/*
    
    Description:
    s'asseoir
    Author: Zentiva, Casimodo33
*/


#include "..\..\script_macros.hpp"


private ["_chair","_unit","_randomSit","_sitStyle","_dir"];

_chair = _this select 0;
_unit = _this select 1;
_randomSit = floor(random 5);

if (_unit getVariable ["restrained",false]) exitWith {};
if (_unit getVariable ["isTazed",false]) exitWith {};
if ((player getVariable "sit") == 1) exitWith{hint "Vous êtes déjà assis !"};
if (vehicle _unit != _unit) exitWith { hint "Vous êtes assis ici déjà !!" };
if (_unit distance _chair > 4) exitWith { hint "Vous êtes trop loin !" };
if (!isNull (_chair getVariable ["sitting", objNull])) exitWith { hint "Quelqu'un est déjà assis !"; };
if ([str _chair,"sun"] call KRON_StrInStr) exitWith { hint "Vous ne pouvez pas vous assoir sur cette objet !"; };

switch _randomSit do
{
    case 0: { _sitStyle = "HubSittingChairA_idle1"};
    case 1: { _sitStyle = "HubSittingChairB_idle3"};
    case 2: { _sitStyle = "HubSittingChairC_idle3"};
    case 3: { _sitStyle = "HubSittingChairUA_idle2"};
    case 4: { _sitStyle = "HubSittingChairUB_idle2"};
    case 5: { _sitStyle = "HubSittingChairUC_idle2"};

    default { _sitStyle = "Crew"};
};

_dir = switch (typeOf _chair) do
{
    case "Land_ChairPlastic_F": { 270 };
    case "Land_CampingChair_V1_F": { 180 };
    case "Land_CampingChair_V2_F": { 180 };
    case "Land_ChairWood_F": { 180 };
    case "Land_OfficeChair_01_F": { 180 };
    case "Land_Bench_F": { 90 };
    case "C33_furniture_woodenchairmetallegs": { 180 };
    case "C33_furniture_barstool_brown": { 360 };
    case "C33_furniture_barstool_white": { 360 };
    case "C33_furniture_barstool_grey": { 360 };
    case "C33_furniture_barstool_red": { 360 };
    case "Land_Sofa_01_F": { 270 };
    case "Land_ArmChair_01_F": { 270 };
 
    default { 90 };
};

_posATL = getPosATL _chair;
_obj = "UserTexture1m_F" createVehicle (_posATL);
_obj setPosATL (_posATL);

if ([str _chair,"bench"] call KRON_StrInStr) then
{
    if ([str _chair,"bench_f"] call KRON_StrInStr) then
    {
        _unit setPosATL [getPosATL _chair select 0, getPosATL _chair select 1 , (getPosATL _chair select 2) - 2];
    };
    
    if ([str _chair,"bench_01_f"] call KRON_StrInStr) then
    {
        _unit setPosATL [getPosATL _chair select 0, getPosATL _chair select 1 , (getPosATL _chair select 2) - 0.85];
    };
    
    if ([str _chair,"bench_02_f"] call KRON_StrInStr) then
    {
        _unit setPosATL [getPosATL _chair select 0, getPosATL _chair select 1 , (getPosATL _chair select 2) - 0.85];
    };
} else {
    _unit setPosATL (_posATL);
 
};

_unit setDir ((direction _chair) - _dir);
_chair setVariable ["sitting", _unit, true];
[_unit,_sitStyle] remoteExecCall ["life_fnc_animSync",RCLIENT];
player setVariable ["sit", 1];
standup = _unit addAction ["<t color='#FF0000'>Se lever</t>","ROFT\Scripts\standup.sqf"];
sleep 1;

while {(player getVariable "sit") == 1} do
    {
        if (!alive player) then
        {
            player setVariable ["sit", 0];
        };
    
        if (_unit getVariable ["restrained",false]) then
        {
            player setVariable ["sit", 0];
        };
    
        if(life_istazed) then
        {
            player setVariable ["sit", 0];
        };
    
        if (player distance (getPosATL _obj) > 2) then
        {
            player setVariable ["sit", 0];
            [player,""] remoteExecCall ["life_fnc_animSync",RCLIENT];
            player setVariable ["sit", 0];
            hint "vous êtes trop loin de la chaise";       
        };
    
        sleep 0.2;
    };

_unit removeAction standup;
deleteVehicle _obj;
player setVariable ["sit", 0];
_chair setVariable ["sitting", nil, true];
_sitStyle = nil;
_dir = nil;