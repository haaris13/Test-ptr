/*

	Open chest

*/

_opp = coffre_bank getVariable ["open",false];

if (!_opp) exitWith {
	hint "Le coffre est pas ouvert !";
};

if((time - life_action_delay) < 2) exitWith {};
life_action_delay = time;

if (life_banck_amount < 1) exitWith {hint "La Banque est vide.."};

coffre_bank setVariable ["uidOpen",getPlayerUID player,true];

sleep (random 3);

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

if (coffre_bank getVariable ["uidOpen",""] != getPlayerUID player) exitWith { hint "Une seule personne a la fois !"};

_val = 0;

if (life_banck_amount < 500000) then {
	_val = life_banck_amount;
} else {
	_val = 500000;
};

life_banck_amount = life_banck_amount - _val;

publicVariable "life_banck_amount";

life_cash = life_cash + _val;

hint format ["Vous avez récupéré %1 $",_val];