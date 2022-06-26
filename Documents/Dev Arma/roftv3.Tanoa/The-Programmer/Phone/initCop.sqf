/*
_null=this execVM "The-Programmer\Phone\initCop.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction[(["STR_ADDACTION_TAKE_17","Max_Settings_Phone","Phone_Localization"] call theprogrammer_core_fnc_localize),{[0] spawn max_phone_fnc_takeCalls;},"",0,false,false,"",'!(player getVariable "getCalls_17") && playerSide == west'];
_this addAction[(["STR_ADDACTION_LET_17","Max_Settings_Phone","Phone_Localization"] call theprogrammer_core_fnc_localize),{[1] spawn max_phone_fnc_takeCalls;},"",0,false,false,"",'(player getVariable "getCalls_17") && playerSide == west'];