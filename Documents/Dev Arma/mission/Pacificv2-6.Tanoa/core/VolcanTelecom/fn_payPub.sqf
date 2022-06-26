/*

	

	createDialog 'Life_pub';
*/


_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; 

if(_shop getVariable ["rob_ip",false]) exitWith {["InfoWithSound", "Volcan télécom est en train d'être braquer !"] spawn life_fnc_showPredefinedNotification;};

_price = 2000;

if (life_atmbank < _price) exitWith {
	["Error", "Vous n'avez pas 2.000 $ en banque !."] spawn life_fnc_showPredefinedNotification;
};



_action = [
	format ["Vous allez payer %1 pour envoyer des messages !",[_price] call life_fnc_numberText],
	"Volcan télécom",
	localize "STR_Global_Yes",
	"Non"
] call BIS_fnc_guiMessage;

if(_action) then {
	life_atmbank = life_atmbank - _price;

	createDialog 'Life_pub';
};