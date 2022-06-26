/*
	File: fn_phoneReceive.sqf
		
	Author: IronBlade 
*/
diag_log "fn_phoneReceive";
_phone = [_this, 0, [], [[]]] call BIS_fnc_param;

life_phones pushBack _phone;

["Phone", "Téléphone initialisé et prêt a étre utilisé."] spawn life_fnc_showPredefinedNotification;