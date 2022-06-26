/*
Mettre ça dans l'init de l'objet

this addAction ["Vérouiller/Dévérouiller", "core\cop\fn_LockCop.sqf","",0,false,false,"","side player isEqualTo WEST"];
this setVariable ["lockedDoor",true];
this setVariable ["BIS_Disabled_Door_1",1,true];
this setVariable ["BIS_Disabled_Door_2",1,true];
this allowDamage false;

*/

if !(side player isEqualTo WEST) exitWith {}; // Seul les policier peuvent ouvrir

_door = _this select 0;

_door2 = _door getVariable "lockedDoor";
if (_door2 isEqualTo true) then
{
    _door setVariable ["BIS_Disabled_Door_1",0,true];
    _door setVariable ["BIS_Disabled_Door_2",0,true];
    _door setVariable ["lockedDoor",false];
    hint "La porte est dévérouillée";
} else {
    _door setVariable ["BIS_Disabled_Door_1",1,true];
    _door setVariable ["BIS_Disabled_Door_2",1,true];
    _door setVariable ["lockedDoor",true];
    hint "La porte est vérouillée";
};