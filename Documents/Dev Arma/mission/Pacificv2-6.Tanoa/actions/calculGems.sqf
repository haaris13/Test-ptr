LB_SelectByChance = {
	private ["_in","_randomVal","_range","_index"];
	_in = [_this,0,[],[[]]] call BIS_fnc_param;
	_range = 0;
	{
		_range = _range + (_x select 1);
	} forEach _in;
	_randomVal = round(random _range);

	_int = 0;
	{
		_int = _int + (_x select 1);
		if (_randomVal < _int) exitWith {_index = _forEachIndex};
	}forEach _in;
	_out = (_in select _index) select 0;
	_out;
};

_gems = [["archeSCoffreT",10],
					["archeSCoffreB",40],
					["rien",50]
				];

gemsToAdd = [];

{
	gemsToAdd pushBack [(_x select 0), 0];
} forEach _gems;

for "_i" from 1 to 100000 do {

	_rand = floor random 100;
	_chance = 15;

	if (_rand <= _chance) then {

		_gemToAdded = [_gems] call LB_SelectByChance;

		_find = false;

		{
		  _varGem = _x select 0;
		  _valueGem = _x select 1;

		  if (_varGem isEqualTo _gemToAdded) exitWith {
		  	_find = true;
		  	gemsToAdd set[_forEachIndex, [_gemToAdded, (_valueGem + 1)]];
		  };
		} forEach gemsToAdd;
	};
};

copyToClipboard str(gemsToAdd);