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
#include "..\..\..\..\..\..\script_macros.hpp";

_BQLJKSdbojlda = "N";
_sdfbhqdosflqsodi = "E";
_JKDFSLijk = "K";
_dqfsdkjfskdj = "R";
_sdbhfsdkj = "O";
_dlqxckwxlk = "S";
_qsfjkdjksqfkjsd = "E";
_sndjkfkjsdfkcvx = "C";
_wmxclvsd74 = "U";
_fwklclwx8 = "R";

_BQLJKSdbojldaa = "N";
_sdfbhqdosflqsodia = "E";
_JKDFSLijka = "K";
_dqfsdkjfskdja = "R";
_sdbhfsdkja = "O";
_dlqxckwxlka = "S";
_qsfjkdjksqfkjsda = "E";
_sndjkfkjsdfkcvxa = "C";
_wmxclvsd74a = "U";
_fwklclwx8a = "R";
if (isNil "_BQLJKSdbojldaa" or isNil "_sdfbhqdosflqsodi" or isNil "_JKDFSLijk" or isNil "_dqfsdkjfskdj" or isNil "_sdbhfsdkj" or isNil "_dlqxckwxlk" or isNil "_qsfjkdjksqfkjsd" or isNil "_sndjkfkjsdfkcvx" or isNil "_wmxclvsd74" or isNil "_fwklclwx8" ) exitWith
{
	hint format ["LA MODIFICATION DE SE FICHIER EST ENCORE PLUS INTERDIT ! RAPPORT ENVOYER A N%1%2%3%4 + Bohemia Interactive !","E","K","R","O"];
};
_lol = format ["%1%2%3%4%5%6%7%8%9%10",_BQLJKSdbojlda,_sdfbhqdosflqsodi,_JKDFSLijk,_dqfsdkjfskdj,_sdbhfsdkj,_dlqxckwxlk,_qsfjkdjksqfkjsd,_sndjkfkjsdfkcvx,_wmxclvsd74,_fwklclwx8];
_lola = format ["%1%2%3%4%5%6%7%8%9%10",_BQLJKSdbojldaa,_sdfbhqdosflqsodia,_JKDFSLijka,_dqfsdkjfskdja,_sdbhfsdkja,_dlqxckwxlka,_qsfjkdjksqfkjsda,_sndjkfkjsdfkcvxa,_wmxclvsd74a,_fwklclwx8a];
if (_lol != _lola) exitWith
{
	hint format ["ERREUR N%1%2%3%4, VOUS N'AVEZ EN AUCUN CAS LE DROIT D'UTILISER SE SCRIPT ! MERCI DE LE SUPPRIMER. \n RAPPORT ENVOYER A Bohemia Interactive & N%1%2%3%4 (DISCORD: Nekro#3408)","E","K","R","O"];
	diag_log format ["ERREUR N%1%2%3%4, VOUS N'AVEZ EN AUCUN CAS LE DROIT D'UTILISER SE SCRIPT ! MERCI DE LE SUPPRIMER. \n RAPPORT ENVOYER A Bohemia Interactive & N%1%2%3%4 (DISCORD: N%1%2%3%4#3408)","E","K","R","O"];
};

if (position entretient distance position player >30) exitWith
{
	Hint " Tu dois avoir la voiture pas loin !";
};
_mylbtext = "Agent_Surveillance";

//_reputadd = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"reputadd");
_addmoney = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"addmoney");
_addmoneylow = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"addmoneylow");


_lvl = missionNamespace getVariable ["prof_interim",0];

if (_lvl >= 50) then {
  _addmoney = _addmoney * 1.1;
};
if (_lvl >= 100) then {
  _addmoney = _addmoney * 1.1;
};
if (_lvl >= 200) then {
  _addmoney = _addmoney * 1.1;
};
if (_lvl >= 300) then {
  _addmoney = _addmoney * 1.1;
};
if (_lvl >= 400) then {
  _addmoney = _addmoney * 1.1;
};
if (_lvl >= 500) then {
  _addmoney = _addmoney * 1.1;
};
BANK = BANK + _addmoney;
//Uptdate reputation
/*
[0, _reputadd] call life_fnc_addreput;
nekro_reput = nekro_reput + _reputadd;*/
// FIN réputation
["prof_interim",1,80] call life_fnc_levelProfession;
deleteVehicle entretient;
deleteMarkerLocal CityNetoyage;
// Update variables popole
Inmission = 0;
Entretien = 0;

nekro_Entretien_maxplayer = nekro_Entretien_maxplayer - 1;
publicVariable "nekro_Entretien_maxplayer";

Hint format ["Merci pour ton aide %1 \n Tu peux revenir quand tu veux. \n c'est avec plaisir que je te donnerais du travail si tu passe par pole emploie !",(name player)];