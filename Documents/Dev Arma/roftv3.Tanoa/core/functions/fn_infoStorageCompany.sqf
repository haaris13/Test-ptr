/*
    Author: Maxence for The Programmer Forum
    Modification: Zomblard (mise en forme du message)
*/
_entreprise = cursorObject getVariable ["company_object",objNull];
if (isNull _entreprise) exitWith {hint "Un problème s'est produit, veuillez mieux viser le panneau.";};

_structuredResult = "";
_structuredResult = _structuredResult + "<t align = 'center' size='2' color='#2980B9' font='PuristaBold'>Commun :</t>";

{
    _name = getText (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "displayName");
    _icon = getText (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "icon");
    _val = (_x select 1);

    if (_val > 0) then {
        _structuredResult = _structuredResult + format ["<br/><t align = 'center' size='1' color='#FFFFFF' font='PuristaBold'>- %2 </t><img size='1' image='%3'/><t align = 'center' size='1' color='#FFFFFF' font='PuristaBold'> %1</t>",(localize _name),_val,_icon];
    };
} forEach (_entreprise getVariable ["entreprise_items",[]]);

_structuredResult = _structuredResult + "<br/><br/><t align = 'center' size='2' color='#2980B9' font='PuristaBold'>Privé :</t>";

{
    _name = getText (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "displayName");
    _icon = getText (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "icon");
    _val = (_x select 1);

    if (_val > 0) then {
        _structuredResult = _structuredResult + format ["<br/><t align = 'center' size='1' color='#FFFFFF' font='PuristaBold'>- %2 </t><img size='1' image='%3'/><t align = 'center' size='1' color='#FFFFFF' font='PuristaBold'> %1</t>",(localize _name),_val,_icon];
    };
} forEach (_entreprise getVariable ["entreprise_items_2",[]]);

hint parseText _structuredResult;