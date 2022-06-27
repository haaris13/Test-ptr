/*
	File: fn_copMarkers.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Marks cops on the map for other cops. Only initializes when the actual map is open.
*/
private["_markers","_cops"];
life_all_markers_cops = [];
life_all_cops = [];
#define nameTagCfg missionConfigFile >> "CfgNameTags"
sleep 0.5;

[] spawn {
	while {true} do {
		uiSleep 10;
		{if(side _x == west && !(_x in life_all_cops) && _x != player && (_x in units player)) then {life_all_cops pushBack _x;}} foreach playableUnits;
	};
};

marker_create = {
	_unitCop = _this;

	_marker = createMarkerLocal [format["%1_marker",_unitCop], visiblePosition _unitCop];
	_marker setMarkerColorLocal "ColorBlue";
	_marker setMarkerTypeLocal "Mil_dot";

	_text = (format["%1", _unitCop getVariable["realname",name _x]]);

	if ((_unitCop == player)) then {
		_text = "";
	};

	_marker setMarkerTextLocal _text;

	if ("ItemGPS" in assignedItems _unitCop && (_x in units player)) then {
		_marker setMarkerPosLocal (visiblePosition _unitCop);
		_marker setMarkerAlphaLocal 1;
	} else {
		_marker setMarkerAlphaLocal 0;
	};

	[_marker,_unitCop, getPlayerUID _unitCop];
};

[] spawn {
	while {true} do {
		uiSleep 5;

		{
			_find = false;
			_cop = _x;
			{
		    	_marker = _x select 0;
				_unit = _x select 1;

				if (_unit isEqualTo _cop) exitWith {
					_find = true;
				};
			} forEach life_all_markers_cops;

			if (!_find) then {

				_tab = (_cop call marker_create);

				life_all_markers_cops pushBack _tab;
			};

		} forEach life_all_cops;
	};
};

[] spawn {
	while {true} do {
		uiSleep 1;

		{
			_marker = _x select 0;
			_unit = _x select 1;
			_uid = _x select 2;

			if(!isNil "_unit") then {
				if(!isNull _unit) then {
					if (isPlayer _unit) then {
						if ("ItemGPS" in assignedItems _unit && (_unit in units player)) then {
							_marker setMarkerPosLocal (visiblePosition _unit);
							_marker setMarkerAlphaLocal 1;
						} else {
							_marker setMarkerAlphaLocal 0;
						};
					} else {
						_index = _forEachIndex;
						deleteMarkerLocal _marker;
						life_all_markers_cops set [_index, ["", objNull,"No_UID"]];
					};
				};
			} else {
				_index = _forEachIndex;
				deleteMarkerLocal _marker;
				life_all_markers_cops set [_index, ["", objNull,"No_UID"]];
			};

		} forEach life_all_markers_cops;
	};
};