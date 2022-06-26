/*
	Name: sitDown

	this addAction ["<t color='#0099FF'>S asseoir</t>","life_fnc_sitDown","",0,false,false,"",'player distance _target < 2 && !(_target getVariable["occupied",false]) && isNil "life_sitting_chair" && isNil "life_action_standup"'];

	_chair = cursorObject;
	_unit = player;
*/
_chair = _this select 0; 
_unit = _this select 1;
_chair setVariable["occupied",true,true];

[[player,"Crew"],"life_fnc_animSync",true,false] spawn life_fnc_MP;
waitUntil {animationState player == "crew"};

_unit setPos (getPosATL _chair);
_unit setDir ((getDir _chair) - 180); 

life_action_standup = _unit addaction ["<t color='#0099FF'>Se lever</t>",life_fnc_standUp];

life_sitting_chair = _chair;
_unit setposatl [getPosATL _unit select 0, getPosATL _unit select 1, ((getPosATL _unit select 2))];

// hideObjectGlobal