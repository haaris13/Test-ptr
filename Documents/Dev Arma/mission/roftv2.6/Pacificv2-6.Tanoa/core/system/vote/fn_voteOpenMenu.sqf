/*
	File: fn_voteOpenMenu.sqf

	Autor:IronBlade
*/
if (life_vote_action) exitWith {};

disableSerialization;
createDialog "Dialog_gouv_vote";

_display = (findDisplay 71500);
_list = (_display displayCtrl 71502);


{
	_uid = (_x select 0);
	_name = (_x select 1);

	_index = (_list lbAdd _name);
	_list lbSetData [_index, _uid];

} forEach life_vote_candid;