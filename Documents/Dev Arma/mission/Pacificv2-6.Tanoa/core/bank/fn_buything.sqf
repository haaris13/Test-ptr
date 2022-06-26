/*
	name: fn_buything.sqf


	Autor: IronBlade
*/
_price = _this select 0;
_nb = _this select 1;

if (life_banck_amount == 25000000) exitWith {};

life_banck_amount = life_banck_amount + floor (_price * _nb);

if (life_banck_amount > 25000000) then {
	life_banck_amount = 25000000;
};

//publicVariable "life_banck_amount";