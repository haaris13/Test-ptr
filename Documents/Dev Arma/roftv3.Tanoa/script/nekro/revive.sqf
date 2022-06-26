/*-----------------------------------------------------------------------------
	 _   _ ______ _  _______   ____
	| \ | |  ____| |/ /  __ \ / __ \
	|  \| | |__  | ' /| |__) | |  | |
	| . ` |  __| |  < |  _  /| |  | |
	| |\  | |____| . \| | \ \| |__| |
	|_| \_|______|_|\_\_|  \_\____/

Server:
	 _      _____ ______ ______   _____  _____   _____  ________      __
	| |    |_   _|  ____|  ____| |_   _|/ ____| |  __ \|  ____\ \    / /
	| |      | | | |__  | |__      | | | (___   | |  | | |__   \ \  / /
	| |      | | |  __| |  __|     | |  \___ \  | |  | |  __|   \ \/ /
	| |____ _| |_| |    | |____   _| |_ ____) | | |__| | |____   \  /
	|______|_____|_|    |______| |_____|_____/  |_____/|______|   \/
(Life Is Dev)

	FileName = healtest.sqf

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/
#include "defineACE.hpp"
private _par = param [0];
_par setVariable [VAR_PAIN, 0, true];
_par setVariable [VAR_BLOOD_VOL, DEFAULT_BLOOD_VOLUME, true];
_par setVariable [VAR_TOURNIQUET, DEFAULT_TOURNIQUET_VALUES, true];
_par setVariable [QGVAR(occludedMedications), nil, true];
_par setVariable [VAR_OPEN_WOUNDS, [], true];
_par setVariable [VAR_BANDAGED_WOUNDS, [], true];
_par setVariable [VAR_STITCHED_WOUNDS, [], true];
_par setVariable [QEGVAR(medical,isLimping), false, true];
_par setVariable [VAR_FRACTURES, DEFAULT_FRACTURE_VALUES, true];
[_par] call EFUNC(medical_status,updateWoundBloodLoss);
_par setVariable [VAR_HEART_RATE, DEFAULT_HEART_RATE, true];
_par setVariable [VAR_BLOOD_PRESS, [80, 120], true];
_par setVariable [VAR_PERIPH_RES, DEFAULT_PERIPH_RES, true];
_par setVariable [QEGVAR(medical,ivBags), nil, true];
_par setVariable [VAR_HEMORRHAGE, 0, true];
_par setVariable [VAR_IN_PAIN, false, true];
_par setVariable [VAR_PAIN_SUPP, 0, true];
_par setVariable [VAR_MEDICATIONS, [], true];
_par setVariable [QEGVAR(medical,triageCard), [], true];
[_par] call EFUNC(medical_engine,updateDamageEffects);
_par setDamage 0;
[_par, false] call ace_medical_status_fnc_setUnconsciousState;
[QEGVAR(medical,WakeUp), _par] call CBA_fnc_localEvent;
[QEGVAR(medical,FullHeal), _par] call CBA_fnc_localEvent;