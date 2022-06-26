/*
    _null=this execVM "The-Programmer\Advanced_Insurance\initSell.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction [(["STR_RESELL","The_Programmer_AdvancedInsure","Advanced_Insurance_Localization"] call theprogrammer_core_fnc_localize),{[] spawn advanced_insurance_fnc_vehicleResellMenu},"",0,false,false,"",'(playerSide isEqualTo civilian)'];