/*
	File: fn_gouvTaxesPay.sqf

	Autor: IronBlade

	_price = (["illegal_vente", _price] call life_fnc_gouvTaxesPay);
*/
_varPay = [_this,0,"",[""]] call BIS_fnc_param;
_valuePay = [_this,1,0,[0]] call BIS_fnc_param;

if (_valuePay <= 0) exitWith {0};
if (life_playerlevel <= 10) exitWith {_valuePay;};

_curTaxes = ([] call life_fnc_gouvTaxesGet);

_valToPay = 0;
_valToGvn = 0;

{
	_varT = _x select 0;
	_valueT = _x select 1;

	if (_varT == _varPay) exitWith {
		_valToPay = _valuePay + (_valuePay * (_valueT / 100));
		_valToGvn = (_valuePay * (_valueT / 100));
	};
} forEach _curTaxes;

_valToGvn = round _valToGvn;
_valToPay = round _valToPay;

[player, _valToGvn] remoteExecCall ["TON_fnc_gouvTaxesPay", 2];

_valToPay;