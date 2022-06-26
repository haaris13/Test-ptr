/**
	File: fn_checkFront.sqf
	
	Autor: Iron
*/

if ((player getVariable["rankEu", 0] > 0)) exitWith {

	private _allMarkers = [];

	while {true} do {

		uiSleep 3;

		{
			deleteMarkerLocal _x;
		} forEach _allMarkers;

		_allMarkers = [];

		{
			if (isNull _x) then {
				
			} else {
				_mark = format ["playerFront_%1", str(_x)];
				_allMarkers pushBack _mark;
				_marker = createMarkerLocal [format ["playerFront_%1", str(_x)],[(((floor(((getPos _x select 0))/100))*100)+50),(((floor(((getPos _x select 1))/100))*100)+50)]];
				_marker setMarkerShapeLocal "RECTANGLE";
				_marker setMarkerSizeLocal [50,50];
				_marker setMarkerBrushLocal "Solid";

				_color = switch (side _x) do { 
					case west : {"ColorWEST";};
					case civilian : {"ColorCIV";};
					case independent : {"colorIndependent";};
				};

				_marker setMarkerColorLocal _color;
				_marker setMarkerAlphaLocal 0.6;
			};
			
		} forEach life_front_allPlayers;
	};
};

life_front_pos = [
	[6150,6050],[6950,5950],[7750,5750],[8550,5750],[9350,5750],[10050,5750],[10750,5750],[11450,5750],[12150,5750],[12950,5650],[13550,5750],[14150,5650],[14750,5650],[15350,5650],[5650,6450],[5150,6750],[4650,7050],[4150,7450],[3650,7850],[3150,8150],[2650,8550],[2150,8850],[1550,8950],[850,8950],[50,8950],[-550,8950],[-1050,8950],[15950,5650],[16650,5650],[17150,5650]
];

_inFrontCalc = {

	_inFront = false;
	
	{
		_pos = _x;
		if ((getPos player) inArea [_pos, 500, 500, 0, true]) exitWith {
			_inFront = true;
		};
	} forEach life_front_pos;

	_inFront;
};

life_inFront = false;

while {true} do {
	uiSleep 10;
	_inFrontCall = [] call _inFrontCalc;

	if (!life_inFront) then {
		if (_inFrontCall && (vehicle player != player)) then {
			life_inFront = true;
			{
				if ((_x getVariable ["rankEu", 0]) > 2) then {
					[player, true] remoteExec ["life_fnc_receiveFront", _x];
				};
			} forEach playableUnits;
		};
	} else {
		if (!_inFrontCall) then {
			life_inFront = false;
			{
				if ((_x getVariable ["rankEu", 0]) > 2) then {
					[player, false] remoteExec ["life_fnc_receiveFront", _x];
				};
			} forEach playableUnits;
		};
	};
};