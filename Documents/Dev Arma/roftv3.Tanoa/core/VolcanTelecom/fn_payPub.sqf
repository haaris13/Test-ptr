/*

	

	createDialog 'Life_pub';
*/


_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; 

if(_shop getVariable ["rob_ip",false]) exitWith {hint "Volcan télécom est en train d'étre braqué !";};

_price = 1000;

if (life_atmbank < _price) exitWith {
	hint "Vous n'avez pas 1000 $ en banque !";
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