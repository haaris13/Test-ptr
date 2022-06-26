/*
	File:fn_clanDeletePlayers.sqf

	Autor:IronBlade
*/
private "_group";
_group = param [0,grpNull,[grpNull]];
if(isNull _group) exitWith {};
	
if(!isNull (findDisplay 6400)) then {closedialog 6400};

hint localize "STR_GNOTF_DisbandWarn_2";
[player] joinSilent (createGroup civilian);

if(count units _group == 0) then {
	deleteGroup _group;
};