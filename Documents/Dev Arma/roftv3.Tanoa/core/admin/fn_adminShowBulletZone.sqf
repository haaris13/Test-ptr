/*
	File: fn_adminShowBulletZone.sqf

	Autor: IronBlade
*/
if(([] call(life_adminlevel)) < 2) exitWith {closeDialog 0;};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

if ((count life_bulletsPlayerZone) > 0) exitWith {

	{
		[_x, 0] spawn ADMIN_fnc_adminTraceBullet;
	} forEach life_bulletsPlayerZone;

	life_bulletsPlayerZone = [];
	hint format["Désactive pour la zone !"];
	[format ["%1 Désactive TraversZone",profileName], getPlayerUID player,10] remoteExecCall ["TON_fnc_logsAdmin",2];	
};

showBulletZone = {
	_pos = [_this select 0, _this select 1, _this select 2];
	onMapSingleClick "";

	{
		if ((_x distance2D _pos) <= 150) then {
			life_bulletsPlayerZone pushBack _x;

			[_x, 30] spawn ADMIN_fnc_adminTraceBullet;
		};
	} forEach allPlayers;
	
	openMap [false, false];
	hint format["Travers activé sur cette zone (100m)! Pour %1 Unités !", (count life_bulletsPlayerZone)];
	[format ["%1 Active TraversZone %2",profileName, str(_pos)], getPlayerUID player,10] remoteExecCall ["TON_fnc_logsAdmin",2];	
};

openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call showBulletZone";