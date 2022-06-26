/*
	File:fn_checkRetourZone.sqf


	Autor: Iron
*/
_posDeath = [_this,0,[0,0,0],[[0,0,0]]] call BIS_fnc_param;

life_revive = false;

_time = diag_tickTime;

_timeEnd = _time + (20 * 60);

_retour = false;

while {true} do {
  uiSleep 1;
  if (diag_tickTime >= _timeEnd) exitWith {diag_log "END Retour Zone";};
  if (life_revive) exitWith {
    life_revive = false;
    diag_log "Revive !";
  };
  if (player distance2D _posDeath < 1500 && !life_dead) exitWith {_retour = true;};
};

if (_retour) then {

	_timeRetour = [(diag_tickTime - _time),"MM:SS"] call BIS_fnc_secondsToString;

	diag_log str([getPlayerUID player, str(_posDeath), player distance2D _posDeath, _timeRetour]);

  _pos = _posDeath;

  _dist = player distance2D _posDeath;

	[getPlayerUID player, _pos, _dist, _timeRetour] remoteExecCall ["TON_fnc_insertRetourZoneLogs",2];
	["<t color='#ff0000'>Attention vous êtes en retour sur Zone, les Admins sont prévenus !</t>"] call life_fnc_dynamicText;

  _retour = format["Retour zone: %1 aprés %2, dist: %3m.", name player, _timeRetour, round(_dist)];
  [_retour] remoteExecCall ["admin_fnc_alertAdmin", 0];
};