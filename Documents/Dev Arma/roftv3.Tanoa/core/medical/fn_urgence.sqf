#include "..\..\script_macros.hpp"

private ["_arrayVictime","_select","_arrayName", "_name", "_pos"];
if (!(playerSide == independent)) exitWith {
	hint "vous ne pouvez acceder à cette mission";
};

_arrayVictime = ["victime_1","victime_2","victime_3","victime_4","victime_5","victime_6","victime_7","victime_8","victime_9","victime_10","victime_11","victime_12","victime_13","victime_14"];
_select = _arrayVictime call BIS_fnc_selectRandom;
switch ( _select) do { 
	case "victime_1" : {  _name = Ugo; };  
	case "victime_2" : {  _name = Paolo; };  
	case "victime_3" : {  _name = Massimo; };  
	case "victime_4" : {  _name = Daniel; };  
	case "victime_5" : {  _name = Maurice; };  
	case "victime_6" : {  _name = Bertrand; };  
	case "victime_7" : {  _name = Haris; };  
	case "victime_8" : {  _name = Harry; };  
	case "victime_9" : {  _name = Hagrid; };  
	case "victime_10" : {  _name = John; };  
	case "victime_11" : {  _name = Allan; };  
	case "victime_12" : {  _name = Hakim; };  
	case "victime_13" : {  _name = Pablo; };  
	case "victime_14" : {  _name = Mathieu; }; 
};

_pos = getMarkerPos _select;
urgence = createMarkerLocal [format["Urgence"], _pos];
urgence setMarkerColorLocal "ColorRed";
urgence setMarkerTypeLocal "Mil_dot";
urgence setMarkerTextLocal format["Victime: %1",_name];

hint format ["Va vite porter secours à %1 qui est en danger, sa position est notée sur ta carte !",_name];
_name hideObject false;
