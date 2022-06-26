/*
_null=this execVM "The-Programmer\Phone\initEast.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction[(["STR_ADDACTION_TAKE_EAST","Max_Settings_Phone","Phone_Localization"] call theprogrammer_core_fnc_localize),{[8] spawn max_phone_fnc_takeCalls;},"",0,false,false,"",'!(player getVariable "getCalls_east") && playerSide == east'];
_this addAction[(["STR_ADDACTION_LET_EAST","Max_Settings_Phone","Phone_Localization"] call theprogrammer_core_fnc_localize),{[9] spawn max_phone_fnc_takeCalls;},"",0,false,false,"",'(player getVariable "getCalls_east") && playerSide == east'];