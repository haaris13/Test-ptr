/*
	File: initServer.sqf
	
	Description:
	Starts the initialization of the server.
*/
if(!(_this select 0)) exitWith {}; //Not server
[] execVM "LID\initserver.sqf";
[] call compile PreprocessFileLineNumbers "\life_server\init.sqf";