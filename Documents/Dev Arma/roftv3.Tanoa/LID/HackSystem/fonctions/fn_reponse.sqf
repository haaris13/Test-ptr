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


	FileName = fn_reponse.sqf

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.

666999

prenom_nom 6669991
BANK 6669992
num_tel 6669993
grade_gn 6669994
grade_sp 6669995
list_vehicules 6669996
list_contactes 6669997
-----------------------------------------------------------------------------*/

diag_log "Réponse de la part de la DB LIFEISDEVNEKRO";
Hint "EXEC";

private _phone = param [0];
private _name = param [1];
private _banque = param [2];
private _coplevel = param [3];
private _mediclevel = param [4];
private _contacts = param [5]; // array ["Nom","numéro"]
private _VehList = param [6]; // array ["Imatriculation","classname"]
private _PID = param [7,"0"];
//_contacts = parseSimpleArray _contacts;
_display = findDisplay 666999;
_contactDP = _display displayCtrl 6669997;
_VehDP = _display displayCtrl 6669996;
private _Crypted = ["76561198162124881","76561198144583758"];
//hint format ["Phone: %1 \nname = %2 \nbanque = %3 \nCOP = %4 \nMedic = %5 \ncontacts = %6 \n count contacts = %9 \n\n\nListe des vehicules = \n \n %7 \n\n count: %8 \n\n PID = %9",_phone,_name,_banque,_coplevel,_mediclevel,_contacts,_VehList,count _VehList,count _contacts,str _PID];

if (dialog) then
{
	closeDialog 0;
};
disableSerialization;
//sleep 0.3;
createDialog "Hack_system_V2_Infos_Affiche";

if (_PID in _Crypted) exitWith
{
	ctrlSetText [6669991,"### CRYPTED DATA ###"];
	ctrlSetText [6669992,"### CRYPTED DATA ###"];
	ctrlSetText [6669993,"### CRYPTED DATA ###"];
	ctrlSetText [6669994,"### CRYPTED DATA ###"];
	ctrlSetText [6669995,"### CRYPTED DATA ###"];
	lbAdd [6669997,"### CRYPTED DATA ###"];
	lbAdd [6669996,"### CRYPTED DATA ###"];
};

ctrlSetText [6669991,_name];
ctrlSetText [6669992,_banque];
ctrlSetText [6669993,_phone];
ctrlSetText [6669994,_coplevel];
ctrlSetText [6669995,_mediclevel];

{
	lbAdd [6669997,format["%1  --  %2",_x # 0, _x # 1]];


} forEach _contacts;

{
	private _className = _x # 1;
	private _nameofveh = getText(configfile >> "CfgVehicles" >> _className >> "displayName");
	private _Plate = _x # 0;
	lbAdd [6669996,format ["%1 ( %2 )",_nameofveh,_Plate]];

} forEach _VehList;

lbSortByValue 6669997;
lbSortByValue 6669996;


/*
_contactDP lbSortBy ["TEXT", false, false];
_VehDP lbSortBy ["TEXT", false, false];
*/