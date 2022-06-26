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

_realjob = "eboueur";




_listofjobs = M_CONFIG(getArray,"nekrojobs","listofjobs","maliste"); //Va permetre de rajouter toute la liste dans le lbadd (peut-etre si sa fonctionne)


_title = "A modifier";

_informations = M_CONFIG(getText,"nekrojobs",_realjob,"infroamtions");

_maxplyers = M_CONFIG(getNumber,"nekrojobs",_realjob,"max_players_on_this_job");

//_min_reput = M_CONFIG(getNumber,"nekrojobs",_realjob,"min_reput");

//_reputadd = M_CONFIG(getNumber,"nekrojobs",_realjob,"reputadd");

_maxtime = M_CONFIG(getNumber,"nekrojobs",_realjob,"maxtime");

/*
hint format ["
%1\n
%2\n
%3\n
%4\n
\n
\n
%5
",_title,_informations,_maxplyers,_maxtime,_listofjobs];*/
//_min_reput,_reputadd,
/*
%5\n
%6\n
*/