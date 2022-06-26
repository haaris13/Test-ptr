/*
_null=this execVM "The-Programmer\Phone\initMed.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction[(["STR_ADDACTION_TAKE_18","Max_Settings_Phone","Phone_Localization"] call theprogrammer_core_fnc_localize),{[2] spawn max_phone_fnc_takeCalls;},"",0,false,false,"",'!(player getVariable "getCalls_18") && playerSide == independent'];
_this addAction[(["STR_ADDACTION_LET_18","Max_Settings_Phone","Phone_Localization"] call theprogrammer_core_fnc_localize),{[3] spawn max_phone_fnc_takeCalls;},"",0,false,false,"",'(player getVariable "getCalls_18") && playerSide == independent'];
