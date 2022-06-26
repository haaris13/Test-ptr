#include "..\..\script_macros.hpp"
/*
	Open Bank
*/

if (player distance getPos coffre_bank > 5) exitWith {
 	hint "Vous étes trop loin du coffre de la fédérale !";
};

if({side _x == west} count playableUnits < (LIFE_SETTINGS(getNumber,"cops_online_min")) && life_debug == 0) exitWith {
 	hint format [localize "STR_Civ_NotEnoughCops",(LIFE_SETTINGS(getNumber,"cops_online_min"))]
};

if (coffre_bank getVariable ["open",false]) exitWith {
	hint "Le coffre est déja ouvert";
};

if (offre_bank getVariable ["chargeplaced",false]) exitWith {
	hint "Une charge a déja été placé";
};

if(!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith {
	hint "Il vous faut un explosif !";
};

if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
	[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];

	player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
};

sleep 2;

player playActionNow "stop";

coffre_bank setVariable ["chargeplaced",true,true];

["Une charge de dynamite a été placé sur le coffre des réserves fédérales, Vous avez jusqu'au temps imparti pour désarmorcer la charge!"] remoteExecCall ["life_fnc_dynamicText",west];

hint localize "STR_ISTR_Blast_KeepOff";

_handle = [] spawn life_fnc_demoChargeTimer;
[] remoteExec ["life_fnc_demoChargeTimer",west];

waitUntil {scriptDone _handle};
sleep 0.9;
if(!(coffre_bank getVariable["chargeplaced",false])) exitWith {hint localize "STR_ISTR_Blast_Disarmed"};

_bomb = "GrenadeHand" createVehicle [getPosATL coffre_bank select 0, getPosATL coffre_bank select 1, (getPosATL coffre_bank select 2)+0.5];
coffre_bank setVariable ["chargeplaced",false,true];
coffre_bank setVariable ["open",true,true];

hint localize "STR_ISTR_Blast_Opened";