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



/*
Hide Every items for the JobSystem By Nekro

*/
JobDisable = 0;
execVM "script\nekro\verificationmetiers.sqf";



_VrList = [nekro_champs_betterave_VR,nekro_champs_carotte_VR,nekro_champs_pommeDeTerre_VR,PosAgriculture,SpawnAgriculture,SpawnERDF];
{
	hideObject _x;
} forEach _VrList;

if (isNil "numberpbl") then
{
    numberpbl = 0;
};

if (isNil "missionpoubelle") then
{
	missionpoubelle = 0;
};

if (isNil "total_tract") then
{
	total_tract = 0;
};

if (isNil "InZone") then
{
	InZone = 0;
};
/*
if (isNil "nekro_reput") then
{
	nekro_reput = 0;
};
*/
if (isNil "InMission") then
{
	InMission = 0;
};

if (isNil "agriculteur") then
{
	agriculteur = 0;
};

if (isNil "Entretien") then
{
	Entretien = 0;
};
if (isNil "missionERDF") then
{
	missionERDF = 0;
};
// ted brinks
/*
if (isNil "Brinks") then
{
	Brinks = 0;
};
*/
//[0] remoteExecCall ["life_fnc_lecturereput",player];

if (isNil "nekro_ERDF_maxplayer") then
{
	nekro_ERDF_maxplayer = 0;
};
if (isNil "nekro_Entretien_maxplayer") then
{
	nekro_Entretien_maxplayer = 0;
};


if (isNil "nekro_GRDF_maxplayer") then
{
	nekro_GRDF_maxplayer = 0;
};

if (isNil "nekro_ERDF_maxplayer") then
{
	nekro_ERDF_maxplayer = 0;
};

if (isNil "nekro_Eboueur_maxplayer") then
{
	nekro_Eboueur_maxplayer = 0;
};

if (isNil "nekro_Agriculteur_maxplayer") then
{
	nekro_Agriculteur_maxplayer = 0;
};

if (isNil "nekro_Entretien_maxplayer") then
{
	nekro_Entretien_maxplayer = 0;
};



