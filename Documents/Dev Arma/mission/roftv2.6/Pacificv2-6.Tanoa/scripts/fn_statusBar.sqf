if (isServer) exitWith {};
waituntil {!alive player ; !isnull (finddisplay 46)};
disableSerialization;
/*
	File: fn_statusBar.sqf
	Author: Some French Guy named Osef I presume, given the variable on the status bar
	Edited by: [midgetgrimm]
	Description: Puts a small bar in the bottom right of screen to display in-game information

*/
4 cutRsc ["osefStatusBar","PLAIN"];

[] spawn {
	sleep 5;
	_counter = 180;
	_timeSinceLastUpdate = 0;
	_pos = "Inconnue";
	while {true} do
	{
		sleep 1;
		_counter = _counter - 1;

		if (isNil "life_xpTowardsNext") then {
			[] call life_fnc_checkXP;
		};

		if ((life_xpTowardsNext isEqualTo 0) OR (life_xpForNext isEqualTo 0)) then {
			[] call life_fnc_checkXP;
		};

		if (_counter <= 0) then {

			_counter = 10;

			_pos = [position player, false, true] call life_fnc_getNearLocation;

			if (player getVariable ["cagoule",false]) then {
				_pos = "Inconnue";
			};
		};

		_xpText = format ["%1 (%2/%3)",life_playerlevel,life_xpTowardsNext,life_xpForNext];

		if (isNull (uiNamespace getVariable ["osefStatusBar",displayNull])) then {
			4 cutRsc ["osefStatusBar","PLAIN"];
		};

		((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetText format["%8 | Niveau: %7 | FPS: %1 | Civils: %3 | Médecins: %4 | Cash: %5 | Banque: %6 |           " , round diag_fps, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits ,[life_cash] call life_fnc_numberText,[life_atmbank] call life_fnc_numberText, _xpText, _pos];
	};
};