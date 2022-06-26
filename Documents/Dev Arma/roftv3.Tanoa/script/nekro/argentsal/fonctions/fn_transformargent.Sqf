/*-----------------------------------------------------------------------------
	 _   _ ______ _  _______   ____
	| \ | |  ____| |/ /  __ \ / __ \
	|  \| | |__  | ' /| |__) | |  | |
	| . ` |  __| |  < |  _  /| |  | |
	| |\  | |____| . \| | \ \| |__| |
	|_| \_|______|_|\_\_|  \_\____/

Server:
	 _      _____ ______ ______   _____  _____   _____  ________      __
	| |    |_   _|  ____|  ____| |_   _|/ ____| |  __ \|  ____\ \    / /
	| |      | | | |__  | |__      | | | (___   | |  | | |__   \ \  / /
	| |      | | |  __| |  __|     | |  \___ \  | |  | |  __|   \ \/ /
	| |____ _| |_| |    | |____   _| |_ ____) | | |__| | |____   \  /
	|______|_____|_|    |______| |_____|_____/  |_____/|______|   \/
(Life Is Dev)

	FileName = fn_transformargent.Sqf

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/

private _daytime = daytime; // assuming daytime returns 1.66046
private _hours = floor _daytime;											//  1
private _minutes = floor ((_daytime - _hours) * 60);						// 39
private _seconds = floor ((((_daytime - _hours) * 60) - _minutes) * 60);	// 37
if ((_hours > 5) and (_hours < 23)) exitwith {hint "vous pouvez venir me voir que de nuit à partir de 23h00";};
if (["Blanchisseur"]call life_fnc_hasPerk) then {
	life_cash = life_cash + round(ArgentSal * 0.90 );
}else {
	life_cash = life_cash + round(ArgentSal * 0.85 );
}; 
ArgentSal = ArgentSal - ArgentSal;
[getPlayerUID player,ArgentSal] remoteExec ["TON_fnc_updateDB",2];
[0] call SOCK_fnc_updatePartial;
player setVariable ["ArgentSal",ArgentSal,true];
hint "Vous avez transformé votre argent sal en argent utilisable.";