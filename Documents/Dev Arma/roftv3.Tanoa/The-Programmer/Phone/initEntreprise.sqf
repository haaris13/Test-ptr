/*
_null=this execVM "The-Programmer\Phone\initEntreprise.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction[(["STR_ADDACTION_TAKE_ENTREPRISE","Max_Settings_Phone","Phone_Localization"] call theprogrammer_core_fnc_localize),{[6,"entreprise1"] spawn max_phone_fnc_takeCalls;},"",0,false,false,"",''];
_this addAction[(["STR_ADDACTION_LET_ENTREPRISE","Max_Settings_Phone","Phone_Localization"] call theprogrammer_core_fnc_localize),{[7,"entreprise1"] spawn max_phone_fnc_takeCalls;},"",0,false,false,"",''];