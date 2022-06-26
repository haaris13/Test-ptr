/**
	File: fn_receiveFront.sqf
	
	Autor: Iron
*/
_player = [_this,0, objNull,[objNull]] call BIS_fnc_param;
_bool = [_this,1, false,[false]] call BIS_fnc_param;

if (_bool) then {
	life_front_allPlayers pushBack _player;

	if (side _player == west) then
	{
		["AlertFront",[format["Alert Frontiére Passage Police Nord !"]]] call BIS_fnc_showNotification;
	} else {

		if (((group _player) getVariable ["clan_id", -1]) == 15 && (uniform _player) in ["Clan1", "Clan2", "Clan3"]) then {
			["AlertFront",[format["Alert Frontiére Passage Police Sud !"]]] call BIS_fnc_showNotification;
		} else {
			["AlertFront",[format["Alert Frontiére Passage !"]]] call BIS_fnc_showNotification;
		};
	};

} else {
	life_front_allPlayers deleteAt (life_front_allPlayers find _player);
};