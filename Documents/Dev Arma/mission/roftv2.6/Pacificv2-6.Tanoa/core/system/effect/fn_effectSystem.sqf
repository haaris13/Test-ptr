/*
	File: fn_effectSystem.sqf

	Autor: Iron
*/

[] spawn life_fnc_effectScuba;

life_effect_item_active = false;
life_effect_item_class = "";

_class = (missionConfigFile >> "CfgEffect" >> "Items");

while {true} do {
	uiSleep 0.4;

	if (life_effect_item_active) then {
		if (!(alive player)) exitWith {
			life_effect_item_active = false;
			life_effect_item_class = "";
			("effectItemLayer" call BIS_fnc_rscLayer) cutText ["","PLAIN"];
		};

		if ((goggles player) != life_effect_item_class && (headgear player) != life_effect_item_class) then {
			life_effect_item_active = false;
			life_effect_item_class = "";
			("effectItemLayer" call BIS_fnc_rscLayer) cutText ["","PLAIN"];
		};
	} else {

		_goggles = (goggles player);
		_headgear = (headgear player);

		if (_goggles != "" && isClass (_class >> "Goggles" >> _goggles)) exitWith {
			life_effect_item_active = true;
			life_effect_item_class = _goggles;

			_effect = getText(_class >> "Goggles" >> _goggles >> "effect");
			("effectItemLayer" call BIS_fnc_rscLayer) cutRsc [_effect,"PLAIN"];
		};

		if (_headgear != "" && isClass (_class >> "Headgear" >> _headgear)) exitWith {
			life_effect_item_active = true;
			life_effect_item_class = _headgear;

			_effect = getText(_class >> "Goggles" >> _headgear >> "effect");
			("effectItemLayer" call BIS_fnc_rscLayer) cutRsc [_effect,"PLAIN"];
		};
	};
};
