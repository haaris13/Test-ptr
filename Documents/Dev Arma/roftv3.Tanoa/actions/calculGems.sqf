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

_gems = [

			["redruby_uncut",1],
			["grandidierite_uncut",2],
			["diamond_uncut",3],
			["ruby_uncut",4],
			["emerald_uncut",5],
			["sapphire_uncut",6],
			["amethyst_uncut",15],
			["topaz_uncut",20],
			["aquamarine_uncut",30],
			["amber_uncut",35],
			["jade_uncut",40],
			["grenat_uncut",45],
			["moonlightstone_uncut",55],
			["tigereye_uncut",65],
			["quartz_uncut",75]
		];

gemsToAdd = [];

{
	gemsToAdd pushBack [(_x select 0), 0];
} forEach _gems;

for "_i" from 1 to 10000 do {
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

copyToClipboard str(gemsToAdd);