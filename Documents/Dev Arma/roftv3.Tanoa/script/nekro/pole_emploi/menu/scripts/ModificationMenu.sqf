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



#include "..\..\..\..\..\script_macros.hpp";
disableSerialization;
hint '';

_myclass = lbData [245001, lbCurSel 245001];
_MyrealClass = _myclass;
_vIndex = lbValue [245001, lbCurSel 245001];
_myvalue = lbCurSel 245001;
_mylbtext = lbText [245001, _myvalue];



hint format ["%1 \n %2 \n %3 \n %4 \n %5", _myclass, _MyrealClass, _vIndex, _myvalue, _mylbtext];
/*
Lite des config dans le hpp par rapport a la class selectionner dans le dialog

*/
_informations = M_CONFIG(getText,"nekrojobs",_mylbtext,"infroamtions");

_maxplyers = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"max_players_on_this_job");

//_min_reput = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"min_reput");

//_reputadd = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"reputadd");

_maxtime = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"maxtime");

/*
FIN
*/

_display = findDisplay 24500;
_SecondScreen = _display displayCtrl 245002;
_SecondScreen ctrlSetText "test";

(CONTROL(24500,245002)) ctrlSetStructuredText parseText format [
    "Informations : <t color='#8cff9b'>%1</t><br/>" +
    "Nombre maximum d'employés:  <t color='#8cff9b'>%2</t><br/>" +
  //  "Réputation nécéssaire: %3 <br/>" +
   // "Ajout de Réputation si réussite: %4<br/>" +
    "Temps maximum autorisé: %3",
    _informations,
    _maxplyers,
    _maxtime
   // _min_reput,
  //  _reputadd,
];

hint parseText format [
    "Informations : <t color='#8cff9b'>%1</t><br/>" +
    "Nombre maximum d'employés:  <t color='#8cff9b'>%2</t><br/>" +
 //   "Réputation nécéssaire: %3 <br/>" +
 //   "Ajout de Réputation si réussite: %4<br/>" +
    "Temps maximum autorisé: %3",
    _informations,
    _maxplyers,
  //  _min_reput,
  //  _reputadd,
    _maxtime
];

true;