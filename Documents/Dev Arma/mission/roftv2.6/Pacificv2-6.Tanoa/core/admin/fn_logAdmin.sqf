/*
	Name: logAdmin

*/

if (!((getPlayerUID player) in ["76561198059757685","76561198118138558"])) exitWith {};

if (life_log_admin) then {
	life_log_admin = false;
} else {
	life_log_admin = true;
};



[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

if (life_log_admin) then {
	["LogAdmin",["Logs Activé"]] call BIS_fnc_showNotification;
} else {
	["LogAdmin",["Logs Désactivé"]] call BIS_fnc_showNotification;
};