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

	FileName = fn_initargentsal.sqf

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/



switch (param [0]) do
{
	case 1:
	{
		[player,getPlayerUID player] remoteExec ["TON_fnc_argentsalinit",2];
	};

	case 2:
	{
		ArgentSal = param [1,0];
		player setVariable ["ArgentSal",param [1],true];
	};
};