/*
	File: fn_papierMenuCreateOpen.sqf

	Autor:IronBlade
*/


disableSerialization;

createDialog "Dialog_paper_create";

_display = (findDisplay 8400);
_textEdit = (_display displayCtrl 8301);
_title = (_display displayCtrl 8402);
_sign = (_display displayCtrl 8406);

_textEdit ctrlSetText "";
_title ctrlSetText "";