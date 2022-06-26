/*
	_null=this execVM "The-Programmer\Advanced_Insurance\initInsurance.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction [(["STR_INSURANCE","The_Programmer_AdvancedInsure","Advanced_Insurance_Localization"] call theprogrammer_core_fnc_localize),{createDialog "The_Programmer_AdvancedInsurance_MainMenu";}];