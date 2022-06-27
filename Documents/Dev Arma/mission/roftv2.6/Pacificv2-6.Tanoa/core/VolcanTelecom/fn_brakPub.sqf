/*

	

	createDialog 'Life_pub';
*/


/*

	file: fn_robPetrolStation.sqf

	Original Author: MrKraken

	this addAction["Braquer",life_fnc_brakPub, ""];

addAction["Rob the Gas Station",life_fnc_robPetrolStation, "Kavala Gas Services"];

*/

private["_robber","_shop","_name","_cashStored","_ui","_progress","_pgText","_cP","_pos","_policeWarned"];

_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; 


//Checks
if({side _x == west} count playableUnits < 2 && life_debug == 0 ) exitWith {["Error", "Il n'y a pas assez de flics en ligne pour faire cela ! (2 minimum)"] spawn life_fnc_showPredefinedNotification;}; 
if(side _robber != civilian) exitWith {};
if(_robber distance _shop > 5) exitWith {["Error", "Vous devez être à moins de 5m !"] spawn life_fnc_showPredefinedNotification;};
if (currentWeapon _robber == "") exitWith {["Error", "Vous ne pouvez pas braquer sans arme ! Et non votre main n'est pas une arme !"] spawn life_fnc_showPredefinedNotification;};
if (currentWeapon _robber == "Binocular") exitWith {["Error", "Vous ne pouvez pas braquer sans arme ! Et non votre main n'est pas une arme !"] spawn life_fnc_showPredefinedNotification;};
if (currentWeapon _robber == "Rangefinder") exitWith {["Error", "Vous ne pouvez pas braquer sans arme ! Et non votre main n'est pas une arme !"] spawn life_fnc_showPredefinedNotification;};

if(vehicle player != player) exitWith {};
//Var checks
if(_shop getVariable ["rob_empty",false]) exitWith {["Error", "Volcan télécom a été braqué récemment et ne peut pas être braqué à nouveau pendant un certain temps."] spawn life_fnc_showPredefinedNotification;};
if(_shop getVariable ["rob_ip",false]) exitWith {["Error", "Volcan télécom est déjà en train d'être braqué ! Courrez pauvre fou !"] spawn life_fnc_showPredefinedNotification;};



//-- start robbery
_shop setVariable ["rob_ip",true,true];

_id = random 100;

_mark = format ["station_robbery_%1",str _id];

//-- create a map marker
_stationMarker = createMarker [_mark, player];
_stationMarker setMarkerShape "ICON";
_stationMarker setMarkerType "mil_warning";
_stationMarker setMarkerColor "ColorRed";
_stationMarker setMarkerText format["- Braquage en cours -"];


_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = random(100);

//-- could do something with this later but meh
if(_chance >= 0) then { 	
	["Warning", "Le journaliste a frappé une alarme silencieuse, la police a été alerté !"] spawn life_fnc_showPredefinedNotification;
	[[1,format["ALERT - Volcan télécom est en train d'étre braqué !"]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
}; 

//-- Setup progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Braquage en cours, restez proche (5m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.005; 
_cPrate = 0.01;

if (["braqueur"] call life_fnc_hasPerk) then {
	_cPrate = _cPrate + 0.001;
};

uiSleep (random 2);

while{true} do 
{			
	sleep 1.1;		
	_cP = _cP + _cPrate;		
	_progress progressSetPosition _cP;		
	_pgText ctrlSetText format["Braquage en cours, restez proche (5m) (%1%2)...",round(_cP * 100),"%"];	

	if(_cP >= 1) exitWith {};		
	if(_robber distance _shop > 5.5) exitWith {["Warning", "Vous devez rester à moins de 5m ! - Maintenant, les flics sont sur le chemin."] spawn life_fnc_showPredefinedNotification;};		
	if!(alive _robber) exitWith {};
	if(life_istazed) exitWith {};
	if(player != vehicle player) exitWith {};
};

//-- Cleanup - reset npc, delete marker
_shop switchMove "";
deleteMarker _mark;
5 cutText ["","PLAIN"];

if(_shop getVariable ["rob_empty",false]) exitWith {
	["Warning", "Tentative de Duplication ! (Le staff sera tenu au courant)"] spawn life_fnc_showPredefinedNotification;
	[format ["%1 antiDupe Braque Station",profileName], getPlayerUID player, 12] remoteExecCall ["TON_fnc_logsAdmin",2];
};

//-- Set vars
_shop setVariable ["rob_ip",false,true];
_shop setVariable ["rob_empty",true,true];

//-- Make the player wanted
//[[getPlayerUID _robber,name _robber,"211"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;

//-- If the player suceeded, give them the money
if(_cP >= 1) then {	
	//-- Player cant use atm for a time
	if!(alive _robber) exitWith {};

	createDialog 'Life_pub';
};

//-- Wait a while so shop can be robbed again
[_shop] remoteExec ["TON_fnc_petrolStationCooldown",2];