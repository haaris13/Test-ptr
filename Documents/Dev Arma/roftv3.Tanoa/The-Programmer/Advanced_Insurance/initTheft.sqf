/*
    _null=this execVM "The-Programmer\Advanced_Insurance\initTheft.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction [(["STR_THEFT","The_Programmer_AdvancedInsure","Advanced_Insurance_Localization"] call theprogrammer_core_fnc_localize),{[] spawn advanced_insurance_fnc_vehicleTheftMenu},"",0,false,false,"",'(playerSide isEqualTo civilian)'];