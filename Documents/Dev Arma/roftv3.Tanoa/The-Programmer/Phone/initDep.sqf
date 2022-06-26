/*
_null=this execVM "The-Programmer\Phone\initDep.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction[(["STR_ADDACTION_TAKE_DEP","Max_Settings_Phone","Phone_Localization"] call theprogrammer_core_fnc_localize),{[4] spawn max_phone_fnc_takeCalls;},"",0,false,false,"",'!(player getVariable "getCalls_dep") && missionNamespace getVariable [getText(missionConfigFile >> "Max_Settings_Phone" >> "licence_depanneurs"),false]'];
_this addAction[(["STR_ADDACTION_LET_DEP","Max_Settings_Phone","Phone_Localization"] call theprogrammer_core_fnc_localize),{[5] spawn max_phone_fnc_takeCalls;},"",0,false,false,"",'(player getVariable "getCalls_dep") && missionNamespace getVariable [getText(missionConfigFile >> "Max_Settings_Phone" >> "licence_depanneurs"),false]'];