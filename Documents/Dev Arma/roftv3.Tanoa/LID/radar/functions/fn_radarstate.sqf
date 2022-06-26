/*-----------------------------------------------------------------------------
	 _   _ ______ _  _______   ____
	| \ | |  ____| |/ /  __ \ / __ \
	|  \| | |__  | ' /| |__) | |  | |
	| . ` |  __| |  < |  _  /| |  | |
	| |\  | |____| . \| | \ \| |__| |
	|_| \_|______|_|\_\_|  \_\____/

Server:
 _____   ____  ______ _______
|  __ \ / __ \|  ____|__   __|
| |__) | |  | | |__     | |
|  _  /| |  | |  __|    | |
| | \ \| |__| | |       | |
|_|  \_\\____/|_|       |_|

(ROFT / Republic Of Tanoa)

	FileName = fn_initradar.sqf

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/

radar = 1;
[] spawn LIDCLIENT_fnc_initradar;
_ppos = position player;
waitUntil {_ppos distance (position player) > 3};
radar = 0;
hint "vous n'êtes plus dans la zone afin de voir le radar.";
