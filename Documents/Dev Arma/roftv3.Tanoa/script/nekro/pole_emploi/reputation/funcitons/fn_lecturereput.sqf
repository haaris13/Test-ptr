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



/* A executer au début de la connexion du client afin d'avoir la variable de la réputation a jour /!\ PAS ENCORE FONCTIONNELLE (manque le coté serveur) /!\*/

_Type = param [0]; // param que l'on recupere lors du call / remoteexec du script

switch(_Type) do {
	case 0: // case que l'on recupere par rapport au param du call
	{
		_reput = nekro_reput;
		_PID = getPlayerUID player;
		[_PID,player,_reput] remoteExecCall ["TON_fnc_lecturereputation"];
	};
	case 1:
	{
		_newreput = param [1];
		if (_newreput < 0) then
		{
			_newreput = 0;
		};
		/*
		if (_newreput == "") then
		{
			_newreput = 0;
		};
		*/
		if (isNil "_newreput") then
		{
			_newreput = 0;
		};
		nekro_reput = _newreput;

	};
};