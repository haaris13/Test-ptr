/*
file: Fn_barrierGUI.sqf
Author:  MonsterZen
*/
disableSerialization;
_display = (findDisplay 1705);
_barrierlist = _display displayCtrl 2686;

_barrierlistarray = 
[
"Limitation 30",
"Limitation 50",
"Barrière barrage",
"Barrière simple",
"Barrière triple",
"Cône simple",
"Cône drapeau",
"Cône flash",
"Cône quadruple",
"Danger",
"Déviation droite",
"Déviation gauche",
"Direction droite",
"Direction gauche",
"Fin d'interdiction",
"Interdit dépasser",
"Halte Police",
"Rétrecissement",
"Route barrée",
"Sens interdit",
"Travaux",
"Triflash accident",
"Triflash danger",
"Spot Lumineux"
];

lbclear _barrierlist;
{
_barrierlist lbAdd _x;
}foreach _barrierlistarray;

