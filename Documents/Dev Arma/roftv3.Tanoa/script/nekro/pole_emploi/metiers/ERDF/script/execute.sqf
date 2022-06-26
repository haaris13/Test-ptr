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



hint format ["Tu dois aller chercher le résultat du compteur qui se trouve sur ta carte"];


//_list = nearestObjects [player, ["WaterPump_01_sand_F"], 20000];
_list = nearestObjects [player, ["Land_TransferSwitch_01_F"], 20000];

myrandomERDF = selectRandom _list;
missionERDF = 2;

uisleep 1.5;
_random_vehicule = selectRandom ["chduster14_civ_enedis","kangooII1_enedis","master3p2_enedis","Trafic3_enedis","Trafic2pl_enedis","chtwingoII_civ_enedis","Caddych_enedis"];

MonVeErdf = createVehicle [_random_vehicule,position SpawnERDF,[],3,"FORM"];
life_vehicles pushBack MonVeErdf;
MonVeErdf setVehicleLock "LOCKED";

_markERDF = createMarkerLocal [format["Compteur"],myrandomERDF];
_markERDF setMarkerColorLocal "ColorYellow";
_markERDF setMarkerTypeLocal "Mil_dot";
_markERDF setMarkerTextLocal format["Va vite relever le compteur!"];



actionVolt = player addAction
[
    "Récupérer les consommations",
    {
        execVM "script\nekro\pole_emploi\metiers\ERDF\script\reponse.sqf";
    },
    [],
    2,
    true,
    true,
    "",
    "missionERDF == 2 && (position player distance myrandomERDF < 3)  && (vehicle player == player);",
    4,
    false,
    "",
    ""
];

waitUntil {position player distance myrandomERDF < 3};
deleteMarkerLocal _markERDF;