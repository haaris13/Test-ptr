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




_champ = param [0];
switch (_champ) do
{
	case nekro_champs_betterave_VR:
	{
		recolteRSC = "Hazendarck_Betterave";
		namechamps = "Champs de bétrave";
	};

	case nekro_champs_pommeDeTerre_VR:
	{
		recolteRSC = "Hazendarck_Potatoe";
		namechamps = "Champs de pomme de terre";
	};
	case nekro_champs_carotte_VR:
	{
		recolteRSC = "Hazendarck_Carotte";
		namechamps = "Champs de carottes";
	};
};

MarkerChamps = createMarkerLocal [format[namechamps],getpos _champ];
MarkerChamps setMarkerColorLocal "ColorYellow";
MarkerChamps setMarkerTypeLocal "Mil_dot";
MarkerChamps setMarkerTextLocal format[namechamps];
hint format ["Va dans le %1 et recolte en !",namechamps];

uisleep 5;

while {Inmission == 1 && agriculteur == 3} do
{

	if (Inmission == 1 && agriculteur == 3 && InZone == 1 && vehicle player == Montracteur && (position player) distance (position _champ) < 200) then
	{
		if (speed player >2 && speed player < 25) then
		{
			hint "Tu es dedans et tu récolte";
			total_tract = total_tract + 1;
			hint format ["Tu es en récolte \n \n tu en a récolté %1 / 300",total_tract];
			Montracteur addMagazineCargoGlobal [recolteRSC, 1];
		};
		if (speed player <=2) then
		{
			hint "Tu dois aller plus vite !";
		};
		if (speed player >=30) then {
			hint "Tu dois aller moins vite !";

		};

	};
	if (Inmission == 1 && agriculteur == 3 && InZone == 1 && vehicle player == Montracteur && total_tract == 300) exitWith
	{
		hint "maintenant, tu dois rendre le vehicule \n \n je te l'ai indiqué sur ton GPS.";
		deleteMarkerLocal MarkerChamps;
		MarkerChampsR = createMarkerLocal [format["Rendre"],getpos PosAgriculture];
		MarkerChampsR setMarkerColorLocal "ColorYellow";
		MarkerChampsR setMarkerTypeLocal "Mil_dot";
		MarkerChampsR setMarkerTextLocal format["Rendre le vehicule et la récolte"];
		agriculteur = 2;
	};
	uisleep 2;
};