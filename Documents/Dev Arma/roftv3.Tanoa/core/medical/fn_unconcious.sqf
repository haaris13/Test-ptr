private _info = param [0];
private _player = _info select 0;
private _unconcious = _info select 1;

//hint format ["_player= %1 \n\n _unconcious = %2",_player,_unconcious]; // DEBUG
// diag_log format ["_player= %1 \n\n _unconcious = %2",_player,_unconcious]; // DEBUG
if (_player isEqualTo objNull) exitWith {diag_log format ["ERREUR lors de la recuperation du joueur inconcient."];};
if (_unconcious isEqualTo "ERREUR") exitWith {diag_log format ["ERREUR lors de la recuperation de l'état inconcient."];};

if (!(_player isEqualTo player)) exitWith {["ERREUR lors de la recuperation du joueur inconcient. le joueur: %1 la value donner : %2",player,_player];};

switch (_unconcious) do
{
	case true:
	{
		DEATHScreen = ["true"] execVM "core\medical\fn_death.sqf";
		//hint "le player est inconcient.";
		//systemChat "le player est inconcient.";
	};

	case false:
	{
		//hint "le player est de nouveau concient.";
		//systemChat "le player est de nouveau concient.";
		terminate DEATHScreen;
		player setVariable ["RequestMedic",false,true];
		closeDialog 0;
		/*
		player addWeapon PRIMARYWP;
		player addWeapon SECONDWP;
		player addWeapon HANDGUNWP;
		{
			player addPrimaryWeaponItem _x;
		} forEach PRIMARYWPITM;

		{
			player addSecondaryWeaponItem _x;
		} forEach SECONDWPITM;

		{
			player addHandgunItem _x;
		} forEach HANDGUNWPITM;
		
		player loadMagazine [[0], (primaryWeapon player), PRIMARYWPMAG];
		player loadMagazine [[0], (secondaryWeapon player), SECONDWPMAG];
		player loadMagazine [[0], (handgunWeapon player), HANDGUNWPMAG];
		PRIMARYWP = objNull;
		SECONDWP = objNull;
		HANDGUNWP = objNull;
		PRIMARYWPITM = objNull;
		PRIMARYWPMAG = objNull;
		*/
	};
};
