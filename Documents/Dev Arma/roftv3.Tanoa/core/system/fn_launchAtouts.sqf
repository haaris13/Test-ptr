/*
	File:fn_launchAtouts.sqf

	Autor:IronBlade

	Params:
		Type -> Launch
		!Type -> UnLaunch
*/
_var = [_this,0,"",[""]] call BIS_fnc_param;
_type = [_this,1,false,[false]] call BIS_fnc_param;

if (_var == "") exitWith {};

if (_type) then {

	if ([_var] call life_fnc_hasAtouts) exitWith {};

	_timeEnd = time + (getNumber(missionConfigFile >> "Atouts" >> _var >> "duree") * 60);

	life_atouts_actif pushBack [_var, time, _timeEnd];

	switch (_var) do { 
		case "glaceFolle" : {
			[false] spawn life_fnc_reloadBackpack;
		};

		case "paela" : {
			["paela"] spawn life_fnc_reductFatigue;
		};

		case "sake" : {
			[false] spawn life_fnc_reloadBackpack;
		};

		case "morphine" : {
			[] spawn life_fnc_morphine;
		};

		default {}; 
	};

	["Atouts",_var,true] spawn life_fnc_showHelp;

} else {

	if (!([_var] call life_fnc_hasAtouts)) exitWith {};

	switch ( _var) do { 
		case "glaceFolle" : {
			[false] spawn life_fnc_reloadBackpack;
		};
		
		case "sake" : {
			[false] spawn life_fnc_reloadBackpack;
		};

		default {};
	};

	hint format ["Fin de l'effet: %1", getText(missionConfigFile >> "Atouts" >> _var >> "title")];
};