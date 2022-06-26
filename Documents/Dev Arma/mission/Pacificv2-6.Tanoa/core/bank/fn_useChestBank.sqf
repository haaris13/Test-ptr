/*

	Open chest

*/

_opp = coffre_bank getVariable ["open",false];

if (!_opp) exitWith {
["Error", "Le coffre est pas ouvert !"] spawn life_fnc_showPredefinedNotification;
};

if((time - life_action_delay) < 2) exitWith {};
life_action_delay = time;

if (life_banck_amount < 1) exitWith {["Error", "La Banque est vide."] spawn life_fnc_showPredefinedNotification;};

coffre_bank setVariable ["uidOpen",getPlayerUID player,true];

sleep (random 3);

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

if (coffre_bank getVariable ["uidOpen",""] != getPlayerUID player) exitWith {["Error", "Une seule personne a la fois !"] spawn life_fnc_showPredefinedNotification;};

_val = 0;

if (life_banck_amount < 500000) then {
	_val = life_banck_amount;
} else {
	_val = 500000;
};

life_banck_amount = life_banck_amount - _val;

publicVariable "life_banck_amount";

life_cash = life_cash + _val;
["Error", format ["Vous avez récupéré %1 $",_val]] spawn life_fnc_showPredefinedNotification;