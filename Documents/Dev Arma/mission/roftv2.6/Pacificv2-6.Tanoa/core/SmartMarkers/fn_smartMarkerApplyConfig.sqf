/*
	File: fn_smartMarkerApplyConfig.sqf

	Autor: Iron
	Date: 04 Apr 2020 16:50:10
	Version: 0.1
*/
private ["_marker", "_className", "_type", "_size", "_color", "_alpha", "_text"];
_marker = [_this,0,"",[""]] call BIS_fnc_param;
_className = [_this,1,"",[""]] call BIS_fnc_param;
_type = [_this,2,"",[""]] call BIS_fnc_param;
_size = [_this,3,[1, 1],[[]]] call BIS_fnc_param;
_color = [_this,4,"",[""]] call BIS_fnc_param;
_alpha = [_this,5,1,[0]] call BIS_fnc_param;
_text = [_this,6,"",[""]] call BIS_fnc_param;

switch (_className) do { 
	case "MarkerIconBackground" : {
		_marker setMarkerShapeLocal "ICON";
		_marker setMarkerTypeLocal _type;
		_marker setMarkerSizeLocal _size;
	 	_marker setMarkerColorLocal _color;
		_marker setMarkerAlphaLocal _alpha;
	};

	case "MarkerIcon" : {
		_marker setMarkerShapeLocal "ICON";
		_marker setMarkerTypeLocal _type;
		_marker setMarkerSizeLocal _size;
	  	_marker setMarkerColorLocal _color;
		_marker setMarkerAlphaLocal _alpha;
	};

	case "MarkerText" : {
		_marker setMarkerShapeLocal "ICON";
		_marker setMarkerTypeLocal "mil_box";
		_marker setMarkerSizeLocal [0,0];
		_marker setMarkerAlphaLocal _alpha;
	  	_marker setMarkerColorLocal _color;
	  	_marker setMarkerTextLocal "     " + _text;
	};

	default {}; 
};