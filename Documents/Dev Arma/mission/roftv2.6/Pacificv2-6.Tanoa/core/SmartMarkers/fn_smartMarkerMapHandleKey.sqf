/*



*/
_key = [_this,0,"",[""]] call BIS_fnc_param;

if (_key == "MouseButtonDown") then {
	smart_marker_settings_right_click = true;
} else {
	smart_marker_settings_right_click = false;
};