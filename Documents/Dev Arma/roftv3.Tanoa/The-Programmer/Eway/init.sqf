/*
_null=this execVM "The-Programmer\Eway\init.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction [(["STR_EWAY_ADDACTION","Max_Settings_Ebay","Eway_Localization"] call theprogrammer_core_fnc_localize),{[] spawn maxence_eway_fnc_openEway}];