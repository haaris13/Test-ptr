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

	FileName:

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/




_ArrayChamps = [nekro_champs_betterave_VR,nekro_champs_pommeDeTerre_VR,nekro_champs_carotte_VR]; // A MODIFIER [FAIT LE 14/05 PAR NEKRO FICHIERS A SAUVEGARDER]
_random = selectRandom _ArrayChamps;
Hint format ["Va dans la voiture !"];

Montracteur = createVehicle ["UAZ395lu",position SpawnAgriculture,[],3,"FORM"];
//Montracteur = createVehicle ["C_Tractor_01_F",position SpawnAgriculture,[],3,"FORM"];  // Impossible use DLC required
life_vehicles pushBack Montracteur;
Montracteur setVehicleLock "LOCKED";

agriculteur = 3;
_voitrueMarkerChamps = createMarkerLocal [format["voiture"],getpos Montracteur];
_voitrueMarkerChamps setMarkerColorLocal "ColorYellow";
_voitrueMarkerChamps setMarkerTypeLocal "Mil_dot";
_voitrueMarkerChamps setMarkerTextLocal format["Voiture pour recolte"];

waitUntil {vehicle player == Montracteur};
deleteMarkerLocal _voitrueMarkerChamps;


[_random] execVM "script\nekro\pole_emploi\metiers\Agriculteur\script\boucle.sqf";


