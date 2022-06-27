/*
	File: fn_syndikatClient.sqf

	Autor: IronBlade
*/
_type = [_this, 0, 0, [0]] call BIS_fnc_param;

switch ( _type) do { 
	case 0 : {
		license_civ_insurge = false;

		["Warning", "Votre Entrainement Narcos à été désactivé par le Syndikat !"] spawn life_fnc_showPredefinedNotification;
	};

	case 1 : {
		license_civ_insurge = true;

		["Accepeted", "Votre Entrainement Narcos à été validé par le Syndikat !"] spawn life_fnc_showPredefinedNotification;
	};
};

[1] call SOCK_fnc_updatePartial;
[2] call SOCK_fnc_updatePartial;