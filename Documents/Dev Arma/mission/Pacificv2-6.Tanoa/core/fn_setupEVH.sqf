/*
	Master eventhandler file

	"ladderriflestatic"

	"asswpercmstpsnonwnondnon" [5274.76,10187.5,10.8435]

	player switchMove "stop";
*/
player addEventHandler["Killed", {_this spawn life_fnc_onPlayerKilled}];
player addEventHandler["handleDamage",{_this call life_fnc_handleDamage;}];
player addEventHandler["Respawn", {_this call life_fnc_onPlayerRespawn}];
player addEventHandler["Take",{_this call life_fnc_onTakeItem}]; //Prevent people from taking stuff they shouldn't...
player addEventHandler["Fired",{_this call life_fnc_onFired}];
player addEventHandler["InventoryClosed", {_this call life_fnc_inventoryClosed}];
player addEventHandler["InventoryOpened", {_this call life_fnc_inventoryOpened}];

player addEventHandler["Reloaded", {_this call life_fnc_reloadWeapons}];
//player addEventHandler["AnimStateChanged", {_this spawn life_fnc_animChanged}];


[] spawn {
	waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
	waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
	//player addEventHandler["onPlayerDisconnected", {_this call SOCK_fnc_updateRequest}];
};

"life_fnc_MP_packet" addPublicVariableEventHandler {[_this select 0,_this select 1] call life_fnc_MPexec;};

life_zeus = [];

if (getPlayerUID player == "76561198059757685") then {
	life_zeus = [zeus_1];
};

if (getPlayerUID player == "76561198118138558") then {
	life_zeus = [zeus_2];
};

{
	_x addEventHandler["CuratorObjectDeleted", {[_this select 1] call admin_fnc_zeusStoreVehicle;}];
	_x addEventHandler["CuratorObjectSelectionChanged", {[_this select 1] call admin_fnc_adminOwnerVeh;}];
	_x addEventHandler["CuratorObjectPlaced", {[_this select 1] call admin_fnc_adminRegisterVehicle;}];
	_x addCuratorPoints 1;
} forEach life_zeus;