/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Fetches an id?
*/
private "_unit";
_unit = lbData[2902,lbCurSel (2902)];
_unit = call compile format["%1", _unit];
if(isNil "_unit") exitwith {};
if(isNull _unit) exitWith {};

[_unit] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
  
  openMap true;
  mapAnimAdd [1, 0.12, (_this select 0)];
  mapAnimCommit;
};

_marker = format["markerA_player_%1",str _unit];

_marker = createMarkerLocal [_marker, position _unit];
_marker setMarkerColorLocal "ColorRed";
_marker setMarkerShapeLocal "ICON";
_marker setMarkerTextLocal (format["Joueur: %1",name _unit]);
_marker setMarkerTypeLocal "mil_destroy";
_marker setMarkerPosLocal (position _unit);

for "_i" from 0 to 1200 do {
	uiSleep 0.1;
	if (!isNull _unit) then {
		_marker setMarkerPosLocal (position _unit);
	};
};

deleteMarkerLocal _marker;


/*
[_unit,player] remoteExecCall ["TON_fnc_getID",2];
*/