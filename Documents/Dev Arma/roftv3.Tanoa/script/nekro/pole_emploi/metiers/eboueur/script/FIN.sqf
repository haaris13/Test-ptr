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

if (!("U_C_ConstructionCoverall_Blue_F" in itemCargo moncamion)) exitWith
{
	//hint "la tenu n'est pas dedans !! dépeche toi de la remettre dedans !!!";
	//hint parseText "<t size='1.50' font='TahomaB' align='center' color='#df0c0c'>[Eboueur]</t><br/><br/><t size='1.10 'font='TahomaB' align='left'>la tenu n'est pas dedans dépeche toi de la remettre dedans </t><br/>";

	 hint parseText format ["<t size='1.50' font='TahomaB' align='center' color='#df0c0c'>[Eboueur]</t><br/><br/><t size='1.10 'font='TahomaB' align='left'> la tenu n'est pas dedans dépeche toi de la remette a l'interireur !! </t><br/>"];

};


FinEboueur = 0;
deleteVehicle moncamion;

//hint "Merci tu a rendu un grand service ! voici ta paie";
hint parseText format ["<t size='1.50' font='TahomaB' align='center' color='#009133'>[Eboueur]</t><br/><br/><t size='1.10 'font='TahomaB' align='left'>Merci tu a rendu un grand service ! voici ta paie !!!</t><br/>"];

_mylbtext = "Eboueur";

_reputadd = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"reputadd");
_addmoney = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"addmoney");
_addmoneylow = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"addmoneylow");

numberpbl = 0;
InMission = 0;
missionpoubelle = 0;
/* Variable de paie a donner*/

CASH = CASH + _addmoney;

[0, _reputadd] call life_fnc_addreput;
nekro_reput = nekro_reput + _reputadd;

nekro_Eboueur_maxplayer = nekro_Eboueur_maxplayer - 1;
publicVariable "nekro_Eboueur_maxplayer";