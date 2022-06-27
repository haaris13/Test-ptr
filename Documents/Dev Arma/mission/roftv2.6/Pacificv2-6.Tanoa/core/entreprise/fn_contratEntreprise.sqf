/*
	File: fn_contratEntreprise.sqf

	Autor:IronBlade
*/
_type = [_this,0,"",[""]] call BIS_fnc_param;

switch (_type) do { 
	case "jewelsoftanoinc" : {
		life_ent_contrat_jewel = true;

		["Accepted", "Un contrat avec Jewels Of Tanoa.Inc à été passé !"] spawn life_fnc_showPredefinedNotification;
	};

	default {}; 
};