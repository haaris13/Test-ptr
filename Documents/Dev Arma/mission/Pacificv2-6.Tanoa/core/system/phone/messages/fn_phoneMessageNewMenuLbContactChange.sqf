/*


*/
_control = _this select 0;
_index = _this select 1;
_lbData = (_control lbData _index);

_display = findDisplay 24400;
_selectionContact = _display displayCtrl 24401;

_numberTitle = _display displayCtrl 24404;
_numberEdit = _display displayCtrl 24402;

if (_lbData == "Number") then {
	_numberTitle ctrlShow true;
	_numberEdit ctrlShow true;
} else {
	_numberTitle ctrlShow false;
	_numberEdit ctrlShow false;		
};