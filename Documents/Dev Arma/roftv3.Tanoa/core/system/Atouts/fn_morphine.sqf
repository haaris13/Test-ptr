/*
	File:fn_morphine.sqf

	Autor:IronBlade
*/

0 = ["ColorCorrections", 1500, [
	1, 
	0.4, 
	0, 
	0, 0, 0, 0, 
	1, 1, 1, 0, 
	1, 1, 1, 0
]] spawn {
	params ["_name", "_priority", "_effect", "_handle"];
	while {
		_handle = ppEffectCreate [_name, _priority];
		_handle < 0
	} do {
		_priority = _priority + 1;
	};
	_handle ppEffectEnable true;
	_handle ppEffectAdjust _effect;
	_handle ppEffectCommit 5;
	waitUntil {ppEffectCommitted _handle};
	uiSleep 3;

	_handle ppEffectAdjust [
		1, 
		1, 
		0, 
		0, 0, 0, 0, 
		1, 1, 1, 1, 
		0.299, 0.587, 0.114, 0
	];
	_handle ppEffectCommit 5;
	waitUntil {ppEffectCommitted _handle};

	uiSleep 3;

	_handle ppEffectEnable false;
	ppEffectDestroy _handle;
};

if (life_bledout) then {

	life_bledout_time = life_bledout_time + (2 * 60);

	_damage = 0.8;

	player setDamage _damage;
};

hint "Un coup de morphine ça fait du bien !";