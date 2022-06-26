/*
	File: fn_depanLaunchBalise.sqf

	Autor: IronBlade
*/

_vehicle = (vehicle player);

if (life_balise_depan_active) exitWith {
	hint "Balise Déja lancé !";
};

life_balise_depan_active = true;

{
	_var = _x getVariable ["rankErp", 0];

	if (_var > 0 && vest _x == "GiletFluoDepan") then {
		[player, _vehicle] remoteExec ["life_fnc_depanReceiveBalise", _x];
	};

} forEach allPlayers;


[] spawn {

	hint "Balise Lancé !";

	uiSleep 60;	
	life_balise_depan_active = false;
};