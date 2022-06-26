/*-----------------------------------------------------------------------------
 _   _ ______ _  _______   ____               _    _           ____________ _   _ _____          _____   _____ _  __
| \ | |  ____| |/ /  __ \ / __ \     ___     | |  | |   /\    |___  /  ____| \ | |  __ \   /\   |  __ \ / ____| |/ /
|  \| | |__  | ' /| |__) | |  | |   ( _ )    | |__| |  /  \      / /| |__  |  \| | |  | | /  \  | |__) | |    | ' /
| . ` |  __| |  < |  _  /| |  | |   / _ \/\  |  __  | / /\ \    / / |  __| | . ` | |  | |/ /\ \ |  _  /| |    |  <
| |\  | |____| . \| | \ \| |__| |  | (_>  <  | |  | |/ ____ \  / /__| |____| |\  | |__| / ____ \| | \ \| |____| . \
|_| \_|______|_|\_\_|  \_\\____/    \___/\/  |_|  |_/_/    \_\/_____|______|_| \_|_____/_/    \_\_|  \_\\_____|_|\_\

	 _      _____ ______ ______   _____  _____   _____  ________      __
	| |    |_   _|  ____|  ____| |_   _|/ ____| |  __ \|  ____\ \    / /
	| |      | | | |__  | |__      | | | (___   | |  | | |__   \ \  / /
	| |      | | |  __| |  __|     | |  \___ \  | |  | |  __|   \ \/ /
	| |____ _| |_| |    | |____   _| |_ ____) | | |__| | |____   \  /
	|______|_____|_|    |______| |_____|_____/  |_____/|______|   \/

Server:

 _____   ____  ______ _______      __  _____  ______ _____  _    _ ____  _      _____ _____    ____  ______   _______       _   _  ____           __
|  __ \ / __ \|  ____|__   __|    / / |  __ \|  ____|  __ \| |  | |  _ \| |    |_   _/ ____|  / __ \|  ____| |__   __|/\   | \ | |/ __ \   /\     \ \
| |__) | |  | | |__     | |      | |  | |__) | |__  | |__) | |  | | |_) | |      | || |      | |  | | |__       | |  /  \  |  \| | |  | | /  \     | |
|  _  /| |  | |  __|    | |      | |  |  _  /|  __| |  ___/| |  | |  _ <| |      | || |      | |  | |  __|      | | / /\ \ | . ` | |  | |/ /\ \    | |
| | \ \| |__| | |       | |      | |  | | \ \| |____| |    | |__| | |_) | |____ _| || |____  | |__| | |         | |/ ____ \| |\  | |__| / ____ \   | |
|_|  \_\\____/|_|       |_|      | |  |_|  \_\______|_|     \____/|____/|______|_____\_____|  \____/|_|         |_/_/    \_\_| \_|\____/_/    \_\  | |
                                  \_\                                                                                                             /_/


	FileName = fn_PuttyCheck.sqf

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/


if(commandePuttyON) exitWith {};
commandePuttyON = true;

private _Line1 = ctrlText 6661;
private _Line2 = ctrlText 6662;
private _Line3 = ctrlText 6663;
private _Line4 = ctrlText 6664;
private _Line5 = ctrlText 6665;
private _Line6 = ctrlText 6666;
private _Line7 = ctrlText 6667;
private _Line8 = ctrlText 6668;
private _Line9 = ctrlText 6669;
private _Line10 = ctrlText 66610;
private _Line11 = ctrlText 66611;
private _Line12 = ctrlText 66612;
private _Line13 = ctrlText 66613;
private _Line14 = ctrlText 66614;
private _Line15 = ctrlText 66615;
private _Line16 = ctrlText 66616;
private _Line17 = ctrlText 66617;
_commande = ctrlText 66618;
checkputty = "";
resultputty = "";
switch (NumberOfExecutionPutty) do
{
	case 0:
	{
		checkputty = "connect 87.98.154.146";
		resultputty = "Connected, to continue, please enter the app name";
		numIDputty = 6662;
	};

	case 1:
	{
		checkputty = "privateSnifer";
		resultputty = "Connected, to continue, please launch mysql";
		numIDputty = 6664;
	};


	case 2:
	{
		checkputty = "mysql";
		resultputty = "mysql launched, pleez connect to the main server";
		numIDputty = 6666;
	};

	case 3:
	{
		checkputty = "87.98.154.146";
		resultputty = "IP correct, pleez enter UserName";
		numIDputty = 6668;
	};

	case 4:
	{
		checkputty = "SYSTEM";
		resultputty = "username correct, enter Password";
		numIDputty = 66610;
	};

	case 5:
	{
		checkputty = passTupyForThisReboot;
		resultputty = "Waiting for connection... OK. you need to check database list";
		numIDputty = 66612;
	};

	case 6:
	{
		checkputty = "show databases;";
		resultputty = "Total: 2 - gouvernement - electionVOTE - Mysql requiere database selection";
		numIDputty = 66614;
	};

	case 7:
	{
		checkputty = "USE gouvernement;";
		resultputty = "";
		numIDputty = 66616;
	};

	default
	{
		closeDialog 0;
		commandePuttyON = false;
		createDialog "Hack_system_V2_Erreur";
		sleep 3;
		closeDialog 0;

	};
};

if !(toLower(_commande) isEqualTo tolower(checkputty)) exitWith {
	closeDialog 0;
	commandePuttyON = false;
	createDialog "Hack_system_V2_Erreur";
	sleep 3;
};

if !(numIDputty == 66616) exitWith
{
	commandePuttyON = false;
	ctrlSetText[numIDputty,resultputty];
	NumberOfExecutionPutty = NumberOfExecutionPutty + 1;
	ctrlSetText[66618,""];
};


ctrlSetText [66617,"LOADING PLEASE WAIT..."];
sleep random [1,2,3];
ctrlSetText [66617,"LOADING PLEASE WAIT... ... 5%"];
sleep random [1,2,3];
ctrlSetText [66617,"LOADING PLEASE WAIT... ... ... 17%"];
sleep random [1,2,3];
ctrlSetText [66617,"LOADING PLEASE WAIT... ... ... ... 42%"];
sleep random [1,2,3];
ctrlSetText [66617,"LOADING PLEASE WAIT... ... ... ... ... 68%"];
sleep random [1,2,3];
ctrlSetText [66617,"LOADING PLEASE WAIT... ... ... ... ... ... 83%"];
sleep random [1,2,3];
ctrlSetText [66617,"LOADING PLEASE WAIT... ... ... ... ... ... ... 100%"];
sleep random [1,2,3];

closeDialog 0;

createDialog "Hack_system_V2_Infos_base";

commandePuttyON = false;

