/*
_null=this execVM "The-Programmer\KeyTransfer\init.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction[(["STR_ADDACTION_MENU","Max_Settings_GiveVehicle","KeyTransfer_Localization"] call theprogrammer_core_fnc_localize), {createDialog "Max_KeyTransfer_Menu";},"",0,false,false,"",'(playerSide isEqualTo civilian)'];
