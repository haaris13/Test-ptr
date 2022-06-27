/*
	File: fn_gouvLoisLbMod.sqf

	Autor: IronBlade
*/

disableSerialization;
_display = findDisplay 9600;

_list = (_display displayCtrl 9601);
_info = (_display displayCtrl 9602);

_curSel = lbCurSel _list;
if (_curSel == -1) exitWith {};

_index = _list lbValue _curSel;

_curLois = (gouv_lois_list select _index);

_info ctrlSetStructuredText parseText format [
		"<t color='#003366' size='2' align='center'>Lois<br/><br/></t>" +
		"<t color='#4C7093' align='left' size='1'>Titre: <t color='#ffffff'>%1</t></t><br/><br/>" +
		"<t align='left' size='0.8'>%2</t><br/><br/>",
		(_curLois select 1),
		(_curLois select 2)
];