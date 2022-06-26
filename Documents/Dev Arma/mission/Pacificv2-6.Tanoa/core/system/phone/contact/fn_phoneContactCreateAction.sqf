/*
	File: fn_phoneContactCreateAction.sqf

	Autor: Iron
*/
disableSerialization;

_idPhone = life_phone select 0;

_display = (findDisplay 24200);
_contactList = (_display displayCtrl 24202);
_contactInfo = (_display displayCtrl 24203);
_removeButton = (_display displayCtrl 24204);

_nameContactEdit = (_display displayCtrl 24206);
_numberContactEdit = (_display displayCtrl 24207);

_txtContactName = ctrlText _nameContactEdit;
_txtContactNumber = ctrlText _numberContactEdit;


_lengthName = count (toArray(_txtContactName));
_chrByteName = toArray (_txtContactName);
_allowedName = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789àéè$ù%çêâ ");

if (_lengthName == 0) exitWith {["Error", "Aucun nom."] spawn life_fnc_showPredefinedNotification;};
if(_lengthName > 20) exitWith {["Error", "Le nom du contact est trop grand, 20 maximum."] spawn life_fnc_showPredefinedNotification;};
_badCharName = false;
{if(!(_x in _allowedName)) exitWith {_badCharName = true;};} foreach _chrByteName;
if(_badCharName) exitWith {["Error", "Le nom du contact contient des caracères interdit."] spawn life_fnc_showPredefinedNotification;};

_lengthNumber = count (toArray(_txtContactNumber));
_chrByteNumber = toArray (_txtContactNumber);
_allowedNumber = toArray("0123456789");

if (_lengthNumber == 0) exitWith {["Error", "Aucun numéro."] spawn life_fnc_showPredefinedNotification;};
if(_lengthNumber > 10) exitWith {["Error", "Le numéro du contact est trop grand."] spawn life_fnc_showPredefinedNotification;};
_badCharNumber = false;
{if(!(_x in _allowedNumber)) exitWith {_badCharNumber = true;};} foreach _chrByteNumber;
if(_badCharNumber) exitWith {["Error", "Le numéro du contact contient des caracères interdit."] spawn life_fnc_showPredefinedNotification;};

[player, _idPhone, [_txtContactName, _txtContactNumber]] remoteExec ["TON_fnc_phoneCreateContact", 2];

_nameContactEdit ctrlSetText "";
_numberContactEdit ctrlSetText "";