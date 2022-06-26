/*
    @autor:RAK0S
    @server:payordie.fr
    @file:fn_checkPlayerName.sqf
    @description:script de gestion des noms RP
    @conception:conception sous forme d'une machine a etat fini avec 5 etats
    expresion reguliere associé :
    X(x)*(-X(x)*)?( X(x)*(-X(x)*)?)?( X(x)*(-X(x)*)?)?( X(x)*(-X(x)*)?)?
*/
 
_playerName = name player;
_chrByte = toArray (_playerName);
_alpha="abcdefghijklmnopqrstuvwxyzéèàâêùûëîïôöäç";
_lettre=toArray(_alpha);
_maj=toArray(toUpper(_alpha));
_dash=(toArray('-')) select 0;
_space=(toArray(' ')) select 0;
//nom banni
_banName=["Hitler","Himler","Indiana Jones","Luke Cage"];
 
 
_i=0;
_nSpace=2;
_etat=0;
_fin=false;
while{_etat>=0&&_nSpace>=0&&!_fin}do
{  
    if((_chrByte select _i)==_space)then{_nSpace=_nSpace-1;};
    switch(_etat)do
    {
       
        case 0: {if(_chrByte select _i in _maj)then{_etat=1;}else{_etat=-1;};};
       
        case 1: {
                    if(_chrByte select _i in _lettre) then
                    {_etat=1;}
                    else
                    {
                        switch(_chrByte select _i)do
                        {
                            case _dash:{_etat=2;};
                            case _space:{_etat=4;};
                            default {_etat=-1;};
                        };
                    };
                };
        case 2: {
                    if(_chrByte select _i in _maj)then{_etat=3}else{_etat=-1};};
        case 3: {if(_chrByte select _i in _lettre)then{_etat=3}else
                    {if(_chrByte select _i==_space)then{_etat=4;}else{_etat=-1};};};
        case 4: {if(_chrByte select _i in _maj)then{_etat=1;}else{_etat=-1};};
        default {["Error", "testName _etat non conforme"] spawn life_fnc_showPredefinedNotification;};
        
    };
    _i=_i+1;
    if(_i>count _playerName -1)then{_fin=true;}
};
 
 
_ret="";
if(_etat<0)then
{
    for "_j" from 0 to (count _chrByte)do
    {
        if(_j==_i-1)then
        {
            _ret=_ret+"["+toString([(_chrByte select _j)])+"]";
        }
        else
        {
            _ret=_ret+toString([(_chrByte select _j)]);
        };
    };
 
};
 
if(_nSpace==2)then{_ret="Prénom Nom"};
if(_nSpace==-1)then{_ret="Trop d'espace"};
 
{
	if((_playerName find _x)!=-1)then{_etat=-1;_ret="Nom ["+_x+"] Banni";};
} foreach _banName;
 
 
 
 
if(_etat != 1 && _etat != 3) then
{
    uiSleep 30;

	0 cutText[format["Erreur Nom: %1", _ret], "BLACK FADED"];
	0 cutFadeOut 9999999;

	uiSleep 300;
    ["BADNAME",false,true] call BIS_fnc_endMission; // Bad Fail Mission
    sleep 35;
};