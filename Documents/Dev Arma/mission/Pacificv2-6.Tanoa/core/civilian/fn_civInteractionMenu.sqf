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
#define Title 37401
#define CloseButton 37402

private["_buttons","_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_hasTies","_playerRestrained","_playerZiptied","_targetZiptied","_zipTied","_targetRestrained"];

disableSerialization;
_curTarget = param [0,ObjNull,[ObjNull]];
_type = _this select 1;
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
if (!life_session_completed) exitWith {closeDialog 0;};
if(!dialog) then {
	createDialog "pInteraction_Menu";
};
	
if(!isPlayer _curTarget) exitWith {closeDialog 0;};
_playerRestrained = player getVariable["restrained",false];
_playerZiptied = player getVariable["ziptied",false];
if ((player getVariable ["restrained",false]) || (player getVariable ["ziptied",false])) exitWith {closeDialog 0;}; // cant do this while restrained


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

life_pInact_curTarget = _curTarget;
_targetZiptied = _curTarget getVariable ["ziptied",false];
_targetRestrained = _curTarget getVariable ["restrained",false];
_targetDown = _curTarget getVariable ["torture",false];

/*
	Normal player
*/

if ((!_targetZiptied) && (!_targetRestrained) && !_targetDown) exitWith {

	_surrender = life_pInact_curTarget getVariable ["playerSurrender",false];

	if (_surrender) exitWith {

		_Btn1 ctrlSetText "Donner Argent";
		_Btn1 buttonSetAction "closeDialog 0; ['load', life_pInact_curTarget] call life_fnc_giveMoney;";

		_Btn2 ctrlSetText "Donner Objet";
		_Btn2 buttonSetAction "closeDialog 0; ['load', life_pInact_curTarget] call life_fnc_giveItem;";

		_Btn3 ctrlSetText "Fouiller";
		_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_fouille;";

		_Btn4 ctrlSetText "Placer un Mouchard";
		_Btn4 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_placeMouchard;";

		if ((ITEM_VALUE("mouchard") >= 1)) then {_Btn4 ctrlShow true} else {_Btn4 ctrlShow false};

		_Btn5 ctrlShow false;
		_Btn6 ctrlShow false;
		_Btn7 ctrlShow false;
		_Btn8 ctrlShow false;
		_Btn9 ctrlShow false;
		_Btn10 ctrlShow false;
	};

	if (!_surrender) exitWith {
		_Btn1 ctrlSetText "Donner Argent";
		_Btn1 buttonSetAction "closeDialog 0; ['load',life_pInact_curTarget] call life_fnc_giveMoney;";

		_Btn2 ctrlSetText "Donner Objet";
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
		
		_Btn5 ctrlSetText localize "STR_pInAct_showLicenses";
		_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_showLicenses; closeDialog 0;";

		_Btn6 ctrlSetText "Partager une Info";
		_Btn6 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_initMenuSendMarkers;";

		_Btn7 ctrlSetText "Signaler";
		_Btn7 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_reportPlayer;";

		if ((FETCH_CONST(life_depanLevel)) >= 1
			|| (FETCH_CONST(life_ocasLevel)) >= 1
			|| (FETCH_CONST(life_barLevel)) >= 1
			|| (FETCH_CONST(life_johnsonLevel)) >= 1
			|| (FETCH_CONST(life_pressLevel)) >= 1) then {
			
			if ((FETCH_CONST(life_depanLevel)) >= 1) exitWith {
				_Btn8 ctrlSetText "Facture dépannage";
				_Btn8 buttonSetAction "[life_pInact_curTarget, 'narvalo'] spawn life_fnc_entrepriseInvoiceAction;";
			};
			
			if ((FETCH_CONST(life_ocasLevel)) >= 1) exitWith {
				_Btn8 ctrlSetText "Facture Occasion";
				_Btn8 buttonSetAction "[life_pInact_curTarget, 'occasion'] spawn life_fnc_entrepriseInvoiceAction;";

				if ((player distance (getMarkerPos "ocas_spawn") > 100)) then {
					_Btn8 ctrlEnable false;
				};
			};
			
			if ((FETCH_CONST(life_barLevel)) >= 1) exitWith {
				_Btn8 ctrlSetText "Facture";
				_Btn8 buttonSetAction "[life_pInact_curTarget, 'bar'] spawn life_fnc_entrepriseInvoiceAction;";

				if ((player distance (getMarkerPos "bar_pos") > 100)) then {
					_Btn8 ctrlEnable false;
				};
			};

			if ((FETCH_CONST(life_pressLevel)) >= 1) exitWith {
				_Btn8 ctrlSetText "Facture";
				_Btn8 buttonSetAction "[life_pInact_curTarget, 'press'] spawn life_fnc_entrepriseInvoiceAction;";
			};

			if ((FETCH_CONST(life_johnsonLevel)) >= 1) exitWith {
				_Btn8 ctrlSetText "Facture";
				_Btn8 buttonSetAction "[life_pInact_curTarget, 'johnson'] spawn life_fnc_entrepriseInvoiceAction;";
			};
		} else {
			_Btn8 ctrlShow false;
		};

		if (((FETCH_CONST(life_depanLevel)) >= 2)
			|| ((FETCH_CONST(life_pressLevel)) >= 2)
			|| ((FETCH_CONST(life_ocasLevel)) >= 2)
			|| ((FETCH_CONST(life_barLevel)) >= 2)
			|| ((FETCH_CONST(life_johnsonLevel)) >= 2)) then {

			_Btn9 ctrlSetText "WhiteList";

			if ((FETCH_CONST(life_depanLevel)) >= 2) exitWith {
				_Btn9 buttonSetAction "[life_pInact_curTarget, 2, 'DEPAN'] spawn life_fnc_whiteListTeam;";

				if ((player distance (getMarkerPos "spawn_erp_1") > 200)) then {
					_Btn9 ctrlEnable false;
				};
			};

			if ((FETCH_CONST(life_pressLevel)) >= 2) exitWith {
				_Btn9 buttonSetAction "[life_pInact_curTarget, 1, 'PRESS'] spawn life_fnc_whiteListTeam;";

				if ((player distance (getMarkerPos "tanoa_news") > 100)) then {
					_Btn9 ctrlEnable false;
				};
			};

			if ((FETCH_CONST(life_ocasLevel)) >= 2) exitWith {
				_Btn9 buttonSetAction "[life_pInact_curTarget, 4, 'OCAS'] spawn life_fnc_whiteListTeam;";

				if ((player distance (getMarkerPos "ocas_spawn") > 100)) then {
					_Btn9 ctrlEnable false;
				};
			};

			if ((FETCH_CONST(life_barLevel)) >= 2) exitWith {
				_Btn9 buttonSetAction "[life_pInact_curTarget, 5, 'BAR'] spawn life_fnc_whiteListTeam;";

				if ((player distance (getMarkerPos "bar_pos") > 100)) then {
					_Btn9 ctrlEnable false;
				};
			};

			if ((FETCH_CONST(life_johnsonLevel)) >= 2) exitWith {
				_Btn9 buttonSetAction "[life_pInact_curTarget, 6, 'JOHNSON'] spawn life_fnc_whiteListTeam;";

				if ((player distance (getMarkerPos "johnson_spawn") > 100)) then {
					_Btn9 ctrlEnable false;
				};
			};
		} else {
			_Btn9 ctrlShow false;
		};

		_Btn10 ctrlShow false;
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
		_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain2; closeDialog 0;";

		//Set Escort Button

		/*
		if((_curTarget getVariable["Escorting",false])) then {
			_Btn2 ctrlSetText localize "STR_pInAct_StopEscort";
			_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_stopEscorting; closeDialog 0;";
		} else {
			_Btn2 ctrlSetText localize "STR_pInAct_Escort";
			_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
		};
		*/

		//_Btn3 ctrlSetText localize "STR_pInAct_PutInCar";
		//_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;";

		_Btn2 ctrlSetText "Fouiller";
		_Btn2 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_fouille;";

		_Btn3 ctrlSetText "Arracher les clefs";
		_Btn3 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_arracherClef;";

		if (!(_curTarget getVariable["cagoule",false])) then {
			_Btn4 ctrlSetText "Mettre le bandeau";
			_Btn4 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_putCagoule;";

			if ((ITEM_VALUE("cagoule") >= 1)) then {_Btn4 ctrlEnable true} else {_Btn4 ctrlEnable false};
		} else {
			_Btn4 ctrlSetText "Retirer le bandeau";
			_Btn4 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_removeCagoule;";
		};

		_Btn5 ctrlSetText "Droguer (Pollos Ciego)";
		_Btn5 buttonSetAction "[life_pInact_curTarget, ""fioleblinded""] spawn life_fnc_droguePlayer;";

		if ((ITEM_VALUE("fioleblinded") >= 1)) then {_Btn5 ctrlEnable true} else {_Btn5 ctrlEnable false};
	};

	_Btn6 ctrlSetText "Au Sol";
	_Btn6 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_tortureVictimPlace;";

	_Btn7 ctrlShow false;	
	_Btn8 ctrlShow false;	
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
};