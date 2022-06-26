/*
	File: fn_syndikatClient.sqf

	Autor: IronBlade
*/
_type = [_this, 0, 0, [0]] call BIS_fnc_param;

switch ( _type) do { 
	case 0 : {
		license_civ_insurge = false;

		hint "Votre Entrainement Insurgé à été désactivé par le Syndikat !";
	};

	case 1 : {
		license_civ_insurge = true;

		hint "Votre Entrainement Insurgé à été validé par le Syndikat !";
	};
};

[1] call SOCK_fnc_updatePartial;
[2] call SOCK_fnc_updatePartial;