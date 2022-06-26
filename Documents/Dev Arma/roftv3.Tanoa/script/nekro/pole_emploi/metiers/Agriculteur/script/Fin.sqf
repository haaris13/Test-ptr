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
#include "..\..\..\..\..\..\script_macros.hpp";

_mylbtext = "Agriculteur";

//_reputadd = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"reputadd");
_addmoney = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"addmoney");
_addmoneylow = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"addmoneylow");

deleteMarkerLocal MarkerChampsR;
agriculteur = 0;
Inmission = 0;
total_tract = 0;
hint "Merci tu m'a rendu un service ! repasse par le pole emploie et viens me voir quand tu veux! ";
deleteVehicle Montracteur;
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
CASH = CASH + _addmoney;
["prof_interim",1,80] call life_fnc_levelProfession;
//[0, _reputadd] call life_fnc_addreput;
//nekro_reput = nekro_reput + _reputadd;

nekro_Agriculteur_maxplayer = nekro_Agriculteur_maxplayer - 1;
publicVariable "nekro_Agriculteur_maxplayer";