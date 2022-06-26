#include "..\..\script_macros.hpp"
/*
	File: fn_adminVInteractionMenu.sqf
	Author: Iron
	
	Description:
	Replaces the mass addactions for various vehicle actions for admins
*/
#define Btn1 37850
#define Btn2 37851
#define Btn3 37852
#define Btn4 37853
#define Btn5 37854
#define Btn6 37855
#define Btn7 37856
#define Btn8 37857
#define Btn9 37858
#define Title 38401
private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6"];

if(FETCH_CONST(life_adminlevel) < 1)  exitWith {diag_log "not admin !";}; // WHATTTTTT ????

if(!dialog) then {
	createDialog "vAInteraction_Menu";
};
disableSerialization;

_curTarget = param [0,ObjNull,[ObjNull]];
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
_isVehicle = if((_curTarget isKindOf "landVehicle") OR (_curTarget isKindOf "Ship") OR (_curTarget isKindOf "Air")) then {true} else {false};
if(!_isVehicle) exitWith {closeDialog 0;};

_display = findDisplay 37800;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
life_vInact_curTarget = _curTarget;
life_vInact_curTarget_name = getText(configFile >> "CfgVehicles" >> (typeOf life_vInact_curTarget) >> "displayName");

//Set Repair Action
_Btn1 ctrlSetText "Réparer";
_Btn1 buttonSetAction "life_vInact_curTarget setDamage 0; closeDialog 0; [format [""%1 Repair Admin %2"",profileName,life_vInact_curTarget_name], getPlayerUID player, 5] remoteExecCall [""TON_fnc_logsAdmin"",2];";

_Btn2 ctrlSetText "Propriétaire";
_Btn2 buttonSetAction "[life_vInact_curTarget] spawn life_fnc_searchVehAction; [format [""%1 Propriétaire Admin %2"",profileName,life_vInact_curTarget_name], getPlayerUID player, 5] remoteExecCall [""TON_fnc_logsAdmin"",2];";

_Btn3 ctrlSetText "Récupérer Clef";
_Btn3 buttonSetAction "life_vehicles pushBack life_vInact_curTarget; closeDialog 0; [format [""%1 Récupérer Clef Admin %2"",profileName,life_vInact_curTarget_name], getPlayerUID player, 5] remoteExecCall [""TON_fnc_logsAdmin"",2];";

_Btn4 ctrlSetText "Mettre au Garage";
_Btn4 buttonSetAction "[life_vInact_curTarget] call admin_fnc_adminStoreVeh; closeDialog 0; [format [""%1 Garage Admin %2"",profileName,life_vInact_curTarget_name], getPlayerUID player, 5] remoteExecCall [""TON_fnc_logsAdmin"",2];";

_Btn5 ctrlSetText "Essence";
_Btn5 buttonSetAction "life_vInact_curTarget setFuel 1; closeDialog 0; [format [""%1 Essence Admin %2"",profileName,life_vInact_curTarget_name], getPlayerUID player, 5] remoteExecCall [""TON_fnc_logsAdmin"",2];";

_Btn6 ctrlSetText "Débug Coffre";
_Btn6 buttonSetAction "life_vInact_curTarget setVariable['trunk_in_use',false,true]; life_vInact_curTarget setVariable['trunk_cache_use',false,true]; closeDialog 0; [format [""%1 Débug Coffre Admin %2"",profileName,life_vInact_curTarget_name], getPlayerUID player, 5] remoteExecCall [""TON_fnc_logsAdmin"",2];";

_Btn7 ctrlSetText "Débug conducteur";
_Btn7 buttonSetAction "life_vInact_curTarget lockDriver false;; closeDialog 0; [format [""%1 Débug conducteur Admin %2"",profileName,life_vInact_curTarget_name], getPlayerUID player, 5] remoteExecCall [""TON_fnc_logsAdmin"",2];";


_Btn8 ctrlShow false;
_Btn9 ctrlShow false;