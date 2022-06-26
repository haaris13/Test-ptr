#include "..\..\script_macros.hpp"
/*

 Name: Radar

 Autor: IronBlade

*/

if (!(vehicle player isKindOf "Ship")) exitWith {hint "Le sonar doit étre équipé a bord d'un bateau !"};
if (life_use_radar) exitWith
{
	life_use_radar = false;
	hint "Radar désactivé !";
};

_porte = 1500;

if (["chasseur"] call life_fnc_hasPerk) then {
	hint "Sonar activé ! Le sonar a une porté de 1.6km !";
	_porte = 1600;
} else {
	hint "Sonar activé ! Le sonar a une porté de 1.2km !";
	_porte = 1200;
};



_getTime = {
	_value = 0;
	_distance = (player distance2D life_current_explorer_wreck);

	_value = switch (true) do { 
		case (_distance >= 2000) : {5};
		case (_distance >= 1000) : {_distance / 350};
		case (_distance >= 50) : {_distance / 450};
		case (_distance >= 0) : {0.1};
	};

    _value;
};

life_use_radar = true;

while {life_use_radar} do
{
	sleep ([] call _getTime);
	if ( ((player distance2D life_current_explorer_wreck) <= _porte) && life_current_explorer_wreck != objNull && ((getPosASL player select 2) <= 2)) then {
		playsound "Radar";
	};

	if (!(vehicle player isKindOf "Ship")) exitWith {
		hint "Sonar désactivé, Le sonar fonctionne uniquement dans un bateau !";
		life_use_radar = false;
	};

	if (ITEM_VALUE("radar") isEqualTo 0) exitWith {
		hint "Vous n'avez plus de sonar !";
		life_use_radar = false;
	};

	if (((getPosASL player select 2) > 4)) exitWith {
		hint "Sonar désactivé, Le sonar fonctionne uniquement dans un bateau !";
		life_use_radar = false;
	};
};

life_use_radar = false;