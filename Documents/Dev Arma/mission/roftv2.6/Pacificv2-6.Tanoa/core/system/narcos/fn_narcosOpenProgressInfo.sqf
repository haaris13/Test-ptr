/*
	File: fn_narcosOpenProgressInfo.sqf

	Autor: Iron
	Date: 25 Mar 2020 23:25:10
	Version: 0.1
*/
private ["_step"];
_step = _this select 0;

disableSerialization;
createDialog "Narcos_Progress_Info";

_cfgStep = (missionConfigFile >> "CfgNarcos" >> "Steps" >> _step);

//-- Get data
_displayText = getText(_cfgStep >> "displayName");
_descriptionText = getText(_cfgStep >> "description");
_unlocks = getArray(_cfgStep >> "unlock");

_description = format["<br/>" +
	"<t color='#316dff'>Etape:</t><t size = '1'> %1</t><br/>" +
	"<t size = '0.9'>%2</t><br/>" +
	"<br/>" +
	"<t color='#316dff'>Débloque:</t><t size = '1'> %3 Eléments</t><br/>",
	_displayText,
	_descriptionText,
	(count _unlocks)
];

{
	_description = format["%1<t color='#b2ec00'>%2x %3</t><br/>", _description, (_x select 0), (_x select 1)];
} forEach _unlocks;

_display = findDisplay 12900;
_displayCtrl = _display displayCtrl 12901;

_displayCtrl ctrlSetStructuredText parseText _description;
