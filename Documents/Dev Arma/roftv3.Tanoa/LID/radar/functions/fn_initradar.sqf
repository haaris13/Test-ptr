/*-----------------------------------------------------------------------------
	 _   _ ______ _  _______   ____
	| \ | |  ____| |/ /  __ \ / __ \
	|  \| | |__  | ' /| |__) | |  | |
	| . ` |  __| |  < |  _  /| |  | |
	| |\  | |____| . \| | \ \| |__| |
	|_| \_|______|_|\_\_|  \_\____/

Server:
 _____   ____  ______ _______
|  __ \ / __ \|  ____|__   __|
| |__) | |  | | |__     | |
|  _  /| |  | |  __|    | |
| | \ \| |__| | |       | |
|_|  \_\\____/|_|       |_|

(ROFT / Republic Of Tanoa)

	FileName = fn_initradar.sqf

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/




_licence = getText (missionConfigFile >> "radar" >> "license");
_altimini = getNumber (missionConfigFile >> "radar" >> "hauteur");
_sleep = getNumber (missionConfigFile >> "radar" >> "actualisationTime");
continuer = false;
if (_licence == "") then {continuer = true} else {_call = call compile format ["if (%1) then {continuer = true;} else {continuer = false;);_call;",_licence];};
if !(continuer) exitWith {hint "vous n'avez pas la licence correspondant;"};

while {radar == 1} do
	{

		_aerarr = [];
	_mark = [];

	{

		if ((_x isKindOf "Air") && radar == 1 && ((round ((getPosATL _x) select 2)) > _altimini)) then
		{
			_brouille = _x getVariable ["brouillage",false];
			if (_brouille == false) then
			{
				_aerarr pushBack _x;
			}else {
				_del = _aerarr find _x;
				if !(_del isEqualTo -1) then
				{
					_aerarr deleteAt _del;
				};
			};

		};
	} forEach vehicles;



	{
		_model = getText(configFile >> "CfgVehicles" >> (typeOf _x) >> "displayName");
		_veh = createMarkerLocal [format["%1 - %2",_x,(random 1542454)],getpos _x];
		_mark pushBack _veh;
		_veh setMarkerColorLocal "ColorRed";
		_veh setMarkerTypeLocal "Mil_dot";
		_alti =  round ((getPosATL _x) select 2);
		_spd = round (Speed _x);
		_veh setMarkerTextLocal format["Radar - %1 - %2m - %3 km/h", _model,_alti,_spd];
		_veh setMarkerSizeLocal [0.25, 0.25];
		_veh setMarkerAlphaLocal 0.5;
	} forEach _aerarr;

	sleep _sleep;

	{
		deleteMarkerLocal _x;
	} forEach _mark;
};