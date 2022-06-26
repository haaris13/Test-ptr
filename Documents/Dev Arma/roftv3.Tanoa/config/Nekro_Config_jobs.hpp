/*-----------------------------------------------------------------------------
     _   _ ______ _  _______   ____
    | \ | |  ____| |/ /  __ \ / __ \
    |  \| | |__  | ' /| |__) | |  | |
    | . ` |  __| |  < |  _  /| |  | |
    | |\  | |____| . \| | \ \| |__| |
    |_| \_|______|_|\_\_|  \_\____/

Server:


    FileName =

    Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



    Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

    Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
    Vous pouvez le contacter a cette adresse: minenekro@gmail.com
    Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/

class nekrojobs {

    class listofjobs {
        side = "civ";
        conditions = "";
        maliste[] = {
            "Agriculteur",
            "REDSG"//,
           // "Eboueur",
            //"Agent_Surveillance"
        };
    };

	
    class Agriculteur { // Nom afficher sur le script et sur le pole emploie
        infroamtions = "<t color='#8cff9b'>Agriculteur</t><br/> <t color='#8cff9b'>Mission d'intérim : Votre mission sera de travailler dans les champs de l'île de Pacific Island.</t> <br/> <a href='https://pacific-island.com/'>Site Gouvenemental</a> <br/>"; // Voir la class éboueur, sa utilise un strcturedText.
        max_players_on_this_job = 10; // Le nombre maximum de joueur dans le metier. Si il y a plus que le nombre indiquer, l'acces a ce job est désactiver. NE FONCTIONNERA PAS
        min_reput = 0; // réputation minimum pour lancer.
        reputadd = 3; // Le nombre de point de réputation que l'on gagne si la mission est fini avec succes.
        maxtime = 200; // Pour l'instant, sa ne fonctionne pas. NE FONCTIONNERA PAS
        addmoney = 85000; // L'ajout final de money dans l'ATM.
        addmoneylow = 11000;// Le addmoneylow n'est pas utiliser sur la totalité des métiers. NE FONCTIONNERA PAS
        execute = "script\nekro\pole_emploi\metiers\Agriculteur\script\lancement.sqf"; // Il faut toujours passer par un lancement.sqf qui fait toutes les verifications, et qui ordonne d'aller voir le PNJ !
    };
    class Eboueur { // Nom afficher sur le script et sur le pole emploie
        infroamtions = "<t color='#8cff9b'>Eboueur</t><br/> <t color='#8cff9b'>Mission d'intérim : Votre mission sera de récuperer et de vider les poubelles de l'île.</t> <br/> <a href='https://pacific-island.com/'>Site Gouvenemental</a> <br/>"; // Voir la class éboueur, sa utilise un strcturedText.
        max_players_on_this_job = 10; // Le nombre maximum de joueur dans le metier. Si il y a plus que le nombre indiquer, l'acces a ce job est désactiver. NE FONCTIONNERA PAS
        min_reput = 0; // réputation minimum pour lancer.
        reputadd = 3; // Le nombre de point de réputation que l'on gagne si la mission est fini avec succes.
        maxtime = 200; // Pour l'instant, sa ne fonctionne pas. NE FONCTIONNERA PAS
        addmoney = 82500; // L'ajout final de money dans l'ATM.
        addmoneylow = 11000;// Le addmoneylow n'est pas utiliser sur la totalité des métiers. NE FONCTIONNERA PAS
        execute = "script\nekro\pole_emploi\metiers\eboueur\script\lancement.sqf"; // Il faut toujours passer par un lancement.sqf qui fait toutes les verifications, et qui ordonne d'aller voir le PNJ !
    };
    class REDSG { // Nom afficher sur le script et sur le pole emploie
        infroamtions = "<t color='#8cff9b'>Agent REDSG</t><br/> <t color='#8cff9b'>Mission d'intérim : Relevez tous les compteurs éléctrique de l'île de Pacific Island (Réseau Electique De St. George).</t> <br/> <a href='https://pacific-island.com/'>Site Gouvenemental</a> <br/>"; // Voir la class éboueur, sa utilise un strcturedText.
        //infroamtions = "<t color='#8cff9b'>Agent Saur</t><br/> <t color='#8cff9b'>Mission d'intérim : Relevez les compteurs d'eau de l'île de Pacific Island.</t> <br/> <a href='https://pacific-island.com/'>Site Gouvenemental</a> <br/>"; // Voir la class éboueur, sa utilise un strcturedText.
        max_players_on_this_job = 10; // Le nombre maximum de joueur dans le metier. Si il y a plus que le nombre indiquer, l'acces a ce job est désactiver.
        min_reput = 0; // réputation minimum pour lancer.
        reputadd = 1; // Le nombre de point de réputation que l'on gagne si la mission est fini avec succes.
        maxtime = 200; // Pour l'instant, sa ne fonctionne pas.
        addmoney = 28000; // L'ajout final de money dans l'ATM.
        addmoneylow = 16250;// Le addmoneylow n'est pas utiliser sur la totalité des métiers.
        execute = "script\nekro\pole_emploi\metiers\ERDF\script\lancement.sqf"; // Il faut toujours passer par un lancement.sqf qui fait toutes les verifications, et qui ordonne d'aller voir le PNJ !
    };
    class Agent_Surveillance { // Nom afficher sur le script et sur le pole emploie
       // infroamtions = "<t color='#8cff9b'>Agent d'entretien</t><br/> <t color='#8cff9b'>Mission d'intérim : Votre mission sera d'entretenir l'île de Pacific Island.</t> <br/> <a href='https://pacific-island.com/'>Site Gouvenemental</a> <br/>"; // Voir la class éboueur, sa utilise un strcturedText.
        infroamtions = "<t color='#8cff9b'>Agent de surveillance</t><br/> <t color='#8cff9b'>Mission d'intérim : Votre mission sera de faire une patrouille de surveillance sur une zone precise.</t> <br/> <a href='https://pacific-island.com/'>Site Gouvenemental</a> <br/>"; // Voir la class éboueur, sa utilise un strcturedText.
        max_players_on_this_job = 10; // Le nombre maximum de joueur dans le metier. Si il y a plus que le nombre indiquer, l'acces a ce job est désactiver.
        min_reput = 0; // réputation minimum pour lancer.
        reputadd = 5; // Le nombre de point de réputation que l'on gagne si la mission est fini avec succes.
        maxtime = 200; // Pour l'instant, sa ne fonctionne pas.
        addmoney = 85000; // L'ajout final de money dans l'ATM.
        addmoneylow = 11000; // Le addmoneylow n'est pas utiliser sur la totalité des métiers.
        execute = "script\nekro\pole_emploi\metiers\Agent_entretien\script\lancement.sqf"; // Il faut toujours passer par un lancement.sqf qui fait toutes les verifications, et qui ordonne d'aller voir le PNJ !
    };
    
};
