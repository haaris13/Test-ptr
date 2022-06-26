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

_result = ctrlText 15432231;
_realresult = str (rNumber);
_mylbtext = "REDSG";

//_reputadd = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"reputadd");
_addmoney = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"addmoney");
_addmoneylow = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"addmoneylow");

deleteVehicle MonVeErdf;
hint format ["%1 \n %2",_result,_realresult];
_lvl = missionNamespace getVariable ["prof_interim",0];

if (_lvl >= 50) then {
  _addmoney = _addmoney * 1.1;
  _addmoneylow = _addmoneylow * 1.1;
};
if (_lvl >= 100) then {
  _addmoney = _addmoney * 1.1;
  _addmoneylow = _addmoneylow * 1.1;
};
if (_lvl >= 200) then {
  _addmoney = _addmoney * 1.1;
  _addmoneylow = _addmoneylow * 1.1;
};
if (_lvl >= 300) then {
  _addmoney = _addmoney * 1.1;
  _addmoneylow = _addmoneylow * 1.1;
};
if (_lvl >= 400) then {
  _addmoney = _addmoney * 1.1;
  _addmoneylow = _addmoneylow * 1.1;
};
if (_lvl >= 500) then {
  _addmoney = _addmoney * 1.1;
  _addmoneylow = _addmoneylow * 1.1;
};
if (_result == _realresult) then {

	hint format ["Bravo, tu as fini la mission %1 ça va me rapporter une fortuuuunnne !", _result];
	missionERDF = 0;
	BANK = BANK + _addmoney;

	deleteMarkerLocal "Patron_SAUR";
	//[0, _reputadd] call life_fnc_addreput;
	//nekro_reput = nekro_reput + _reputadd;
	["prof_interim",1,80] call life_fnc_levelProfession;
	}	else {
	hint format ["Bravo, tu as fini la mission. %1 mais il m'a appelé et m'a dit que le résultat n'était pas le bon !", _result];
	missionERDF = 0;
	BANK = BANK + _addmoneylow;
	deleteMarkerLocal "Patron_SAUR";
	["prof_interim",1,80] call life_fnc_levelProfession;
	};

missionERDF = 0;
Inmission = 0;
nekro_ERDF_maxplayer = nekro_ERDF_maxplayer - 1;
publicVariable "nekro_ERDF_maxplayer";
player removeAction actionVolt;
closeDialog 0;
missionERDF = 0;
