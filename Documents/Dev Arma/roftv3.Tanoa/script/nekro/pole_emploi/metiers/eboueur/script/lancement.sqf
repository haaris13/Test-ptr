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
_mylbtext = "Eboueur";

/* List of variables for conditions  */
_maxplyers = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"max_players_on_this_job");

_min_reput = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"min_reput");

_maxtime = M_CONFIG(getNumber,"nekrojobs",_mylbtext,"maxtime");
/* CONDITION Reputation  */

if (!(playerSide == civilian)) exitWith
{
	"Tu doit être civil pour lancer une mission !";
};

if (Nekro_reput < _min_reput) exitWith
{
	hint format ["Désolé, tu doit avoir une réputation de %1 alors que tu a seulement %2", _min_reput, Nekro_reput];
	closedialog 0;
};
/* CONDITION Alredy in missionERDF?  */

if (Inmission != 0) exitWith
{
	hint "Tu a deja un metier depeche toi dy aller ou je te fous un coup de pied au cul !";
	closedialog 0;
};

if (missionpoubelle != 0) exitWith
{
	hint format ["Désolé, Tu est deja en missionERDF fini la rapidement !"];
	closedialog 0;
};

if (isNil "nekro_Eboueur_maxplayer") then { nekro_Eboueur_maxplayer = 0; diag_log format ["Mise a jour de la variable global nekro_Eboueur_maxplayer a  %1",nekro_Eboueur_maxplayer]; publicVariable "nekro_Eboueur_maxplayer";};
/* CONDITION MAX PLAYERS  */
if (nekro_Eboueur_maxplayer >= _maxplyers) exitWith
{
	nekro_Eboueur_maxplayer = 0;
	publicVariable "nekro_Eboueur_maxplayer";
	[(name player)] remoteExecCall ["life_fnc_VerificationMetiers"];
	hint format ["Désolé, nous ne recherchons plus de personnel pour ce metier actuellement. Il y a dejâ assez de monde !"];
	closedialog 0;
	JobDisable = 1;
	uisleep 60;
	JobDisable = 0;
};

/* A DEFINE */ // [_maxtime] call life_fnc_nekroTIMER;


/* UPTADE PUBLIC VARIBLE  */
nekro_Eboueur_maxplayer = nekro_Eboueur_maxplayer + 1;
publicVariable "nekro_Eboueur_maxplayer";
diag_log format ["Mise a jour de la variable global nekro_Eboueur_maxplayer a %1",nekro_Eboueur_maxplayer];

/* SET MARKER */
_markERDF = createMarkerLocal [format["Patron_Eboueur"],getpos eboueur];
_markERDF setMarkerColorLocal "ColorYellow";
_markERDF setMarkerTypeLocal "Mil_dot";
_markERDF setMarkerTextLocal format["Patron Eboueur va vite le voir !"];
hint "Va voir ton nouveau patron pour commencer dépeche toi, il ne va pas t'attendre longtemps!";
Inmission = 1;
missionpoubelle = 1;

waitUntil {position player distance eboueur < 5};
deleteMarkerLocal _markERDF;
hint 'parle au patron maintenant';