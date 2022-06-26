/*
_null=this execVM "The-Programmer\Repair_system\init.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction [(["STR_take_job","The_Programmer_RepairSystem","Vehicle_RepairSystem_Localization"] call theprogrammer_core_fnc_localize),{[] call TheProgrammer_fnc_RepairTakeJob},"",0,false,false,"",'',5];
