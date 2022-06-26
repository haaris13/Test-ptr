/*
	File: fn_gearClearRadio.sqf

	Autor: Iron
*/
private["_array", "_side"];
_array = [_this,0,[],[[]]] call BIS_fnc_param;
_side = [_this,1,civilian,[civilian]] call BIS_fnc_param;

_arrayFix = [];

{
    _item = _x;
    _added = false;

    if (typeName _item == "STRING") then {
    	if (_item find "tf_radio_civ" >= 0) then {
	        _arrayFix pushBack "tf_radio_civ";
	        _added = true;
	    };

	    if (_item find "tf_radio_reb" >= 0) then {
	        _arrayFix pushBack "tf_radio_reb";
	        _added = true;
	    };

	    if (_item find "tf_radio_gen" >= 0) then {
		    if (_side == west) then {
		    	_arrayFix pushBack "tf_radio_gen";
		    } else {
		    	_arrayFix pushBack "tf_radio_civ";
			};
	        _added = true;
	    };

	    if (_item find "tf_radio_fed" >= 0) then {
	    	if (_side == west) then {
		    	_arrayFix pushBack "tf_radio_fed";
		    } else {
		    	_arrayFix pushBack "tf_radio_civ";
			};
	        _added = true;
	    };

	    if (_item find "tf_radio_med" >= 0) then {
	    	if (_side == independent) then {
		    	_arrayFix pushBack "tf_radio_med";
		    } else {
		    	_arrayFix pushBack "tf_radio_civ";
			};
	        _added = true;
	    };
    };    

    if (!_added) then {
        _arrayFix pushBack _item;
    };
} forEach _array;

_arrayFix;