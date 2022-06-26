/*
	File: fn_transfertVehValid.sqf

	Autor: Iron
	Date: 29 Feb 2020 13:58:58
	Version: 0.1
*/
disableSerialization;

_display = (findDisplay 73400);
_control = (_display displayCtrl 73402);

_curSel = (lbCurSel _control);
_data = _control lbData _curSel;
_price = _control lbValue _curSel;

_index = parseNumber _data;

_veh = life_trans_vehs select _index;
life_trans_vehs = nil;

if (life_atmbank < _price) exitWith {};
closeDialog 0;

if (isNull _veh) exitWith {};

life_trans_veh = _veh;
life_trans_veh_price = _price;

life_trans_players = [];

{
	if ((_x != player) && (isPlayer _x) && (alive _x) && (side _x) == civilian && (life_trans_veh_pnj distance _x) < 10) then {
		if (life_trans_type == "legal") then {
			if ((!([_x] call life_fnc_isInconnue))) then {
				life_trans_players pushBack _x;
			};
		} else {
			life_trans_players pushBack _x;
		};
	};
} forEach allPlayers;

if (count life_trans_players == 0) exitWith {
	["Error", "Aucune personne connue à proximité !"] spawn life_fnc_showPredefinedNotification;
	life_trans_veh = nil;
	life_trans_veh_price = nil;
};

if (!(createDialog "Veh_Trans_Select_Player")) exitWith {};

_display = findDisplay 74400;
_control = _display displayCtrl 74402;

{
	if (!([_x] call life_fnc_isInconnue)) then {
		_control lbAdd format["%1", name _x];
		_control lbSetData [(lbSize _control)-1, ""];
		_control lbSetValue [(lbSize _control)-1, _foreachIndex];
	} else {
		_control lbAdd format["%1 [Distance: %2m]","Inconnue", round(player distance _x)];
		_control lbSetData [(lbSize _control)-1, ""];
		_control lbSetValue [(lbSize _control)-1, _foreachIndex];
	};	
} forEach life_trans_players;