/*
	Montrer carte d'identité
	Auteur : MonsterZen
*/

private["_target","_message"];

_target = cursorTarget;


if (isNull _target) then {_target = player;};
if (!(_target isKindOf "Man")) then {_target = player;};
if (!(alive _target)) then {_target = player;};

_message = format["<img size='10' color='#FFFFFF' image='icons\civ.paa'/><br/><br/><t size='2.5' >%1</t><br/><t size='1'>Citoyen de Pacific Island</t>", name player];  

[player, _message] remoteExec ["life_fnc_IdentityCiv",_target];