/*
	File: fn_bankPlaceCharge.sqf

	Autor: Iron
	Date: 01 Apr 2020 20:45:44
	Version: 0.1
*/
	
_pos = [7384.41,7894.36,0.00143886];

if (player distance _pos > 10) exitWith {};
if(!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith {}; //Error?

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

_pos = position player;

_charge = createMine ["SatchelCharge_F", [_pos select 0, _pos select 1, 0.3], [], 0];
player addOwnedMine _charge;

[player, "BankPlaceCharge"] remoteExec ["TON_fnc_insertBraquagesLogs", 2];