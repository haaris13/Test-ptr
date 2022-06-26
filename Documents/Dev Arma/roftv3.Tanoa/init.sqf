StartProgress = false;
introSpawn = nil;
player setVariable ["tf_sendingDistanceMultiplicator", 20.0];  // radio coef
player setVariable ["tf_receivingDistanceMultiplicator", 10.0];  // radio coef
tf_terrain_interception_coefficient = 4.0;  // ==> Réglage de l'interception sur le terrain 

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "SelectChance_FNC.sqf";
[] execVM "scripts\fn_hideObjects.sqf";

StartProgress = true;

[] execVM "Admin\loop.sqf";
[] execVM "scripts\fn_statusBar.sqf";
[] execVM "initAce.sqf";
//[] execVM "scripts\DynamicWeatherEffects.sqf";

if(isDedicated && isNil("markerIsConfig")) then
{

	[] execVM "core\functions\fn_mapMarker.sqf";
	 
	"markerIsConfig" addPublicVariableEventHandler
	{
		diag_log format["Marker is config %1", _this select 1];
	};
};

call compile preProcessFile "configFunctions.sqf";

startpositions = [[5358.042, 10564.713, 20.743], [5361.119, 10604.815, 20.956], [5337.242, 10540.636, 19.301]];

// Fog disabled
//execVM "scripts\randomWeather2.sqf";

tf_radio_channel_name = "Task Force Radio";  // Nom du Channel TeamSpeak  
tf_radio_channel_password = "tfr13";  // Mot de passe du channel TeamSpeak 
/*
0 enableChannel false;
1 enableChannel false;
2 enableChannel false;
3 enableChannel false;
4 enableChannel false;
5 enableChannel false;
6 enableChannel false;
*/

0 setFog 0;
forceWeatherChange;
999999 setFog 0;

/**
	Loic: Ajout . Sit / Down
 */
 MAC_fnc_switchMove = {
    private["_object","_anim"];
    _object = _this select 0;
    _anim = _this select 1;
    _object switchMove _anim;
};

if (playerSide isEqualTo west) then {
    {
        _curObjCheck = (_x select 1);

        {
            if (_x isEqualType objNull) then {
                switch (typeOf _x) do {
                    case "Land_InfoStand_V1_F" : {
                        _x addAction ["Voir le matériel stocké",life_fnc_infoStorageCompany,"",0,false,false,"",'playerSide isEqualTo west'];
                        _x setVariable ["company_object",_curObjCheck];

                        if ((call life_coplevel) >= 14) then {
                            _x addAction ["Dissoudre l'entreprise",{[] spawn life_fnc_forceDisbandCompany},"",0,false,false,"",'playerSide isEqualTo west'];
                        };
                    };

                    case "Land_InfoStand_V2_F" : {};
                    default {};
                };
            };
        } forEach (_curObjCheck getVariable ["entreprise_objects",[]]);
    } forEach maxence_all_entreprises;
};