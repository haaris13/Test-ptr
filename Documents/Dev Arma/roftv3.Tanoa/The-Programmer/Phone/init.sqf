/*
_null=this execVM "The-Programmer\Phone\init.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction[(["STR_SHOP","Max_Settings_Phone","Phone_Localization"] call theprogrammer_core_fnc_localize), {createDialog "boutique_orange";}];