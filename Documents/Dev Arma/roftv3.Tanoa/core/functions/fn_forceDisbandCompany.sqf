/*
    Author: Maxence for The Programmer Forum
*/
_entreprise = cursorObject getVariable ["company_object",objNull];
if (isNull _entreprise) exitWith {hint "Un problème s'est produit, veuillez mieux viser le panneau.";};

_action = [
    "Vous êtes sur le point de supprimer définitivement cette entreprise. Êtes vous sûr ?",
    "Suppression de l'entreprise",
    "Oui",
    "Non"
] call BIS_fnc_guiMessage;

if !(_action) exitWith {};

_id = _entreprise getVariable ["entreprise_id",0];
if (_id isEqualTo 0) exitWith {};

[(_entreprise getVariable ["entreprise_id",0]),2,0] remoteExecCall ["max_entreprise_fnc_updateEntreprise",2];

maxence_all_entreprises deleteAt (maxence_all_entreprises find [_id,_entreprise]);
publicVariable "maxence_all_entreprises";

_marker = _entreprise getVariable ["entreprise_position",""];
if !(_marker isEqualTo "") then {
    _markerVar = getText (missionConfigFile >> "Max_Settings_Entreprise" >> "positions_entreprises" >> _marker >> "markerVar");
    _markerVar setMarkerAlpha 0;
};

_members = _entreprise getVariable ["entreprise_members",[]];

if ((count _members) > 0) then {
    {
        _curCheck = _x;
        {
            if ((getPlayerUID _curCheck) isEqualTo (_x select 0)) then {
                [player,_entreprise] remoteExecCall ["max_entreprise_fnc_entrepriseBeKicked",_curCheck];
            };
        } forEach _members;
    } forEach playableUnits;
};

{
    if (_x isEqualType objNull) then {
        deleteVehicle _x;
    } else {
        deleteMarker _x;
    };
} forEach (_entreprise getVariable ["entreprise_objects",[]]);

hint format ["Vous avez définitivement supprimer l'entreprise %1.",(_entreprise getVariable ["entreprise_name",""])];
deleteVehicle _entreprise;