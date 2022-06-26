/*-----------------------------------------------------------------------------
	 _   _ ______ _  _______   ____
	| \ | |  ____| |/ /  __ \ / __ \
	|  \| | |__  | ' /| |__) | |  | |
	| . ` |  __| |  < |  _  /| |  | |
	| |\  | |____| . \| | \ \| |__| |
	|_| \_|______|_|\_\_|  \_\____/

Server:
	 ___       ____        ___       __
    /   \     |___ \      /   \     |  |
   /  ^  \      __) |    /  ^  \    |  |
  /  /_\  \    |__ <    /  /_\  \   |  |
 /  _____  \   ___) |  /  _____  \  |  `----.
/__/     \__\ |____/  /__/     \__\ |_______|

	FileName =

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/



rNumber = round (random 4500);

hint format ["Il a utilisé %1 Kw ce mois-ci ! note-le bien. \n",rNumber];

markERDF = createMarkerLocal [format["Patron_SAUR"],getpos ERDFStart];
markERDF setMarkerColorLocal "ColorYellow";
markERDF setMarkerTypeLocal "Mil_dot";
markERDF setMarkerTextLocal format["Patron. Va vite le voir & donne lui une réponse !"];
player removeAction actionVolt;

missionERDF = 3;