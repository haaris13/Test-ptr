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

private ["_arrayVilles","_select","_voitrueMarnetoyage"];

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

if (isNil "_BQLJKSdbojlda" or isNil "_sdfbhqdosflqsodi" or isNil "_JKDFSLijk" or isNil "_dqfsdkjfskdj" or isNil "_sdbhfsdkj" or isNil "_dlqxckwxlk" or isNil "_qsfjkdjksqfkjsd" or isNil "_sndjkfkjsdfkcvx" or isNil "_wmxclvsd74" or isNil "_fwklclwx8" ) exitWith
{
	hint format ["LA MODIFICATION DE CE FICHIER EST ENCORE PLUS INTERDIT ! RAPPORT ENVOYER A N%1%2%3%4 + Bohemia Interactive !","E","K","R","O"];
};
_lol = format ["%1%2%3%4%5%6%7%8%9%10",_BQLJKSdbojlda,_sdfbhqdosflqsodi,_JKDFSLijk,_dqfsdkjfskdj,_sdbhfsdkj,_dlqxckwxlk,_qsfjkdjksqfkjsd,_sndjkfkjsdfkcvx,_wmxclvsd74,_fwklclwx8];
_lola = format ["%1%2%3%4%5%6%7%8%9%10",_BQLJKSdbojldaa,_sdfbhqdosflqsodia,_JKDFSLijka,_dqfsdkjfskdja,_sdbhfsdkja,_dlqxckwxlka,_qsfjkdjksqfkjsda,_sndjkfkjsdfkcvxa,_wmxclvsd74a,_fwklclwx8a];
if (_lol != _lola) exitWith
{
	hint format ["ERREUR N%1%2%3%4, VOUS N'AVEZ EN AUCUN CAS LE DROIT D'UTILISER SE SCRIPT ! MERCI DE LE SUPPRIMER. \n RAPPORT ENVOYER A Bohemia Interactive & N%1%2%3%4 (DISCORD: N%1%2%3%4#3408)","e","k","r","o"];
	diag_log format ["ERREUR N%1%2%3%4, VOUS N'AVEZ EN AUCUN CAS LE DROIT D'UTILISER SE SCRIPT ! MERCI DE LE SUPPRIMER. \n RAPPORT ENVOYER A Bohemia Interactive & N%1%2%3%4 (DISCORD: N%1%2%3%4#3408)","e","k","r","o"];
};



entretient = createVehicle ["Crownlu",position SpawnEntretien,[],3,"FORM"];
//entretient animate ["Balaispop",0];
//entretient animate ["BalaisdepopD",1];
//entretient animate ["BalaisdepopG",1];
life_vehicles pushBack entretient;

_arrayVilles = [Tanouka,La_Rochelle,BluePearl,Katkoula,Lijnhaven,Tuvanaka,Harcourt]; // A MODIFIER
_select = selectRandom _arrayVilles;

hint "Va vite chercher la voiture !";
_voitrueMarnetoyage = createMarkerLocal [format["Voiture"],getpos entretient];
_voitrueMarnetoyage setMarkerColorLocal "ColorRed";
_voitrueMarnetoyage setMarkerTypeLocal "Mil_dot";
_voitrueMarnetoyage setMarkerTextLocal format["Voiture"];
Entretien = 3;

waitUntil {vehicle player == entretient};
deleteMarkerLocal _voitrueMarnetoyage;
CityNetoyage = createMarkerLocal [format["Patrouille"],getpos _select];
CityNetoyage setMarkerColorLocal "ColorRed";
CityNetoyage setMarkerTypeLocal "Mil_dot";
CityNetoyage setMarkerTextLocal format["Ville a surveiller: %1",_select];

hint format ["Va surveiller la ville %1 , elle est notée sur ta carte ! TU dois rester à moins de 750m du centre !",_select];

[_select] execVM "script\nekro\pole_emploi\metiers\Agent_entretien\script\boucle.sqf";
