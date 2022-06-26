/*
	File:fn_showHelp.sqf

	Autor:IronBlade

	["Common", "GPS"]
	[["Common", "GPS"], 15,"",35,"",true,false,false,true] call BIS_fnc_advHint;
*/
_type = [_this,0,"",[""]] call BIS_fnc_param;
_class = [_this,1,"",[""]] call BIS_fnc_param;
_onlyFullHint = [_this,2,false,[false]] call BIS_fnc_param;

if (_type == "" || _class == "") exitWith {};

if (!life_help_active) exitWith {};

if (!isClass (missionconfigfile >> "CfgHints" >> _type >> _class)) exitWith {};

if ((getNumber(missionconfigfile >> "CfgHints" >> _type >> _class >> "multipleShow") == 0) && (_class in life_list_help)) exitWith {};

life_list_help pushBack _class;

[[_type, _class], 15,"",35,"",true,_onlyFullHint,false,true] call BIS_fnc_advHint;