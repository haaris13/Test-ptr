#include "..\..\script_macros.hpp"
private["_unit","_amount"];
if(playerSide != west) exitWith {["Error", "Who do you think you are?"] spawn life_fnc_showPredefinedNotification;};
if((lbCurSel 2406) == -1) exitWith {["Error", "You must select a perp."] spawn life_fnc_showPredefinedNotification;};
if((lbCurSel 2407) == -1) exitWith {["Error", "You must select a crime."] spawn life_fnc_showPredefinedNotification;};
_unit = lbData [2406,lbCurSel 2406];
_unit = call compile format["%1",_unit];
_amount = lbData [2407,lbCurSel 2407];
if(isNil "_unit") exitWith {};
//if(side _unit == west) exitWith {["Error", "What are ya trying to do, start a police war? Dickhead."] spawn life_fnc_showPredefinedNotification; };
//if(_unit == player) exitWith {["Error", "You can't make yourself wanted, dipshit"] spawn life_fnc_showPredefinedNotification;};
if(isNull _unit) exitWith {};

//[1,"STR_Wanted_AddP",true,[_unit GVAR ["realname",name _unit],_amount,getPlayerUID _unit]] remoteExecCall ["life_fnc_broadcast",RCLIENT];

//[getPlayerUID _unit,_unit GVAR ["realname",name _unit],_amount] remoteExecCall ["life_fnc_wantedAdd",RSERV];
