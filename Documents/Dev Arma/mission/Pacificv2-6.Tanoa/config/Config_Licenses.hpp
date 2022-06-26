/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
*/
class Licenses {
    //Civilian Licenses
    class driver {
        variable = "driver";
        displayName = "STR_License_Driver";
        price = 1000; // Default : 5000
        illegal = false;
        side = "civ";
    };
    class boat {
        variable = "boat";
        displayName = "STR_License_Boat";
        price = 800;
        illegal = false;
        side = "civ";
    };

    class pilot {
        variable = "pilot";
        displayName = "STR_License_Pilot";
        price = 25000;
        illegal = false;
        side = "civ";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_License_Truck";
        price = 2800;
        illegal = false;
        side = "civ";
    };

    class gun {
        variable = "gun";
        displayName = "STR_License_Firearm";
        price = 2500;
        illegal = false;
        side = "civ";
    };

    class dive {
        variable = "dive";
        displayName = "STR_License_Diving";
        price = 1900;
        illegal = false;
        side = "civ";
    };

    class home {
        variable = "home";
        displayName = "STR_License_Home";
        price = 2000;
        illegal = false;
        side = "civ";
    };

    class brinks {
        variable = "brinks";
        displayName = "STR_License_Brinks";
        price = 10000000;
        illegal = false;
        side = "civ";
    };

    //Processing Licenses

/*
    class tin {
        variable = "tin";
        displayName = "STR_License_tin";
        price = 10000;
        illegal = false;
        side = "civ";
    };

    class copper {
        variable = "copper";
        displayName = "STR_License_Copper";
        price = 30000;
        illegal = false;
        side = "civ";
    };

    class iron {
        variable = "iron";
        displayName = "STR_License_Iron";
        price = 40000;
        illegal = false;
        side = "civ";
    };

    class chromium {
        variable = "chromium";
        displayName = "STR_License_Chromium";
        price = 35000;
        illegal = false;
        side = "civ";
    };

    class aluminium {
        variable = "aluminium";
        displayName = "STR_License_Aluminium";
        price = 20000;
        illegal = false;
        side = "civ";
    };
	
    class nickel {
        variable = "nickel";
        displayName = "STR_License_Nickel";
        price = 55000;
        illegal = false;
        side = "civ";
    };

    class gold {
        variable = "gold";
        displayName = "STR_License_Gold";
        price = 60000;
        illegal = false;
        side = "civ";
    };
    */

    //Illegal Licenses

    /*
    class purple {
        variable = "purple";
        displayName = "STR_License_Purple";
        price = 400000;
        illegal = true;
        side = "civ";
    };

    class mauiwaui {
        variable = "mauiwaui";
        displayName = "STR_License_Mauiwaui";
        price = 300000;
        illegal = true;
        side = "civ";
    };
	
    class datura {
        variable = "datura";
        displayName = "STR_License_Datura";
        price = 150000;
        illegal = true;
        side = "civ";
    };
	
    class khat {
        variable = "khat";
        displayName = "STR_License_khat";
        price = 500000;
        illegal = true;
        side = "civ";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_License_Marijuana";
        price = 200000;
        illegal = true;
        side = "civ";
    };
    */

    class insurge {
        variable = "insurge";
        displayName = "STR_License_Rebel";
        price = 800000;
        illegal = true;
        side = "civ";
        childsSmartMarkers[] = {"garage_insurge", "car_shop_insurge", "gun_shop_insurge"};
    };

    class narcos {
        variable = "narcos";
        displayName = "STR_License_Narcos";
        price = 800000;
        illegal = true;
        side = "civ";
        childsSmartMarkers[] = {"garage_narcos", "car_shop_narcos", "gun_shop_narcos"};
    };

    //Cop Licenses
    class cAir {
        variable = "cAir";
        displayName = "STR_License_Pilot";
        price = 25000;
        illegal = false;
        side = "cop";
    };

    class cg {
        variable = "cg";
        displayName = "STR_License_CG";
        price = 500;
        illegal = false;
        side = "cop";
    };

    class cbanal {
        variable = "cbanal";
        displayName = "STR_License_Banal";
        price = 8000000;
        illegal = false;
        side = "cop";
    };

    class cPigt {
        variable = "cPigt";
        displayName = "STR_License_PIGT";
        price = 8000000;
        illegal = false;
        side = "cop";
    };

    class arche {
        variable = "arche";
        displayName = "STR_License_Arche";
        price = 100000;
        illegal = false;
        side = "civ";
    };

    class forestiere {
        variable = "forestiere";
        displayName = "STR_License_Forestiere";
        price = 30000;
        illegal = false;
        side = "civ";
    };

    //

    /*
    class gems {
        variable = "gems";
        displayName = "STR_License_Gems";
        price = 8000000;
        illegal = false;
        side = "civ";
    };
    */

    class sejour {
        variable = "sejour";
        displayName = "STR_License_Sejour";
        price = 500000;
        illegal = false;
        side = "civ";
    };

    class mafia {
        variable = "mafia";
        displayName = "STR_License_Mafia";
        price = 400000;
        illegal = true;
        side = "civ";
        childsSmartMarkers[] = {"immatricule_gang", "garage_heli_gang", "car_shop_gang", "gun_shop_gang", "mrk_hacker", "contrebande_mrk"};
    };

    // Illégal

    /*
    class strawberry {
        variable = "strawberry";
        displayName = "STR_License_Strawberry";
        price = 600000;
        illegal = true;
        side = "civ";
    };
    */
};
