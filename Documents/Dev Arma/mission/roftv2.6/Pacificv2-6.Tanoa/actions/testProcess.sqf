[] spawn {

	_oldItem = [["itemOld", 2]];
	_newItem = [["itemNew", 1]];

	_exit = false;
	_totalConversions = [];
	{
	    _var = 2;
	    if (_var isEqualTo 0) exitWith {_exit = true;};
	    if (_var < (_x select 1)) exitWith {_exit = true;};
	    _totalConversions pushBack (floor (_var/(_x select 1)));
	} forEach _oldItem;

	_minimumConversions = _totalConversions call BIS_fnc_lowestNum;
	diag_log format["1: _minimumConversions: %1", _minimumConversions];

	_oldItemWeight = 0;
	{
	    _weight = (10 * (_x select 1));
	    _oldItemWeight = _oldItemWeight + _weight;
	} count _oldItem;

	_newItemWeight = 0;
	{
	    _weight = (5 * (_x select 1));
	    _newItemWeight = _newItemWeight + _weight;
	} count _newItem;

	if (_newItemWeight > _oldItemWeight) then {
	    _netChange = _newItemWeight - _oldItemWeight;
		diag_log format["_netChange: %1", _netChange];

	    _freeSpace = 100 - 20;
	    if (_freeSpace < _netChange) exitWith {_exit = true;};
	    _minimumConversions = floor(_freeSpace / _netChange);
		diag_log format["2: _minimumConversions: %1", _minimumConversions];
	};

	_nbToRemove = 0;

    {
        _nbToRemove = _nbToRemove + ((_x select 1)*(_minimumConversions));

        diag_log format["remove %1 x%2", (_x select 0), ((_x select 1)*(_minimumConversions))];
    } count _oldItem;

    {

        diag_log format["Add %1 x%2", (_x select 0), ((_x select 1)*(_minimumConversions))];
	} count _newItem;

    if (_minimumConversions isEqualTo (_totalConversions call BIS_fnc_lowestNum)) then {
       	hint "good";
    } else {
        hint "bad";
    };
};