/*
	File: initServer.sqf
	
	Description:
	Starts the initialization of the server.
*/
if(!(_this select 0)) exitWith {}; //Not server
diag_log "initServer.sqf";
[] call compile preprocessFileLineNumbers "\life_server\init.sqf";