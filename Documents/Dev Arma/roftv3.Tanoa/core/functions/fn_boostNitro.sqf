_vehicle = vehicle player;

if (_vehicle == player) exitWith {};
if (driver _vehicle != player) exitWith {};

if ((_vehicle getVariable ["nitro",0]) < 1) exitWith {};

if ((speed _vehicle) <= 5) exitWith {hint "Roulez plus vite pour activer la nitro!"};

[player,"useNos",60,1] remoteExecCall ["life_fnc_say3D",RCLIENT];

_vehicle setVariable["nitro",((_vehicle getVariable["nitro",0]) - 1),true];
//_vehicle setVariable["nitroTime", time, false];
systemChat format ["Nitro activé."];
_vel = velocity _vehicle;
_dir = direction _vehicle;
_speed = 25;
//_time = 0;
//while {(_time <= 5)} do {
//  		if (_time == 5) exitWith {};
  		_vehicle setVelocity [(_vel select 0)+(sin _dir*_speed),(_vel select 1)+ (cos _dir*_speed),(_vel select 2)];
//  		_vel = velocity _vehicle;
//  		_time = _time + 1;
//  		sleep 1;

//};

