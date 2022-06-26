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
/* Name of the class on nekro_config.hpp  */
_mylbtext = "Agent_Surveillance";

/* List of variables for conditions  */
_maxplyers = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"max_players_on_this_job");

//_min_reput = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"min_reput");

_maxtime = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"maxtime");
/* CONDITION Reputation  */

if (!(playerSide == civilian)) exitWith
{
	"Tu doit être civil pour lancer une mission !";
};
/*
if (Nekro_reput < _min_reput) exitWith
{
	hint format ["Désolé, tu dois avoir une réputation de %1 alors que tu as seulement %2", _min_reput, Nekro_reput];
	closedialog 0;
};*/
/* CONDITION Alredy in Entretien?  */

if (Inmission != 0) exitWith
{
	hint "Tu as déjà un metier dépêche-toi d y aller ou je te fous un coup de pied au cul !";
	closedialog 0;
};

if (Entretien != 0) exitWith
{
	hint format ["Désolé, Tu es déjà en mission fini la rapidement !"];
	closedialog 0;
};

if (isNil "nekro_Entretien_maxplayer") then { nekro_Entretien_maxplayer = 0; diag_log format ["Mise a jour de la variable global nekro_Entretien_maxplayer a  %1",nekro_Entretien_maxplayer]; publicVariable "nekro_Entretien_maxplayer";};
/* CONDITION MAX PLAYERS  */
if (nekro_Entretien_maxplayer >= _maxplyers) exitWith
{
	nekro_Entretien_maxplayer = 0;
	publicVariable "nekro_Entretien_maxplayer";
	[(name player)] remoteExecCall ["life_fnc_VerificationMetiers"];
	closedialog 0;
	hint format ["Désolé, nous ne recherchons plus de personnel pour ce metier actuellement. Il y a déjà assez de monde ! On vérifie tout ça reviens dans 1 minute."];
	JobDisable = 1;
	uisleep 60;
	JobDisable = 0;
};

/* A DEFINE */ // [_maxtime] call life_fnc_nekroTIMER;
/*
actionabandonjob = player addAction
[
    "Abandonner la Mission interim",
    {
        terminate JobExec;
        hint format ["C'est inadminsible %1 , tu a abandonner ! ",(name player)];
        diag_log format [" Le joueur %1 a abandoner le métier Agent Entretien a %2", (name player),time];
        player removeAction actionabandonjob;
    },
    [],
    1.5,
    true,
    true,
    "",
    "true", // _target, _this, _originalTarget
    2,
    false,
    "",
    ""
];
*/

/* UPTADE PUBLIC VARIBLE  */
nekro_Entretien_maxplayer = nekro_Entretien_maxplayer + 1;
publicVariable "nekro_Entretien_maxplayer";
diag_log format ["Mise à jour de la variable global nekro_Entretien_maxplayer a %1",nekro_Entretien_maxplayer];

/* SET MARKER */
_markERDF = createMarkerLocal [format["Patron_Agent_surveillance"],getpos EntretienStart_1];
_markERDF setMarkerColorLocal "ColorYellow";
_markERDF setMarkerTypeLocal "Mil_dot";
_markERDF setMarkerTextLocal format["Patron. Va vite le voir !"];
hint "Va voir ton nouveau patron pour commencer dépêche-toi, il ne va pas t'attendre longtemps!";
Inmission = 1;
Entretien = 1;

waitUntil {position player distance EntretienStart < 5};
deleteMarkerLocal _markERDF;
hint 'parle au patron maintenant';