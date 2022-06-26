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

(Life Is Dev)

	FileName = fn_CheckCommand.sqf

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.

/!\/!\/!\ DoNotForget: NumberOfExecution = 0; a l'init du dialog ! TRES IMPORTANT ! /!\/!\/!\
/!\/!\/!\ DoNotForget: onKeyDown to execute /!\/!\/!\
666

6661 --> 66617 == prompt
66618 == command line

-----------------------------------------------------------------------------*/

errorON = false;
_NewCommand = {
	if (errorON) exitWith{};
	errorON = true;
	_clearAll = {
		{
			ctrlSetText [_x,""];
		} forEach [6661,6662,6663,6664,6665,6666,6667,6668,6669,66610,66611,66612,66613,66614,66615,66616,66617];
	};
	AllAtDel = false;
	Line1 = ctrlText 6661;
	Line2 = ctrlText 6662;
	Line3 = ctrlText 6663;
	Line4 = ctrlText 6664;
	Line5 = ctrlText 6665;
	Line6 = ctrlText 6666;
	Line7 = ctrlText 6667;
	Line8 = ctrlText 6668;
	Line9 = ctrlText 6669;
	Line10 = ctrlText 66610;
	Line11 = ctrlText 66611;
	Line12 = ctrlText 66612;
	Line13 = ctrlText 66613;
	Line14 = ctrlText 66614;
	Line15 = ctrlText 66615;
	Line16 = ctrlText 66616;
	Line17 = ctrlText 66617;
	_commande = ctrlText 66618;
	_ToaddLine1 = param [0];
	_ToaddLine2 = param [1];
	finalcomm = "";
	_num = 1;
	{
		if ((ctrlText _x) isEqualTo "") exitWith
		{
			errorON = false;
			call compile format ["line%1 = ""%2""; line%1;",_num,_ToaddLine1];
		};
		_num = _num + 1;
		if (_num isEqualTo 18) then
		{
			AllAtDel = true;
			Line1 = _ToaddLine1;
			Line2 = "";
			Line3 = "";
			Line4 = "";
			Line5 = "";
			Line6 = "";
			Line7 = "";
			Line8 = "";
			Line9 = "";
			Line10 = "";
			Line11 = "";
			Line12 = "";
			Line13 = "";
			Line14 = "";
			Line15 = "";
			Line16 = "";
			Line17 = "";
		};
	} forEach [6661,6662,6663,6664,6665,6666,6667,6668,6669,66610,66611,66612,66613,66614,66615,66616,66617];
	closeDialog 0;
	_count = 1;
	createDialog "Hack_system_V2_Console_CMD";
	{
		[] call compile format ["ctrlSetText [%1,Line%2]",_x,_count];
		_count = _count + 1;
	} forEach [6661,6662,6663,6664,6665,6666,6667,6668,6669,66610,66611,66612,66613,66614,66615,66616,66617];
	ctrlSetText [66618,""];
	errorON = false;
	ctrlSetFocus ((findDisplay 666) displayCtrl 66618);
};


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
if (isNil "_commande" or _commande == "") exitWith
{
	["Aucune commande n'a été tapé, merci de réessayer !"] call _NewCommand;
};
private _arr = _commande splitString " ";
private _firstcomm = _arr # 0;



switch (_firstcomm) do
{
	case "ping":
	{
		if (count _arr < 2) exitWith
		{
			["La commande 'ping' nécéssite 1 élément ex: ping [IP]"] call _NewCommand;
		};

		[format["ping vers: %1 en cours...",(_arr # 1)]] call _NewCommand;
	};

	case "tuppy":
	{
		if (count _arr > 1) exitWith
		{
			["Vous ne pouvez pas donner de paramettre a cette application !"] call _NewCommand;
		};
		closeDialog 0;
		NumberOfExecutionPutty = 0;
		commandePuttyON = false;
		createDialog "Hack_system_V2_Console_Tuppy";
	};

	case "tracertphone":
			{
			if !(count _arr == 2) exitWith
			{
				["La commande 'tracertphone' nécéssite 1 élément"] call _NewCommand;
			};
			_trouver = false;



			{
		 	if (_x getVariable ["maxence_numero",0] isEqualTo (_arr # 1)) exitWith
			 {
			 	_trouver = true;
			 	[format ["position retrouver pour le numéro: %1, regarder votre GPS",(_arr # 1)]] call _NewCommand;
			 	_centre = _x;
				_radius = random 800;
				_dir = random 360;
				_height = 0;
				if (typename _centre == "OBJECT") then {
				 _centre = getpos _centre;
				};

				_pos = [(_centre select 0) + (sin _dir *_radius), (_centre select 1) + (cos _dir *_radius), _height];


				_markerstr = createMarkerLocal ["Traceur téléphone", _pos];
				_markerstr setMarkerShapeLocal "ELLIPSE";
				_markerstr setMarkerSizeLocal [800, 800];
				_markerstr setMarkerColorlocal "ColorOrange";
				_markerstr setMarkerAlphalocal 0.5;

				sleep 15;
				deleteMarker _markerstr;

			 };


		} forEach allPlayers;
		if !(_trouver) then
		{
			[format["numéro %1 inconnu",(_arr # 1)]] call _NewCommand;
		};
	};

	case 4:
	{
		/* STATEMENT */
	};

	case 5:
	{
		/* STATEMENT */
	};

	case 6:
	{
		/* STATEMENT */
	};

	case 7:
	{
		/* STATEMENT */
	};

	case 8:
	{
		/* STATEMENT */
	};

	case 9:
	{
		/* STATEMENT */
	};

	case 10:
	{
		/* STATEMENT */
	};

	default
	{
		[format["'%1' n’est pas reconnu en tant que commande. Merci de contacter un adminstrateur WinDaube",_firstcomm]] call _NewCommand;
	};
};