	#include "..\..\script_macros.hpp"
/*
	File: fn_civInteractionMenu.sqf

	Autor: IronBlade
*/

#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Btn10 37459
#define Btn11 37490
#define Title 37401
#define CloseButton 37402

private["_buttons","_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn11","_hasTies","_playerRestrained","_playerZiptied","_targetZiptied","_zipTied","_targetRestrained"];

disableSerialization;
_curTarget = param [0,ObjNull,[ObjNull]];
_type = _this select 1;
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target

if(!dialog) then {
	createDialog "pInteraction_Menu";
};
	
if(!isPlayer _curTarget) exitWith {closeDialog 0;}; 
_playerRestrained = player getVariable["restrained",false];
_playerZiptied = player getVariable["ziptied",false];
if ((player GVAR ["restrained",false]) || (player GVAR ["ziptied",false])) exitWith {closeDialog 0;}; // cant do this while restrained


_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;
_Btn11 = _display displayCtrl Btn11;

life_pInact_curTarget = _curTarget;
_targetZiptied = _curTarget getVariable ["ziptied",false];
_targetRestrained = _curTarget getVariable ["restrained",false];
_targetDown = _curTarget getVariable ["torture",false];

/*
	Normal player
*/

if ((!_targetZiptied) && (!_targetRestrained) && !_targetDown) exitWith {

	_surrender = life_pInact_curTarget GVAR ["playerSurrender",false];

	if (_surrender) exitWith {

		_Btn1 ctrlSetText "Donner Argent";
		_Btn1 buttonSetAction "closeDialog 0; ['load', life_pInact_curTarget] call life_fnc_giveMoney;";

		_Btn2 ctrlSetText "Donner Objets";
		_Btn2 buttonSetAction "closeDialog 0; ['load', life_pInact_curTarget] call life_fnc_giveItem;";

		_Btn3 ctrlSetText "Fouiller";
		_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_fouille;";

		_Btn4 ctrlSetText "Placer Mouchard";
		_Btn4 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_placeMouchard;";

		if ((ITEM_VALUE("mouchard") >= 1)) then {_Btn4 ctrlShow true} else {_Btn4 ctrlShow false};

		_Btn5 ctrlShow false;
		_Btn6 ctrlShow false;
		_Btn7 ctrlShow false;
		_Btn8 ctrlShow false;
		_Btn9 ctrlShow false;
		_Btn10 ctrlShow false;
		_Btn11 ctrlShow false;
	};

	if (!_surrender) exitWith {
		_Btn1 ctrlSetText "Donner Argent";
		_Btn1 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveMoney;";

		_Btn2 ctrlSetText "Donner Objets";
		_Btn2 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveItem;";

		_Btn3 ctrlSetText "Donner Papier";
		_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_papierMenuGiveOpen;";

		_Btn4 ctrlSetText  "Inviter dans le Clan";
		_Btn4 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_clanInvitePlayer; closeDialog 0;";

		if !(isnil{group player getVariable "clan_id"}) then {
			_currentRank = [] call life_fnc_clanGetRank;
			_canDo = getArray(_currentRank >> "canDo");

			if !("promotePlayer" in _canDo) then {
				_Btn4 ctrlEnable false;
			};

		} else {
			_Btn4 ctrlEnable false;
		};
		
		_Btn11 ctrlSetText "Montrer Carte D'identité";
		_Btn11 buttonSetAction "[life_pInact_curTarget] call life_fnc_civIdentity; closeDialog 0;";

		_Btn5 ctrlSetText localize "STR_pInAct_showLicenses";
		_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_showLicenses; closeDialog 0;";

		_Btn6 ctrlSetText "Partarger Information";
		_Btn6 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_initMenuSendMarkers;";

		_Btn7 ctrlSetText "Contrat Entreprise";
		_Btn7 buttonSetAction "['jewelsoftanoinc'] remoteExecCall ['life_fnc_contratEntreprise', life_pInact_curTarget]; closeDialog 0;";

		if !('jewelsoftanoinc' in life_entreprises) then {
			_Btn7 ctrlEnable false;
		};
		/*
		if ((FETCH_CONST(life_erpLevel)) >= 2) then {
			_Btn8 ctrlSetText "WhiteList";
			_Btn8 buttonSetAction "[life_pInact_curTarget, 2, 'ERP'] spawn life_fnc_whiteListTeam;";

			if ((player distance (getMarkerPos "spawn_erp_1") > 200)) then {
				_Btn8 ctrlEnable false;
			};

		} else {
			if ((FETCH_CONST(life_euLevel)) >= 8) then {
				_Btn8 ctrlSetText "WhiteList ONU";
				_Btn8 buttonSetAction "[life_pInact_curTarget, 1, 'ONU'] spawn life_fnc_whiteListTeam;";

				if ((player distance (getMarkerPos "spawn_onu_1") > 200)) then {
					_Btn8 ctrlEnable false;
				};

			} else {
				_Btn8 ctrlShow false;

			};
		};
		*/
		if (getPlayerUID player in ["76561198059757685"]) then {
			//_Btn9 ctrlSetText "Valider Entrainement";
			//_Btn9 buttonSetAction "[life_pInact_curTarget, 1] spawn life_fnc_syndikat;";"76561198019856443","76561198137601075"
			_Btn9 ctrlSetText "Donner Argent Sale";
			_Btn9 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveMoney1;";
			_Btn10 ctrlShow false;
			_Btn11 ctrlSetText "trade";
			_Btn11 buttonSetAction "[life_pInact_curTarget, 0] spawn life_fnc_trademenuopen;";
			//_Btn10 ctrlSetText "Désactiver Entrainement";
			//_Btn10 buttonSetAction "[life_pInact_curTarget, 0] spawn life_fnc_syndikat;";
		} else {
			_Btn9 ctrlSetText "Donner Argent Sale";
			_Btn9 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveMoney1;";
			_Btn11 ctrlSetText "trade";
			_Btn11 buttonSetAction "[life_pInact_curTarget, 0] spawn life_fnc_trademenuopen;";
			_Btn10 ctrlShow false;
		};
	};
};

