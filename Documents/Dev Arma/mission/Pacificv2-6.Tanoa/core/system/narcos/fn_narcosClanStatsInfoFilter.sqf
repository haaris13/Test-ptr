/*
	File: fn_narcosClanStatsInfoFilter.sqf

	Autor: Iron
	Date: 25 Mar 2020 23:17:31
	Version: 0.1
*/

private ["_ctrlListNBox","_itemWeight","_itemDisplay","_itemPrice","_type","_ctrlFilterRow","_ctrlListNBox","_ctrlSearchEdit","_searchedText","_itemPourcent"]; //modif
_type = _this select 0;

disableserialization;

_display = findDisplay 29100;
_ctrlTitle = _display displayCtrl 29110;
_ctrlFilterRow = _display displayCtrl 29101;
_ctrlListNBox = _display displayCtrl 29102;
_ctrlSearchEdit = _display displayCtrl 29103;

_searchValue = (toUpper ctrlText _ctrlSearchEdit);

switch (_type) do {
	
	case "search" : {

		["refresh"] call life_fnc_narcosClanStatsInfoFilter;
	};
	
	case "refresh" : {

		lnbClear _ctrlListNBox;
		_currentRow = 0;
		{
			_line = _x;

			_clanName = _x select 0;
			_amount = _x select 1;
			_last = _x select 2;

			_find = false;
			if ((toUpper _clanName) find _searchValue != -1) then {
				_find = true;
			};

			if (_searchValue == "") then {
				_find = true;
			};

			if (_find) then {

				_amount = format["%1$", [_amount] call life_fnc_numberText];
				_pos = format ["%1", _currentRow + 1];

				_ctrlListNBox lnbAddRow [_pos, _clanName, _amount, _last];
				_currentRow = _currentRow + 1;
			};

		} forEach life_fnc_narcos_stats_content;
		_ctrlListNBox lnbSetCurSelRow -1;
	};

	default {};
};