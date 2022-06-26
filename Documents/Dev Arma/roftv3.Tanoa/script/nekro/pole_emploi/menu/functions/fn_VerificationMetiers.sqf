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
//_TheName = param [0];
//uisleep (random 4);

if (missionpoubelle != 0) then {
nekro_Eboueur_maxplayer = nekro_Eboueur_maxplayer + 1;
if (nekro_Eboueur_maxplayer < 0) then
	{
		nekro_Eboueur_maxplayer = 0;
	};
publicVariable "nekro_Eboueur_maxplayer";
};
//--------------------------
if (missionGRDF != 0) then {
nekro_GRDF_maxplayer = nekro_GRDF_maxplayer + 1;
	if (nekro_GRDF_maxplayer < 0) then
	{
		nekro_GRDF_maxplayer = 0;
	};
publicVariable "nekro_GRDF_maxplayer";
};
//--------------------------
if (missionERDF != 0) then {
nekro_ERDF_maxplayer = nekro_ERDF_maxplayer + 1;
if (nekro_ERDF_maxplayer < 0) then
	{
		nekro_ERDF_maxplayer = 0;
	};
publicVariable "nekro_ERDF_maxplayer";
};
//--------------------------
if (agriculteur != 0) then {
nekro_Agriculteur_maxplayer = nekro_Agriculteur_maxplayer + 1;
if (nekro_Agriculteur_maxplayer < 0) then
	{
		nekro_Agriculteur_maxplayer = 0;
	};
publicVariable "nekro_Agriculteur_maxplayer";
};
//--------------------------
if (Entretien != 0) then {
nekro_Entretien_maxplayer = nekro_Entretien_maxplayer + 1;
if (nekro_Entretien_maxplayer < 0) then
	{
		nekro_Entretien_maxplayer = 0;
	};
publicVariable "nekro_Entretien_maxplayer";
};

diag_log format [" vérification du nombre de joueurs max pour les métiers time: %2",time];
