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



//add_reput
_Type = param [0]; // param que l'on recupere lors du call / remoteexec du script

switch(_type) do {
	case 0: // case que l'on recupere par rapport au param du call
	{
		_reput = nekro_reput;
		_ajout_reputation = param [1];
/*
		if (_ajout_reputation == 0) exitWith
		{
			hint format ["Erreur lors de l'update de la réputation \n Merci de contacter un staff \n \n ERROR 0x001_ajout_reputation"];
		};
*/
		_thereal_reput = _reput + _ajout_reputation;
		_MyPid = getPlayerUID player;
		[_MyPid,_thereal_reput,player] remoteExecCall ["TON_fnc_reputationadd"];
		closedialog 0;
		diag_log format ["Le joueur %1 a eu un ajout de %2 et a maintenant un total de %3 de reputation. ( UID : %3 ) ",player,_ajout_reputation,_thereal_reput,_MyPid];
	};
	case 1:
	{

	};
};