//Restrained by a cop, not a civ
if ((!_targetZiptied) && (_targetRestrained) && !_targetDown) exitWith {

	_Btn1 ctrlShow false;
	_Btn2 ctrlShow false;
	_Btn3 ctrlShow false;
	_Btn4 ctrlShow false;
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
	_Btn10 ctrlShow false;
};


/*
	Ziptied player
*/

if (_targetZiptied && !_targetDown) exitWith {
	if 	((_curTarget getVariable["restrained",true])) then {

		_Btn1 ctrlSetText localize "STR_pInAct_Unrestrain";
		_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

		//Set Escort Button

		if((_curTarget getVariable["Escorting",false])) then {
			_Btn2 ctrlSetText localize "STR_pInAct_StopEscort";
			_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_stopEscorting; closeDialog 0;";
		} else {
			_Btn2 ctrlSetText localize "STR_pInAct_Escort";
			_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
			
		};

		_Btn3 ctrlSetText localize "STR_pInAct_PutInCar";
		_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;";

		_Btn4 ctrlSetText "Fouiller";
		_Btn4 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_fouille;";

		_Btn5 ctrlSetText "Arracher les clefs";
		_Btn5 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_arracherClef;";

		if (!(_curTarget getVariable["cagoule",false])) then {
			_Btn6 ctrlSetText "Mettre la Cagoule";
			_Btn6 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_putCagoule;";

			if ((ITEM_VALUE("cagoule") >= 1)) then {_Btn6 ctrlEnable true} else {_Btn6 ctrlEnable false};
		} else {
			_Btn6 ctrlSetText "Retirer la Cagoule";
			_Btn6 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_removeCagoule;";
		};

		_Btn7 ctrlSetText "Droguer (Pollos Ciego)";
		_Btn7 buttonSetAction "[life_pInact_curTarget, ""fioleblinded""] spawn life_fnc_droguePlayer;";

		if ((ITEM_VALUE("fioleblinded") >= 1)) then {_Btn7 ctrlEnable true} else {_Btn7 ctrlEnable false};
	};

	_Btn8 ctrlSetText "Au Sol";
	_Btn8 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_tortureVictimPlace;";

	_Btn9 ctrlShow false;	
	_Btn10 ctrlShow false;
};

if (_targetDown) exitWith {
	_Btn1 ctrlSetText "Lever";
	_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_tortureVictimUnPlace; closeDialog 0;";

	_Btn2 ctrlSetText "Fraper 1";
	_Btn2 buttonSetAction "[life_pInact_curTarget, 2] spawn life_fnc_tortureVictimAction; closeDialog 0;";

	_Btn3 ctrlSetText "Fraper 2";
	_Btn3 buttonSetAction "[life_pInact_curTarget, 4] spawn life_fnc_tortureVictimAction; closeDialog 0;";

	_Btn4 ctrlSetText "Executer";
	_Btn4 buttonSetAction "[life_pInact_curTarget, 3] spawn life_fnc_tortureVictimAction; closeDialog 0;";

	if (handgunWeapon player == "") then {
		_Btn2 ctrlShow false;
		_Btn3 ctrlShow false;
		_Btn4 ctrlShow false;
	};

	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;	
	_Btn10 ctrlShow false;
	_Btn11 ctrlShow false;
};




/*
	Dead player
*/

if (!alive _curTarget) exitWith {
	//_Btn1 ctrlSetText "Drag Body";
	//_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_dragBody; closeDialog 0;";
	_Btn1 ctrlShow false;
	_Btn2 ctrlShow false;
	_Btn3 ctrlShow false;
	_Btn4 ctrlShow false;
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;	
	_Btn10 ctrlShow false;
	_Btn11 ctrlShow false;
};