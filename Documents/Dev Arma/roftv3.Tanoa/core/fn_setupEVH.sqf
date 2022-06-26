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

"life_fnc_MP_packet" addPublicVariableEventHandler {[_this select 0,_this select 1] call life_fnc_MPexec;};
/*
life_zeus = [zeus_1, zeus_2, zeus_3];

{
	_x addEventHandler["CuratorObjectDeleted", {[_this select 1] call admin_fnc_zeusStoreVehicle;}];
	_x addEventHandler["CuratorObjectSelectionChanged", {[_this select 1] call admin_fnc_adminOwnerVeh;}];
} forEach life_zeus;
*/

player addEventHandler["FiredNear", {_this call life_fnc_firstView}]; // rajout par alharis
