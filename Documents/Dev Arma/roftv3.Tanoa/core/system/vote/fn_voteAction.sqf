/*
	File: fn_voteAtion.sqf

	Autor: IronBlade
*/

_display = (findDisplay 71500);
_list = (_display displayCtrl 71502);

if (lbCurSel _list == -1) exitWith {hint "Aucune Séléction !"};
_uid = _list lbData (lbCurSel _list);

[1, player, _uid] remoteExec ["TON_fnc_voteActionDB", 2];

life_vote_action = true;
closeDialog 0;