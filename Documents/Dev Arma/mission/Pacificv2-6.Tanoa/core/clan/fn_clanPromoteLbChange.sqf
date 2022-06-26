#include "..\..\script_macros.hpp"
/*
	File: fn_clanPromoteLbChange.sqf

	Autor: IronBlade
*/

disableSerialization;

_listPromote = CONTROL(6600, 6602);
_button = CONTROL(6600, 6601);
_info = CONTROL(6600, 6604);

_group = group player;

if ((lbCurSel _listPromote) == -1) exitWith {_button ctrlEnable false;};
if (isNil {_group getVariable "clan_id"}) exitWith {closeDialog 0;};

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgRank = (_cfgClan >> "Rank");
_cfgRight = (_cfgClan >> "Right");

_data = _listPromote lbData (lbCurSel _listPromote);
_value = _listPromote lbValue (lbCurSel _listPromote);

_cfgCurrent = (_cfgRank >> _data);

_name = getText(_cfgCurrent >> "displayName");
_canDo = getArray(_cfgCurrent >> "canDo");

_textCanDo = "<t size='0.75'>";

{
	_displayName = getText(_cfgRight >> _x >> "displayName");

	_textCanDo = format["%2%1<br/>", _displayName, _textCanDo];

	if (_x == "promotePlayer") then {
		_canPromote = getArray(_cfgCurrent >> "canPromote");

		_textCanDo = format["%1Grades: ",_textCanDo];

		{
			_textCanDo = format["%1, %2", _textCanDo, _x];
		} forEach _canPromote;

		_textCanDo = format["%1<br/>", _textCanDo];
	};

} forEach _canDo;

_textCanDo = format["%1</t>", _textCanDo];

_info ctrlSetStructuredText parseText format [
	"<t size='0.8'>" +
	"Information Grade: " + "<br/>" +
	"Nom: %1" + "<br/>" +
	"Permissions: " + "<br/>" +
	"%2" + "</t>",
	_name,
	_textCanDo
];

if (_value == 1) then {
	_button ctrlEnable true;
} else {
	_button ctrlEnable false;
};