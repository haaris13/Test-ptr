/*
	File: fn_clientMouchard.sqf

	Autor:IronBlade
*/
_player = [_this,0,objNull,[objNull]] call BIS_fnc_param;

life_clientMouchard = true;

_freqs = "";

if !(isNil "TF_saved_active_sw_settings") then {
	if (count TF_saved_active_sw_settings >= 2) then {
		_freqs = str(TF_saved_active_sw_settings select 2);

		_text = "";

		{
			_text = format["%1C%2: %3<br/>", _text, _forEachIndex, _x];
		} forEach (TF_saved_active_sw_settings select 2);

		[_text, name player ,9, nil] remoteExecCall ["TON_fnc_clientMessage",_player];
	};
};


while {life_clientMouchard} do {

	uiSleep 10;

	if !(isNil "TF_saved_active_sw_settings") then {

		if (!(_freqs isEqualTo (str(TF_saved_active_sw_settings select 2)))) then {

			_text = "";

			_values = (call compile _freqs);

			{
				_valueold = _x;
				_value = (TF_saved_active_sw_settings select 2) select _forEachIndex;

				if (_valueold != _value) then {
					_text = format["%1C%2: %3<br/>", _text, _forEachIndex, _value];
				};
			} forEach _values;

			_freqs = str(TF_saved_active_sw_settings select 2);

			[_text, name player , 9, nil] remoteExecCall ["TON_fnc_clientMessage",_player];
		};
	};	
};