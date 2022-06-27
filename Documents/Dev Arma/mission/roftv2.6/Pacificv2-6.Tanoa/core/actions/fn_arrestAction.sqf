#include "..\..\script_macros.hpp"
/*
	File: fn_arrestAction.sqf
	
	Description:
	Arrests the targeted person.
*/
private["_unit","_id"];
_unit = param [0,ObjNull,[ObjNull]];
if(isNull _unit) exitWith {}; //Not valid
if(isNil "_unit") exitwith {}; //Not Valid
if(!(_unit isKindOf "Man")) exitWith {}; //Not a unit
if(!isPlayer _unit) exitWith {}; //Not a human
if(!(_unit GVAR "restrained")) exitWith {}; //He's not restrained.
if(!((side _unit) in [civilian,independent])) exitWith {}; //Not a civ
if(isNull _unit) exitWith {}; //Not valid

closeDialog 0;

disableSerialization;

[_unit,player,false] remoteExecCall ["life_fnc_wantedBounty",RSERV];

if(isNull _unit) exitWith {}; //Not valid
detach _unit;

createDialog "Life_Arrest_Action";

_ctrl = CONTROL(9930,9932);
lbClear _ctrl; //Purge the list

{
	_ctrl lbAdd format["%1",(_x select 0)];
	_ctrl lbSetData [(lbSize _ctrl)-1,str(_x select 1)];
} foreach [["5 Ans",5],["15 Ans",15],["30 Ans",30]];

[_unit] spawn {
	_unitSend = _this select 0;
	waitUntil {life_send_jail};
	life_send_jail = false;
	_timeJail = 0;

	if ((lbCurSel 9932) isEqualTo -1) then {
		_timeJail = 5;
		diag_log "Aucune Selection !";
	} else {
		_timeJail = parseNumber(CONTROL_DATA(9932));
		diag_log "Selection !";
	};

	diag_log str(_timeJail);

	uiSleep 1;

	closeDialog 0;

	[_unitSend,false,_timeJail,player] remoteExecCall ["life_fnc_jail",_unitSend];

	_text = format ["avoir participé a l'arrestation de <t color = '#88cc00'>%1$</t>",_unitSend GVAR ["realname",name _unitSend]];
	["arrest",500,100,_text] call life_fnc_eventCopsNear;

	//[0,"STR_NOTF_Arrested_1",true, [_unitSend GVAR ["realname",name _unitSend], profileName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
};
