/*
	File: fn_camModifyPos.sqf

	Autor:IronBlade
*/
_inc = _this select 0;
_type = _this select 1;
_cam = _this select 2;



switch (_type) do {
	case 1 : {

		_pitchbank = _cam call bis_fnc_getpitchbank;

		_pitchbank set[0, (_pitchbank select 0) + _inc];
		([_cam] + _pitchbank) call bis_fnc_setpitchbank;
	};

	case 2 : {

		_dir = ((direction _cam) + _inc);

		if (_dir > 360) then {_dir  = 0;};
		if (_dir < 0) then {_dir  = 360;};

		_cam setDir _dir;
		_pitchbank = _cam call bis_fnc_getpitchbank;
		([_cam] + _pitchbank) call bis_fnc_setpitchbank;
	};
};