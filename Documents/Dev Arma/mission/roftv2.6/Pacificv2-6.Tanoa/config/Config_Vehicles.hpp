/*
    Config LifeCfgVehicles

    Autor : Bryan "Tonic" Boardwine, IronBlade
*/

class LifeCfgVehicles {

    class Default {
        vItemSpace = -1;
        insurance = 2500;
        textures[] = {};
    };

    class B_UGV_02_Demining_F {
        vItemSpace = 0;
        insurance = 5000;
        reservoir = 105;
        fuelfactor = 15;
    };

    class B_W_Static_Designator_01_F {
        vItemSpace = 0;
        insurance = 5000;
        reservoir = 105;
        fuelfactor = 15;
    };

    class B_UAV_01_F {
        vItemSpace = 0;
        insurance = 5000;
        reservoir = 105;
        fuelfactor = 15;
    };

    //  ---------------------------------------Gendarmerie--------------------------------------------------

    class CBRN_Offroad_Comms {
        vItemSpace = 60;
        insurance = 5000;
        reservoir = 105;
        fuelfactor = 15;
        textures[] = {};
        addons[] = {};

        class caches {};
    };

    class Gendarmerie_RS4 {
        vItemSpace = 160;
        insurance = 35000;
        reservoir = 70;
        fuelfactor = 18;
        textures[] = {};
        addons[] = {};

        class caches {};
    };

    

    class Gendarmerie_Mamba {
        vItemSpace = 50;
        insurance = 20000;
        reservoir = 105;
        fuelfactor = 15;
        textures[] = {};
        addons[] = {};

        class caches {};
    };

    class Gendarmerie_RangeRover_SVR {
        vItemSpace = 75;
        insurance = 7500;
        reservoir = 105;
        fuelfactor = 15;
        textures[] = {};
        addons[] = {};

        class caches {};
    };

    

    

    

    class B_T_LSV_01_unarmed_F {        //      Prowler (Unarmed)
        vItemSpace = 60;
        insurance = 5000;
        reservoir = 105;
        fuelfactor = 15;
        vmax = 172;
        textures[] = {
            { "Triangle olive/noir", "cop", {
                "a3\soft_f_exp\lsv_01\data\nato_lsv_01_dazzle_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_02_olive_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_03_olive_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_adds_olive_co.paa"
            } },
            { "Noir", "cop", {
                "a3\soft_f_exp\lsv_01\data\nato_lsv_01_black_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_02_black_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_03_black_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_adds_black_co.paa"
            } },
            { "Olive", "cop", {
                "a3\soft_f_exp\lsv_01\data\nato_lsv_01_olive_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_02_olive_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_03_olive_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_adds_olive_co.paa"
            } },
            { "Sable", "cop", {
                "a3\soft_f_exp\lsv_01\data\nato_lsv_01_sand_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_02_sand_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_03_sand_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_adds_sand_co.paa"
            } },
            { "Gendarmerie", "cop", {
                "POD_SKINS\data\vehicles\NATO_LSV_01_sand_CO.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_02_black_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_03_black_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_adds_black_co.paa"
            } }
        };

        // this addAction ["Garage", {[ "Open", true ] call BIS_fnc_garage;}];

        addons[] = {
            {"HideDoor1",0},
            {"HideDoor2",0},
            {"HideDoor3",0},
            {"HideDoor4",0}
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 10; };
            class carrosserie { trunk = 10; };
        };
    };


    class B_T_LSV_01_armed_F {      //          Prowler (Armed)
        vItemSpace = 160;
        insurance = 12500;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {
            { "Triangle olive/noir", "cop", {
                "a3\soft_f_exp\lsv_01\data\nato_lsv_01_dazzle_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_02_olive_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_03_olive_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_adds_olive_co.paa"
            } },
            { "Noir", "cop", {
                "a3\soft_f_exp\lsv_01\data\nato_lsv_01_black_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_02_black_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_03_black_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_adds_black_co.paa"
            } },
            { "Olive", "cop", {
                "a3\soft_f_exp\lsv_01\data\nato_lsv_01_olive_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_02_olive_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_03_olive_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_adds_olive_co.paa"
            } },
            { "Sable", "cop", {
                "a3\soft_f_exp\lsv_01\data\nato_lsv_01_sand_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_02_sand_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_03_sand_co.paa",
                "a3\soft_f_exp\lsv_01\data\nato_lsv_adds_sand_co.paa"
            } }
        };

        addons[] = {
            {"HideDoor1",0,200},
            {"HideDoor2",0,200},
            {"HideDoor3",0,200},
            {"HideDoor4",0,200}
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 10; };
            class carrosserie { trunk = 10; };
        };
    };

    //  ---------------------------------------BATEAUX----------------------------------------------

    //  _____________________________________Petit Zodiac______________________________________

    class B_Boat_Transport_01_F { //    (Assault Boat) Embarcation legere GENDARMERIE
        vItemSpace = 150;
        insurance = 500;
        reservoir = 90;
        fuelfactor = 8;
        textures[] = {
            { "Noir", "cop", {
                "a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
            } }
        };
    };

    class C_Rubberboat { //    (Assault Boat) Embarcation legere CIVIL
        vItemSpace = 150;
        insurance = 500;
        reservoir = 90;
        fuelfactor = 8;
        textures[] = {
            { "Civil", "civ", {
                "a3\boat_f\boat_transport_01\data\boat_transport_01_civilian_co.paa"
            } },
            { "Noir", "civ", {
                "a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
            } },
            { "Orange", "civ", { 
                "a3\boat_f\boat_transport_01\data\boat_transport_01_rescue_co.paa"
            } }
        };
    };

    class O_Lifeboat { //    (Assault Boat) Embarcation legere Secours
        vItemSpace = 150;
        insurance = 500;
        reservoir = 90;
        fuelfactor = 8;
        textures[] = {
            { "Orange", "civ", { 
                "a3\boat_f\boat_transport_01\data\boat_transport_01_rescue_co.paa"
            } }
        };
    };

    class I_Boat_Transport_01_F { //    (Assault Boat) Embarcation legere REBEL
        vItemSpace = 150;
        insurance = 500;
        reservoir = 90;
        fuelfactor = 8;
        textures[] = {
            { "Num gris", "narcos", { 
                "a3\boat_f\boat_transport_01\data\boat_transport_01_indp_co.paa"
            } },
            { "Hex", "narcos", { 
                "a3\boat_f\boat_transport_01\data\boat_transport_01_opfor_co.paa"
            } }
        };
    };

    //  _________________________________________Scooter_____________________________________________

    class C_Scooter_Transport_01_F {
        vItemSpace = 25;
        insurance = 2125;
        reservoir = 80;
        fuelfactor = 10;
        textures[] = {
            { "Blanc", "civ", {
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_co.paa",
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_co.paa"
            } },
            { "Bleu", "cop", {
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_blue_co.paa",
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_blue_co.paa"
            } },
            { "Gris", "civ", {
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_grey_co.paa",
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_grey_co.paa"
            } },
            { "Jaune", "civ", {
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_yellow_co.paa",
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_yellow_co.paa"
            } },
            { "Noir", "civ", {
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_black_co.paa",
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_black_co.paa"
            } },
            { "Rouge", "civ", {
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_red_co.paa",
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_co.paa"
            } },
            { "Vert", "civ", {
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_lime_co.paa",
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_lime_co.paa"
            } },
            { "Bleu", "med", {
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_blue_co.paa",
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_blue_co.paa"
            } }
        };
        /*
        todo custom tableau de bord :
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_co.paa"
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_blue_co.paa"
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_grey_co.paa"
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_yellow_co.paa"
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_black_co.paa"
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_co.paa"
               "a3\boat_f_exp\scooter_transport_01\data\scooter_transport_01_vp_lime_co.paa"
        
        */

        class caches {
            class seat { trunk = 10; };
            class fauxplancher { trunk = 10; };
            class carrosserie { trunk = 10; };
        };
    };

    //_____________________________________Bateau à moteur_________________________________________

    class C_Boat_Civil_01_F { //        Motorboat Bateau à moteur (pas semi-rigide)
        vItemSpace = 400;
        insurance = 4500;
        reservoir = 200;
        fuelfactor = 12;
        textures[] = {
            { "Civil", "civ", {
                "a3\boat_f_gamma\boat_civil_01\data\boat_civil_01_ext_co.paa",
                "a3\boat_f_gamma\boat_civil_01\data\boat_civil_01_int_co.paa"
            } }
        };

        class caches {
            class seat { trunk = 20; };
            class fauxplancher { trunk = 20; };
        };
    };

    class C_Boat_Civil_01_police_F {            //  GENDARMERIE
        vItemSpace = 400;
        insurance = 4500;
        reservoir = 200;
        fuelfactor = 12;
        textures[] = {
            { "Gendarmerie", "cop", {
                "a3\boat_f_gamma\boat_civil_01\data\boat_civil_01_ext_police_co.paa",
                "a3\boat_f_gamma\boat_civil_01\data\boat_civil_01_int_police_co.paa"
            } }
        };

        class caches {
            class seat { trunk = 20; };
            class fauxplancher { trunk = 20; };
        };
    };

    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 400;
        insurance = 4500;
        reservoir = 200;
        fuelfactor = 12;
        textures[] = {
            { "Medic", "med", {
                "a3\boat_f_gamma\boat_civil_01\data\boat_civil_01_ext_rescue_co.paa",
                "a3\boat_f_gamma\boat_civil_01\data\boat_civil_01_int_rescue_co.paa"
            } }
        };

        class caches {
            class seat { trunk = 20; };
            class fauxplancher { trunk = 20; };
        };
    };

    //_______________________________________________RHIB________________________________________

    class C_Boat_Transport_02_F {     //  RHIB
        vItemSpace = 300;
        insurance = 7500;
        reservoir = 330;
        fuelfactor = 16;
        textures[] = {
            { "Bleu ciel", "civ", {
                "a3\boat_f_exp\boat_transport_02\data\boat_transport_02_exterior_civilian_co.paa",
                "a3\boat_f_exp\boat_transport_02\data\boat_transport_02_interior_2_civilian_co.paa"
            } },
            { "Noir", "civ", {
                "a3\boat_f_exp\boat_transport_02\data\boat_transport_02_exterior_co.paa",
                "a3\boat_f_exp\boat_transport_02\data\boat_transport_02_interior_2_co.paa"
            } }
        };

        class caches {
            class seat { trunk = 10; };
            class fauxplancher { trunk = 20; };
        };
    };

    class I_C_Boat_Transport_02_F {     //  RHIB
        vItemSpace = 300;
        insurance = 7500;
        reservoir = 330;
        fuelfactor = 16;
        textures[] = {
            { "Noir", "med", {
                "a3\boat_f_exp\boat_transport_02\data\boat_transport_02_exterior_co.paa",
                "a3\boat_f_exp\boat_transport_02\data\boat_transport_02_interior_2_co.paa"
            } },
            { "Noir", "cop", {
                "a3\boat_f_exp\boat_transport_02\data\boat_transport_02_exterior_co.paa",
                "a3\boat_f_exp\boat_transport_02\data\boat_transport_02_interior_2_co.paa"
            } }
        };

        class caches {
            class seat { trunk = 10; };
            class fauxplancher { trunk = 20; };
        };
    };

    //  _____________________________________Bateau Armé______________________________________

    class O_Boat_Armed_01_hmg_F {       //      Speedboat HMG
        vItemSpace = 500;
        insurance = 20000;
        reservoir = 450;
        fuelfactor = 17;
        textures[] = {
             { "Triangle olive/noir", "cop", {
                "a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_crows_blufor_co.paa"
            } },
            { "Numérique", "cop", {
                "a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_crows_aaf_co.paa"
            } },
            { "Hex Swamp", "cop", {
                "a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_crows_opfor_co.paa"
            } }
        };
    };

    class I_Boat_Armed_01_minigun_F {       //      Speedboat Minigun
        vItemSpace = 500;
        insurance = 20000;
        reservoir = 450;
        fuelfactor = 17;
        textures[] = {
            { "Numérique", "narcos", {
                "a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_crows_aaf_co.paa"
            } },
            { "Hex Swamp", "narcos", {
                "a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_crows_opfor_co.paa"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {       //      Speedboat Minigun
        vItemSpace = 500;
        insurance = 20000;
        reservoir = 450;
        fuelfactor = 17;
        textures[] = {
             { "Triangle olive/noir", "cop", {
                "a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa",
                "a3\boat_f\boat_armed_01\data\boat_armed_01_crows_blufor_co.paa"
            } }
        };
    };

    

    //  _________________________________________SDV________________________________________________

    class B_SDV_01_F {
        vItemSpace = 250;
        insurance = 37500;
        reservoir = 400;
        fuelfactor = 8;
        textures[] = {
            { "Noir", "cop", {
               "a3\boat_f_beta\sdv_01\data\sdv_ext_co.paa"
            } }
        };

        class caches {
            class seat { trunk = 10; };
            class fauxplancher { trunk = 20; };
        };
    };

    class O_SDV_01_F {
        vItemSpace = 250;
        insurance = 37500;
        reservoir = 400;
        fuelfactor = 8;
        textures[] = {
            { "Noir", "civ", {
               "a3\boat_f_beta\sdv_01\data\sdv_ext_co.paa"
            } }
        };

        class caches {
            class seat { trunk = 10; };
            class fauxplancher { trunk = 20; };
        };
    };

    class I_SDV_01_F {
        vItemSpace = 250;
        insurance = 37500;
        reservoir = 400;
        fuelfactor = 8;
        textures[] = {
            { "Hex marine", "narcos", {
               "a3\boat_f_beta\sdv_01\data\sdv_ext_opfor_co.paa"
            } },
            { "Num gris", "narcos", {
               "a3\boat_f_beta\sdv_01\data\sdv_ext_indp_co.paa"
            } }
        };

        class caches {
            class seat { trunk = 10; };
            class fauxplancher { trunk = 20; };
        };
    };
    
    //  ---------------------------------------CAMIONS--------------------------------------------------

    //  __________________________________УАЗ______________________________

    class d3s_452 {         //      УАЗ-452
        vItemSpace = 280;
        insurance = 3400;
        reservoir = 110;
        fuelfactor = 36;
        vmax = 110;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_452\data\452_ao_white_co.paa"
            } },
            { "Rouge", "civ", {
                "d3s_452\data\452_ao_red2_co.paa"
            } },
            { "Vert", "civ", {
                "d3s_452\data\452_ao_green_co.paa"
            } },
            { "Kaki", "civ", {
                "d3s_452\data\452_ao_darkgreen_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_3303 {            //      УАЗ-3303
        vItemSpace = 300;
        insurance = 3600;
        reservoir = 110;
        fuelfactor = 36;
        vmax = 110;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_452\data\452_ao_white_co.paa"
            } },
            { "Rouge", "civ", {
                "d3s_452\data\452_ao_red2_co.paa"
            } },
            { "Vert", "civ", {
                "d3s_452\data\452_ao_green_co.paa"
            } },
            { "Kaki", "civ", {
                "d3s_452\data\452_ao_darkgreen_co.paa"
            } },
        };

        addons[] = {};
    };

    //  __________________________________ZIL-130______________________________

    class d3s_zil_130_01 {          //      ZIL-130
        vItemSpace = 320;
        insurance = 4400;
        reservoir = 170;
        fuelfactor = 57;
        vmax = 90;

        textures[] = {
            { "Blanc", "civ", {
               "d3s_zil_130\data\130_body_ltx_co.paa"
            } },
            { "Kaki", "civ", {
               "d3s_zil_130\data\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_130\data\130_body_green_co.paa"
            } },
            { "Bleu", "civ", {
               "d3s_zil_130\data\130_body_blue_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_zil_130_02 {          //      ZIL-130 Haut
        vItemSpace = 330;
        insurance = 9400;
        reservoir = 170;
        fuelfactor = 57;
        vmax = 90;

        textures[] = {
            { "Blanc", "civ", {
               "d3s_zil_130\data\130_body_ltx_co.paa"
            } },
            { "Kaki", "civ", {
               "d3s_zil_130\data\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_130\data\130_body_green_co.paa"
            } },
            { "Bleu", "civ", {
               "d3s_zil_130\data\130_body_blue_co.paa"
            } },
        };

        addons[] = {};      
    };

    class d3s_zil_130_06 {      //      ZIL-130 (Bâche)
        vItemSpace = 340;
        insurance = 18400;
        reservoir = 170;
        fuelfactor = 57;
        vmax = 90;

        textures[] = {
            { "Blanc", "civ", {
               "d3s_zil_130\data\130_body_ltx_co.paa"
            } },
            { "Kaki", "civ", {
               "d3s_zil_130\data\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_130\data\130_body_green_co.paa"
            } },
            { "Bleu", "civ", {
               "d3s_zil_130\data\130_body_blue_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_zil_130_04 { // Citerne       ZIL-130 Kanistra
        vItemSpace = 250;
        insurance = 10000;
        reservoir = 170;
        fuelfactor = 57;
        citerne = 4000;
        vmax = 90;

        textures[] = {
            { "Blanc", "civ", {
               "d3s_zil_130\data\130_body_ltx_co.paa"
            } },
            { "Kaki", "civ", {
               "d3s_zil_130\data\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_130\data\130_body_green_co.paa"
            } },
            { "Bleu", "civ", {
               "d3s_zil_130\data\130_body_blue_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_zil_130_05 { // citerne          ZIL-130 Cesspool
        vItemSpace = 160;
        insurance = 18400;
        reservoir = 170;
        fuelfactor = 57;
        citerne = 7000;
        vmax = 90;

        textures[] = {
            { "Blanc", "civ", {
               "d3s_zil_130\data\130_body_ltx_co.paa"
            } },
            { "Kaki", "civ", {
               "d3s_zil_130\data\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_130\data\130_body_green_co.paa"
            } },
            { "Bleu", "civ", {
               "d3s_zil_130\data\130_body_blue_co.paa"
            } },
        };

        addons[] = {};
    };

    

    //  __________________________________GAZ 66______________________________


    class d3s_gaz66 {
        vItemSpace = 340;
        insurance = 4600;
        reservoir = 210;
        fuelfactor = 70;
        vmax = 100;

        textures[] = {};

        addons[] = {};
    };

    class d3s_gaz66_TENT {
        vItemSpace = 350;
        insurance = 6850;
        reservoir = 210;
        fuelfactor = 70;
        vmax = 100;

        textures[] = {};

        addons[] = {};
    };

    class d3s_gaz66_AC { // Citerne
        vItemSpace = 160;
        insurance = 6850;
        reservoir = 210;
        fuelfactor = 70;
        citerne = 7000;
        vmax = 100;
        
        textures[] = {};

        addons[] = {};
    };

    //  __________________________________ZIL-131______________________________

    class d3s_zil_131 {         //  ZIL-131
        vItemSpace = 340;
        insurance = 18400;
        reservoir = 250;
        fuelfactor = 83;
        vmax = 100;

        textures[] = {
            { "Blanc \ Rouge", "civ", {
               "d3s_zil_131\data\skins\130_body_ltx_co.paa"
            } },
            { "Kaki", "narcos", {
               "d3s_zil_131\data\skins\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_131\data\skins\130_body_green_co.paa"
            } },
            { "Orange", "civ", {
               "d3s_zil_130\data\130_body_orange_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_zil_131_2 {           //      ZIL-131 (Bâche)
        vItemSpace = 350;
        insurance = 27400;
        reservoir = 250;
        fuelfactor = 83;
        vmax = 100;

        textures[] = {
            { "Blanc \ Rouge", "civ", {
               "d3s_zil_131\data\skins\130_body_ltx_co.paa"
            } },
            { "Kaki", "narcos", {
               "d3s_zil_131\data\skins\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_131\data\skins\130_body_green_co.paa"
            } },
            { "Orange", "civ", {
               "d3s_zil_130\data\130_body_orange_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_zil_131_4 {           //      ZIL-131 AC-4
        vItemSpace = 90;
        insurance = 27400;
        reservoir = 250;
        fuelfactor = 83;
        citerne = 7000;
        vmax = 100;

        textures[] = {
            { "Blanc \ Rouge", "civ", {
               "d3s_zil_131\data\skins\130_body_ltx_co.paa"
            } },
            { "Kaki", "narcos", {
               "d3s_zil_131\data\skins\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_131\data\skins\130_body_green_co.paa"
            } },
            { "Orange", "civ", {
               "d3s_zil_130\data\130_body_orange_co.paa"
            } },
        };

        addons[] = {};
    };

    //  __________________________________Ural-375______________________________

    class d3s_ural {            //      Ural-375
        vItemSpace = 360;
        insurance = 9100;
        reservoir = 300;
        fuelfactor = 100;
        vmax = 100;

        textures[] = {};

        addons[] = {};
    };

    class d3s_ural_tent {       //     Ural-375 (Bâche) 
        vItemSpace = 370;
        insurance = 11350;
        reservoir = 300;
        fuelfactor = 100;
        vmax = 100;

        textures[] = {};

        addons[] = {};
    };

    //  __________________________________KamAZ-4326______________________________

    class d3s_kamaz {           //      KamAZ-4326
        vItemSpace = 350;
        insurance = 27400;
        reservoir = 300;
        fuelfactor = 100;
        vmax = 100;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\4310_ao.paa"
            } },
            { "Kaki", "civ", {
                "d3s_kamaz\data\skins\4310_ao_black.paa"
            } },
            { "Bleu", "civ", {
                "d3s_kamaz\data\skins\4310_ao_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green.paa"
            } },
            { "Vert 2", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green2.paa"
            } },
            { "Orange", "civ", {
                "d3s_kamaz\data\skins\4310_ao_orange.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\4310_ao_military.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_kamaz_tent {      //  KamAZ-4326 (Bâche)
        vItemSpace = 360;
        insurance = 36400;
        reservoir = 300;
        fuelfactor = 100;
        vmax = 100;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\4310_ao.paa"
            } },
            { "Kaki", "civ", {
                "d3s_kamaz\data\skins\4310_ao_black.paa"
            } },
            { "Bleu", "civ", {
                "d3s_kamaz\data\skins\4310_ao_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green.paa"
            } },
            { "Vert 2", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green2.paa"
            } },
            { "Orange", "civ", {
                "d3s_kamaz\data\skins\4310_ao_orange.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\4310_ao_military.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_kamaz_tent2 {         //      KamAZ-4326 Grand (Bâche)
        vItemSpace = 370;
        insurance = 45400;
        reservoir = 300;
        fuelfactor = 100;
        vmax = 100;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\4310_ao.paa"
            } },
            { "Kaki", "civ", {
                "d3s_kamaz\data\skins\4310_ao_black.paa"
            } },
            { "Bleu", "civ", {
                "d3s_kamaz\data\skins\4310_ao_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green.paa"
            } },
            { "Vert 2", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green2.paa"
            } },
            { "Orange", "civ", {
                "d3s_kamaz\data\skins\4310_ao_orange.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\4310_ao_military.paa"
            } },
        };

        addons[] = {};
    };

    //  __________________________________KamAZ-4350______________________________

    class d3s_kamaz_4350 {      //      KamAZ-4350
        vItemSpace = 350;
        insurance = 27400;
        reservoir = 300;
        fuelfactor = 100;
        vmax = 100;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\6350_ao.paa"
            } },
            { "Kaki", "civ", {
                "d3s_kamaz\data\skins\6350_ao_black.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\6350_ao_green.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\6350_ao_military.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_kamaz_4350_tent {         //      KamAZ-4350 (Bâche)
        vItemSpace = 360;
        insurance = 36400;
        reservoir = 300;
        fuelfactor = 100;
        vmax = 100;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\6350_ao.paa"
            } },
            { "Kaki", "civ", {
                "d3s_kamaz\data\skins\6350_ao_black.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\6350_ao_green.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\6350_ao_military.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_kamaz_4350_tent2 {        //      KamAZ-4350 Grand (Bâche)
        vItemSpace = 370;
        insurance = 45400;
        reservoir = 300;
        fuelfactor = 100;
        vmax = 100;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\6350_ao.paa"
            } },
            { "Kaki", "civ", {
                "d3s_kamaz\data\skins\6350_ao_black.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\6350_ao_green.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\6350_ao_military.paa"
            } },
        };

        addons[] = {};
    };

    //  __________________________________Ural-NEXT______________________________

    class d3s_next {        //      Ural-NEXT
        vItemSpace = 370;
        insurance = 45400;
        reservoir = 320;
        fuelfactor = 107;
        vmax = 100;

        textures[] = {
            { "Bleu", "civ", {
               "d3s_ural_next\data\skins\next_cab_blue.paa"
            } },
            { "Vert", "civ", {
               "d3s_ural_next\data\skins\next_cab_green.paa"
            } },
            { "Kaki", "civ", {
               "d3s_ural_next\data\skins\next_cab_haki.paa"
            } },
            { "Orange", "civ", {
               "d3s_ural_next\data\skins\next_cab_orange.paa"
            } },
            { "Rouge", "civ", {
               "d3s_ural_next\data\skins\next_cab_red.paa"
            } },
            { "Blanc", "civ", {
               "d3s_ural_next\data\skins\next_cab.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_next_tent {       //      Ural-NEXT (Bâche)
        vItemSpace = 380;
        insurance = 54400;
        reservoir = 320;
        fuelfactor = 107;
        vmax = 100;

        textures[] = {
            { "Bleu", "civ", {
               "d3s_ural_next\data\skins\next_cab_blue.paa"
            } },
            { "Vert", "civ", {
               "d3s_ural_next\data\skins\next_cab_green.paa"
            } },
            { "Kaki", "civ", {
               "d3s_ural_next\data\skins\next_cab_haki.paa"
            } },
            { "Orange", "civ", {
               "d3s_ural_next\data\skins\next_cab_orange.paa"
            } },
            { "Rouge", "civ", {
               "d3s_ural_next\data\skins\next_cab_red.paa"
            } },
            { "Blanc", "civ", {
               "d3s_ural_next\data\skins\next_cab.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_next_bocha {      //      Ural-NEXT AC
        vItemSpace = 160;
        insurance = 54400;
        reservoir = 320;
        fuelfactor = 107;
        vmax = 100;
        citerne = 9000;

        textures[] = {
            { "Bleu", "civ", {
               "d3s_ural_next\data\skins\next_cab_blue.paa"
            } },
            { "Vert", "civ", {
               "d3s_ural_next\data\skins\next_cab_green.paa"
            } },
            { "Kaki", "civ", {
               "d3s_ural_next\data\skins\next_cab_haki.paa"
            } },
            { "Orange", "civ", {
               "d3s_ural_next\data\skins\next_cab_orange.paa"
            } },
            { "Rouge", "civ", {
               "d3s_ural_next\data\skins\next_cab_red.paa"
            } },
            { "Blanc", "civ", {
               "d3s_ural_next\data\skins\next_cab.paa"
            } },
        };

        addons[] = {};
    };

    //  __________________________________МАЗ-6317______________________________

    class d3s_maz_6317 {
        vItemSpace = 370;
        insurance = 45400;
        reservoir = 320;
        fuelfactor = 107;
        vmax = 97;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_maz_pack\data\skins\6317_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_maz_pack\data\skins\6317_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_maz_pack\data\skins\6317_green.paa"
            } },
            { "Kaki", "civ", {
                "d3s_maz_pack\data\skins\6317_khaki.paa"
            } },
            { "Orange", "narcos", {
                "d3s_maz_pack\data\skins\6317_orange.paa"
            } },
            { "Rouge", "civ", {
                "d3s_maz_pack\data\skins\6317_red.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_maz_6317_tent {
        vItemSpace = 380;
        insurance = 54400;
        reservoir = 320;
        fuelfactor = 107;
        vmax = 97;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_maz_pack\data\skins\6317_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_maz_pack\data\skins\6317_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_maz_pack\data\skins\6317_green.paa"
            } },
            { "Kaki", "civ", {
                "d3s_maz_pack\data\skins\6317_khaki.paa"
            } },
            { "Orange", "narcos", {
                "d3s_maz_pack\data\skins\6317_orange.paa"
            } },
            { "Rouge", "civ", {
                "d3s_maz_pack\data\skins\6317_red.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_maz_6317_cistern { // Citerne
        vItemSpace = 160;
        insurance = 54400;
        reservoir = 320;
        fuelfactor = 107;
        vmax = 97;
        citerne = 9000;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_maz_pack\data\skins\6317_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_maz_pack\data\skins\6317_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_maz_pack\data\skins\6317_green.paa"
            } },
            { "Kaki", "civ", {
                "d3s_maz_pack\data\skins\6317_khaki.paa"
            } },
            { "Orange", "narcos", {
                "d3s_maz_pack\data\skins\6317_orange.paa"
            } },
            { "Rouge", "civ", {
                "d3s_maz_pack\data\skins\6317_red.paa"
            } },
        };

        addons[] = {};
    };

    //  __________________________________KamAZ-5350______________________________

    class d3s_kamaz_5350 {
        vItemSpace = 380;
        insurance = 54400;
        reservoir = 340;
        fuelfactor = 114;
        vmax = 100;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\6350_ao.paa"
            } },
            { "Noir", "civ", {
                "d3s_kamaz\data\skins\6350_ao_black.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\6350_ao_green.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\6350_ao_military.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_kamaz_5350_tent {
        vItemSpace = 390;
        insurance = 63400;
        reservoir = 340;
        fuelfactor = 114;
        vmax = 100;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\6350_ao.paa"
            } },
            { "Noir", "civ", {
                "d3s_kamaz\data\skins\6350_ao_black.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\6350_ao_green.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\6350_ao_military.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_kamaz_5350_bocha { // Citerne
        vItemSpace = 160;
        insurance = 63400;
        reservoir = 340;
        fuelfactor = 114;
        vmax = 100;
        citerne = 10000;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\6350_ao.paa"
            } },
            { "Noir", "civ", {
                "d3s_kamaz\data\skins\6350_ao_black.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\6350_ao_green.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\6350_ao_military.paa"
            } },
        };

        addons[] = {};
    };

    //  __________________________________KamAZ-4310______________________________

    class d3s_kamaz_2 {
        vItemSpace = 380;
        insurance = 54400;
        reservoir = 340;
        fuelfactor = 114;
        vmax = 100;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\4310_ao.paa"
            } },
            { "Noir", "civ", {
                "d3s_kamaz\data\skins\4310_ao_black.paa"
            } },
            { "Bleu", "civ", {
                "d3s_kamaz\data\skins\4310_ao_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green.paa"
            } },
            { "Vert 2", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green2.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\4310_ao_military.paa"
            } },
            { "Orange", "civ", {
                "d3s_kamaz\data\skins\4310_ao_orange.paa"
            } },
        };

        addons[] = {};
    };


    class d3s_kamaz_tent_2 {        //      KamAZ-5350 (Bâche)
        vItemSpace = 390;
        insurance = 63400;
        reservoir = 340;
        fuelfactor = 114;
        vmax = 100;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\4310_ao.paa"
            } },
            { "Noir", "civ", {
                "d3s_kamaz\data\skins\4310_ao_black.paa"
            } },
            { "Bleu", "civ", {
                "d3s_kamaz\data\skins\4310_ao_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green.paa"
            } },
            { "Vert 2", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green2.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\4310_ao_military.paa"
            } },
            { "Orange", "civ", {
                "d3s_kamaz\data\skins\4310_ao_orange.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_kamaz_bocha {         //      KamAZ-5350 AC
        vItemSpace = 160;
        insurance = 63400;
        reservoir = 340;
        fuelfactor = 114;
        vmax = 100;
        citerne = 10000;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\4310_ao.paa"
            } },
            { "Noir", "civ", {
                "d3s_kamaz\data\skins\4310_ao_black.paa"
            } },
            { "Bleu", "civ", {
                "d3s_kamaz\data\skins\4310_ao_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green.paa"
            } },
            { "Vert 2", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green2.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\4310_ao_military.paa"
            } },
            { "Orange", "civ", {
                "d3s_kamaz\data\skins\4310_ao_orange.paa"
            } },
        };

        addons[] = {};
    };

    //  __________________________________KrAZ-6315______________________________

    class d3s_kraz_6315 {
        vItemSpace = 400;
        insurance = 72400;
        reservoir = 350;
        fuelfactor = 118;
        vmax = 97;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kraz_6316\data\skins\6316_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_kraz_6316\data\skins\6316_blue_co.paa"
            } },
            { "Vert", "civ", {
                "d3s_kraz_6316\data\skins\6316_green_co.paa"
            } },
            { "Kaki", "civ", {
                "d3s_kraz_6316\data\skins\6316_haki_co.paa"
            } },
            { "Orange", "civ", {
                "d3s_kraz_6316\data\skins\6316_orange_co.paa"
            } },
            { "Rouge", "civ", {
                "d3s_kraz_6316\data\skins\6316_red_co.paa"
            } },
            { "Gris", "civ", {
                "d3s_kraz_6316\data\skins\6316_gray_co.paa"
            } },
        };

        addons[] = {};
    };

    //  __________________________________KrAZ-6316______________________________

    class d3s_kraz_6316 {
        vItemSpace = 420;
        insurance = 90400;
        reservoir = 380;
        fuelfactor = 128;
        vmax = 95;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kraz_6316\data\skins\6316_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_kraz_6316\data\skins\6316_blue_co.paa"
            } },
            { "Vert", "civ", {
                "d3s_kraz_6316\data\skins\6316_green_co.paa"
            } },
            { "Kaki", "civ", {
                "d3s_kraz_6316\data\skins\6316_haki_co.paa"
            } },
            { "Orange", "civ", {
                "d3s_kraz_6316\data\skins\6316_orange_co.paa"
            } },
            { "Rouge", "civ", {
                "d3s_kraz_6316\data\skins\6316_red_co.paa"
            } },
            { "Gris", "civ", {
                "d3s_kraz_6316\data\skins\6316_gray_co.paa"
            } },
        };

        addons[] = {};
    };

    //  __________________________________KamAZ-6350______________________________

    class d3s_kamaz_6350 {
        vItemSpace = 460;
        insurance = 126400;
        reservoir = 400;
        fuelfactor = 136;
        vmax = 80;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\6350_ao.paa"
            } },
            { "Noir", "civ", {
                "d3s_kamaz\data\skins\6350_ao_black.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\6350_ao_green.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\6350_ao_military.paa"
            } },
        };

        addons[] = {};
    };

    //  __________________________________МЗКТ-7429______________________________

    class d3s_maz_7429 {
        vItemSpace = 460;
        insurance = 126400;
        reservoir = 400;
        fuelfactor = 136;
        vmax = 80;

        textures[] = {};

        addons[] = {};
    };

    class d3s_maz_7429_cistern {
        vItemSpace = 160;
        insurance = 126400;
        reservoir = 400;
        fuelfactor = 136;
        vmax = 80;

        textures[] = {};

        addons[] = {};
    };

    //  __________________________________Mercedes-Benz Actros______________________________

    class d3s_actros_14 {
        vItemSpace = 460;
        insurance = 126400;
        reservoir = 400;
        fuelfactor = 136;
        vmax = 80;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_actros_14\data\skins\carpaint_co.paa"
            } },
            { "Bleu", "civ", {
               "d3s_actros_14\data\skins\actros_blue.paa"
            } },
            { "Noir", "civ", {
               "d3s_actros_14\data\skins\actros_black.paa"
            } },
            { "Vert", "civ", {
               "d3s_actros_14\data\skins\actros_green.paa"
            } },
            { "Rouge", "civ", {
               "d3s_actros_14\data\skins\actros_red.paa"
            } },
            { "Bleu cyan", "civ", {
               "d3s_actros_14\data\skins\actros_gray.paa"
            } },
        };

        addons[] = {};
    };


    //  _______________________________________Camionette__________________________________________________

    class C_Van_02_medevac_F { //    Camionette Transport Medic
        vItemSpace = 200;
        insurance = 7000;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {
            { "Ambulance", "med", {
               "pod_vest\data\veh\van\van_CivAmbulance7.paa",
            } },
            
            /*
            { "Ambulance", "med", {
               "a3\soft_f_enoch\van_02\data\van_body_ldfambulance_co.paa",
               "a3\soft_f_enoch\van_02\data\van_wheel_ldf_mp_co.paa",
               "a3\soft_f_enoch\van_02\data\van_glass_medevac_ldf_ca.paa",
               "a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
            } },
            { "Ambulance Militaire", "med", {
               "a3\soft_f_orange\van_02\data\van_body_civambulance_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_red_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_civambulance_ca.paa",
               "a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa"
            } }
            */
        };
    };

    class C_IDAP_Van_02_medevac_F { //    Camionette Transport Medic
        vItemSpace = 200;
        insurance = 7000;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {
            { "Ambulance NRBC", "med", {
               "pod_vest\data\veh\van\van_CivNRBC2.paa",
            } },
            
            /*
            { "Ambulance", "med", {
               "a3\soft_f_enoch\van_02\data\van_body_ldfambulance_co.paa",
               "a3\soft_f_enoch\van_02\data\van_wheel_ldf_mp_co.paa",
               "a3\soft_f_enoch\van_02\data\van_glass_medevac_ldf_ca.paa",
               "a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
            } },
            { "Ambulance Militaire", "med", {
               "a3\soft_f_orange\van_02\data\van_body_civambulance_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_red_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_civambulance_ca.paa",
               "a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa"
            } }
            */
        };
    };

    class C_Van_02_transport_F { //    Camionette Transport
        vItemSpace = 200;
        insurance = 7000;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {
            { "Rouge", "civ", {
               "a3\soft_f_orange\van_02\data\van_body_red_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_red_co.paa"
            } },
            { "Blanc", "civ", {
               "a3\soft_f_orange\van_02\data\van_body_white_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_white_co.paa"
            } },
            { "Vert", "civ", {
               "a3\soft_f_orange\van_02\data\van_body_green_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_green_co.paa"
            } },
            { "Orange", "civ", {
               "a3\soft_f_orange\van_02\data\van_body_orange_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_orange_co.paa"
            } },
            { "Marron", "civ", {
               "a3\soft_f_orange\van_02\data\van_body_syndikat_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_syndikat_co.paa"
            } }
        };
    };

    class C_Van_02_service_F { //    Camionette Transport
        vItemSpace = 200;
        insurance = 7000;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {
            { "Press", "civ", {
               "a3\soft_f_orange\van_02\data\van_body_aan_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_aan_co.paa"
            } }
        };
    };

    /*
    TODO CUSTOM : roue rouge : a3\soft_f_orange\van_02\data\van_wheel_red_co.paa
    */

    class I_C_Van_02_transport_F { //    Camionette Transport REBEL
        vItemSpace = 200;
        insurance = 3500;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {
            { "Camo 1", "narcos", {
               "a3\soft_f_orange\van_02\data\van_body_fia_01_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_fia_01_co.paa"
            } },
            { "Camo 2", "narcos", {
               "a3\soft_f_orange\van_02\data\van_body_fia_03_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_fia_03_co.paa"
            } },
            { "Camo 3", "narcos", {
               "a3\soft_f_enoch\van_02\data\van_body_ldf_co.paa",
               "a3\soft_f_enoch\van_02\data\van_wheel_ldf_mp_co.paa",
               "a3\soft_f_enoch\van_02\data\van_glass_mp_ca.paa",
               "a3\soft_f_enoch\van_02\data\van_body_ldf_co.paa"
            } },
            { "Camo blanc", "narcos", {
               "a3\soft_f_orange\van_02\data\van_body_masked_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_masked_co.paa"
            } }
        };
    };

    class B_GEN_Van_02_transport_F { //    Camionette Transport GENDARMERIE
        vItemSpace = 170;
        insurance = 7000;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {};
    };

    class C_Van_02_vehicle_F { //    Camionette Cargaison CIVIL
        vItemSpace = 300;
        insurance = 6400;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {
            { "Rouge", "civ", {
               "a3\soft_f_orange\van_02\data\van_body_red_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_red_co.paa"
            } },
            { "Blanc", "civ", {
               "a3\soft_f_orange\van_02\data\van_body_white_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_white_co.paa"
            } },
            { "Vert", "civ", {
               "a3\soft_f_orange\van_02\data\van_body_green_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_green_co.paa"
            } },
            { "Orange", "civ", {
               "a3\soft_f_orange\van_02\data\van_body_orange_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_orange_co.paa"
            } },
            { "Marron", "civ", {
               "a3\soft_f_orange\van_02\data\van_body_syndikat_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_syndikat_co.paa"
            } }
        };
    };

    class I_C_Van_02_vehicle_F { //    Camionette Cargaison REBEL
        vItemSpace = 300;
        insurance = 3200;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {
            { "Camo 1", "narcos", {
               "a3\soft_f_orange\van_02\data\van_body_fia_01_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_fia_01_co.paa"
            } },
            { "Camo 2", "narcos", {
               "a3\soft_f_orange\van_02\data\van_body_fia_03_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_fia_03_co.paa"
            } },
            { "Camo 3", "narcos", {
               "a3\soft_f_enoch\van_02\data\van_body_ldf_co.paa",
               "a3\soft_f_enoch\van_02\data\van_wheel_ldf_mp_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
               "a3\soft_f_enoch\van_02\data\van_body_ldf_co.paa"
            } },
            { "Camo blanc", "narcos", {
               "a3\soft_f_orange\van_02\data\van_body_masked_co.paa",
               "a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa",
               "a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa",
               "a3\soft_f_orange\van_02\data\van_body_masked_co.paa"
            } }
        };
    };

    class B_GEN_Van_02_vehicle_F { //    Camionette Cargaison GENDARMERIE
        vItemSpace = 300;
        insurance = 6400;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {
            { "Gen", "cop", {} },
            { "Ambulance Plongée", "med", {
               "pod_vest\data\veh\van\van_CivPlongee2.paa",
            } }
        };
    };

    class M_Ambulance {
        vItemSpace = 150;
        insurance = 6400;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {};
    };

    class SH_BLS_SP {
        vItemSpace = 150;
        insurance = 6400;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {};
    };

    class ch_umh_master3p2 {
        vItemSpace = 150;
        insurance = 6400;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {};
    };

    class M_CVPI_EMS {
        vItemSpace = 150;
        insurance = 6400;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {};
    };

    class M_Tahoe_EMS {
        vItemSpace = 150;
        insurance = 6400;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {};
    };

    class M_Silverado {
        vItemSpace = 150;
        insurance = 6400;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {};
    };

    class M_Silverado_cab {
        vItemSpace = 150;
        insurance = 6400;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {};
    };

    class CBRN_Containment_Vehicle {
        vItemSpace = 300;
        insurance = 6400;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {};
        addons[] = {};

        class caches {};
    };

    class Gendarmerie_CBRN_Vehicle {
        vItemSpace = 300;
        insurance = 6400;
        reservoir = 120;
        fuelfactor = 32;
        textures[] = {
            { "NRBC", "cop", {} },

            { "Ambulance NRBC", "med", {
               "pod_vest\data\veh\van\van_CivNRBC2.paa",
            } },
        };
        
        addons[] = {};

        class caches {};
    };

    //  _______________________________________VSAV_______________________________________

    class chMaster3p2_vsav {    //  Renault Master 3 Phase 2 VSAV
        vItemSpace = 170;
        insurance = 3000;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 182;

        textures[] = {};

        addons[] = {};
    };
    
    class chMaster3p2ng_vsav {  //  Renault Master 3 Phase 2 VSAV G3
        vItemSpace = 170;
        insurance = 3000;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 182;

        textures[] = {};

        addons[] = {};
    };

    //  _______________________________________TEMPEST__________________________________________________

    class O_Truck_03_transport_F { //   Tempest Transport
        vItemSpace = 400;
        insurance = 22600;
        reservoir = 380;
        fuelfactor = 128;
        textures[] = {
            { "Hex sable", "narcos", {
                "a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_cargo_co.paa",
            } },
             { "Hex vert", "narcos", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_cargo_ghex_co.paa",
            } }
        };

        class caches {
            class wheels { trunk = 18; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    class O_Truck_03_covered_F {        //      Tempest Transport (Covered)
        vItemSpace = 420;
        insurance = 24850;
        reservoir = 380;
        fuelfactor = 128;
        textures[] = {
            { "Hex sable", "narcos", {
                "a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_cargo_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_cover_co.paa"
            } },
            { "Hex vert", "narcos", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_cargo_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_cover_ghex_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 18; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    class O_Truck_03_ammo_F { //   Tempest Munitions
        vItemSpace = 430;
        insurance = 27100;
        reservoir = 380;
        fuelfactor = 128;
        textures[] = {
             { "Hex sable (cargo rouge)", "narcos", {
                "a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_cargo_co.paa",
                "a3\structures_f\data\metal\containers\containers_01_set_co.paa"
            } },
             { "Hex vert (cargo rouge)", "narcos", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_cargo_ghex_co.paa",
                "a3\structures_f\data\metal\containers\containers_01_set_co.paa"
            } },
             { "Hex sable (cargo vert)", "narcos", {
                "a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_cargo_co.paa",
                "a3\structures_f\data\metal\containers\containers_02_set_co.paa"
            } },
             { "Hex vert (cargo vert)", "narcos", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_cargo_ghex_co.paa",
                "a3\structures_f\data\metal\containers\containers_02_set_co.paa"
            } },
             { "Hex sable (cargo jaune)", "narcos", {
                "a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_cargo_co.paa",
                "a3\structures_f\data\metal\containers\containers_colors_04_co.paa"
            } },
             { "Hex vert (cargo jaune)", "narcos", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_cargo_ghex_co.paa",
                "a3\structures_f\data\metal\containers\containers_colors_04_co.paa"
            } },
             { "Hex sable (cargo beige)", "narcos", {
                "a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_cargo_co.paa",
                "a3\structures_f\data\metal\containers\containers_colors_05_co.paa"
            } },
             { "Hex vert (cargo beige)", "narcos", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_cargo_ghex_co.paa",
                "a3\structures_f\data\metal\containers\containers_colors_05_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 18; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    class O_Truck_03_repair_F {     //      Tempest Repair
        vItemSpace = 440;
        insurance = 29350;
        reservoir = 380;
        fuelfactor = 128;
        textures[] = {
            { "Hex sable", "narcos", {
                "a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ammo_co.paa"
            } },
            { "Hex vert", "narcos", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_ammo_ghex_co.paa"
            } },
            { "Brink", "cop", {
                "POD_SKINS\data\vehicles\brinks\truck_BRINKS_ext01_co.jpg",
                "POD_SKINS\data\vehicles\brinks\truck_BRINKS_ext02_co.jpg",
                "POD_SKINS\data\vehicles\brinks\truck_03_BRINKS_co.jpg"
            } }
        };
    };

    class O_Truck_03_device_F { //      Tempest (Device) materiel
        vItemSpace = 430;
        insurance = 30000;
        reservoir = 380;
        fuelfactor = 128;
        textures[] = {
            { "Hex sable", "narcos", {
                "a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_cargo_co.paa",
                "a3\structures_f_epc\items\electronics\data\the_device_02_co.paa",
                "a3\structures_f_epc\items\electronics\data\the_device_03_co.paa"
            } },
             { "Hex vert", "narcos", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_cargo_ghex_co.paa",
                "a3\structures_f_epc\items\electronics\data\the_device_02_co.paa",
                "a3\structures_f_epc\items\electronics\data\the_device_03_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 18; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    class O_Truck_03_fuel_F { //      Tempest (Device) Fuel
        vItemSpace = 160;
        insurance = 29350;
        reservoir = 380;
        fuelfactor = 128;
        citerne = 12000;
        textures[] = {
            { "Hex sable", "narcos", {
                "a3\soft_f_epc\truck_03\data\truck_03_ext01_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_ext02_co.paa",
                "a3\soft_f_epc\truck_03\data\truck_03_fuel_co.paa"
            } },
            { "Hex vert", "narcos", {
                "a3\soft_f_exp\truck_03\data\truck_03_ext01_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_ext02_ghex_co.paa",
                "a3\soft_f_exp\truck_03\data\truck_03_fuel_ghex_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 18; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    //  _______________________________________VPC___________________________________________

    class VPC {
        vItemSpace = 360;
        insurance = 500;
        reservoir = 400;
        fuelfactor = 136;
        vmax = 110;
        textures[] = {};
    };

    class VPC_Gen {
        vItemSpace = 360;
        insurance = 2500;
        reservoir = 400;
        fuelfactor = 136;
        vmax = 110;
        textures[] = {};
    };

    //  _______________________________________CCFM___________________________________________

    class ccfm_mercedes {
        vItemSpace = 340;
        insurance = 3000;
        reservoir = 380;
        fuelfactor = 128;
        vmax = 100;

        textures[] = {};

        addons[] = {};
    };

    //  _______________________________________CCGC___________________________________________

    class CCGC {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 320;
        fuelfactor = 107;
        vmax = 110;

        textures[] = {};

        addons[] = {};
    };

    //  ________________________________Fougon Compresseur___________________________________________

    class fcch {
        vItemSpace = 300;
        insurance = 3000;
        reservoir = 350;
        fuelfactor = 118;
        vmax = 110;

        textures[] = {};

        addons[] = {};
    };

    //  ______________________PMA________________________

    class PMA {
        vItemSpace = 300;
        insurance = 3000;
        reservoir = 350;
        fuelfactor = 118;
        vmax = 110;

        textures[] = {};

        addons[] = {};
    };

    //  _______________________________________CCRM___________________________________________
    
    class CCRM_Renault {
        vItemSpace = 320;
        insurance = 3000;
        reservoir = 320;
        fuelfactor = 107;
        vmax = 110;

        textures[] = {};

        addons[] = {};
    };

    class fpt_renault {
        vItemSpace = 340;
        insurance = 3000;
        reservoir = 340;
        fuelfactor = 114;
        vmax = 110;

        textures[] = {};

        addons[] = {};
    };
    
    class fptl_renault {
        vItemSpace = 370;
        insurance = 3000;
        reservoir = 340;
        fuelfactor = 114;
        vmax = 110;

        textures[] = {};

        addons[] = {};
    };

    class chps5g {
        vItemSpace = 300;
        insurance = 3000;
        reservoir = 340;
        fuelfactor = 114;
        vmax = 110;

        textures[] = {};

        addons[] = {};
    };

    //  _______________________________________Grande echelle___________________________________________

    class chepa_Mercedes_Atego_1530 {
        vItemSpace = 300;
        insurance = 3000;
        reservoir = 400;
        fuelfactor = 136;
        vmax = 110;

        textures[] = {};

        addons[] = {};
    };

    //  ---------------------------------------Voitures blindées-----------------------------------------


    class O_T_LSV_02_unarmed_F {        //      Qilin (Unarmed)
        vItemSpace = 50;
        insurance = 17500;
        reservoir = 120;
        fuelfactor = 20;
        textures[] = {

            { "Hex sable", "narcos", {
                "a3\soft_f_exp\lsv_02\data\csat_lsv_01_arid_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_02_arid_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_03_arid_co.paa"
            } },
             { "Hex vert", "narcos", {
                "a3\soft_f_exp\lsv_02\data\csat_lsv_01_ghex_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_02_ghex_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_03_ghex_co.paa"
            } },
             { "Noir", "narcos", {
                "a3\soft_f_exp\lsv_02\data\csat_lsv_01_black_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_02_black_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_03_black_co.paa"
            } }
        };

        addons[] = {
            {"Unarmed_Doors_Hide",1,200}
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 10; };
            class carrosserie { trunk = 10; };
        };
    };

    class O_T_LSV_02_armed_F {          //      Qilin (Armed)
        vItemSpace = 50;
        insurance = 30000;
        reservoir = 120;
        fuelfactor = 20;
        textures[] = {
             { "Hex sable", "narcos", {
                "a3\soft_f_exp\lsv_02\data\csat_lsv_01_arid_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_02_arid_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_03_arid_co.paa"
            } },
             { "Hex vert", "narcos", {
                "a3\soft_f_exp\lsv_02\data\csat_lsv_01_ghex_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_02_ghex_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_03_ghex_co.paa"
            } },
             { "Noir", "narcos", {
                "a3\soft_f_exp\lsv_02\data\csat_lsv_01_black_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_02_black_co.paa",
                "a3\soft_f_exp\lsv_02\data\csat_lsv_03_black_co.paa"
            } }
        };

        addons[] = {
            {"Unarmed_Doors_Hide",0,200}
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 10; };
            class carrosserie { trunk = 10; };
        };
    };

    class B_MRAP_01_F {     //      Hunter
        vItemSpace = 180;
        insurance = 15000;
        reservoir = 170;
        fuelfactor = 45;
        textures[] = {

            { "Noir", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Tropical", "cop", {
                "POD_SKINS\data\vehicles\hunter.jpg",
                "POD_SKINS\data\vehicles\hunter2.jpg"
            } },
            { "Beige", "cop", {
                "a3\soft_f\mrap_01\data\mrap_01_base_co.paa",
                "a3\soft_f\mrap_01\data\mrap_01_adds_co.paa",""
            } },
            { "Vert", "cop", {
                "a3\soft_f\mrap_01\data\mrap_01_base_co.paa",
                "a3\soft_f\mrap_01\data\mrap_01_adds_co.paa",""
            } },
            { "Gendarmerie", "cop", {
                "pod_vest\data\veh\hunter\mrap_01_base_co.paa",
                "pod_vest\data\veh\hunter\mrap_01_adds_co.paa",""
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 10; };
            class carrosserie { trunk = 10; };
        };
    };

    class B_MRAP_01_hmg_F {         //          Hunter HMG  non utilisé
        vItemSpace = 80;
        insurance = 400000;
        reservoir = 180;
        fuelfactor = 38;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_MRAP_02_F {             //      Ifrit
        vItemSpace = 50;
        insurance = 44000;
        reservoir = 170;
        fuelfactor = 35;
        textures[] = {
            { "Hex sable", "narcos", {
                "a3\soft_f\mrap_02\data\mrap_02_ext_01_co.paa",
                "a3\soft_f\mrap_02\data\mrap_02_ext_02_co.paa"
            } },
            { "Hex vert", "narcos", {
                "a3\soft_f_exp\mrap_02\data\mrap_02_ext_01_ghex_co.paa",
                "a3\soft_f_exp\mrap_02\data\mrap_02_ext_02_ghex_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 10; };
            class carrosserie { trunk = 10; };
        };
    };



    class I_MRAP_03_F {             //      Strider
        vItemSpace = 50;
        insurance = 56000;
        reservoir = 160;
        fuelfactor = 34;
        textures[] = {
            { "Num vert", "narcos", {
                "a3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa",
                "a3\data_f\vehicles\turret_indp_co.paa"
            } },
            { "Gendarmerie Beige", "cop", {
                "a3\soft_f_beta\mrap_03\data\mrap_03_ext_co.paa",
                "a3\data_f\vehicles\turret_co.paa"
            } },
            { "Federaux", "cop", {
                "POD_SKINS\data\vehicles\Gendarmerie\Strider_federal.jpg"
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 10; };
            class carrosserie { trunk = 10; };
        };
    };

    //  --------------------------------------- Voitures -----------------------------------------

    //  ________________________________________Quadbike___________________________________________

    class C_Quadbike_01_F {
        vItemSpace = 15;
        insurance = 625;
        reservoir = 16;
        fuelfactor = 6;
        vmax = 79;
        textures[] = {
            { "Noir", "civ", {
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_civ_black_co.paa",
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_wheel_civblack_co.paa"
            } },
            { "Bleu", "civ", {
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_civ_blue_co.paa",
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_wheel_civblue_co.paa"
            } },
            { "Rouge", "civ", {
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_civ_red_co.paa",
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_wheel_civred_co.paa"
            } },
            { "Blanc", "civ", {
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_civ_white_co.paa",
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_wheel_civwhite_co.paa"
            } },
            { "Olive", "civ", {
                "a3\soft_f\quadbike_01\data\quadbike_01_co.paa",
                "a3\soft_f\quadbike_01\data\quadbike_01_wheel_co.paa"
            } },
            { "Kaki", "civ", {
                "a3\soft_f\quadbike_01\data\quadbike_01_co.paa",
                "a3\soft_f_enoch\quadbike_01\data\quadbike_01_wheel_eaf_co.paa"
            } },
            { "Camo marron", "civ", {
                "a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa",  //  bizzard
                "a3\soft_f_enoch\quadbike_01\data\quadbike_01_wheel_eaf_co.paa"
            } }
        };
        /*
        todo custom roues :
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_wheel_civblack_co.paa"
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_wheel_civblue_co.paa"
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_wheel_civred_co.paa"
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_wheel_civwhite_co.paa"
                "a3\soft_f\quadbike_01\data\quadbike_01_wheel_co.paa"
                "a3\soft_f_enoch\quadbike_01\data\quadbike_01_wheel_eaf_co.paa"

        */

        class caches {
                class wheels { trunk = 4; };
                class seat { trunk = 5; };
        };
    };

    class I_Quadbike_01_F {             //  narcosEL
        vItemSpace = 15;
        insurance = 625;
        reservoir = 16;
        fuelfactor = 6;
        vmax = 79;
        textures[] = {
            { "Hex sable", "narcos", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa",
                "a3\soft_f\quadbike_01\data\quadbike_01_wheel_opfor_co.paa"
            } },
            { "Hex vert", "narcos", {
                "a3\soft_f_exp\quadbike_01\data\quadbike_01_ghex_co.paa",
                "a3\soft_f_exp\quadbike_01\data\quadbike_01_wheel_ghex_co.paa"
            } },
            { "Num vert", "narcos", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa",
                "a3\soft_f_beta\quadbike_01\data\quadbike_01_wheel_indp_co.paa"
            } },
            { "Camo vert", "narcos", {
                "a3\soft_f_bootcamp\quadbike_01\data\quadbike_01_ig_co.paa",
                "a3\soft_f_gamma\quadbike_01\data\quadbike_01_wheel_ig_co.paa"
            } },
            { "Camo feuilles", "narcos", {
                "a3\soft_f_bootcamp\quadbike_01\data\quadbike_01_indp_hunter_co.paa",
                "a3\soft_f_gamma\quadbike_01\data\quadbike_01_wheel_indp_hunter_co.paa"
            } }
        };

        class caches {
                class wheels { trunk = 4; };
                class seat { trunk = 5; };
        };
    };

    class B_Quadbike_01_F {             // GENDARMERIE
        vItemSpace = 15;
        insurance = 625;
        reservoir = 16;
        fuelfactor = 6;
        vmax = 79;
        textures[] = {
            { "Gendarmerie", "cop", {
                "POD_SKINS\data\vehicles\Gendarmerie\quadbike_GENDp_01_co.paa"
            } },
            { "Ranger", "cop", {
                "a3\soft_f_enoch\quadbike_01\data\quadbike_01_ranger_co.paa",
                "a3\soft_f_enoch\quadbike_01\data\quadbike_01_wheel_ranger_co.paa"
            } }
        };
    };

    //  ________________________________________KART___________________________________________

    class C_Kart_01_F {
        vItemSpace = 2;
        inusrance = 1500;
        reservoir = 8;
        fuelfactor = 5;
        textures[] = {
            { "Bleu", "civ", {
               "a3\soft_f_kart\kart_01\data\kart_01_base_blue_co.paa",
               "a3\soft_f_kart\kart_01\data\kart_01_logos_blu_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_1_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_3_ca.paa"
            } },
            { "Bleu king", "civ", {
               "a3\soft_f_kart\kart_01\data\kart_01_blu_co.paa",
               "a3\soft_f_kart\kart_01\data\kart_01_logos_blu_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_1_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_3_ca.paa"
            } },
            { "Orange", "civ", {
               "a3\soft_f_kart\kart_01\data\kart_01_base_orange_co.paa",
               "a3\soft_f_kart\kart_01\data\kart_01_logos_blu_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_1_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_3_ca.paa"
            } },
            { "Jaune", "civ", {
               "a3\soft_f_kart\kart_01\data\kart_01_base_yellow_co.paa",
               "",
               "a3\soft_f_kart\kart_01\data\kart_num_1_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_3_ca.paa"
            } },
            { "Vert", "civ", {
               "a3\soft_f_kart\kart_01\data\kart_01_base_green_co.paa",
               "a3\soft_f_kart\kart_01\data\kart_01_logos_blu_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_1_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_3_ca.paa"
            } },
            { "Vert fuel", "civ", {
               "a3\soft_f_kart\kart_01\data\kart_01_co.paa",
               "a3\soft_f_kart\kart_01\data\kart_01_logos_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_1_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_3_ca.paa"
            } },
            { "Noir", "civ", {
               "a3\soft_f_kart\kart_01\data\kart_01_base_black_co.paa",
               "a3\soft_f_kart\kart_01\data\kart_01_logos_black_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_1_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_3_ca.paa"
            } },
            { "Blanc", "civ", {
               "a3\soft_f_kart\kart_01\data\kart_01_base_white_co.paa",
               "",
               "a3\soft_f_kart\kart_01\data\kart_num_1_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_3_ca.paa"
            } },
            { "Redstone", "civ", {
               "a3\soft_f_kart\kart_01\data\kart_01_black_co.paa",
               "a3\soft_f_kart\kart_01\data\kart_01_logos_black_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_1_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_3_ca.paa"
            } },
            { "Vrana", "civ", {
               "a3\soft_f_kart\kart_01\data\kart_01_vrana_co.paa",
               "a3\soft_f_kart\kart_01\data\kart_01_logos_vrana_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_1_ca.paa",
               "a3\soft_f_kart\kart_01\data\kart_num_3_ca.paa"
            } }
        };

        class caches {
            class carrosserie { trunk = 6; };
        };
    };

    //  ________________________________________Offroad___________________________________________

    class B_GEN_Offroad_01_gen_F { //    Offroad Gendarmerie
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 201;
        textures[] = {
            { "Gendarmerie", "cop", {
               "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa",
               "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa"
            } }
        };
    };

    class C_Offroad_01_F {      //      Pickup
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 201;
        textures[] = {
            { "Beige", "civ", {
               "a3\soft_f\offroad_01\data\offroad_01_ext_base01_co.paa",
               "a3\soft_f\offroad_01\data\offroad_01_ext_base01_co.paa"
            } },
            { "Blanc", "civ", {
               "a3\soft_f\offroad_01\data\offroad_01_ext_base02_co.paa",
               "a3\soft_f\offroad_01\data\offroad_01_ext_base02_co.paa"
            } },
            { "Bleu", "civ", {
               "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa",
               "a3\soft_f\offroad_01\data\offroad_01_ext_base03_co.paa"
            } },
            { "Bleu Custom", "civ", {
               "a3\soft_f\offroad_01\data\offroad_01_ext_base05_co.paa",
               "a3\soft_f\offroad_01\data\offroad_01_ext_base05_co.paa"
            } },
            { "Rouge", "civ", {
               "a3\soft_f\offroad_01\data\offroad_01_ext_co.paa",
               "a3\soft_f\offroad_01\data\offroad_01_ext_co.paa"
            } },
            { "Rouge Foncé", "civ", {
               "a3\soft_f\offroad_01\data\offroad_01_ext_base04_co.paa",
               "a3\soft_f\offroad_01\data\offroad_01_ext_base04_co.paa"
            } },
            { "Vert", "civ", {
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa"
            } }
        };

        addons[] = {
            {"HideDoor1",0,200},
            {"HideDoor2",0,200},
            {"HideDoor3",1,200},
            {"HideBackpacks",1,500},
            {"HideBumper2",0,200},
            {"HideConstruction",1,500}
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 10; };
            class carrosserie { trunk = 5; };
        };
    };

    class B_G_Offroad_01_F { //                     Pick up REBEL
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 201;
        textures[] = {
            { "Camo 1 vert/noir", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa"
            } },
            { "Camo 1 vert/beige", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa"
            } },
            { "Camo 3 beige/vert", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa"
            } },
            { "Camo 4 vert/beige/noir", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa"
            } },
            { "Camo 5 noir/vert/beige", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa"
            } },
            { "Camo 6 blanc/marron/noir", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_06_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_06_co.paa"
            } },
            { "Camo 7 vert/beige/noir", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa"
            } },
            { "Camo 8 vert/noir/beige", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa"
            } },
            { "Camo 9 vert/noir/beige", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa"
            } },
            { "Camo 10 beige/noir/blanc", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_10_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_10_co.paa"
            } },
            { "Camo 11 beige/gris/noir 3", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa"
            } },
            { "Camo 12 beige/marron/vert", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_12_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_12_co.paa"
            } }
        };

        addons[] = {
            {"HideDoor1",0,200},
            {"HideDoor2",0,200},
            {"HideDoor3",1,200},
            {"HideBackpacks",1,500},
            {"HideBumper2",0,200},
            {"HideConstruction",1,500}
        };

        class caches {
                class wheels { trunk = 10; };
                class seat { trunk = 5; };
                class fauxplancher { trunk = 10; };
                class carrosserie { trunk = 5; };
        };
    };

    class B_GEN_Offroad_01_covered_F { //    Offroad Hardtop Gendarmerie
        vItemSpace = 175;
        insurance = 3500;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 201;
        textures[] = {
            { "Gendarmerie", "cop", {
               "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa",
               "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_gen_co.paa"
            } },
            { "Ranger", "cop", {
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_ranger_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_ranger_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_ranger_co.paa"
            } }
        };
    };

    class C_Offroad_01_covered_F { //    Offroad Hardtop CIVIL
        vItemSpace = 175;
        insurance = 3500;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 201;
        textures[] = {
            { "Noir", "civ", {
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_blk_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_blk_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_blk_co.paa"
            } },
            { "Vert", "civ", {
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_grn_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_grn_co.paa"
            } },
            { "Bleu Custom (Couverture noir)", "civ", {
               "a3\soft_f\offroad_01\data\offroad_01_ext_base05_co.paa",
               "a3\soft_f\offroad_01\data\offroad_01_ext_base05_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_blk_co.paa"
            } },
            { "Bleu Custom (Couverture bleu)", "civ", {
               "a3\soft_f\offroad_01\data\offroad_01_ext_base05_co.paa",
               "a3\soft_f\offroad_01\data\offroad_01_ext_base05_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_gen_co.paa"
            } },
            { "Rouge (Couverture noir)", "civ", {
               "a3\soft_f\offroad_01\data\offroad_01_ext_co.paa",
               "a3\soft_f\offroad_01\data\offroad_01_ext_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_blk_co.paa"
            } },
            { "Rouge Foncé (Couverture noir)", "civ", {
               "a3\soft_f\offroad_01\data\offroad_01_ext_base04_co.paa",
               "a3\soft_f\offroad_01\data\offroad_01_ext_base04_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_blk_co.paa"
            } }
        };
    };

    class I_E_Offroad_01_covered_F { //    Offroad Hardtop REBEL
        vItemSpace = 175;
        insurance = 3500;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 201;
        textures[] = {
            { "Camo (Couverture Camo)", "narcos", {
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_eaf_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_eaf_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_eaf_co.paa"
            } },
            { "Camo (Couverture Vert)", "narcos", {
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_eaf_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_ext_eaf_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_grn_co.paa"
            } },
            { "Camo 1 (vert/noir)", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_grn_co.paa"
            } },
            { "Camo 1 (vert/beige)", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_grn_co.paa"
            } },
            { "Camo 3 (beige/vert)", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa"
            } },
            { "Camo 4 (vert/beige/noir)", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_grn_co.paa"
            } },
            { "Camo 5 (noir/vert/beige)", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_grn_co.paa"
            } },
            { "Camo 8 (vert/noir/beige)", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_grn_co.paa"
            } },
            { "Camo 9 (vert/noir/beige)", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa",
               "a3\soft_f_enoch\offroad_01\data\offroad_01_cover_grn_co.paa"
            } }
        };
    };

    class I_G_Offroad_01_armed_F {
        vItemSpace = 50;
        insurance = 10000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 201;
        textures[] = {
            { "Camo 1 vert/noir", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa"
            } },
            { "Camo 1 vert/beige", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_02_co.paa"
            } },
            { "Camo 3 beige/vert", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_03_co.paa"
            } },
            { "Camo 4 vert/beige/noir", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_04_co.paa"
            } },
            { "Camo 5 noir/vert/beige", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_05_co.paa"
            } },
            { "Camo 6 blanc/marron/noir", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_06_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_06_co.paa"
            } },
            { "Camo 7 vert/beige/noir", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_07_co.paa"
            } },
            { "Camo 8 vert/noir/beige", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa"
            } },
            { "Camo 9 vert/noir/beige", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_09_co.paa"
            } },
            { "Camo 10 beige/noir/blanc", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_10_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_10_co.paa"
            } },
            { "Camo 11 beige/gris/noir 3", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_11_co.paa"
            } },
            { "Camo 12 beige/marron/vert", "narcos", {
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_12_co.paa",
               "a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_12_co.paa"
            } }
        };

        addons[] = {
            {"HideDoor1",0,200},
            {"HideDoor2",0,200},
            {"HideDoor3",1,200},
            {"HideBackpacks",1,500},
            {"HideBumper2",0,200},
            {"HideConstruction",1,500}
        };

        class caches {
                class wheels { trunk = 10; };
                class seat { trunk = 5; };
                class fauxplancher { trunk = 10; };
                class carrosserie { trunk = 5; };
        };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 50;
        insurance = 10000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 201;
        textures[] = {
            { "Gendarmerie", "cop", {
               "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa",
               "a3\soft_f_exp\offroad_01\data\offroad_01_ext_gen_co.paa"
            } }
        };

        addons[] = {
            {"HideDoor1",0,200},
            {"HideDoor2",0,200},
            {"HideDoor3",1,200},
            {"HideBackpacks",1,500},
            {"HideBumper2",0,200},
            {"HideConstruction",1,500}
        };

        class caches {
                class wheels { trunk = 10; };
                class seat { trunk = 5; };
                class fauxplancher { trunk = 10; };
                class carrosserie { trunk = 5; };
        };
    };

    

    
    //  ________________________________________Hayon___________________________________________

    class C_Hatchback_01_F {            //      Hayon
        vItemSpace = 40;
        insurance = 17000;
        reservoir = 53;
        fuelfactor = 11;
        textures[] = {
            { "Rouge sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Bleu sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Blanc sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Vert sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Vert", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Bleu", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Bleu custom", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Jaune", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "Blanc", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Gris", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Noir", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
            { "Beige custom", "civ", {
                "a3\soft_f_gamma\hatchback_01\data\hatchback_01_ext_base05_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 5; };
            class carrosserie { trunk = 5; };
        };
    };

    class C_Hatchback_01_sport_F {      //      Hayon sport
        vItemSpace = 40;
        insurance = 70000;
        reservoir = 53;
        fuelfactor = 12;
        textures[] = {
            { "Rouge sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Bleu sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Blanc sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Vert sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Vert", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Bleu", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Bleu custom", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Jaune", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "Blanc", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Gris", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Noir", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
            { "Beige custom", "civ", {
                "a3\soft_f_gamma\hatchback_01\data\hatchback_01_ext_base05_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 5; };
            class carrosserie { trunk = 5; };
        };
    };

    //  ________________________________________SUV___________________________________________

    class C_SUV_01_F {      //      SUV
        vItemSpace = 100;
        insurance = 12000;
        reservoir = 85;
        fuelfactor = 16;
        textures[] = {

            { "Rouge", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Blanc", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Noir", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
            { "BMW X6", "civ", {
                "POD_SKINS\data\vehicles\mafia\SUV_X6.jpg"
            } },
            { "Secours", "med", {
                "POD_SKINS\data\vehicles\medic\SUV_EMRA.jpg"
            } },
            { "Num gris", "narcos", {
                "POD_SKINS\data\vehicles\Rebel\SUV_num.jpg"
            } },
            { "Triangles", "mafia", {
                "POD_SKINS\data\vehicles\mafia\SUV_triangle.jpg"
            } },
            { "Hex gris", "narcos", {
                "POD_SKINS\data\vehicles\Rebel\SUV_hex.jpg"
            } },
            { "Orange", "med", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Gendarmerie", "cop", {
                "POD_SKINS\data\vehicles\Gendarmerie\suv_gendarmerie.jpg"
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 6; };
            class carrosserie { trunk = 14; };
        };
    };

    //  ________________________________________Jeep___________________________________________


    class C_Offroad_02_unarmed_F {      //      4x4
        vItemSpace = 130;
        insurance = 7750;
        reservoir = 71;
        fuelfactor = 17;
        vmax = 196;
        textures[] = {
            { "Blanc", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_white_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_white_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa"
            } },
            { "Bleu", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa"
            } },
            { "Marron", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa"
            } },
            { "Noir", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_black_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_black_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_black_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_black_co.paa"
            } },
            { "Olive", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa"
            } },
            { "Olive", "cop", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa"
            } },
            { "Orange", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa"
            } },
            { "Rouge", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_red_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_red_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_red_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_red_co.paa"
            } },
            { "Vert", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_green_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_green_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_green_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_green_co.paa"
            } }
        };
        /*
        todo custom sièges :
        
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa"
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa"
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa"
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_black_co.paa"
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa"
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa"
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa"
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_red_co.paa"
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_green_co.paa"
        */

        addons[] = {
            {"HideLeftDoor",1,300},
            {"HideRightDoor",1,300},
            {"HideRearDoor",1,300},
            {"HideBullbar",0,100},
            {"HideFenders",0,100},
            {"HideHeadSupportFront",0,100},
            {"HideHeadSupportRear",0,100},
            {"HideRollcage",1,500},
            {"HideSpareWheel",1,100}
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 14; };
            class carrosserie { trunk = 6; };
        };
    };

    class I_C_Offroad_02_LMG_F {      //      4x4
        vItemSpace = 65;
        insurance = 15000;
        reservoir = 71;
        fuelfactor = 17;
        vmax = 196;
        textures[] = {
            { "Blanc", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_white_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_white_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_white_co.paa"
            } },
            { "Bleu", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa"
            } },
            { "Marron", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_brown_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_brown_co.paa"
            } },
            { "Noir", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_black_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_black_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_black_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_black_co.paa"
            } },
            { "Olive", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa"
            } },
            { "Olive", "cop", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_olive_co.paa"
            } },
            { "Orange", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_orange_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_orange_co.paa"
            } },
            { "Rouge", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_red_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_red_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_red_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_red_co.paa"
            } },
            { "Vert", "civ", {
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_green_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_ext_green_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_green_co.paa",
                "a3\soft_f_exp\offroad_02\data\offroad_02_int_green_co.paa"
            } }
        };

        addons[] = {
            {"HideLeftDoor",1,300},
            {"HideRightDoor",1,300},
            {"HideRearDoor",1,300},
            {"HideBullbar",0,100},
            {"HideFenders",0,100},
            {"HideHeadSupportFront",0,100},
            {"HideHeadSupportRear",0,100},
            {"HideRollcage",1,500},
            {"HideSpareWheel",1,100}
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 10; };
            class fauxplancher { trunk = 14; };
            class carrosserie { trunk = 6; };
        };
    };

    //  ________________________________________Merco benz 190E___________________________________________

    class ivory_190e {       // merco benz 190e  230  //0-200  52s
        vItemSpace = 110;
        insurance = 11250;
        reservoir = 70;
        fuelfactor = 14;
        vmax = 230;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } }
        };
    };

    //  ________________________________________GOLF 6___________________________________________

    class Gendarmerie_GOLF6 {       //  Gendarmerie // Golf    252 //0-100  4s  //0-200  14s
        vItemSpace = 160;
        insurance = 24000;
        reservoir = 70;
        fuelfactor = 18;
        textures[] = {};
        addons[] = {};

        class caches {};
    };

    //  ________________________________________GOLF GTI___________________________________________

    class ivory_gti {           //  CIVIL // golf gti 250  //0-200  38s
        vItemSpace = 90;
        insurance = 11500;
        reservoir = 50;
        fuelfactor = 11;
        vmax = 250;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } }
        };
    };

    //  ________________________________________BMW E36___________________________________________

    class ivory_e36 {       // BMe36 236  //0-200  34s
        vItemSpace = 110;
        insurance = 12500;
        reservoir = 65;
        fuelfactor = 15;
        vmax = 236;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } }
        };
    };

    //  ________________________________________SUPRA___________________________________________

    class ivory_supra {       // supra  260  //0-200  33s
        vItemSpace = 40;
        insurance = 13750;
        reservoir = 80;
        fuelfactor = 16;
        vmax = 260;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } }
        };
    };

    //  ________________________________________Evo X___________________________________________


    class kecske_evox_gen_d {       // Evo X GEN   //  EVOX  261   //0-100  9s //0-200  29s
        vItemSpace = 160;
        insurance = 10000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 261;
        textures[] = {
            { "Gendarmerie", "cop", {
                "kecske_ivory_skins\data\lancer\evox_gen_d.paa"
            } }
        };
    };

    class ivory_evox {       // Evo X     //261   //0-200  29s
        vItemSpace = 110;
        insurance = 35000;
        reservoir = 55;
        fuelfactor = 17;
        vmax = 261;
        textures[] = {
            { "Blanc", "civ", {
                "\ivory_evox\data\evox_blanc.paa"
            } },
            { "Gris", "civ", {
                "\ivory_evox\data\evox_gris.paa"
            } },
            { "Bleu", "civ", {
                "\ivory_evox\data\evox_bleu.paa"
            } },
            { "Noir", "civ", {
                "\ivory_evox\data\evox_noir.paa"
            } },
            { "Rouge", "civ", {
                "\ivory_evox\data\evox_rouge.paa"
            } }
        };
    };



    //  --------------------------------------- Aérien -----------------------------------------

    class C_Heli_Light_01_civil_F {     //      M-900
        vItemSpace = 0;
        insurance = 40000;
        reservoir = 250;
        fuelfactor = 500;
        textures[] = {
            { "Bleu", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "BlueLine", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptique", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furieux", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Graywatcher", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_graywatcher_co.paa"
            } },
            { "Jeans", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Léger", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_light_co.paa"
            } },
            { "Ombre", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_shadow_co.paa"
            } },
            { "Rouge", "civ", {
                "a3\air_f\heli_light_01\data\heli_light_01_ext_co.paa"
            } },
            { "Sheriff", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Speedy", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vague", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Vrana", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Wasp", "civ", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_wasp_co.paa"
            } },
            { "Ion", "civ", {
                "a3\air_f\heli_light_01\data\heli_light_01_ext_ion_co.paa"
            } },
            { "Gendarmerie", "cop", {
                "POD_SKINS\data\vehicles\littlebird_gendarme.jpg"
            } },
            { "Red Wasp", "narcos", {
                "POD_SKINS\data\vehicles\reb_bird_wasp_red.jpg"
            } },
            { "RedBull", "civ", {
                "POD_SKINS\data\vehicles\civ\civ_hummingbird_redbull.paa"
            } },
            { "ASIIMOV", "civ", {
                "POD_SKINS\data\vehicles\civ\humming_asiimov.paa"
            } },
            { "Secours", "med", {
                "POD_SKINS\data\vehicles\medic\M900_EMRA.jpg"
            } }
        };
        addons[] = {
            {"AddDoors",0,500},
            {"addbackseats", 0, 500}
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 0;
        insurance = 42500;
        reservoir = 250;
        fuelfactor = 500;
        textures[] = {
            { "Num vert", "narcos", {
                "A3\Air_F\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "Numérique", "narcos", {
                "a3\air_f\heli_light_01\data\skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Ion", "cop", {
                "a3\air_f\heli_light_01\data\heli_light_01_ext_ion_co.paa"
            } },
            { "Gendarmerie", "cop", {
                "POD_SKINS\data\vehicles\littlebird_gendarme.jpg"
            } },
            { "Red Wasp", "narcos", {
                "POD_SKINS\data\vehicles\reb_bird_wasp_red.jpg"
            } },
            { "Secours", "med", {
                "POD_SKINS\data\vehicles\medic\M900_EMRA.jpg"
            } },
            { "Cartel", "narcos", {
                "pod_vest\data\veh\heli\cartel.paa"
            } }
        };

        addons[] = {
            {"AddBenches",0,500, {2,3,4,5}},
            {"AddTread",0,100},
            {"AddHoldingFrame",0,100}
        };
    };

    class ARMSCor_AlouetteIII_B {       //      Alouette
        vItemSpace = 0;
        insurance = 47500;
        reservoir = 596;
        fuelfactor = 1192;
        textures[] = {
            { "Medecin", "med", {
                "ARMSCor_Alouette_III\data\AlouetteIII_Medecin_co"
            } },
            { "Gendarmerie", "cop", {
                "ARMSCor_Alouette_III\data\AlouetteIII_Gendarmerie_co"
            } },
            { "Federaux", "cop", {
                "ARMSCor_Alouette_III\data\AlouetteIII_SADF_co"
            } },
            { "Narvalo", "narvalo", {
                "ARMSCor_Alouette_III\data\AlouetteIII_Narvalo_co"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {       //      Orca Civil
        vItemSpace = 0;
        insurance = 55000;
        reservoir = 1000;
        fuelfactor = 2000;
        textures[] = {
            { "Blanc et bleu", "civ", {
                "a3\air_f\heli_light_02\data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Noir", "civ", {
                "a3\air_f\heli_light_02\data\heli_light_02_ext_co.paa"
            } },
            { "Noir custom", "civ", {
                "a3\air_f_heli\heli_light_02\data\heli_light_02_ext_opfor_v2_co.paa"
            } },
            { "Medic", "med", {
                "POD_SKINS\data\vehicles\medic\Orca_SC_Hightline.jpg"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_POD {       //      Orca Rebel
        vItemSpace = 0;
        insurance = 55000;
        reservoir = 1000;
        fuelfactor = 2000;
        textures[] = {
            { "Num vert", "narcos", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Noir", "narcos", {
                "a3\air_f\heli_light_02\data\heli_light_02_ext_co.paa"
            } },
            { "Hex sable", "narcos", {
                "a3\air_f\heli_light_02\data\heli_light_02_ext_opfor_co.paa"
            } }
        };
    };

    class I_Heli_light_03_unarmed_F {   //  Hellcat 
        vItemSpace = 0;
        insurance = 60000;
        reservoir = 1000;
        fuelfactor = 2000;
        textures[] = {
            { "Kaki Militaire", "narcos", {
               "a3\air_f_epb\heli_light_03\data\heli_light_03_base_co.paa"
            } },
            { "Num vert", "narcos", {
               "a3\air_f_epb\heli_light_03\data\heli_light_03_base_indp_co.paa"
            } },
            { "Federaux", "cop", {
               "POD_SKINS\data\vehicles\Gendarmerie\hellcat_blackcat.jpg"
            } },
            { "Secours", "med", {
               "POD_SKINS\data\vehicles\medic\hellcat.jpg"
            } },
            { "Gendarmerie", "cop", {
               "POD_SKINS\data\vehicles\Gendarmerie\Hellcat_Gend.jpg"
            } }
        };
    };

    class EC135SClu { 
        vItemSpace = 0;
        insurance = 65000;
        reservoir = 700;
        fuelfactor = 1400;
        textures[] = {};
    };

    class EC135SAlu { 
        vItemSpace = 0;
        insurance = 65000;
        reservoir = 1700;
        fuelfactor = 1400;
        textures[] = {};
    };

    class I_Heli_Transport_02_F {       //  Mohawk CIVIL
        vItemSpace = 0;
        insurance = 70000;
        reservoir = 2500;
        fuelfactor = 5000;
        textures[] = {
            { "Noir et blanc", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Vert et blanc", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };

    class CH49_Mohawk_POD {       //  Mohawk REBEL
        vItemSpace = 0;
        insurance = 70000;
        reservoir = 2500;
        fuelfactor = 5000;
        textures[] = {
            { "Num vert", "narcos", {
                "a3\air_f_beta\heli_transport_02\data\heli_transport_02_1_indp_co.paa",
                "a3\air_f_beta\heli_transport_02\data\heli_transport_02_2_indp_co.paa",
                "a3\air_f_beta\heli_transport_02\data\heli_transport_02_3_indp_co.paa",
                "a3\air_f_beta\heli_transport_02\data\heli_transport_02_int_02_co.paa"
            } }
        };
    };

    class B_Heli_Transport_01_F {           //      UH-80 Ghost Hawk
        vItemSpace = 0;
        insurance = 130000;
        reservoir = 2000;
        fuelfactor = 4000;
        textures[] = {
            { "Noir", "cop", {
                "a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_co.paa",
                "a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext02_co.paa"
            } },
            { "Triangle olive/noir", "cop", {
                "a3\air_f_exp\heli_transport_01\data\heli_transport_01_ext01_tropic_co.paa",
                "a3\air_f_exp\heli_transport_01\data\heli_transport_01_ext02_tropic_co.paa"
            } },
            { "Triangle sable/vert", "cop", {
                "a3\air_f_exp\heli_transport_01\data\heli_transport_01_ext01_sand_co.paa",
                "a3\air_f_exp\heli_transport_01\data\heli_transport_01_ext02_sand_co.paa"
            } },
            { "Olive", "cop", {
                "a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext01_blufor_co.paa",
                "a3\air_f_beta\heli_transport_01\data\heli_transport_01_ext02_blufor_co.paa"
            } }
        };
    };

    class B_Heli_Transport_03_unarmed_F {       //      Huron 
        vItemSpace = 0;
        insurance = 150000;
        reservoir = 6000;
        fuelfactor = 12000;
        textures[] = {
            { "Noir", "cop", {
               "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_black_co.paa",
               "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
            } },
            { "Kaki Militaire", "narcos", {
                "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
                "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
            } }
        };
    };

    class B_Heli_Transport_03_F {       //      Huron armé
        vItemSpace = 0;
        insurance = 180000;
        reservoir = 6000;
        fuelfactor = 12000;
        textures[] = {
            { "Noir", "cop", {
               "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_black_co.paa",
               "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
            } },
            { "Kaki Militaire", "narcos", {
                "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
                "a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
            } }
        };
    };

    

    class O_Heli_Attack_02_F {       //      Mi-48 Kajman
        vItemSpace = 0;
        insurance = 200000;
        reservoir = 5000;
        fuelfactor = 10000;
         textures[] = {
            { "Hex sable", "narcos", {
                "a3\air_f_beta\heli_attack_02\data\heli_attack_02_body1_co.paa",
                "a3\air_f_beta\heli_attack_02\data\heli_attack_02_body2_co.paa"
            } },
            { "Noir", "narcos", {
               "a3\air_f_beta\heli_attack_02\data\heli_attack_02_body1_black_co.paa",
               "a3\air_f_beta\heli_attack_02\data\heli_attack_02_body2_black_co.paa"
            } }
        };
    };

    class C_Plane_Civil_01_F {
        vItemSpace = 300;
        insurance = 9000;
        reservoir = 465;
        fuelfactor = 35;
        textures[] = {
            { "Course", "civ", {
                "a3\air_f_exp\plane_civil_01\data\btt_ext_01_racer_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_ext_02_racer_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"
            } },
            { "Course (int marron)", "civ", {
               "a3\air_f_exp\plane_civil_01\data\btt_ext_01_racer_co.paa",
               "a3\air_f_exp\plane_civil_01\data\btt_ext_02_racer_co.paa",
               "a3\air_f_exp\plane_civil_01\data\btt_int_01_tan_co.paa",
               "a3\air_f_exp\plane_civil_01\data\btt_int_02_tan_co.paa"
            } },
            { "Ligne Rouge", "civ", {
                "a3\air_f_exp\plane_civil_01\data\btt_ext_01_redline_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_ext_02_redline_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"
            } },
            { "Ligne Rouge (int marron)", "civ", {
                "a3\air_f_exp\plane_civil_01\data\btt_ext_01_redline_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_ext_02_redline_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_01_tan_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_02_tan_co.paa"
            } },
            { "Tribal", "civ", {
                "a3\air_f_exp\plane_civil_01\data\btt_ext_01_tribal_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_ext_02_tribal_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"
            } },
            { "Tribal (int marron)", "civ", {
                "a3\air_f_exp\plane_civil_01\data\btt_ext_01_tribal_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_ext_02_tribal_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_01_tan_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_02_tan_co.paa"
            } },
            { "Vague Bleu", "civ", {
                "a3\air_f_exp\plane_civil_01\data\btt_ext_01_wave_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_ext_02_wave_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"
            } },
            { "Vague Bleu (int marron)", "civ", {
                "a3\air_f_exp\plane_civil_01\data\btt_ext_01_wave_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_ext_02_wave_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_01_tan_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_02_tan_co.paa"
            } },
            { "Blanc", "civ", {
                "A3\air_f_exp\Plane_Civil_01\Data\btt_ext_01_co.paa",
                "A3\air_f_exp\Plane_Civil_01\Data\btt_ext_02_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"
            } },
            { "Blanc (int marron)", "civ", {
                "A3\air_f_exp\Plane_Civil_01\Data\btt_ext_01_co.paa",
                "A3\air_f_exp\Plane_Civil_01\Data\btt_ext_02_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_01_tan_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_02_tan_co.paa"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)",
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)",
                "a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"
            } },
            { "Gris (int marron)", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)",
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)",
                "a3\air_f_exp\plane_civil_01\data\btt_int_01_tan_co.paa",
                "a3\air_f_exp\plane_civil_01\data\btt_int_02_tan_co.paa"
            } }
        };
    };

    class O_Heli_Transport_04_F {       //      Taru
        vItemSpace = 0;
        insurance = 160000;
        reservoir = 6500;
        fuelfactor = 13500;
         textures[] = {
            { "Hex sable", "narcos", {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_co.paa"
            } },
            { "Noir", "narcos", {
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_black_co.paa"
            } }
        };
    };

    class O_Heli_Transport_04_bench_F {       //      Taru banc
        vItemSpace = 0;
        insurance = 275000;
        reservoir = 4900;
        fuelfactor = 300;
         textures[] = {
            { "Hex sable", "narcos", {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_bench_co.paa"
            } },
            { "Noir", "narcos", {
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_bench_black_co.paa"
            } }
        };
    };

    class O_Heli_Transport_04_covered_F {       //      Taru transport
        vItemSpace = 100;
        insurance = 300000;
        reservoir = 4900;
        fuelfactor = 300;
         textures[] = {
            { "Hex sable", "narcos", {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_co.paa"
            } },
            { "Noir", "narcos", {
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_black_co.paa"
            } }
        };
    };

    class O_Heli_Transport_04_box_F {       //      Taru Logistique
        vItemSpace = 200;
        insurance = 325000;
        reservoir = 4900;
        fuelfactor = 300;
         textures[] = {
            { "Hex sable", "narcos", {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_co.paa"
            } },
            { "Noir", "narcos", {
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_black_co.paa"
            } }
        };
    };

    class O_Heli_Transport_04_fuel_F {       //      Taru Carburant
        vItemSpace = 20;
        insurance = 350000;
        reservoir = 4900;
        fuelfactor = 300;
        citerne = 1000;
         textures[] = {
            { "Hex sable", "narcos", {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_fuel_co.paa"
            } },
            { "Noir", "narcos", {
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_01_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_base_02_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_fuel_black_co.paa"
            } }
        };
    };

    class B_T_VTOL_01_infantry_F {          //      V-44 X Blackfish (Infantry Transport)
        vItemSpace = 460;
        insurance = 800000;
        reservoir = 15000;
        fuelfactor = 20000;
        textures[] = {
            { "Bleu", "cop", {
               "a3\air_f_exp\vtol_01\data\vtol_01_ext01_blue_co.paa",
               "a3\air_f_exp\vtol_01\data\vtol_01_ext02_blue_co.paa",
               "a3\air_f_exp\vtol_01\data\vtol_01_ext03_blue_co.paa",
               "a3\air_f_exp\vtol_01\data\vtol_01_ext04_blue_co.paa"
            } },
            { "Olive", "cop", {
                "a3\air_f_exp\vtol_01\data\vtol_01_ext01_olive_co.paa",
                "a3\air_f_exp\vtol_01\data\vtol_01_ext02_olive_co.paa",
                "a3\air_f_exp\vtol_01\data\vtol_01_ext03_olive_co.paa",
                "a3\air_f_exp\vtol_01\data\vtol_01_ext04_olive_co.paa"
            } }
        };
    };

    class B_T_VTOL_01_vehicle_F {          //      V-44 X Blackfish (Vehicle Transport)
        vItemSpace = 460;
        insurance = 800000;
        reservoir = 15000;
        fuelfactor = 20000;
        textures[] = {
            { "Bleu", "cop", {
               "a3\air_f_exp\vtol_01\data\vtol_01_ext01_blue_co.paa",
               "a3\air_f_exp\vtol_01\data\vtol_01_ext02_blue_co.paa",
               "a3\air_f_exp\vtol_01\data\vtol_01_ext03_blue_co.paa",
               "a3\air_f_exp\vtol_01\data\vtol_01_ext04_blue_co.paa"
            } },
            { "Olive", "cop", {
                "a3\air_f_exp\vtol_01\data\vtol_01_ext01_olive_co.paa",
                "a3\air_f_exp\vtol_01\data\vtol_01_ext02_olive_co.paa",
                "a3\air_f_exp\vtol_01\data\vtol_01_ext03_olive_co.paa",
                "a3\air_f_exp\vtol_01\data\vtol_01_ext04_olive_co.paa"
            } }
        };
    };

    class O_T_VTOL_02_infantry_F {     //  Y-32 Xi'an 
        vItemSpace = 200;
        insurance = 1500000;
        reservoir = 6500;
        fuelfactor = 500;
         textures[] = {
            { "Hex gris", "cop", {
               "a3\air_f_exp\vtol_02\data\vtol_02_ext01_co.paa",
               "a3\air_f_exp\vtol_02\data\vtol_02_ext02_co.paa",
               "a3\air_f_exp\vtol_02\data\vtol_02_ext03_l_co.paa",
               "a3\air_f_exp\vtol_02\data\vtol_02_ext03_r_co.paa"
            } },
            { "Hex sable", "narcos", {
                "a3\air_f_exp\vtol_02\data\vtol_02_ext01_bhex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext02_bhex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext03_l_bhex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext03_r_bhex_co.paa"
            } },
            { "Hex vert", "narcos", {
                "a3\air_f_exp\vtol_02\data\vtol_02_ext01_ghex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext02_ghex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext03_l_ghex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext03_r_ghex_co.paa"
            } }
        };
    };

    class O_T_VTOL_02_vehicle_F {     //  Y-32 Xi'an véhicules
        vItemSpace = 200;
        insurance = 1500000;
        reservoir = 6500;
        fuelfactor = 500;
         textures[] = {
            { "Hex gris", "cop", {
               "a3\air_f_exp\vtol_02\data\vtol_02_ext01_co.paa",
               "a3\air_f_exp\vtol_02\data\vtol_02_ext02_co.paa",
               "a3\air_f_exp\vtol_02\data\vtol_02_ext03_l_co.paa",
               "a3\air_f_exp\vtol_02\data\vtol_02_ext03_r_co.paa"
            } },
            { "Hex sable", "narcos", {
                "a3\air_f_exp\vtol_02\data\vtol_02_ext01_bhex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext02_bhex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext03_l_bhex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext03_r_bhex_co.paa"
            } },
            { "Hex vert", "narcos", {
                "a3\air_f_exp\vtol_02\data\vtol_02_ext01_ghex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext02_ghex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext03_l_ghex_co.paa",
                "a3\air_f_exp\vtol_02\data\vtol_02_ext03_r_ghex_co.paa"
            } }
        };
    };

    class I_Plane_Fighter_03_AA_F {     //  Buzzard
        vItemSpace = 20;
        insurance = 2000000;
        reservoir = 2000;
         textures[] = {
            { "Num vert", "cop", {
               "a3\air_f_gamma\plane_fighter_03\data\plane_fighter_03_body_1_indp_co.paa",
               "a3\air_f_gamma\plane_fighter_03\data\plane_fighter_03_body_2_indp_co.paa"
            } }/*,
            { "Federaux gris", "cop", {
                "POD_SKINS\data\vehicles\Gendarmerie\Buzzard_1_gris.jpg",
                "POD_SKINS\data\vehicles\Gendarmerie\Buzzard_2_gris.jpg"
            } }*/
        };
    };

    class C_supplyCrate_F {       //      Caisse
        vItemSpace = 100;
        insurance = 100000;
        textures[] = {};
    };

    class B_CargoNet_01_ammo_F {       //      Caisses munitions
        vItemSpace = 150;
        insurance = 150000;
         textures[] = {
            { "NATO", "civ", {
                "a3\weapons_f\ammoboxes\data\ammobox_co.paa",
                "" // Rien = pas de logo sur les caisses
            } },
            { "CSAT", "civ", {
               "a3\weapons_f\ammoboxes\data\ammobox_opfor_co.paa",
               ""
            } },
            { "Blanc", "civ", {
               "a3\supplies_f_orange\cargonets\data\cargonet_idap_co.paa",
               ""
            } },
            { "LDF", "narcos", {
               "a3\supplies_f_enoch\ammoboxes\data\ammobox_eaf_co.paa",
               ""
            } },
            { "INDEP", "narcos", {
               "a3\weapons_f\ammoboxes\data\ammobox_haf_co.paa",
               ""
            } }
        };
    };

    class Land_MetalBarrel_F {       //      Bidon
        vItemSpace = 0;
        insurance = 200000;
         textures[] = {};
    };

    class FlexibleTank_01_forest_F {       //      Petit réservoir
        vItemSpace = 0;
        insurance = 200000;
        citerne = 600;
         textures[] = {
            { "Sable", "civ", {
                "a3\supplies_f_heli\fuel\data\flexible_tank_sand_co.paa"
            } },
            { "Foret", "narcos", {
               "a3\supplies_f_heli\fuel\data\flexible_tank_forest_co.paa"
            } }
        };
    };

    class CargoNet_01_barrels_F {       //      Bidons palette
        vItemSpace = 0;
        insurance = 200000;
        citerne = 1000;
         textures[] = {};
    };

    class Land_Pod_Heli_Transport_04_bench_F {       //      Taru pod banch
        vItemSpace = 0;
        insurance = 200000;
         textures[] = {
            { "Hex sable", "narcos", {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_bench_co.paa"
            } },
            { "Noir", "narcos", {
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_bench_black_co.paa"
            } }
        };
    };

    class Land_Pod_Heli_Transport_04_covered_F {       //      Taru pod transport
        vItemSpace = 80;
        insurance = 250000;
         textures[] = {
            { "Hex sable", "narcos", {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_co.paa"
            } },
            { "Noir", "narcos", {
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_black_co.paa"
            } }
        };
    };

    class Land_Pod_Heli_Transport_04_box_F {       //      Taru pod logistique
        vItemSpace = 180;
        insurance = 300000;
         textures[] = {
            { "Hex sable", "narcos", {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_co.paa",
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_co.paa"
            } },
            { "Noir", "narcos", {
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext01_black_co.paa",
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_pod_ext02_black_co.paa"
            } }
        };
    };

    class Land_Pod_Heli_Transport_04_fuel_F {       //      Taru pod carburant
        vItemSpace = 0;
        insurance = 300000;
        citerne = 5000;
         textures[] = {
            { "Hex sable", "narcos", {
                "a3\air_f_heli\heli_transport_04\data\heli_transport_04_fuel_co.paa"
            } },
            { "Noir", "narcos", {
               "a3\air_f_heli\heli_transport_04\data\heli_transport_04_fuel_black_co.paa"
            } }
        };
    };

    /*
    class RHS_AN2 {       //      Gros avion    CIV
        vItemSpace = 500;
        insurance = 300000;
        reservoir = 600;
        textures[] = {
            { "Blanc & rouge", "civ", {
                "rhsgref\addons\rhsgref_air\AN2\data\an2_1_A_CO",
                "rhsgref\addons\rhsgref_air\AN2\data\an2_2_A_CO",
                "rhsgref\addons\rhsgref_air\AN2\data\an2_wings_A_CO","", "",""
            } },
            { "Blanc & noir", "civ", {
                "rhsgref\addons\rhsgref_air\AN2\data\an2_1_B_CO",
                "rhsgref\addons\rhsgref_air\AN2\data\an2_2_B_CO",
                "rhsgref\addons\rhsgref_air\AN2\data\an2_wings_B_CO","", "",""
            } }
        };
    };

    class RHS_AN2_B {       //      Gros avion  REB
        vItemSpace = 500;
        insurance = 200000;
        reservoir = 600;
        textures[] = {
            { "Military", "reb", {
                "rhsgref\addons\rhsgref_air\an2\data\an2_1_co.paa",
                "rhsgref\addons\rhsgref_air\an2\data\an2_2_co.paa",
                "rhsgref\addons\rhsgref_air\an2\data\an2_wings_co.paa",
                "rhsafrf\addons\rhs_decals\data\numbers\aviacdf\1_ca.paa","", "",""
            } }
        };
    };
    */

    //  __________________________________CIV______________________________
/*
    class Sab_af_An2 {       //      Blanc & rouge
        vItemSpace = 500;
        insurance = 300000;
        reservoir = 600;
        textures[] = {};
    };

    class Sab_tk_An2 {       //      Blanc & noir
        vItemSpace = 500;
        insurance = 300000;
        reservoir = 600;
        textures[] = {};
    };

    class Sab_cz_An2 {       //      Blanc et bleu
        vItemSpace = 500;
        insurance = 300000;
        reservoir = 600;
        textures[] = {};
    };

    class Sab_Sea_An2 {       //      AN 2 avec flotteurs
        vItemSpace = 500;
        insurance = 400000;
        reservoir = 600;
        textures[] = {
           { "Blanc & rouge", "civ", {
                "sab_an2\data\an2_1_a_co.paa",
                "sab_an2\data\an2_2_a_co.paa",
                "sab_an2\data\an2_wings_a_co.paa",
                "sab_an2_tx\data\float_army.paa"
            } },
            { "Blanc & noir", "civ", {
                "sab_an2\data\an2_1_b_co.paa",
                "sab_an2\data\an2_2_b_co.paa",
                "sab_an2\data\an2_wings_b_co.paa",
                "sab_an2_tx\data\float_army.paa"
            } },
            { "Blanc & bleu", "civ", {
                "sab_an2_tx\data\czan2_1.paa",
                "sab_an2_tx\data\czan2_2.paa",
                "sab_an2_tx\data\czan2_wings.paa",
                "sab_an2_tx\data\float_army.paa"
            } }
        };
    };

    //  __________________________________REB______________________________

    class Sab_A2_An2 {       //      AN 2 Militaire sans armes
        vItemSpace = 500;
        insurance = 150000;
        reservoir = 600;
        textures[] = {};
    };

    class Sab_Sea3_An2 {       //      AN 2 Militaire sans armes & flotteurs
        vItemSpace = 500;
        insurance = 180000;
        reservoir = 600;
        textures[] = {};
    };
*/
   /* class Sab_An2_O {       //      AN 2 Militaire armé
        vItemSpace = 500;
        insurance = 300000;
        reservoir = 600;
        textures[] = {};
    };*/ /*

    class Sab_An2_O {       //      AN 2 Militaire armé & avec flotteurs
        vItemSpace = 500;
        insurance = 350000;     
        reservoir = 600;
        textures[] = {
            { "Military", "reb", {
                "sab_an2\data\an2_1_co.paa",
                "sab_an2\data\an2_2_co.paa",
                "sab_an2\data\an2_wings_co.paa",
                "sab_an2_tx\data\float_army.paa"
            } }
        };
    };













    

    // FEDE:

    //BLINDE: rhsusf_M1232_usarmy_wd

    class rhsusf_M1232_usarmy_wd {       //      M1232
        vItemSpace = 300;
        insurance = 400000;
        reservoir = 320;
        textures[] = {};
    };

    class rhsusf_M1232_M2_usarmy_wd {       //      M1232
        vItemSpace = 300;
        insurance = 500000;
        reservoir = 320;
        textures[] = {};
    };

    class rhsusf_M1237_M2_usarmy_wd {       //      M1232
        vItemSpace = 300;
        insurance = 600000;
        reservoir = 320;
        textures[] = {};
    };

    class rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy {       //      M1232
        vItemSpace = 300;
        insurance = 600000;
        reservoir = 320;
        textures[] = {};
    };
    

    class RHS_UH60M_d {       //      UH60M
        vItemSpace = 50;
        insurance = 200000;
        reservoir = 1200;
        textures[] = {
            { "ONU", "civ", {
                "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_onu_co.paa",
                "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_onu_co.paa",
                "rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_onu_co.paa",
                "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
            } }
        };
    };

    class rhsusf_rg33_m2_usmc_wd {       //      RG33 M2
        vItemSpace = 50;
        insurance = 500000;
        reservoir = 280;
        textures[] = {
            { "Gendarmerie", "cop", {
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_gen_02_co.paa",
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_gen_01_co.paa",
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_gen_03_co.paa"
            } },
            { "Federaux", "cop", {
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_d_02_co.paa",
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_wd_01_co.paa",
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_wd_03_co.paa"
            } }
         };
    };

    class rhsusf_rg33_usmc_wd {       //      RG33
        vItemSpace = 50;
        insurance = 500000;
        reservoir = 280;
        textures[] = {
            { "Gendarmerie", "cop", {
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_gen_02_co.paa",
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_gen_01_co.paa",
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_gen_03_co.paa"
            } },
            { "Federaux", "cop", {
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_d_02_co.paa",
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_wd_01_co.paa",
                "rhsusf\addons\rhsusf_rg33\data\rhsusf_rg33_wd_03_co.paa"
            } }
         };
    };

    class rhsusf_m1025_w_m2 {       //      hmmwv M2
        vItemSpace = 50;
        insurance = 400000;
        reservoir = 180;
        textures[] = {
            { "Camo", "cop", {
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\a2_parts_wd_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa"
            } },
            { "Simple", "cop", {
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\a2_parts_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
            } },
            { "ONU", "civ", {
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_onu_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_onu_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m1025_onu_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
            } }
         };
    };

    class rhsusf_m1025_w {       //      hmmwv 
        vItemSpace = 50;
        insurance = 140000;
        reservoir = 180;
         textures[] = {
            { "Camo", "cop", {
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\a2_parts_wd_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa"
            } },
            { "Simple", "cop", {
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\a2_parts_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa"
            } },
            { "Médecin", "med", {
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\a2_parts_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m1025_med_co.paa"
            } },
            { "ONU", "civ", {
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_onu_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_onu_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
                "rhsusf\addons\rhsusf_hmmwv\textures\m1025_onu_co.paa"
            } }
         };
    };

    

    class rhsusf_m1a2sep1tuskid_usarmy {
        vItemSpace = 50;
        insurance = 120000;
        reservoir = 180;
        textures[] = {
            { "ONU", "civ", {
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_onu_01_co.paa",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tusk_onu_02_co.paa",
                "rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_onu_03_co.paa",
                "rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_onu_co.paa",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_onu_co.paa",
                "rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_onu_co.paa"
            } }
        };
    };

    class rhsusf_m998_w_4dr {       // hmmwv Ouvert
        vItemSpace = 50;
        insurance = 120000;
        reservoir = 180;
        textures[] = {};
    };

    class rhsusf_m998_w_2dr {       // hmmwv Ouvert 2
        vItemSpace = 50;
        insurance = 120000;
        reservoir = 180;
        textures[] = {};
    };

    

    class chfcrs {
        vItemSpace = 50;
        insurance = 120000;
        reservoir = 160;
        textures[] = {};
    };

    class wirk_megane_rs_gend {
        vItemSpace = 50;
        insurance = 140000;
        reservoir = 160;
        textures[] = {};
    };

    */

    

    

    

    class IVORY_R8 {       // Evo X
        vItemSpace = 20;
        insurance = 45000;
        reservoir = 80;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } },
            { "Ligne Blanc", "civ", {
                "ivory_data\textures\base\ligne_blanc.paa"
            } },
            { "Ligne Bleu", "civ", {
                "ivory_data\textures\base\ligne_bleu.paa"
            } },
            { "Ligne Bleu Clair", "civ", {
                "ivory_data\textures\base\ligne_bleu_c.paa"
            } },
            { "Ligne Jaune", "civ", {
                "ivory_data\textures\base\ligne_jaune.paa"
            } },
            { "Ligne Orange", "civ", {
                "ivory_data\textures\base\ligne_orange.paa"
            } },
            { "Ligne Rouge", "civ", {
                "ivory_data\textures\base\ligne_rouge.paa"
            } },
            { "Ligne Vert", "civ", {
                "ivory_data\textures\base\ligne_vert.paa"
            } },
            { "Ligne Violet", "civ", {
                "ivory_data\textures\base\ligne_violet.paa"
            } },
            { "Ligne Violet Foncé", "civ", {
                "ivory_data\textures\base\ligne_violet_f.paa"
            } }
        };
    };

    class IVORY_R8SPYDER {       // Evo X
        vItemSpace = 20;
        insurance = 45000;
        reservoir = 80;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu Foncé", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Ligne Blanc", "civ", {
                "ivory_data\textures\base\ligne_blanc.paa"
            } },
            { "Ligne Bleu", "civ", {
                "ivory_data\textures\base\ligne_bleu.paa"
            } },
            { "Ligne Bleu Clair", "civ", {
                "ivory_data\textures\base\ligne_bleu_c.paa"
            } },
            { "Ligne Jaune", "civ", {
                "ivory_data\textures\base\ligne_jaune.paa"
            } },
            { "Ligne Orange", "civ", {
                "ivory_data\textures\base\ligne_orange.paa"
            } },
            { "Ligne Rouge", "civ", {
                "ivory_data\textures\base\ligne_rouge.paa"
            } },
            { "Ligne Vert", "civ", {
                "ivory_data\textures\base\ligne_vert.paa"
            } },
            { "Ligne Violet", "civ", {
                "ivory_data\textures\base\ligne_violet.paa"
            } },
            { "Ligne Violet Foncé", "civ", {
                "ivory_data\textures\base\ligne_violet_f.paa"
            } }
        };
    };

    class ivory_lp560 {       // Evo X
        vItemSpace = 100;
        insurance = 50000;
        reservoir = 80;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } }
        };
    };

    
    
    class ivory_rs4 {       // Evo X
        vItemSpace = 75;
        insurance = 30000;
        reservoir = 63;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } }
        };
    };
    
    class ivory_m3 {       // E92
        vItemSpace = 75;
        insurance = 41000;
        reservoir = 70;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } }
        };
    };

    class ivory_suburban {       // SUBURBAN
        vItemSpace = 120;
        insurance = 31000;
        reservoir = 100;
        fuelfactor = 18;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } }
        };
    };

    
    class ivory_r34 {       // Evo X
        vItemSpace = 75;
        insurance = 35000;
        reservoir = 80;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } }
        };

        addons[] = {
            {"spoiler",0,300}
        };
    };

    
    class ivory_isf {       // Evo X
        vItemSpace = 75;
        insurance = 35000;
        reservoir = 80;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } }
        };
    };

    
    class ivory_gt500 {       // Evo X
        vItemSpace = 50;
        insurance = 85000;
        reservoir = 80;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } },
            { "Ligne Blanc", "civ", {
                "ivory_data\textures\base\ligne_blanc.paa"
            } },
            { "Ligne Bleu", "civ", {
                "ivory_data\textures\base\ligne_bleu.paa"
            } },
            { "Ligne Bleu Clair", "civ", {
                "ivory_data\textures\base\ligne_bleu_c.paa"
            } },
            { "Ligne Jaune", "civ", {
                "ivory_data\textures\base\ligne_jaune.paa"
            } },
            { "Ligne Orange", "civ", {
                "ivory_data\textures\base\ligne_orange.paa"
            } },
            { "Ligne Rouge", "civ", {
                "ivory_data\textures\base\ligne_rouge.paa"
            } },
            { "Ligne Vert", "civ", {
                "ivory_data\textures\base\ligne_vert.paa"
            } },
            { "Ligne Violet", "civ", {
                "ivory_data\textures\base\ligne_violet.paa"
            } },
            { "Ligne Violet Foncé", "civ", {
                "ivory_data\textures\base\ligne_violet_f.paa"
            } }
        };
    };

    
    

    
    class ivory_elise {       // Evo X
        vItemSpace = 25;
        insurance = 26500;
        reservoir = 40;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } },
            { "Custom Classic", "civ", {
                "ivory_data\textures\elise\classic.paa"
            } },
            { "Custom Luxe", "civ", {
                "ivory_data\textures\elise\luxe.paa"
            } },
            { "Custom Ocean", "civ", {
                "ivory_data\textures\elise\ocean.paa"
            } },
            { "Custom Pro", "civ", {
                "ivory_data\textures\elise\pro.paa"
            } },
            { "Sport", "civ", {
                "ivory_data\textures\elise\sport.paa"
            } }
        };
    };

    
    class ivory_supra_topsecret {       // Evo X
        vItemSpace = 25;
        insurance = 130000;
        reservoir = 80;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } }
        };
    };

    
    class ivory_wrx {       // Evo X
        vItemSpace = 75;
        insurance = 26000;
        reservoir = 80;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } }
        };
    };

    
    class ivory_lfa {       // Evo X
        vItemSpace = 25;
        insurance = 75000;
        reservoir = 80;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } },
            { "Ligne Blanc", "civ", {
                "ivory_data\textures\base\ligne_blanc.paa"
            } },
            { "Ligne Bleu", "civ", {
                "ivory_data\textures\base\ligne_bleu.paa"
            } },
            { "Ligne Bleu Clair", "civ", {
                "ivory_data\textures\base\ligne_bleu_c.paa"
            } },
            { "Ligne Jaune", "civ", {
                "ivory_data\textures\base\ligne_jaune.paa"
            } },
            { "Ligne Orange", "civ", {
                "ivory_data\textures\base\ligne_orange.paa"
            } },
            { "Ligne Rouge", "civ", {
                "ivory_data\textures\base\ligne_rouge.paa"
            } },
            { "Ligne Vert", "civ", {
                "ivory_data\textures\base\ligne_vert.paa"
            } },
            { "Ligne Violet", "civ", {
                "ivory_data\textures\base\ligne_violet.paa"
            } },
            { "Ligne Violet Foncé", "civ", {
                "ivory_data\textures\base\ligne_violet_f.paa"
            } }
        };
    };

    
    class ivory_c {       // Evo X
        vItemSpace = 40;
        insurance = 60000;
        reservoir = 80;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } },
            { "Ligne Blanc", "civ", {
                "ivory_data\textures\base\ligne_blanc.paa"
            } },
            { "Ligne Bleu", "civ", {
                "ivory_data\textures\base\ligne_bleu.paa"
            } },
            { "Ligne Bleu Clair", "civ", {
                "ivory_data\textures\base\ligne_bleu_c.paa"
            } },
            { "Ligne Jaune", "civ", {
                "ivory_data\textures\base\ligne_jaune.paa"
            } },
            { "Ligne Orange", "civ", {
                "ivory_data\textures\base\ligne_orange.paa"
            } },
            { "Ligne Rouge", "civ", {
                "ivory_data\textures\base\ligne_rouge.paa"
            } },
            { "Ligne Vert", "civ", {
                "ivory_data\textures\base\ligne_vert.paa"
            } },
            { "Ligne Violet", "civ", {
                "ivory_data\textures\base\ligne_violet.paa"
            } },
            { "Ligne Violet Foncé", "civ", {
                "ivory_data\textures\base\ligne_violet_f.paa"
            } }
        };
    };

    
    class ivory_mp4 {       // Evo X
        vItemSpace = 25;
        insurance = 100000;
        reservoir = 72;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } },
            { "Ligne Blanc", "civ", {
                "ivory_data\textures\base\ligne_blanc.paa"
            } },
            { "Ligne Bleu", "civ", {
                "ivory_data\textures\base\ligne_bleu.paa"
            } },
            { "Ligne Bleu Clair", "civ", {
                "ivory_data\textures\base\ligne_bleu_c.paa"
            } },
            { "Ligne Jaune", "civ", {
                "ivory_data\textures\base\ligne_jaune.paa"
            } },
            { "Ligne Orange", "civ", {
                "ivory_data\textures\base\ligne_orange.paa"
            } },
            { "Ligne Rouge", "civ", {
                "ivory_data\textures\base\ligne_rouge.paa"
            } },
            { "Ligne Vert", "civ", {
                "ivory_data\textures\base\ligne_vert.paa"
            } },
            { "Ligne Violet", "civ", {
                "ivory_data\textures\base\ligne_violet.paa"
            } },
            { "Ligne Violet Foncé", "civ", {
                "ivory_data\textures\base\ligne_violet_f.paa"
            } }
        };
    };

    
    class ivory_f1 {       // Evo X
        vItemSpace = 25;
        insurance = 340000;
        reservoir = 90;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } },
            { "Ligne Blanc", "civ", {
                "ivory_data\textures\base\ligne_blanc.paa"
            } },
            { "Ligne Bleu", "civ", {
                "ivory_data\textures\base\ligne_bleu.paa"
            } },
            { "Ligne Bleu Clair", "civ", {
                "ivory_data\textures\base\ligne_bleu_c.paa"
            } },
            { "Ligne Jaune", "civ", {
                "ivory_data\textures\base\ligne_jaune.paa"
            } },
            { "Ligne Orange", "civ", {
                "ivory_data\textures\base\ligne_orange.paa"
            } },
            { "Ligne Rouge", "civ", {
                "ivory_data\textures\base\ligne_rouge.paa"
            } },
            { "Ligne Vert", "civ", {
                "ivory_data\textures\base\ligne_vert.paa"
            } },
            { "Ligne Violet", "civ", {
                "ivory_data\textures\base\ligne_violet.paa"
            } },
            { "Ligne Violet Foncé", "civ", {
                "ivory_data\textures\base\ligne_violet_f.paa"
            } }
        };
    };
    
    class ivory_veyron {       // VEYRON
        vItemSpace = 25;
        insurance = 500000;
        reservoir = 100;
        fuelfactor = 15;
        textures[] = {
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0,0,0,0)"
            } },
            { "Rouge", "civ", {
                "#(argb,8,8,3)color(0.2,0,0,0.8)"
            } },
            { "Bleu", "civ", {
                "#(argb,8,8,3)color(0,0,0.1,0.8)"
            } },
            { "Vert", "civ", {
                "#(argb,8,8,3)color(0,0.15,0,0.8)"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.15,0.15,0.15,0.2)"
            } },
            { "Bleu Ciel", "civ", {
                "#(argb,8,8,3)color(0,0.15,0.6,0.7)"
            } },
            { "Orange", "civ", {
                "#(argb,8,8,3)color(0.894,0.518,0,1,co)"
            } },
            { "Rouge Clair", "civ", {
                "#(argb,8,8,3)color(0.6,0,0,0.7)"
            } },
            { "Blanc", "civ", {
                "#(argb,8,8,3)color(1,1,1,1)"
            } },
            { "Jaune", "civ", {
                "#(argb,8,8,3)color(1,0.65,0.1,0.65)"
            } },
            { "Custom Bleu", "civ", {
                "ivory_data\textures\veyron\blue.paa"
            } },
            { "Custom BW", "civ", {
                "ivory_data\textures\veyron\bw.paa"
            } },
            { "Custom Century", "civ", {
                "ivory_data\textures\veyron\century.paa"
            } },
            { "Custom Classic", "civ", {
                "ivory_data\textures\veyron\classic.paa"
            } },
            { "Custom Dark", "civ", {
                "ivory_data\textures\veyron\dark.paa"
            } },
            { "Custom LaFinale", "civ", {
                "ivory_data\textures\veyron\lafinale.paa"
            } },
            { "Sport", "civ", {
                "ivory_data\textures\veyron\sport.paa"
            } },
            { "Sport Blanc", "civ", {
                "ivory_data\textures\veyron\sport_blanc.paa"
            } },
            { "Sport Bleu", "civ", {
                "ivory_data\textures\veyron\sport_bleu.paa"
            } },
            { "Sport Bleu Foncé", "civ", {
                "ivory_data\textures\veyron\sport_bleu_f.paa"
            } },
            { "Sport Jaune", "civ", {
                "ivory_data\textures\veyron\sport_jaune.paa"
            } },
            { "Sport Rouge", "civ", {
                "ivory_data\textures\veyron\sport_rouge.paa"
            } },
            { "Sport Vert", "civ", {
                "ivory_data\textures\veyron\sport_vert.paa"
            } },
            { "Sport Violet", "civ", {
                "ivory_data\textures\veyron\sport_violet.paa"
            } },
            { "Sport Violet Foncé", "civ", {
                "ivory_data\textures\veyron\sport_violet_f.paa"
            } },
            { "Sport 2 Noir", "civ", {
                "ivory_data\textures\veyron\sport2_noir.paa"
            } },
            { "Sport 2 Bleu", "civ", {
                "ivory_data\textures\veyron\sport2_bleu.paa"
            } },
            { "Sport 2 Bleu Clair", "civ", {
                "ivory_data\textures\veyron\sport2_bleu_c.paa"
            } },
            { "Sport 2 Rouge", "civ", {
                "ivory_data\textures\veyron\sport2_rouge.paa"
            } }
        };
    };

    // Camions

    class VSAV_Boxer {
        vItemSpace = 50;
        insurance = 1000;
        reservoir = 105;
        fuelfactor = 15;
        textures[] = {};
    };

    class VSR {
        vItemSpace = 400;
        insurance = 500;
        reservoir = 105;
        fuelfactor = 15;
        textures[] = {};
    };

    

    // Dépanneur

    class Jonzie_Tow_Truck {       // VEYRON
        vItemSpace = 60;
        insurance = 1000;
        reservoir = 100;
        fuelfactor = 15;
        textures[] = {
            { "Dépaneur", "civ", {
                "#(argb,8,8,3)color(1,0.553,0,1,co)"
            } }
        };
    };

    class depanren {             
        vItemSpace = 60;
        insurance = 1000;
        reservoir = 105;
        fuelfactor = 15;
    };

    class chdepanpl {             
        vItemSpace = 60;
        insurance = 2000;
        reservoir = 105;
        fuelfactor = 15;
    };

    class chmaster2_vtu {             
        vItemSpace = 60;
        insurance = 3000;
        reservoir = 105;
        fuelfactor = 15;
    };

    class chmaster2_pnb {             
        vItemSpace = 60;
        insurance = 4000;
        reservoir = 105;
        fuelfactor = 15;
    };

    class chmaster3_vsrl {             
        vItemSpace = 60;
        insurance = 4000;
        reservoir = 105;
        fuelfactor = 15;
    };



    class Land_Cargo10_military_green_F {       //      Caisse CONT2NAIRE
        vItemSpace = 200;
        insurance = 300000;
         textures[] = {};
    };

    class B_Slingload_01_Cargo_F {       //      Huron pod box
        vItemSpace = 400;
        insurance = 300000;
         textures[] = {};
    };

    class B_Slingload_01_Fuel_F {       //      Huron pod carburant
        vItemSpace = 0;
        insurance = 200000;
        citerne = 4000;
         textures[] = {};
    };

    class B_Mortar_01_F { 
        vItemSpace = 0;
        insurance = 300000;
        textures[] = {};
    };

    class B_G_Mortar_01_F {
        vItemSpace = 0;
        insurance = 300000;
        textures[] = {};
    };

    class O_Mortar_01_F { 
        vItemSpace = 0;
        insurance = 300000;
        textures[] = {};
    };

    class O_G_Mortar_01_F {
        vItemSpace = 0;
        insurance = 500000;
        textures[] = {};
    };

    class I_Mortar_01_F { 
        vItemSpace = 0;
        insurance = 500000;
        textures[] = {};
    };

    class I_G_Mortar_01_F {
        vItemSpace = 0;
        insurance = 500000;
        textures[] = {};
    };


    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        insurance = 2500;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        insurance = 2500;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        insurance = 2500;
        textures[] = {};
    };

    class CargoNet_01_box_F { 
        vItemSpace = 3000;
        insurance = 2500;
        textures[] = {};
    };

    // pompier

    class brancardlu { 
        vItemSpace = 50;
        insurance = 500;
        textures[] = {};
    };

    class devidoirch {
        vItemSpace = 50;
        insurance = 500;
        textures[] = {};
    };

    // Motos
    class d3s_Aprilia_Tuono_V4_1100_RR {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_BMW_S_1000_RR {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_Ducati_Monster_1200_S {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_Ducati_XDiavel_S {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_Kawasaki_Ninja_H2R {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_Kawasaki_Z800 {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_KTM_1290_Super_Duke {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_Suzuki_GSX_R_1000 {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    //  --------------------------------------- Voitures -----------------------------------------

    //  __________________________________BMW M5______________________________

    class d3s_e60_09_m {
        vItemSpace = 160;
        insurance = 14800;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 252;

        textures[] = {
            { "Blanc Alpine", "civ", {
                "d3s_e60_09\data\skins\acs_alpine_white.paa"
            } },
            { "Jaune Austin", "civ", {
                "d3s_e60_09\data\skins\acs_austin_yellow.paa"
            } },
            { "Noir", "civ", {
                "d3s_e60_09\data\skins\acs_black_sapphire.paa"
            } },
            { "Rouge Foncé", "civ", {
                "d3s_e60_09\data\skins\acs_frozen_dark_red.paa"
            } },
            { "Vert Pearl", "civ", {
                "d3s_e60_09\data\skins\acs_green_pearl.paa"
            } },
            { "Gris", "civ", {
                "d3s_e60_09\data\skins\acs_mineral_grey.paa"
            } },
            { "Orange", "civ", {
                "d3s_e60_09\data\skins\acs_sakhir_orange.paa"
            } },
            { "SilverStone", "civ", {
                "d3s_e60_09\data\skins\acs_silverstone.paa"
            } },
            { "Bleu racing", "civ", {
                "d3s_e60_09\data\skins\acs_snapper_rocks_blue.paa"
            } },
            { "Bleu marine", "civ", {
                "d3s_e60_09\data\skins\acs_yas_marina_blue.paa"
            } },
            { "Noir uni", "civ", {
                "d3s_e60_09\data\skins\e60_black_uni.paa"
            } },
            { "Jaune Austin", "civ", {
                "d3s_e60_09\data\skins\acs_black_sapphire.paa"
            } },
            { "Bleu imperial", "civ", {
                "d3s_e60_09\data\skins\e60_imperial_blue.paa"
            } },
            { "Marron", "civ", {
                "d3s_e60_09\data\skins\e60_jatoba.paa"
            } },
            { "Bleu foncé", "civ", {
                "d3s_e60_09\data\skins\e60_marina_bay_blue.paa"
            } }
        };

        addons[] = {
            {"wing", 0, 200}
        };
    };

    class d3s_e60_09 {
        vItemSpace = 160;
        insurance = 19600;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 252;

        textures[] = {
            { "Blanc Alpine", "civ", {
                "d3s_e60_09\data\skins\acs_alpine_white.paa"
            } },
            { "Jaune Austin", "civ", {
                "d3s_e60_09\data\skins\acs_austin_yellow.paa"
            } },
            { "Noir", "civ", {
                "d3s_e60_09\data\skins\acs_black_sapphire.paa"
            } },
            { "Rouge Foncé", "civ", {
                "d3s_e60_09\data\skins\acs_frozen_dark_red.paa"
            } },
            { "Vert Pearl", "civ", {
                "d3s_e60_09\data\skins\acs_green_pearl.paa"
            } },
            { "Gris", "civ", {
                "d3s_e60_09\data\skins\acs_mineral_grey.paa"
            } },
            { "Orange", "civ", {
                "d3s_e60_09\data\skins\acs_sakhir_orange.paa"
            } },
            { "SilverStone", "civ", {
                "d3s_e60_09\data\skins\acs_silverstone.paa"
            } },
            { "Bleu racing", "civ", {
                "d3s_e60_09\data\skins\acs_snapper_rocks_blue.paa"
            } },
            { "Bleu marine", "civ", {
                "d3s_e60_09\data\skins\acs_yas_marina_blue.paa"
            } },
            { "Noir uni", "civ", {
                "d3s_e60_09\data\skins\e60_black_uni.paa"
            } },
            { "Jaune Austin", "civ", {
                "d3s_e60_09\data\skins\acs_black_sapphire.paa"
            } },
            { "Bleu imperial", "civ", {
                "d3s_e60_09\data\skins\e60_imperial_blue.paa"
            } },
            { "Marron", "civ", {
                "d3s_e60_09\data\skins\e60_jatoba.paa"
            } },
            { "Bleu foncé", "civ", {
                "d3s_e60_09\data\skins\e60_marina_bay_blue.paa"
            } }
        };

        addons[] = {
            {"wing", 0, 200}
        };
    };

    class d3s_e60_09_ACS5 {
        vItemSpace = 160;
        insurance = 36800;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 272;

        textures[] = {
            { "Blanc Alpine", "civ", {
                "d3s_e60_09\data\skins\acs_alpine_white.paa"
            } },
            { "Jaune Austin", "civ", {
                "d3s_e60_09\data\skins\acs_austin_yellow.paa"
            } },
            { "Noir", "civ", {
                "d3s_e60_09\data\skins\acs_black_sapphire.paa"
            } },
            { "Rouge Foncé", "civ", {
                "d3s_e60_09\data\skins\acs_frozen_dark_red.paa"
            } },
            { "Vert Pearl", "civ", {
                "d3s_e60_09\data\skins\acs_green_pearl.paa"
            } },
            { "Gris", "civ", {
                "d3s_e60_09\data\skins\acs_mineral_grey.paa"
            } },
            { "Rouge", "civ", {
                "d3s_e60_09\data\skins\acs_sakhir_orange.paa"
            } },
            { "SilverStone", "civ", {
                "d3s_e60_09\data\skins\acs_silverstone.paa"
            } },
            { "Bleu racing", "civ", {
                "d3s_e60_09\data\skins\acs_snapper_rocks_blue.paa"
            } },
            { "Bleu marine", "civ", {
                "d3s_e60_09\data\skins\acs_yas_marina_blue.paa"
            } },
            { "Noir uni", "civ", {
                "d3s_e60_09\data\skins\e60_black_uni.paa"
            } },
            { "Jaune Austin", "civ", {
                "d3s_e60_09\data\skins\acs_black_sapphire.paa"
            } },
            { "Bleu imperial", "civ", {
                "d3s_e60_09\data\skins\e60_imperial_blue.paa"
            } },
            { "Marron", "civ", {
                "d3s_e60_09\data\skins\e60_jatoba.paa"
            } },
            { "Bleu foncé", "civ", {
                "d3s_e60_09\data\skins\e60_marina_bay_blue.paa"
            } }
        };

        addons[] = {
            {"wing",0,200}
        };
    };

    class d3s_e60_09_EX {
        vItemSpace = 160;
        insurance = 39000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 302;

        textures[] = {
            { "Blanc Alpine", "civ", {
                "d3s_e60_09\data\skins\acs_alpine_white.paa"
            } },
            { "Jaune Austin", "civ", {
                "d3s_e60_09\data\skins\acs_austin_yellow.paa"
            } },
            { "Noir", "civ", {
                "d3s_e60_09\data\skins\acs_black_sapphire.paa"
            } },
            { "Rouge Foncé", "civ", {
                "d3s_e60_09\data\skins\acs_frozen_dark_red.paa"
            } },
            { "Vert Pearl", "civ", {
                "d3s_e60_09\data\skins\acs_green_pearl.paa"
            } },
            { "Gris", "civ", {
                "d3s_e60_09\data\skins\acs_mineral_grey.paa"
            } },
            { "Orange", "civ", {
                "d3s_e60_09\data\skins\acs_sakhir_orange.paa"
            } },
            { "SilverStone", "civ", {
                "d3s_e60_09\data\skins\acs_silverstone.paa"
            } },
            { "Bleu racing", "civ", {
                "d3s_e60_09\data\skins\acs_snapper_rocks_blue.paa"
            } },
            { "Bleu marine", "civ", {
                "d3s_e60_09\data\skins\acs_yas_marina_blue.paa"
            } },
            { "Noir uni", "civ", {
                "d3s_e60_09\data\skins\e60_black_uni.paa"
            } },
            { "Jaune Austin", "civ", {
                "d3s_e60_09\data\skins\acs_black_sapphire.paa"
            } },
            { "Bleu imperial", "civ", {
                "d3s_e60_09\data\skins\e60_imperial_blue.paa"
            } },
            { "Marron", "civ", {
                "d3s_e60_09\data\skins\e60_jatoba.paa"
            } },
            { "Bleu foncé", "civ", {
                "d3s_e60_09\data\skins\e60_marina_bay_blue.paa"
            } }
        };

        addons[] = {
            {"nomerf", 1},
            {"wing", 0, 200},
        };
    };

    //  _________________________Alfa Romeo Stelvio_________________________

    class d3s_stelvio_18 {
        vItemSpace = 170;
        insurance = 27200;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 250;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_ao_co.paa"
            } },
            { "Ivory", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_ivory.paa"
            } },
            { "Bleu Racing", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_misano_blue.paa"
            } },
            { "Bleu MonteCarlo", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_montecarlo_blue.paa"
            } },
            { "Rouge", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_rosso_alfa.paa"
            } },
            { "Gris", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_stromboli_gray.paa"
            } },
            { "Noir", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_vulcano_black.paa"
            } }
        };

        addons[] = {  
        };
    };

    class d3s_stelvio_18_Ti {
        vItemSpace = 170;
        insurance = 38000;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 270;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_ao_co.paa"
            } },
            { "Ivory", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_ivory.paa"
            } },
            { "Bleu Racing", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_misano_blue.paa"
            } },
            { "Bleu MonteCarlo", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_montecarlo_blue.paa"
            } },
            { "Rouge", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_rosso_alfa.paa"
            } },
            { "Gris", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_stromboli_gray.paa"
            } },
            { "Noir", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_vulcano_black.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_stelvio_19_MNSTR {
        vItemSpace = 170;
        insurance = 60000;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 328;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_ao_co.paa"
            } },
            { "Ivory", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_ivory.paa"
            } },
            { "Bleu Racing", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_misano_blue.paa"
            } },
            { "Bleu MonteCarlo", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_montecarlo_blue.paa"
            } },
            { "Rouge", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_rosso_alfa.paa"
            } },
            { "Gris", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_stromboli_gray.paa"
            } },
            { "Noir", "civ", {
                "d3s_stelvio_18\data\skins\stelvio_vulcano_black.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_stelvio_18_COP {
        vItemSpace = 170;
        insurance = 42000;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_stelvio_18_UNM {
        vItemSpace = 170;
        insurance = 42000;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 280;

        textures[] = {
            { "Blanc", "cop", {
                "d3s_stelvio_18\data\skins\stelvio_ao_co.paa"
            } },
            { "Ivory", "cop", {
                "d3s_stelvio_18\data\skins\stelvio_ivory.paa"
            } },
            { "Bleu Racing", "cop", {
                "d3s_stelvio_18\data\skins\stelvio_misano_blue.paa"
            } },
            { "Bleu MonteCarlo", "cop", {
                "d3s_stelvio_18\data\skins\stelvio_montecarlo_blue.paa"
            } },
            { "Rouge", "cop", {
                "d3s_stelvio_18\data\skins\stelvio_rosso_alfa.paa"
            } },
            { "Gris", "cop", {
                "d3s_stelvio_18\data\skins\stelvio_stromboli_gray.paa"
            } },
            { "Noir", "cop", {
                "d3s_stelvio_18\data\skins\stelvio_vulcano_black.paa"
            } }
        };

        addons[] = {};
    };

    //  _________________________Audi Q7_________________________

    class d3s_Q7_15 {
        vItemSpace = 170;
        insurance = 34400;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 250;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_Q7_15\data\skins\q7_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_Q7_15\data\skins\q7_black_obsidian.paa"
            } },
            { "Bleu", "civ", {
                "d3s_Q7_15\data\skins\q7_hermosa_blue.paa"
            } },
            { "Noir Minerai", "civ", {
                "d3s_Q7_15\data\skins\q7_mineral_black.paa"
            } },
            { "Rouge", "civ", {
                "d3s_Q7_15\data\skins\q7_red_corsa.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_Q7_15_D {
        vItemSpace = 170;
        insurance = 50400;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 270;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_Q7_15\data\skins\q7_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_Q7_15\data\skins\q7_black_obsidian.paa"
            } },
            { "Bleu", "civ", {
                "d3s_Q7_15\data\skins\q7_hermosa_blue.paa"
            } },
            { "Noir Minerai", "civ", {
                "d3s_Q7_15\data\skins\q7_mineral_black.paa"
            } },
            { "Rouge", "civ", {
                "d3s_Q7_15\data\skins\q7_red_corsa.paa"
            } }
        };

        addons[] = {};
    };

    //  _________________________BMW Z4 (E89)_________________________

    class d3s_e89_12 {
        vItemSpace = 150;
        insurance = 8400;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 221;

        textures[] = {
            { "Blanc Alpine", "civ", {
                "d3s_e89_12\data\skins\e89_alpine_white.paa"
            } },
            { "Jaune", "civ", {
                "d3s_e89_12\data\skins\e89_austin_yellow.paa"
            } },
            { "Noir", "civ", {
                "d3s_e89_12\data\skins\e89_black_sapphire.paa"
            } },
            { "Noir uni", "civ", {
                "d3s_e89_12\data\skins\e89_black_uni.paa"
            } },
            { "Gris", "civ", {
                "d3s_e89_12\data\skins\e89_glacier_silver.paa"
            } },
            { "Bleu imperial", "civ", {
                "d3s_e89_12\data\skins\e89_imperial_blue.paa"
            } },
            { "Bleu marina", "civ", {
                "d3s_e89_12\data\skins\e89_marina_bay_blue.paa"
            } },
            { "Orange", "civ", {
                "d3s_e89_12\data\skins\e89_melbourne_red.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_e89_12_M {
        vItemSpace = 150;
        insurance = 19200;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 252;

        textures[] = {
            { "Blanc Alpine", "civ", {
                "d3s_e89_12\data\skins\e89_alpine_white.paa"
            } },
            { "Jaune", "civ", {
                "d3s_e89_12\data\skins\e89_austin_yellow.paa"
            } },
            { "Noir", "civ", {
                "d3s_e89_12\data\skins\e89_black_sapphire.paa"
            } },
            { "Noir uni", "civ", {
                "d3s_e89_12\data\skins\e89_black_uni.paa"
            } },
            { "Gris", "civ", {
                "d3s_e89_12\data\skins\e89_glacier_silver.paa"
            } },
            { "Bleu imperial", "civ", {
                "d3s_e89_12\data\skins\e89_imperial_blue.paa"
            } },
            { "Bleu marina", "civ", {
                "d3s_e89_12\data\skins\e89_marina_bay_blue.paa"
            } },
            { "Orange", "civ", {
                "d3s_e89_12\data\skins\e89_melbourne_red.paa"
            } }
        };

        addons[] = {};
    };

    //  _________________________Mercedes-Maybach_________________________

    class d3s_s560_18 {
        vItemSpace = 160;
        insurance = 25400;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 252;

        textures[] = {
            { "Maron", "civ", {
                "d3s_x222_18\data\skins\x222_allanit_gray.paa"
            } },
            { "Bleu Anthracite", "civ", {
                "d3s_x222_18\data\skins\x222_anthracite_blue.paa"
            } },
            { "Blanc", "civ", {
                "d3s_x222_18\data\skins\x222_ao_co.paa"
            } },
            { "Vert", "civ", {
                "d3s_x222_18\data\skins\x222_emerald_green.paa"
            } },
            { "Rouge foncé", "civ", {
                "d3s_x222_18\data\skins\x222_ruby_black.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_s560_sport_18 {
        vItemSpace = 160;
        insurance = 33200;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 252;

        textures[] = {
            { "Maron", "civ", {
                "d3s_x222_18\data\skins\x222_allanit_gray.paa"
            } },
            { "Bleu Anthracite", "civ", {
                "d3s_x222_18\data\skins\x222_anthracite_blue.paa"
            } },
            { "Blanc", "civ", {
                "d3s_x222_18\data\skins\x222_ao_co.paa"
            } },
            { "Vert", "civ", {
                "d3s_x222_18\data\skins\x222_emerald_green.paa"
            } },
            { "Rouge foncé", "civ", {
                "d3s_x222_18\data\skins\x222_ruby_black.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_vv222_18 {
        vItemSpace = 200;
        insurance = 123000;
        reservoir = 90;
        fuelfactor = 24;
        vmax = 252;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_vv222_18\data\skins\vv222_ao_co.paa"
            } },
            { "Rouge foncé", "civ", {
                "d3s_vv222_18\data\skins\vv222_ruby_black.paa"
            } },
            { "Maron", "civ", {
                "d3s_vv222_18\data\skins\vv222_citrin_brown.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_vv222_18_2 {
        vItemSpace = 200;
        insurance = 156000;
        reservoir = 90;
        fuelfactor = 24;
        vmax = 252;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_vv222_18\data\skins\vv222_ao_co.paa"
            } },
            { "Rouge foncé", "civ", {
                "d3s_vv222_18\data\skins\vv222_ruby_black.paa"
            } },
            { "Maron", "civ", {
                "d3s_vv222_18\data\skins\vv222_citrin_brown.paa"
            } },
        };

        addons[] = {};
    };

    //  _________________________Dodge Coronet Super Bee_________________________

    class d3s_coronet_70 {
        vItemSpace = 160;
        insurance = 64000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 220;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_coronet_70\data\skins\bee_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_coronet_70\data\skins\bee_blue.paa"
            } },
            { "Marron", "civ", {
                "d3s_coronet_70\data\skins\bee_brown.paa"
            } },
            { "Vert", "civ", {
                "d3s_coronet_70\data\skins\bee_green.paa"
            } },
            { "Orange", "civ", {
                "d3s_coronet_70\data\skins\bee_orange.paa"
            } },
        };

        addons[] = {{"COP",0}};
    };

    //  _________________________La Ferrari_________________________

    class d3s_LaFerrari_14 {
        vItemSpace = 100;
        insurance = 239200;
        reservoir = 80;
        fuelfactor = 22;
        vmax = 350;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_LaFerrari_14\data\skins\laferrari_ao_co.paa"
            } },
            { "Beige", "civ", {
                "d3s_LaFerrari_14\data\skins\laferrari_avorio.paa"
            } },
            { "Bleu", "civ", {
                "d3s_LaFerrari_14\data\skins\laferrari_blu_abu_dhabi.paa"
            } },
            { "Jaune", "civ", {
                "d3s_LaFerrari_14\data\skins\laferrari_giallo_modena.paa"
            } },
            { "Rouge", "civ", {
                "d3s_LaFerrari_14\data\skins\laferrari_rosso_corsa.paa"
            } },
            { "Rouge Fiorano", "civ", {
                "d3s_LaFerrari_14\data\skins\laferrari_rosso_fiorano.paa"
            } },
        };

        addons[] = {};
    };

    //  _________________________Dodge Challenger_________________________

    class d3s_challenger_15_LW {
        vItemSpace = 160;
        insurance = 79000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 270;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_challenger_15\data\skins\lw_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_challenger_15\data\skins\lw_b5_blue.paa"
            } },
            { "Granite", "civ", {
                "d3s_challenger_15\data\skins\lw_granite_crystal.paa"
            } },
            { "Noir", "civ", {
                "d3s_challenger_15\data\skins\lw_phantom_black.paa"
            } }
        };

        addons[] = {
            {"nomerf",1},{"SRT_logo",0},{"RT_Gauge",1},{"SRT_Gauge",0},{"top1",1},
            {"top2",0},{"CHR",1},{"ROL",0},{"hoodA",1},{"hoodB",0},{"glasslight1",1},{"glasslight2",1},{"SpoilerRT",0},
            {"SpoilerSRT",0},{"Demon_logo",0},{"Hellcat_logo",0},{"392",0},{"HEMI",0},{"RT",0},{"PUnm",0},{"Toplight",0},
            {"Bar",0},{"SXT_1_1",0},{"SXT_1_2",0},{"SXT_2_1",0},{"SXT_2_2",0},{"RT_1_1",0},
            {"RT_1_2",0},{"RT_2_1",0},{"RT_2_2",0},{"DM_1_1",0},{"DM_1_2",0},{"DM_2_1",0},{"DM_2_2",0},{"Scat",0}
        };
    };

    class d3s_challenger_15_WIDE {
        vItemSpace = 160;
        insurance = 41800;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 328;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_challenger_15\data\skins\dm_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_challenger_15\data\skins\dm_b5_blue.paa"
            } },
            { "Granite", "civ", {
                "d3s_challenger_15\data\skins\dm_granite_crystal.paa"
            } },
            { "Noir", "civ", {
                "d3s_challenger_15\data\skins\dm_phantom_black.paa"
            } }
        };

        addons[] = {
            {"nomerf",0},{"SpoilerRT",0},{"SpoilerSRT",1},{"Demon_logo",0},{"Hellcat_logo",1},
            {"SRT_logo",1},{"RT_Gauge",0},{"SRT_Gauge",1},{"392",0},{"HEMI",0},{"top1",1},{"top2",0},
            {"RT",0},{"CHR",0},{"ROL",1},{"hoodA",0},{"hoodB",1},{"glasslight1",0},{"glasslight2",1},
            {"SXT_1_1",1},{"SXT_1_2",1},{"SXT_2_1",1},{"SXT_2_2",1},{"RT_1_1",0},{"RT_1_2",0},
            {"RT_2_1",0},{"RT_2_2",0},{"DM_1_1",0},{"DM_1_2",0},{"DM_2_1",0},{"DM_2_2",0},{"PUnm",0},{"Toplight",0},{"Bar",0},{"Scat",0}
        };
    };

    class d3s_challenger_15 {
        vItemSpace = 160;
        insurance = 20400;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 220;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_challenger_15\data\skins\rt_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_challenger_15\data\skins\rt_b5_blue.paa"
            } },
            { "Granite", "civ", {
                "d3s_challenger_15\data\skins\rt_granite_crystal.paa"
            } },
            { "Noir", "civ", {
                "d3s_challenger_15\data\skins\rt_phantom_black.paa"
            } }
        };

        addons[] = {
            {"nomerf",1},{"SpoilerRT",1},{"SpoilerSRT",0},{"Demon_logo",0},
            {"Hellcat_logo",0},{"SRT_logo",0},{"RT_Gauge",1},{"SRT_Gauge",0},{"392",0},
            {"HEMI",0},{"top1",1},{"top2",0},{"RT",1},{"CHR",1},{"ROL",0},{"hoodA",1},
            {"hoodB",0},{"SXT_1_1",1},{"SXT_1_2",1},{"SXT_2_1",1},{"SXT_2_2",1},{"RT_1_1",0},{"RT_1_2",0},
            {"RT_2_1",0},{"RT_2_2",0},{"DM_1_1",0},{"DM_1_2",0},
            {"DM_2_1",0},{"DM_2_2",0},{"glasslight1",1},{"glasslight2",0},{"PUnm",0},{"Toplight",0},{"Bar",0},{"Scat",0}
        };
    };

    class d3s_challenger_15_RT {
        vItemSpace = 160;
        insurance = 26000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 250;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_challenger_15\data\skins\lw_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_challenger_15\data\skins\lw_b5_blue.paa"
            } },
            { "Granite", "civ", {
                "d3s_challenger_15\data\skins\lw_granite_crystal.paa"
            } },
            { "Noir", "civ", {
                "d3s_challenger_15\data\skins\lw_phantom_black.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_challenger_15_SP {
        vItemSpace = 160;
        insurance = 35600;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 250;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_challenger_15\data\skins\lw_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_challenger_15\data\skins\lw_b5_blue.paa"
            } },
            { "Granite", "civ", {
                "d3s_challenger_15\data\skins\lw_granite_crystal.paa"
            } },
            { "Noir", "civ", {
                "d3s_challenger_15\data\skins\lw_phantom_black.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_challenger_15_392 {
        vItemSpace = 160;
        insurance = 37800;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 300;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_challenger_15\data\skins\lw_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_challenger_15\data\skins\lw_b5_blue.paa"
            } },
            { "Granite", "civ", {
                "d3s_challenger_15\data\skins\lw_granite_crystal.paa"
            } },
            { "Noir", "civ", {
                "d3s_challenger_15\data\skins\lw_phantom_black.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_challenger_15_HELL {
        vItemSpace = 160;
        insurance = 45400;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 328;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_challenger_15\data\skins\lw_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_challenger_15\data\skins\lw_b5_blue.paa"
            } },
            { "Granite", "civ", {
                "d3s_challenger_15\data\skins\lw_granite_crystal.paa"
            } },
            { "Noir", "civ", {
                "d3s_challenger_15\data\skins\lw_phantom_black.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_challenger_15_DM {
        vItemSpace = 160;
        insurance = 68000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 328;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_challenger_15\data\skins\lw_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_challenger_15\data\skins\lw_b5_blue.paa"
            } },
            { "Granite", "civ", {
                "d3s_challenger_15\data\skins\lw_granite_crystal.paa"
            } },
            { "Noir", "civ", {
                "d3s_challenger_15\data\skins\lw_phantom_black.paa"
            } }
        };

        addons[] = {};
    };

    //  _________________________Dodge Charger_________________________

    class d3s_charger_15 {
        vItemSpace = 160;
        insurance = 22800;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 250;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_charger_15\data\skins\chr_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_charger_15\data\skins\chr_b5_blue.paa"
            } },
            { "Granite", "civ", {
                "d3s_charger_15\data\skins\chr_granite_crystal.paa"
            } },
            { "Bleu foncé", "civ", {
                "d3s_charger_15\data\skins\chr_jazz_blue.paa"
            } },
            { "Noir", "civ", {
                "d3s_charger_15\data\skins\chr_phantom_black.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_srthellcat_15 {
        vItemSpace = 160;
        insurance = 36400;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 250;

        textures[] = {
            { "Orange", "civ", {
                "d3s_srthellcat_15\data\skins\daytona_orange.paa"
            } },
            { "Bleu", "civ", {
                "d3s_srthellcat_15\data\skins\daytona_red.paa"
            } },
            { "Jaune", "civ", {
                "d3s_srthellcat_15\data\skins\daytona_yellow.paa"
            } },
            { "Blanc", "civ", {
                "d3s_srthellcat_15\data\skins\scat_blue.paa"
            } },
            { "Noir / Blanc", "civ", {
                "d3s_srthellcat_15\data\skins\deepstage_black.paa"
            } },
            { "Noir / Blanc 2", "civ", {
                "d3s_srthellcat_15\data\skins\deepstage_white.paa"
            } },
            { "Noir / Rouge", "civ", {
                "d3s_srthellcat_15\data\skins\deepstage_red.paa"
            } },
            { "Noir / Violet", "civ", {
                "d3s_srthellcat_15\data\skins\deepstage_violet.paa"
            } },
            { "Noir / Jaune", "civ", {
                "d3s_srthellcat_15\data\skins\deepstage_yellow.paa"
            } },
            { "Bleu clair", "civ", {
                "d3s_srthellcat_15\data\skins\scat_blue.paa"
            } },
            { "Orange", "civ", {
                "d3s_srthellcat_15\data\skins\scat_orange.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_srthellcat_15_HELL {
        vItemSpace = 160;
        insurance = 41000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 328;

        textures[] = {
            { "Orange", "civ", {
                "d3s_srthellcat_15\data\skins\daytona_orange.paa"
            } },
            { "Bleu", "civ", {
                "d3s_srthellcat_15\data\skins\daytona_red.paa"
            } },
            { "Jaune", "civ", {
                "d3s_srthellcat_15\data\skins\daytona_yellow.paa"
            } },
            { "Blanc", "civ", {
                "d3s_srthellcat_15\data\skins\scat_blue.paa"
            } },
            { "Noir / Blanc", "civ", {
                "d3s_srthellcat_15\data\skins\deepstage_black.paa"
            } },
            { "Noir / Blanc 2", "civ", {
                "d3s_srthellcat_15\data\skins\deepstage_white.paa"
            } },
            { "Noir / Rouge", "civ", {
                "d3s_srthellcat_15\data\skins\deepstage_red.paa"
            } },
            { "Noir / Violet", "civ", {
                "d3s_srthellcat_15\data\skins\deepstage_violet.paa"
            } },
            { "Noir / Jaune", "civ", {
                "d3s_srthellcat_15\data\skins\deepstage_yellow.paa"
            } },
            { "Bleu clair", "civ", {
                "d3s_srthellcat_15\data\skins\scat_blue.paa"
            } },
            { "Orange", "civ", {
                "d3s_srthellcat_15\data\skins\scat_orange.paa"
            } }
        };

        addons[] = {};
    };

    //  _________________________Subaru WRX_________________________

    class d3s_wrx_17 {
        vItemSpace = 160;
        insurance = 12000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 220;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_wrx_17\data\skins\sti_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_wrx_17\data\skins\crystal_black.paa"
            } },
            { "Gris", "civ", {
                "d3s_wrx_17\data\skins\dark_grey.paa"
            } },
            { "Bleu", "civ", {
                "d3s_wrx_17\data\skins\galaxy_blue.paa"
            } },
            { "Rouge", "civ", {
                "d3s_wrx_17\data\skins\lightning_red.paa"
            } },
            { "Bleu Racing", "civ", {
                "d3s_wrx_17\data\skins\wr_blue.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_wrx_sti_17 {
        vItemSpace = 160;
        insurance = 26000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 250;

        textures[] = {
            { "Noir", "civ", {
                "d3s_wrx_17\data\skins\sti\crystal_black.paa"
            } },
            { "Gris", "civ", {
                "d3s_wrx_17\data\skins\sti\dark_grey.paa"
            } },
            { "Bleu", "civ", {
                "d3s_wrx_17\data\skins\sti\galaxy_blue.paa"
            } },
            { "Rouge", "civ", {
                "d3s_wrx_17\data\skins\sti\lightning_red.paa"
            } },
            { "Bleu Racing", "civ", {
                "d3s_wrx_17\data\skins\sti\wr_blue.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_wrx_17_FnF8 {
        vItemSpace = 160;
        insurance = 22400;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 280;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_wrx_17\data\f8\fnf8_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_wrx_17\data\f8\fnf8_crystal_black.paa"
            } },
            { "Bleu", "civ", {
                "d3s_wrx_17\data\f8\fnf8_twilight_blue.paa"
            } },
            { "Rouge", "civ", {
                "d3s_wrx_17\data\f8\fnf8_lightning_red.paa"
            } },
            { "Bleu Racing", "civ", {
                "d3s_wrx_17\data\f8\fnf8_wr_blue.paa"
            } },
        };

        addons[] = {};
    };

    //  _________________________BMW X5_________________________

    class d3s_e53_03_30 {
        vItemSpace = 170;
        insurance = 19400;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 220;

        textures[] = {};

        addons[] = {};
    };

    class d3s_e53_03_48 {
        vItemSpace = 170;
        insurance = 33200;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 250;

        textures[] = {};

        addons[] = {};
    };

    class d3s_e53_03_EX {
        vItemSpace = 170;
        insurance = 38800;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 300;

        textures[] = {};

        addons[] = {};
    };

    //  _________________________BMW X5 M_________________________

    class d3s_f85_15_m {
        vItemSpace = 170;
        insurance = 21200;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 250;

        textures[] = {
            { "Blanc Alpine", "civ", {
                "d3s_f85_15\data\skins\f85_ao_co.paa"
            } },
            { "Jaune", "civ", {
                "d3s_f85_15\data\skins\f85_austin_yellow.paa"
            } },
            { "Rouge", "civ", {
                "d3s_f85_15\data\skins\f85_frozen_dark_red.paa"
            } },
            { "Bleu", "civ", {
                "d3s_f85_15\data\skins\f85_marina_bay_blue.paa"
            } },
            { "Gris", "civ", {
                "d3s_f85_15\data\skins\f85_mineral_grey.paa"
            } },
            { "Orange", "civ", {
                "d3s_f85_15\data\skins\f85_sakhir_orange.paa"
            } }
        };

        addons[] = {
            {"Arka",0},
            {"Arka1",1},
            {"HoodA",0},
            {"HoodB",1},
            {"Bump",1},
            {"Bump1",0},
            {"Top",1},
            {"Top1",0},
            {"Mirrors",1},
            {"Mirrors1",0},
            {"Diffuser",1},
            {"Diffuser1",0},
            {"Splitter",1},
            {"Splitter1",1},
            {"Chrome",0},
            {"Chrome1",1}
        };
    };

    class d3s_f85_15 {
        vItemSpace = 170;
        insurance = 28400;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 220;

        textures[] = {
            { "Blanc Alpine", "civ", {
                "d3s_f85_15\data\skins\f85_ao_co.paa"
            } },
            { "Jaune", "civ", {
                "d3s_f85_15\data\skins\f85_austin_yellow.paa"
            } },
            { "Rouge", "civ", {
                "d3s_f85_15\data\skins\f85_frozen_dark_red.paa"
            } },
            { "Bleu", "civ", {
                "d3s_f85_15\data\skins\f85_marina_bay_blue.paa"
            } },
            { "Gris", "civ", {
                "d3s_f85_15\data\skins\f85_mineral_grey.paa"
            } },
            { "Orange", "civ", {
                "d3s_f85_15\data\skins\f85_sakhir_orange.paa"
            } }
        };

        addons[] = {
            {"Arka",0},
            {"Arka1",1},
            {"HoodA",0},
            {"HoodB",1},
            {"Bump",1},
            {"Bump1",0},
            {"Top",1},
            {"Top1",0},
            {"Mirrors",1},
            {"Mirrors1",0},
            {"Diffuser",1},
            {"Diffuser1",0},
            {"Splitter",1},
            {"Splitter1",1},
            {"Chrome",0},
            {"Chrome1",1}
        };
    };

    class d3s_f85_15_EX {
        vItemSpace = 170;
        insurance = 39600;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 300;

        textures[] = {
            { "Blanc Alpine", "civ", {
                "d3s_f85_15\data\skins\f85_ao_co.paa"
            } },
            { "Jaune", "civ", {
                "d3s_f85_15\data\skins\f85_austin_yellow.paa"
            } },
            { "Rouge", "civ", {
                "d3s_f85_15\data\skins\f85_frozen_dark_red.paa"
            } },
            { "Bleu", "civ", {
                "d3s_f85_15\data\skins\f85_marina_bay_blue.paa"
            } },
            { "Gris", "civ", {
                "d3s_f85_15\data\skins\f85_mineral_grey.paa"
            } },
            { "Orange", "civ", {
                "d3s_f85_15\data\skins\f85_sakhir_orange.paa"
            } }
        };

        addons[] = {
            {"Arka",0},
            {"Arka1",1},
            {"HoodA",0},
            {"HoodB",1},
            {"Bump",1},
            {"Bump1",0},
            {"Top",1},
            {"Top1",0},
            {"Mirrors",1},
            {"Mirrors1",0},
            {"Diffuser",1},
            {"Diffuser1",0},
            {"Splitter",1},
            {"Splitter1",1},
            {"Chrome",0},
            {"Chrome1",1}
        };
    };

    //  _________________________Cadillac Escalade_________________________

    class d3s_escalade_16 {
        vItemSpace = 200;
        insurance = 20200;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 220;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_escalade_16\data\skins\esv_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_escalade_16\data\skins\esv_black_raven.paa"
            } },
            { "Noir granite", "civ", {
                "d3s_escalade_16\data\skins\esv_dark_granite.paa"
            } },
            { "Violet", "civ", {
                "d3s_escalade_16\data\skins\esv_majestic_plum.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_escalade_16_pt {
        vItemSpace = 200;
        insurance = 23980;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 250;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_escalade_16\data\skins\esv_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_escalade_16\data\skins\esv_black_raven.paa"
            } },
            { "Noir granite", "civ", {
                "d3s_escalade_16\data\skins\esv_dark_granite.paa"
            } },
            { "Violet", "civ", {
                "d3s_escalade_16\data\skins\esv_majestic_plum.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_escalade_16_gouv {
        vItemSpace = 200;
        insurance = 3000;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 270;

        textures[] = {};

        addons[] = {};
    };

    //  _________________________Chevrolet Tahoe_________________________

    class d3s_tahoe_08 {
        vItemSpace = 180;
        insurance = 21000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Noir", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_black_granite.paa"
            } },
            { "Rouge", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_crystal_red.paa"
            } },
            { "Crême", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_gold_mist.paa"
            } },
            { "Marron", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_mocha_steel.paa"
            } },
            { "Silver", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_silver_ice.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_tahoe_ltz_08 {
        vItemSpace = 180;
        insurance = 27600;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Noir", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_black_granite.paa"
            } },
            { "Rouge", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_crystal_red.paa"
            } },
            { "Crême", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_gold_mist.paa"
            } },
            { "Marron", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_mocha_steel.paa"
            } },
            { "Silver", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_silver_ice.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_tahoe_limited {
        vItemSpace = 180;
        insurance = 28400;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Noir", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_black_granite.paa"
            } },
            { "Rouge", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_crystal_red.paa"
            } },
            { "Crême", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_gold_mist.paa"
            } },
            { "Marron", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_mocha_steel.paa"
            } },
            { "Silver", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_silver_ice.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_tahoe_EX {
        vItemSpace = 180;
        insurance = 29000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Noir", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_black_granite.paa"
            } },
            { "Rouge", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_crystal_red.paa"
            } },
            { "Crême", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_gold_mist.paa"
            } },
            { "Marron", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_mocha_steel.paa"
            } },
            { "Silver", "civ", {
                "d3s_tahoe_08\data\skins\tahoe_silver_ice.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_tahoe_PPV {
        vItemSpace = 180;
        insurance = 8000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_tahoe_EMS {
        vItemSpace = 180;
        insurance = 32400;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 270;

        textures[] = {};

        addons[] = {};
    };

    class d3s_tahoe_UNM {
        vItemSpace = 180;
        insurance = 32800;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 270;

        textures[] = {
            { "Noir", "cop", {
                "d3s_tahoe_08\data\skins\tahoe_black_granite.paa"
            } },
            { "Rouge", "cop", {
                "d3s_tahoe_08\data\skins\tahoe_crystal_red.paa"
            } },
            { "Crême", "cop", {
                "d3s_tahoe_08\data\skins\tahoe_gold_mist.paa"
            } },
            { "Marron", "cop", {
                "d3s_tahoe_08\data\skins\tahoe_mocha_steel.paa"
            } },
            { "Silver", "cop", {
                "d3s_tahoe_08\data\skins\tahoe_silver_ice.paa"
            } }
        };

        addons[] = {};
    };

    //  _________________________Ford F-150 Raptor_________________________

    class d3s_raptor_17 {
        vItemSpace = 200;
        insurance = 22400;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 250;

        textures[] = {
            { "Gris", "civ", {
                "d3s_raptor_17\data\skins\raptor_silver_ice.paa"
            } },
            { "Blanc", "civ", {
                "d3s_raptor_17\data\skins\raptor_white.paa"
            } },
            { "Jaune", "civ", {
                "d3s_raptor_17\data\skins\raptor_yellow.paa"
            } },
            { "Orange", "civ", {
                "d3s_raptor_17\data\skins\raptor_orange.paa"
            } },
            { "Marron", "civ", {
                "d3s_raptor_17\data\skins\raptor_mocha_steel.paa"
            } },
            { "Or", "civ", {
                "d3s_raptor_17\data\skins\raptor_gold_mist.paa"
            } },
            { "Rouge", "civ", {
                "d3s_raptor_17\data\skins\raptor_crystal_red.paa"
            } },
            { "Granite", "civ", {
                "d3s_raptor_17\data\skins\raptor_black_granite.paa"
            } },
            { "Noir", "civ", {
                "d3s_raptor_17\data\skins\raptor_black.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_raptor_SCR_17 {
        vItemSpace = 200;
        insurance = 31000;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 250;

        textures[] = {
            { "Gris", "civ", {
                "d3s_raptor_17\data\skins\raptor_silver_ice.paa"
            } },
            { "Blanc", "civ", {
                "d3s_raptor_17\data\skins\raptor_white.paa"
            } },
            { "Jaune", "civ", {
                "d3s_raptor_17\data\skins\raptor_yellow.paa"
            } },
            { "Orange", "civ", {
                "d3s_raptor_17\data\skins\raptor_orange.paa"
            } },
            { "Marron", "civ", {
                "d3s_raptor_17\data\skins\raptor_mocha_steel.paa"
            } },
            { "Or", "civ", {
                "d3s_raptor_17\data\skins\raptor_gold_mist.paa"
            } },
            { "Rouge", "civ", {
                "d3s_raptor_17\data\skins\raptor_crystal_red.paa"
            } },
            { "Granite", "civ", {
                "d3s_raptor_17\data\skins\raptor_black_granite.paa"
            } },
            { "Noir", "civ", {
                "d3s_raptor_17\data\skins\raptor_black.paa"
            } },
            { "Design", "civ", {
                "d3s_raptor_17\data\skins\vip\tsdesigns.paa"
            } },
        };

        addons[] = {
            {"Caution",0}
        };
    };

    class d3s_raptor_PRP_17 {
        vItemSpace = 200;
        insurance = 35000;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_raptor_UNM_17 {
        vItemSpace = 200;
        insurance = 33600;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 320;

        textures[] = {
            { "Gris", "cop", {
                "d3s_raptor_17\data\skins\raptor_silver_ice.paa"
            } },
            { "Blanc", "cop", {
                "d3s_raptor_17\data\skins\raptor_white.paa"
            } },
            { "Jaune", "cop", {
                "d3s_raptor_17\data\skins\raptor_yellow.paa"
            } },
            { "Orange", "cop", {
                "d3s_raptor_17\data\skins\raptor_orange.paa"
            } },
            { "Marron", "cop", {
                "d3s_raptor_17\data\skins\raptor_mocha_steel.paa"
            } },
            { "Or", "cop", {
                "d3s_raptor_17\data\skins\raptor_gold_mist.paa"
            } },
            { "Rouge", "cop", {
                "d3s_raptor_17\data\skins\raptor_crystal_red.paa"
            } },
            { "Granite", "cop", {
                "d3s_raptor_17\data\skins\raptor_black_granite.paa"
            } },
            { "Noir", "cop", {
                "d3s_raptor_17\data\skins\raptor_black.paa"
            } },
        };

        addons[] = {};
    };

    //  _________________________Hummer H2_________________________

    class d3s_h2_02 {
        vItemSpace = 200;
        insurance = 20400;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 250;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_h2_02\data\skins\h2_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_h2_02\data\skins\black.paa"
            } }
        };

        addons[] = {};
    };

    //  _________________________Jeep Grand Cherokee_________________________

    class d3s_cherokee_18 {
        vItemSpace = 170;
        insurance = 23600;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 250;

        textures[] = {
            { "Rouge", "civ", {
                "d3s_cherokee_18\data\skins\cher_srt_redline_red.paa"
            } },
            { "Marron", "civ", {
                "d3s_cherokee_18\data\skins\cher_billet_silver.paa"
            } },
            { "Crême", "civ", {
                "d3s_cherokee_18\data\skins\cher_sandstone_perl.paa"
            } },
            { "Blanc", "civ", {
                "d3s_cherokee_18\data\skins\cher_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_cherokee_18\data\skins\cher_brilliant_black.paa"
            } },
            { "Rouge", "civ", {
                "d3s_cherokee_18\data\skins\cher_redline_red.paa"
            } },
            { "Bleu", "civ", {
                "d3s_cherokee_18\data\skins\cher_true_blue.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_cherokee_18_TRCK {
        vItemSpace = 170;
        insurance = 30400;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 250;

        textures[] = {
            { "Rouge", "civ", {
                "d3s_cherokee_18\data\skins\cher_srt_redline_red.paa"
            } },
            { "Marron", "civ", {
                "d3s_cherokee_18\data\skins\cher_billet_silver.paa"
            } },
            { "Crême", "civ", {
                "d3s_cherokee_18\data\skins\cher_sandstone_perl.paa"
            } },
            { "Blanc", "civ", {
                "d3s_cherokee_18\data\skins\cher_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_cherokee_18\data\skins\cher_brilliant_black.paa"
            } },
            { "Rouge", "civ", {
                "d3s_cherokee_18\data\skins\cher_redline_red.paa"
            } },
            { "Bleu", "civ", {
                "d3s_cherokee_18\data\skins\cher_true_blue.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_cherokee_18_LTD {
        vItemSpace = 170;
        insurance = 27600;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 250;

        textures[] = {
            { "Rouge", "civ", {
                "d3s_cherokee_18\data\skins\cher_srt_redline_red.paa"
            } },
            { "Marron", "civ", {
                "d3s_cherokee_18\data\skins\cher_billet_silver.paa"
            } },
            { "Crême", "civ", {
                "d3s_cherokee_18\data\skins\cher_sandstone_perl.paa"
            } },
            { "Blanc", "civ", {
                "d3s_cherokee_18\data\skins\cher_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_cherokee_18\data\skins\cher_brilliant_black.paa"
            } },
            { "Rouge", "civ", {
                "d3s_cherokee_18\data\skins\cher_redline_red.paa"
            } },
            { "Bleu", "civ", {
                "d3s_cherokee_18\data\skins\cher_true_blue.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_cherokee_18_JPPV {
        vItemSpace = 170;
        insurance = 34400;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_cherokee_18_UNM {
        vItemSpace = 170;
        insurance = 34400;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 270;

        textures[] = {
            { "Rouge", "cop", {
                "d3s_cherokee_18\data\skins\cher_srt_redline_red.paa"
            } },
            { "Marron", "cop", {
                "d3s_cherokee_18\data\skins\cher_billet_silver.paa"
            } },
            { "Crême", "cop", {
                "d3s_cherokee_18\data\skins\cher_sandstone_perl.paa"
            } },
            { "Blanc", "cop", {
                "d3s_cherokee_18\data\skins\cher_ao_co.paa"
            } },
            { "Noir", "cop", {
                "d3s_cherokee_18\data\skins\cher_brilliant_black.paa"
            } },
            { "Rouge", "cop", {
                "d3s_cherokee_18\data\skins\cher_redline_red.paa"
            } },
            { "Bleu", "cop", {
                "d3s_cherokee_18\data\skins\cher_true_blue.paa"
            } },
        };

        addons[] = {};
    };

    //  _________________________Maserati Levante_________________________

    class d3s_levante_17 {
        vItemSpace = 170;
        insurance = 26200;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 310;
        textures[] = {
            { "Blanc", "civ", {
                "d3s_levante_17\data\skins\lev_ao_bianco_alpi.paa"
            } },
            { "Bleu", "civ", {
                "d3s_levante_17\data\skins\lev_ao_blu_emozione.paa"
            } },
            { "Champagne", "civ", {
                "d3s_levante_17\data\skins\lev_ao_champagne.paa"
            } },
            { "Gris", "civ", {
                "d3s_levante_17\data\skins\lev_ao_grigio.paa"
            } },
            { "Rouge", "civ", {
                "d3s_levante_17\data\skins\lev_ao_rosso_rubino.paa"
            } },
            { "Vert", "civ", {
                "d3s_levante_17\data\skins\lev_ao_verde_ossido.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_levante_s_17 {
        vItemSpace = 170;
        insurance = 32400;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 205;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_levante_17\data\skins\lev_ao_bianco_alpi.paa"
            } },
            { "Bleu", "civ", {
                "d3s_levante_17\data\skins\lev_ao_blu_emozione.paa"
            } },
            { "Champagne", "civ", {
                "d3s_levante_17\data\skins\lev_ao_champagne.paa"
            } },
            { "Gris", "civ", {
                "d3s_levante_17\data\skins\lev_ao_grigio.paa"
            } },
            { "Rouge", "civ", {
                "d3s_levante_17\data\skins\lev_ao_rosso_rubino.paa"
            } },
            { "Vert", "civ", {
                "d3s_levante_17\data\skins\lev_ao_verde_ossido.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_levante_s_17_mat {
        vItemSpace = 170;
        insurance = 42400;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 300;

        textures[] = {};

        addons[] = {};
    };

    //  _________________________Toyota Land Cruiser 200_________________________

    class d3s_200_VX_16 {
        vItemSpace = 180;
        insurance = 7200;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 220;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_200_16\data\skins\200_ao_co.paa"
            } },
            { "Gris", "civ", {
                "d3s_200_16\data\skins\200_ash_grey.paa"
            } },
            { "Noir", "civ", {
                "d3s_200_16\data\skins\200_astral_black.paa"
            } },
            { "Marron", "civ", {
                "d3s_200_16\data\skins\200_copper_brown.paa"
            } },
            { "Rouge", "civ", {
                "d3s_200_16\data\skins\200_regency_red.paa"
            } },
            { "Bleu royal", "civ", {
                "d3s_200_16\data\skins\200_royal_blue.paa"
            } },
        };

        addons[] = {
            {"nomerf",1},
            {"Black2",1},
            {"THULE",0},
            {"THULE_BLK",0}
        };
    };

    class d3s_200_16 {
        vItemSpace = 180;
        insurance = 14400;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_200_16\data\skins\200_ao_co.paa"
            } },
            { "Gris", "civ", {
                "d3s_200_16\data\skins\200_ash_grey.paa"
            } },
            { "Noir", "civ", {
                "d3s_200_16\data\skins\200_astral_black.paa"
            } },
            { "Marron", "civ", {
                "d3s_200_16\data\skins\200_copper_brown.paa"
            } },
            { "Rouge", "civ", {
                "d3s_200_16\data\skins\200_regency_red.paa"
            } },
            { "Bleu royal", "civ", {
                "d3s_200_16\data\skins\200_royal_blue.paa"
            } },
        };

        addons[] = {
            {"nomerf",1},
            {"Black2",1},
            {"THULE",0},
            {"THULE_BLK",0}
        };
    };

    class d3s_200_16_EX {
        vItemSpace = 180;
        insurance = 18800;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 270;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_200_16\data\skins\200_ao_co.paa"
            } },
            { "Gris", "civ", {
                "d3s_200_16\data\skins\200_ash_grey.paa"
            } },
            { "Noir", "civ", {
                "d3s_200_16\data\skins\200_astral_black.paa"
            } },
            { "Marron", "civ", {
                "d3s_200_16\data\skins\200_copper_brown.paa"
            } },
            { "Rouge", "civ", {
                "d3s_200_16\data\skins\200_regency_red.paa"
            } },
            { "Bleu royal", "civ", {
                "d3s_200_16\data\skins\200_royal_blue.paa"
            } },
        };

        addons[] = {
            {"nomerf",1},
            {"Black2",1},
            {"THULE",0},
            {"THULE_BLK",0}
        };
    };

    class d3s_200_16_FSB {
        vItemSpace = 180;
        insurance = 37200;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Blanc", "cop", {
                "d3s_200_16\data\skins\200_ao_co.paa"
            } },
            { "Gris", "cop", {
                "d3s_200_16\data\skins\200_ash_grey.paa"
            } },
            { "Noir", "cop", {
                "d3s_200_16\data\skins\200_astral_black.paa"
            } },
            { "Marron", "cop", {
                "d3s_200_16\data\skins\200_copper_brown.paa"
            } },
            { "Rouge", "cop", {
                "d3s_200_16\data\skins\200_regency_red.paa"
            } },
            { "Bleu royal", "cop", {
                "d3s_200_16\data\skins\200_royal_blue.paa"
            } },
        };

        addons[] = {
            
        };
    };

    //  _________________________Lexus LX570_________________________

    class d3s_lx570_16 {
        vItemSpace = 180;
        insurance = 18400;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 220;

        textures[] = {
            { "Crême", "civ", {
                "d3s_lx570_16\data\skins\bieje.paa"
            } },
            { "Noir", "civ", {
                "d3s_lx570_16\data\skins\black.paa"
            } },
            { "Noir foncé", "civ", {
                "d3s_lx570_16\data\skins\black_onyx.paa"
            } },
            { "Bleu foncé", "civ", {
                "d3s_lx570_16\data\skins\deep_blue.paa"
            } },
            { "Blanc", "civ", {
                "d3s_lx570_16\data\skins\lx570_ao_co.paa"
            } },
            { "Maron", "civ", {
                "d3s_lx570_16\data\skins\satin_cashmere.paa"
            } },

        };

        addons[] = {};
    };

    class d3s_lx570_16_FSB {
        vItemSpace = 180;
        insurance = 36600;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 350;

        textures[] = {
            { "Crême", "cop", {
                "d3s_lx570_16\data\skins\bieje.paa"
            } },
            { "Noir", "cop", {
                "d3s_lx570_16\data\skins\black.paa"
            } },
            { "Noir foncé", "cop", {
                "d3s_lx570_16\data\skins\black_onyx.paa"
            } },
            { "Bleu foncé", "cop", {
                "d3s_lx570_16\data\skins\deep_blue.paa"
            } },
            { "Blanc", "cop", {
                "d3s_lx570_16\data\skins\lx570_ao_co.paa"
            } },
            { "Maron", "cop", {
                "d3s_lx570_16\data\skins\satin_cashmere.paa"
            } },
        };

        addons[] = {};
    };

    //  _________________________Mercedes-Benz GL63AMG_________________________

    class d3s_gl63amg_12 {
        vItemSpace = 180;
        insurance = 18400;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Bleu", "civ", {
                "d3s_gl63amg_12\data\skins\gl_ao_blue_co.paa"
            } },
            { "Blanc", "civ", {
                "d3s_gl63amg_12\data\skins\gl_ao_bw_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_gl63amg_12\data\skins\gl_ao_obsidian_co.paa"
            } },
            { "Crême", "civ", {
                "d3s_gl63amg_12\data\skins\gl_ao_palladium_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_gl63amg_12_SE {
        vItemSpace = 180;
        insurance = 34400;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 270;

        textures[] = {};

        addons[] = {};
    };

    class d3s_gl63amg_12_FSB {
        vItemSpace = 180;
        insurance = 31600;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 270;

        textures[] = {
            { "Bleu", "cop", {
                "d3s_gl63amg_12\data\skins\gl_ao_blue_co.paa"
            } },
            { "Blanc", "cop", {
                "d3s_gl63amg_12\data\skins\gl_ao_bw_co.paa"
            } },
            { "Noir", "cop", {
                "d3s_gl63amg_12\data\skins\gl_ao_obsidian_co.paa"
            } },
            { "Crême", "cop", {
                "d3s_gl63amg_12\data\skins\gl_ao_palladium_co.paa"
            } },
        };

        addons[] = {};
    };

    //  _________________________UAZ 3162 Patriot 12_________________________

    class d3s_uaz_3162 {
        vItemSpace = 170;
        insurance = 2200;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 170;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_uaz_3162\data\skins\3162t_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_uaz_3162\data\skins\3162t_ao_black_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_uaz_3162\data\skins\3162t_ao_blue_co.paa"
            } },
            { "Marron", "civ", {
                "d3s_uaz_3162\data\skins\3162t_ao_brown_co.paa"
            } },
            { "Vert", "civ", {
                "d3s_uaz_3162\data\skins\3162t_ao_green_co.paa"
            } },
            { "Orange", "civ", {
                "d3s_uaz_3162\data\skins\3162t_ao_orange_co.paa"
            } },
            { "Rouge", "civ", {
                "d3s_uaz_3162\data\skins\3162t_ao_red_co.paa"
            } },
        };

        addons[] = {};
    };

    //  _________________________UAZ-3159_________________________

    class d3s_uaz_3159 {
        vItemSpace = 180;
        insurance = 1600;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 140;

        textures[] = {
            { "Vert", "narcos", {
                "d3s_uaz_3159\data\3159_body.paa"
            } },
            { "Camo", "narcos", {
                "d3s_uaz_3159\data\3159_body_4.paa"
            } },
        };

        addons[] = {
        };
    };

    //  _________________________UAZ-3159 AMG_________________________

    class d3s_uaz_3159_AMG {
        vItemSpace = 180;
        insurance = 39600;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 330;

        textures[] = {};

        addons[] = {};
    };

    //  _________________________UAZ-3170 Simbir_________________________

    class d3s_uaz_3170 {
        vItemSpace = 170;
        insurance = 1800;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 180;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_uaz_3170\data\skins\3170_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_uaz_3170\data\skins\3170_black.paa"
            } },
            { "Bleu", "civ", {
                "d3s_uaz_3170\data\skins\3170_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_uaz_3170\data\skins\3170_green.paa"
            } },
        };

        addons[] = {
            {"PBar",0},
            {"PCop",0},
            {"PCop2",0},
            {"PCop3",0},
            {"PFront1",1},
            {"PFront2",0},
            {"PEms",0}
        };
    };

    //  _________________________UAZ-469P_________________________

    class d3s_uaz_469P {
        vItemSpace = 170;
        insurance = 2000;
        reservoir = 85;
        fuelfactor = 22;
        vmax = 150;

        textures[] = {
            { "Kaki", "narcos", {
                "d3s_uaz_469\data\skins\469p_mirage.paa"
            } },
        };

        addons[] = {
            {"PCop",0},
            {"PEms",0}
        };
    };

    //  _________________________Willys MB_________________________

    class d3s_willys {
        vItemSpace = 170;
        insurance = 1600;
        reservoir = 56;
        fuelfactor = 15;
        vmax = 150;

        textures[] = {};

        addons[] = {};
    };

    //  _________________________Jeep Trailcat_________________________

    class d3s_trailcat_17 {
        vItemSpace = 160;
        insurance = 15200;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 220;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_green.paa"
            } },
            { "Orange", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_orange.paa"
            } },
            { "Rouge", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_red.paa"
            } },
        };

        addons[] = {
            {"00wheel",1},
            {"00bumpF",1},{"00bumpR",1},
            {"00door",1},{"00foglight",1},{"00lightbar",1},
            {"00rollcage",1},{"00trunk",0},{"00winchhig",1},
            {"0stikers1",0},{"0stikers3",1}
        };
    };

    class d3s_trailcat_17_sahara {
        vItemSpace = 160;
        insurance = 18400;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 250;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_green.paa"
            } },
            { "Orange", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_orange.paa"
            } },
            { "Rouge", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_red.paa"
            } },
        };

        addons[] = {
            {"00wheel",1},
            {"00bumpF",1},{"00bumpR",1},
            {"00door",1},{"00foglight",1},{"00lightbar",1},
            {"00rollcage",1},{"00trunk",0},{"00winchhig",1},
            {"0stikers1",0},{"0stikers3",1}
        };
    };

    class d3s_trailcat_17_M {
        vItemSpace = 160;
        insurance = 23200;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 300;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_green.paa"
            } },
            { "Orange", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_orange.paa"
            } },
            { "Rouge", "civ", {
                "d3s_trailcat_17\data\skins\trailcat_red.paa"
            } },
        };

        addons[] = {
            {"00wheel",1},
            {"00bumpF",1},{"00bumpR",1},
            {"00door",1},{"00foglight",1},{"00lightbar",1},
            {"00rollcage",1},{"00trunk",0},{"00winchhig",1},
            {"0stikers1",0},{"0stikers3",1}
        };
    };

    //  _________________________Buick Skylark_________________________

    class d3s_skylark_52 {
        vItemSpace = 160;
        insurance = 48000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 220;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_skylark_53\data\skins\skylark_ao_co.paa"
            } },
            { "Rouge", "civ", {
                "d3s_skylark_53\data\skins\skylark_bordo.paa"
            } },
            { "Vert", "civ", {
                "d3s_skylark_53\data\skins\skylark_breeze.paa"
            } },
            { "Ivory", "civ", {
                "d3s_skylark_53\data\skins\skylark_ivory.paa"
            } },
            { "Violet", "civ", {
                "d3s_skylark_53\data\skins\skylark_violet.paa"
            } }
        };

        addons[] = {};
    };

    //  _________________________Mercedes-Benz_________________________

    class d3s_g350d_15 {
        vItemSpace = 170;
        insurance = 13600;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 230;

        textures[] = {
            { "Jaune", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_yellow.paa"
            } },
            { "Blanc", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_white.paa"
            } },
            { "Rouge", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_red.paa"
            } },
            { "Sable", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_desert_sand.paa"
            } },
            { "Noir", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_obsidian_black.paa"
            } },
        };

        addons[] = {
            {"Zapaska",1},
            {"Spoiler",0},
            {"HoodA",0},
            {"HoodB",0}
        };
    };

    class d3s_g500_35_15 {
        vItemSpace = 170;
        insurance = 14200;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Jaune", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_yellow.paa"
            } },
            { "Blanc", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_white.paa"
            } },
            { "Rouge", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_red.paa"
            } },
            { "Sable", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_desert_sand.paa"
            } },
            { "Noir", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_obsidian_black.paa"
            } },
        };

        addons[] = {
            {"Zapaska",1},
            {"Spoiler",0},
            {"HoodA",0},
            {"HoodB",0}
        };
    };

    class d3s_g800_17 {
        vItemSpace = 170;
        insurance = 60000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 280;

        textures[] = {
            { "Gris", "civ", {
                "d3s_g65amg_16\data\skins\g850_1_tenorite_grey.paa"
            } },
            { "Blanc", "civ", {
                "d3s_g65amg_16\data\skins\g850_1_ao_co.paa"
            } },
            { "Marron", "civ", {
                "d3s_g65amg_16\data\skins\g850_1_citrin_brown.paa"
            } },
            { "Rouge", "civ", {
                "d3s_g65amg_16\data\skins\g850_1_hyacinth_red.paa"
            } },
            { "Bleu", "civ", {
                "d3s_g65amg_16\data\skins\g850_1_tansanite_blue.paa"
            } },
            { "Noir", "civ", {
                "d3s_g65amg_16\data\skins\g850_obsidian_black.paa"
            } }
        };

        addons[] = {
            {"Spoiler",1, 200},
            {"Zapaska",1},
            {"Bar",1},
            {"Bar2",0},
            {"Shield",0}
        };
    };

    class d3s_g63amg_16 {
        vItemSpace = 170;
        insurance = 18000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Jaune", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_yellow.paa"
            } },
            { "Blanc", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_white.paa"
            } },
            { "Rouge", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_red.paa"
            } },
            { "Sable", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_desert_sand.paa"
            } },
            { "Noir", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_obsidian_black.paa"
            } },
        };

        addons[] = {
            {"Zapaska",0},
            {"Spoiler",1, 200},
            {"HoodA",1},
            {"HoodB",1}
        };
    };

    class d3s_g63amg_16_CE {
        vItemSpace = 170;
        insurance = 20800;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 270;

        textures[] = {
            { "Jaune", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_yellow.paa"
            } },
            { "Blanc", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_white.paa"
            } },
            { "Rouge", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_red.paa"
            } },
            { "Sable", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_desert_sand.paa"
            } },
            { "Noir", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_obsidian_black.paa"
            } },
        };

        addons[] = {
            {"Zapaska",0},
            {"Spoiler",1, 200},
            {"HoodA",1},
            {"HoodB",1}
        };
    };

    class d3s_g63amg_463_16 {
        vItemSpace = 170;
        insurance = 19600;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 270;

        textures[] = {
            { "Jaune", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_yellow.paa"
            } },
            { "Blanc", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_white.paa"
            } },
            { "Rouge", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_red.paa"
            } },
            { "Sable", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_desert_sand.paa"
            } },
            { "Noir", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_obsidian_black.paa"
            } },
        };

        addons[] = {
            {"Zapaska",0},
            {"Spoiler",1, 200},
            {"HoodA",1},
            {"HoodB",1}
        };
    };

    class d3s_g65amg_16 {
        vItemSpace = 170;
        insurance = 32000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 270;

        textures[] = {
            { "Jaune", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_yellow.paa"
            } },
            { "Blanc", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_white.paa"
            } },
            { "Rouge", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_red.paa"
            } },
            { "Sable", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_desert_sand.paa"
            } },
            { "Noir", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_obsidian_black.paa"
            } },
        };

        addons[] = {
            {"Zapaska",0},
            {"Spoiler",1},
            {"HoodA",1},
            {"HoodB",1}
        };
    };

    class d3s_g65amg_17_FINAL {
        vItemSpace = 170;
        insurance = 34400;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 280;

        textures[] = {
            { "Jaune", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_yellow.paa"
            } },
            { "Blanc", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_white.paa"
            } },
            { "Rouge", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_red.paa"
            } },
            { "Sable", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_desert_sand.paa"
            } },
            { "Noir", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_obsidian_black.paa"
            } },
        };

        addons[] = {
            {"Zapaska",0},
            {"Spoiler",1},
            {"HoodA",1},
            {"HoodB",1}
        };
    };

    class d3s_g65amg_Mansory {
        vItemSpace = 170;
        insurance = 35600;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 280;

        textures[] = {
            { "Jaune", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_yellow.paa"
            } },
            { "Blanc", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_white.paa"
            } },
            { "Rouge", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_red.paa"
            } },
            { "Sable", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_desert_sand.paa"
            } },
            { "Noir", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_obsidian_black.paa"
            } },
        };

        addons[] = {
            {"Zapaska",0},
            {"Spoiler",1, 200},
            {"HoodA",1},
            {"HoodB",1}
        };
    };

    class d3s_g65amg_Mansory_2 {
        vItemSpace = 170;
        insurance = 33400;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 280;

        textures[] = {
            { "Jaune", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_yellow.paa"
            } },
            { "Blanc", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_white.paa"
            } },
            { "Rouge", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_red.paa"
            } },
            { "Sable", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_desert_sand.paa"
            } },
            { "Noir", "civ", {
                "d3s_g65amg_16_2\data\skins\mans_1_obsidian_black.paa"
            } },
        };

        addons[] = {
            {"Zapaska",0},
            {"Spoiler",1, 200},
            {"HoodA",1},
            {"HoodB",1}
        };
    };

    class d3s_g850_17 {
        vItemSpace = 170;
        insurance = 85000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 280;

        textures[] = {
            { "Gris", "civ", {
                "d3s_g65amg_16\data\skins\g850_1_tenorite_grey.paa"
            } },
            { "Blanc", "civ", {
                "d3s_g65amg_16\data\skins\g850_1_ao_co.paa"
            } },
            { "Marron", "civ", {
                "d3s_g65amg_16\data\skins\g850_1_citrin_brown.paa"
            } },
            { "Rouge", "civ", {
                "d3s_g65amg_16\data\skins\g850_1_hyacinth_red.paa"
            } },
            { "Bleu", "civ", {
                "d3s_g65amg_16\data\skins\g850_1_tansanite_blue.paa"
            } },
            { "Noir", "civ", {
                "d3s_g65amg_16\data\skins\g850_obsidian_black.paa"
            } }
        };

        addons[] = {
            {"Spoiler",1, 200},
            {"Zapaska",1},
            {"Bar",1},
            {"Bar2",0},
            {"Shield",0}
        };
    };

    class d3s_g63amg_16_FSB {
        vItemSpace = 170;
        insurance = 32000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 270;

        textures[] = {
            { "Jaune", "cop", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_yellow.paa"
            } },
            { "Blanc", "cop", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_white.paa"
            } },
            { "Rouge", "cop", {
                "d3s_g65amg_16_2\data\skins\mans_1_colour_red.paa"
            } },
            { "Sable", "cop", {
                "d3s_g65amg_16_2\data\skins\mans_1_desert_sand.paa"
            } },
            { "Noir", "cop", {
                "d3s_g65amg_16_2\data\skins\mans_1_obsidian_black.paa"
            } },
        };

        addons[] = {};
    };

    //  _________________________Rolls-Royce Dawn_________________________


    class d3s_dawn_16 {
        vItemSpace = 160;
        insurance = 30000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Bleu", "civ", {
                "d3s_dawn_16\data\skins\dawn_metropolian_blue.paa"
            } },
            { "Antracite", "civ", {
                "d3s_dawn_16\data\skins\dawn_antracite_2.paa"
            } },
            { "Jaune", "civ", {
                "d3s_dawn_16\data\skins\dawn_arizona_sun.paa"
            } },
            { "Rouge bohemia", "civ", {
                "d3s_dawn_16\data\skins\dawn_bohemia_red.paa"
            } },
            { "Vert", "civ", {
                "d3s_dawn_16\data\skins\dawn_dark_emerald.paa"
            } },
            { "Gris", "civ", {
                "d3s_dawn_16\data\skins\dawn_darkest_tungsten.paa"
            } },
            { "Noir", "civ", {
                "d3s_dawn_16\data\skins\dawn_diamond_black.paa"
            } },
            { "Bleu Royal", "civ", {
                "d3s_dawn_16\data\skins\dawn_royal_blue.paa"
            } },
        };

        addons[] = {{"nomerf",1}};
    };

    class d3s_dawn_16_II {
        vItemSpace = 160;
        insurance = 32000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Bleu", "civ", {
                "d3s_dawn_16\data\skins\dawn_metropolian_blue.paa"
            } },
            { "Antracite", "civ", {
                "d3s_dawn_16\data\skins\dawn_antracite_2.paa"
            } },
            { "Jaune", "civ", {
                "d3s_dawn_16\data\skins\dawn_arizona_sun.paa"
            } },
            { "Rouge bohemia", "civ", {
                "d3s_dawn_16\data\skins\dawn_bohemia_red.paa"
            } },
            { "Vert", "civ", {
                "d3s_dawn_16\data\skins\dawn_dark_emerald.paa"
            } },
            { "Gris", "civ", {
                "d3s_dawn_16\data\skins\dawn_darkest_tungsten.paa"
            } },
            { "Noir", "civ", {
                "d3s_dawn_16\data\skins\dawn_diamond_black.paa"
            } },
            { "Bleu Royal", "civ", {
                "d3s_dawn_16\data\skins\dawn_royal_blue.paa"
            } },
        };

        addons[] = {{"nomerf",1}};
    };

    class d3s_dawn_16_III {
        vItemSpace = 160;
        insurance = 34000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 250;

        textures[] = {
            { "Bleu", "civ", {
                "d3s_dawn_16\data\skins\dawn_metropolian_blue.paa"
            } },
            { "Antracite", "civ", {
                "d3s_dawn_16\data\skins\dawn_antracite_2.paa"
            } },
            { "Jaune", "civ", {
                "d3s_dawn_16\data\skins\dawn_arizona_sun.paa"
            } },
            { "Rouge bohemia", "civ", {
                "d3s_dawn_16\data\skins\dawn_bohemia_red.paa"
            } },
            { "Vert", "civ", {
                "d3s_dawn_16\data\skins\dawn_dark_emerald.paa"
            } },
            { "Gris", "civ", {
                "d3s_dawn_16\data\skins\dawn_darkest_tungsten.paa"
            } },
            { "Noir", "civ", {
                "d3s_dawn_16\data\skins\dawn_diamond_black.paa"
            } },
            { "Bleu Royal", "civ", {
                "d3s_dawn_16\data\skins\dawn_royal_blue.paa"
            } },
        };

        addons[] = {{"nomerf",1}};
    };

    //  _________________________Lexus IS350_________________________

    class d3s_is_16 {
        vItemSpace = 160;
        insurance = 2200;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 220;

        textures[] = {
            { "Noir", "civ", {
                "d3s_is_16\data\skins\is\black.paa"
            } },
            { "Gris", "civ", {
                "d3s_is_16\data\skins\is\mercury_grey.paa"
            } },
            { "Rouge", "civ", {
                "d3s_is_16\data\skins\is\morello_red.paa"
            } },
            { "Bleu", "civ", {
                "d3s_is_16\data\skins\is\midnight_blue.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_is_16_1 {
        vItemSpace = 160;
        insurance = 3400;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 220;

        textures[] = {
            { "Noir", "civ", {
                "d3s_is_16\data\skins\is\black.paa"
            } },
            { "Gris", "civ", {
                "d3s_is_16\data\skins\is\mercury_grey.paa"
            } },
            { "Rouge", "civ", {
                "d3s_is_16\data\skins\is\morello_red.paa"
            } },
            { "Bleu", "civ", {
                "d3s_is_16\data\skins\is\midnight_blue.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_is_f_16 {
        vItemSpace = 160;
        insurance = 13200;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 220;

        textures[] = {
            { "Silver", "civ", {
                "d3s_is_16\data\skins\is_f\silver_lining.paa"
            } },
            { "Gris", "civ", {
                "d3s_is_16\data\skins\is_f\obaidian.paa"
            } },
            { "Rouge", "civ", {
                "d3s_is_16\data\skins\is_f\matador_red.paa"
            } },
            { "Bleu", "civ", {
                "d3s_is_16\data\skins\is_f\flame_blue.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_is_16_SE {
        vItemSpace = 160;
        insurance = 38200;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 250;

        textures[] = { 
            
        };

        addons[] = {};
    };

    //  _________________________Toyota Avalon_________________________

    class d3s_avalon_18 {
        vItemSpace = 160;
        insurance = 2000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 220;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_avalon_18\data\skins\avl_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_avalon_18\data\skins\avl_blue_crush.paa"
            } },
            { "Marron", "civ", {
                "d3s_avalon_18\data\skins\avl_brownstone.paa"
            } },
            { "Aqua", "civ", {
                "d3s_avalon_18\data\skins\avl_galactic_aqua.paa"
            } },
            { "Flare", "civ", {
                "d3s_avalon_18\data\skins\avl_ruby_flare.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_avalon_18_LTD {
        vItemSpace = 160;
        insurance = 24800;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 250;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_avalon_18\data\skins\avl_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_avalon_18\data\skins\avl_blue_crush.paa"
            } },
            { "Marron", "civ", {
                "d3s_avalon_18\data\skins\avl_brownstone.paa"
            } },
            { "Aqua", "civ", {
                "d3s_avalon_18\data\skins\avl_galactic_aqua.paa"
            } },
            { "Flare", "civ", {
                "d3s_avalon_18\data\skins\avl_ruby_flare.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_avalon_18_SE {
        vItemSpace = 160;
        insurance = 54000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 307;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_avalon_18\data\skins\avl_ao_co.paa"
            } },
            { "Bleu", "civ", {
                "d3s_avalon_18\data\skins\avl_blue_crush.paa"
            } },
            { "Marron", "civ", {
                "d3s_avalon_18\data\skins\avl_brownstone.paa"
            } },
            { "Aqua", "civ", {
                "d3s_avalon_18\data\skins\avl_galactic_aqua.paa"
            } },
            { "Flare", "civ", {
                "d3s_avalon_18\data\skins\avl_ruby_flare.paa"
            } }
        };

        addons[] = {};
    };

    class d3s_avalon_18_night {
        vItemSpace = 160;
        insurance = 57000;
        reservoir = 70;
        fuelfactor = 18;
        vmax = 350;

        textures[] = {};

        addons[] = {};
    };
    

    class d3s_savana_05 {
        vItemSpace = 180;
        insurance = 5600;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 200;

        textures[] = {
            { "Bleu", "civ", {
                "d3s_savana_05\data\skins\deep_blue.paa"
            } },
            { "Rouge", "civ", {
                "d3s_savana_05\data\skins\fire_red.paa"
            } },
            { "Noir", "civ", {
                "d3s_savana_05\data\skins\onyx_black.paa"
            } },
            { "Vert", "civ", {
                "d3s_savana_05\data\skins\polo_green.paa"
            } },
            { "Silver", "civ", {
                "d3s_savana_05\data\skins\pure_silver.paa"
            } },
            { "Beige", "civ", {
                "d3s_savana_05\data\skins\sand_beige.paa"
            } },
            { "Blanc", "civ", {
                "d3s_savana_05\data\skins\sav_ao_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_savana_VAN {
        vItemSpace = 250;
        insurance = 5200;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 200;

        textures[] = {
            { "Bleu", "civ", {
                "d3s_savana_05\data\skins\deep_blue.paa"
            } },
            { "Rouge", "civ", {
                "d3s_savana_05\data\skins\fire_red.paa"
            } },
            { "Noir", "civ", {
                "d3s_savana_05\data\skins\onyx_black.paa"
            } },
            { "Vert", "civ", {
                "d3s_savana_05\data\skins\polo_green.paa"
            } },
            { "Silver", "civ", {
                "d3s_savana_05\data\skins\pure_silver.paa"
            } },
            { "Beige", "civ", {
                "d3s_savana_05\data\skins\sand_beige.paa"
            } },
            { "Blanc", "civ", {
                "d3s_savana_05\data\skins\sav_ao_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_uaz_3165M {
        vItemSpace = 180;
        insurance = 4400;
        reservoir = 120;
        fuelfactor = 32;
        vmax = 180;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_uaz_3165\data\skins\3165_ao_co.paa"
            } },
            { "Noir", "civ", {
                "d3s_uaz_3165\data\skins\3165_black.paa"
            } },
            { "Bleu", "civ", {
                "d3s_uaz_3165\data\skins\3165_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_uaz_3165\data\skins\3165_green.paa"
            } },
            { "Kaki", "civ", {
                "d3s_uaz_3165\data\skins\3165_mirage.paa"
            } },
        };

        addons[] = {
            {"PBar",0},
            {"PCop",0},
            {"PCop2",0},
            {"PCop3",0},
            {"PFront1",1},
            {"PFront2",0},
            {"PEms",0}
        };
    };

    

    

    

    


    
    //  _________________________ВАЗ-2359 Нива_________________________

    class d3s_niva_2329 {
        vItemSpace = 200;
        insurance = 2400;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 170;

        textures[] = {
            { "Camo 1", "narcos", {
                "d3s_niva_2329\data\skins\2329_ao_camo1.paa"
            } },
            { "Camo 2", "narcos", {
                "d3s_niva_2329\data\skins\2329_ao_camo3.paa"
            } },
            { "Camo 3", "narcos", {
                "d3s_niva_2329\data\skins\2329_ao_camo4.paa"
            } },
            { "Camo 4", "narcos", {
                "d3s_niva_2329\data\skins\2329_ao_camo5.paa"
            } },
            { "Camo 5", "narcos", {
                "d3s_niva_2329\data\skins\2329_ao_camo6.paa"
            } },
            { "Camo 6", "narcos", {
                "d3s_niva_2329\data\skins\2329_ao_camo7.paa"
            } },
            { "Camo 7", "narcos", {
                "d3s_niva_2329\data\skins\2329_ao_camo9.paa"
            } }
        };

        addons[] = {};
    };

    //  _________________________ГАЗ-2975 ''Тигр''_________________________

    class d3s_tiger_2975 {
        vItemSpace = 220;
        insurance = 44000;
        reservoir = 170;
        fuelfactor = 45;
        vmax = 220;

        textures[] = {
            { "Camo 1", "narcos", {
                "d3s_tiger_2975\data\skins\camo2.paa"
            } },
            { "Camo 2", "narcos", {
                "d3s_tiger_2975\data\skins\camo5.paa"
            } },
            { "Camo 3", "narcos", {
                "d3s_tiger_2975\data\skins\camo7.paa"
            } },
            { "Camo 4", "narcos", {
                "d3s_tiger_2975\data\skins\camo8.paa"
            } }
        };

        addons[] = {
            {"PART1",1},
            {"PART2",1},
            {"COP",0},
            {"ZAP",1},
            {"ANN",1}
        };
    };

    //  _________________________Land Rover Defender_________________________

    class chdefender_grimp {
        vItemSpace = 200;
        insurance = 3000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 189;

        textures[] = {};

        addons[] = {};
    };
    
    class chdefender_vlhr {
        vItemSpace = 170;
        insurance = 3000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 189;

        textures[] = {};

        addons[] = {};
    };
    
    class chdefender_vsavhr {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 95;
        fuelfactor = 25;
        vmax = 189;

        textures[] = {};

        addons[] = {};
    };


    // Camions

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    

    


    //Cop

    class Gendarmerie_Touereg {
        vItemSpace = 170;
        insurance = 11000;
        reservoir = 85;
        fuelfactor = 22;
        textures[] = {};
        addons[] = {};

        class caches {};
    };

    

    

    

    

    class d3s_escalade_16_cop {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_g63amg_16_Police {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_srthellcat_15_CPP {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_savana_INKAS {
        vItemSpace = 400;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    

    

    

    

    

    

    

    

    // Pompiers
    
    
    
    
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    class Dacia_Duster_vlhr {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };
    


    //  _______________________________________ZAMAK CIVIL__________________________________________________

    class C_Truck_02_transport_F {      //      Zamak Transport
        vItemSpace = 446;
        insurance = 10500;
        reservoir = 320;
        fuelfactor = 35;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Bleu", "civ", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_blue_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Gris", "civ", {
                "#(argb,8,8,3)color(0.4,0.4,0.4,0.1)",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 15; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    class C_Truck_02_covered_F {        //      Zamak Transport (Covered)
        vItemSpace = 456;
        insurance = 11000;
        reservoir = 320;
        fuelfactor = 35;
        textures[] = {
            { "Orange & Bleu", "civ", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Orange & Olive", "civ", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_olive_co.paa"
            } },
            { "Bleu & Bleu", "civ", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_blue_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Bleu & Olive", "civ", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_blue_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_olive_co.paa"
            } },
            { "Noir & Bleu", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Noir & Olive", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_olive_co.paa"
            } },
            { "Gris & Bleu", "civ", {
                "#(argb,8,8,3)color(0.4,0.4,0.4,0.1)",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Gris & Olive", "civ", {
                "#(argb,8,8,3)color(0.4,0.4,0.4,0.1)",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_olive_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 15; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    class C_Truck_02_box_F {      //      Zamak reparation
        vItemSpace = 466;
        insurance = 11500;
        reservoir = 320;
        fuelfactor = 35;
        textures[] = {
            { "Bleu & Vert", "civ", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_blue_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_repair_green_co.paa"
            } },
            { "Orange & Vert", "civ", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_repair_green_co.paa"
            } },
            { "Bleu & Orange", "civ", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_blue_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_repair_co.paa"
            } },
            { "Orange & Orange", "civ", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_repair_co.paa"
            } },
            { "Noir & Orange", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "a3\soft_f_beta\truck_02\data\truck_02_repair_co.paa"
            } },
            { "Noir & Orange", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "a3\soft_f_beta\truck_02\data\truck_02_repair_co.paa"
            } },
            { "Gris & Orange", "civ", {
                "#(argb,8,8,3)color(0.4,0.4,0.4,0.1)",
                "a3\soft_f_beta\truck_02\data\truck_02_repair_co.paa"
            } },
            { "Gris & Orange", "civ", {
                "#(argb,8,8,3)color(0.4,0.4,0.4,0.1)",
                "a3\soft_f_beta\truck_02\data\truck_02_repair_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 15; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    class  C_Truck_02_fuel_F {        //      Zamak Citerne
        vItemSpace = 50;
        insurance = 12000;
        reservoir = 320;
        fuelfactor = 35;
        citerne = 7000;
        textures[] = {
            { "Orange & Bleu", "civ", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_fuel_co.paa"
            } },
            { "Bleu & Bleu", "civ", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_blue_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_fuel_co.paa"
            } },
            { "Noir & Bleu", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "a3\soft_f_beta\truck_02\data\truck_02_fuel_co.paa"
            } },
            { "Gris & Bleu", "civ", {
                "#(argb,8,8,3)color(0.4,0.4,0.4,0.1)",
                "a3\soft_f_beta\truck_02\data\truck_02_fuel_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 15; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    //  _________________________________________VAN____________________________________________________

    class C_Van_01_transport_F {    // Van transport
        vItemSpace = 250;
        insurance = 5500;
        reservoir = 100;
        fuelfactor = 22;
        textures[] = {

            { "Blanc", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            } },
            { "Marron", "civ", {
                "a3\soft_f_exp\van_01\data\van_01_ext_brn_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                "a3\soft_f_exp\van_01\data\van_01_int_base_2_co.paa"
            } },
            { "Noir", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_black_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            } },
            { "Olive", "civ", {
                "a3\soft_f_exp\van_01\data\van_01_ext_oli_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                "a3\soft_f_exp\van_01\data\van_01_int_base_3_co.paa"
            } },
            { "Rouge", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_red_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    class C_Van_01_box_F {          //      Truck Boxer 
        vItemSpace = 270;
        insurance = 6250;
        reservoir = 100;
        fuelfactor = 22;
        textures[] = {
            { "Blanc", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                ""
            } },
            { "Noir", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_black_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                ""
            } },
            { "Rouge", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_red_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                ""
            } },
            { "Olive", "civ", {
                "a3\soft_f_exp\van_01\data\van_01_ext_oli_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                ""
            } },
            { "Marron", "civ", {
                "a3\soft_f_exp\van_01\data\van_01_ext_brn_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                ""
            } },
            { "Rouge", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_red_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",
                ""
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    class C_Van_01_fuel_F {          //      Van citerne 
        vItemSpace = 50;
        insurance = 7000;
        reservoir = 100;
        fuelfactor = 22;
        citerne = 4000;
        textures[] = {
            { "Blanc et citerne: blanc/noir", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_tank_co.paa",
                ""
            } },
            { "Blanc et citerne: blanc/rouge", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_tank_red_co.paa",
                ""
            } },
            { "Noir et citerne: blanc/noir", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_black_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_tank_co.paa",
                ""
            } },
            { "Noir et citerne: blanc/rouge", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_black_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_tank_red_co.paa",
                ""
            } },
            { "Rouge et citerne: blanc/noir", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_red_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_tank_co.paa",
                ""
            } },
            { "Rouge et citerne: blanc/rouge", "civ", {
                "a3\soft_f_gamma\van_01\data\van_01_ext_red_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_tank_red_co.paa",
                ""
            } },
            { "Olive et citerne: blanc/noir", "civ", {
                "a3\soft_f_exp\van_01\data\van_01_ext_oli_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_tank_co.paa",
                ""
            } },
            { "Olive et citerne: blanc/rouge", "civ", {
                "a3\soft_f_exp\van_01\data\van_01_ext_oli_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_tank_red_co.paa",
                ""
            } },
            { "Marron et citerne: blanc/noir", "civ", {
                "a3\soft_f_exp\van_01\data\van_01_ext_brn_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_tank_co.paa",
                ""
            } },
            { "Marron et citerne: blanc/rouge", "civ", {
                "a3\soft_f_exp\van_01\data\van_01_ext_brn_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_tank_red_co.paa",
                ""
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    //  _________________________________________VAN REBEL____________________________________________________

    class O_G_Van_01_transport_F {    // Van transport
        vItemSpace = 260;
        insurance = 5500;
        reservoir = 100;
        fuelfactor = 22;
        textures[] = {
            { "Camo 1 vert/beige", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_01_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_01_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            } },
            { "Camo 2 beige/vert", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_02_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_02_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            } },
            { "Camo 3 marron/vert/beige", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_03_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_03_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            } },
            { "Camo 4 beige/vert/noir", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_04_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_04_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            } },
            { "Camo 5 vert/marron/beige", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_05_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_05_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            } },
            { "Camo 6 beige/marron/vert", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_06_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_06_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            } },
            { "Camo 7 vert/marron/noir", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_07_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_07_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            } },
            { "Camo 8 beige/gris/noir", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_08_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_08_co.paa",
                "a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    class O_G_Van_01_box_red_F {          //      Truck Boxer 
        vItemSpace = 270;
        insurance = 6250;
        reservoir = 100;
        fuelfactor = 22;
        textures[] = {
            { "Camo 1 vert/beige", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_01_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_01_co.paa",
                ""
            } },
            { "Camo 2 beige/vert", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_02_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_02_co.paa",
                ""
            } },
            { "Camo 3 marron/vert/beige", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_03_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_03_co.paa",
                ""
            } },
            { "Camo 4 beige/vert/noir", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_04_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_04_co.paa",
                ""
            } },
            { "Camo 5 vert/marron/beige", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_05_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_05_co.paa",
                ""
            } },
            { "Camo 6 beige/marron/vert", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_06_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_06_co.paa",
                ""
            } },
            { "Camo 7 vert/marron/noir", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_07_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_07_co.paa",
                ""
            } },
            { "Camo 8 beige/gris/noir", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_08_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_adds_ig_08_co.paa",
                ""
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    class O_G_Van_01_fuel_F {          //      Van citerne 
        vItemSpace = 50;
        insurance = 7000;
        reservoir = 100;
        fuelfactor = 22;
        citerne = 4000;
        textures[] = {
            { "Camo 1 vert/beige", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_01_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_tank_ig_01_co.paa",
                ""
            } },
            { "Camo 2 beige/vert", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_02_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_tank_ig_02_co.paa",
                ""
            } },
            { "Camo 3 marron/vert/beige", "narcos", {
                "a3\soft_f_bootcamp\van_01\data\van_01_ext_ig_03_co.paa",
                "a3\soft_f_bootcamp\van_01\data\van_01_tank_ig_03_co.paa",
                ""
            } }
        };

        class caches {
            class wheels { trunk = 10; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    //  _______________________________________ZAMAK narcosEL__________________________________________________

    class I_Truck_02_transport_F {      //      Zamak Transport
        vItemSpace = 446;
        insurance = 10500;
        reservoir = 320;
        fuelfactor = 35;
        textures[] = {
            { "Hex sable", "narcos", {
               "a3\soft_f_beta\truck_02\data\truck_02_kab_opfor_co.paa",
               "a3\soft_f_beta\truck_02\data\truck_02_kuz_opfor_co.paa"
            } },
            { "Num vert", "narcos", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_indp_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_kuz_indp_co.paa"
            } },
            { "LDF", "narcos", {
                "a3\soft_f_enoch\truck_02\data\truck_02_kab_eaf_co.paa",
                "a3\soft_f_enoch\truck_02\data\truck_02_kuz_eaf_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 15; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    class I_Truck_02_covered_F {        //      Zamak Transport (Covered)
        vItemSpace = 456;
        insurance = 11000;
        reservoir = 320;
        fuelfactor = 35;
        textures[] = {
            { "Hex sable", "narcos", {
               "a3\soft_f_beta\truck_02\data\truck_02_kab_opfor_co.paa",
               "a3\soft_f_beta\truck_02\data\truck_02_kuz_opfor_co.paa"
            } },
            { "Num vert", "narcos", {
               "a3\soft_f_beta\truck_02\data\truck_02_kab_indp_co.paa",
               "a3\soft_f_beta\truck_02\data\truck_02_kuz_indp_co.paa"
            } },
            { "LDF", "narcos", {
                "a3\soft_f_enoch\truck_02\data\truck_02_kab_eaf_co.paa",
                "a3\soft_f_enoch\truck_02\data\truck_02_kuz_eaf_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 15; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    class I_Truck_02_box_F {      //      Zamak reparation
        vItemSpace = 466;
        insurance = 11500;
        reservoir = 320;
        fuelfactor = 35;
        textures[] = {
            { "Hex sable", "narcos", {
               "a3\soft_f_beta\truck_02\data\truck_02_kab_opfor_co.paa",
               "a3\soft_f_beta\truck_02\data\truck_02_repair_opfor_co.paa"
            } },
            { "Num vert", "narcos", {
                "a3\soft_f_beta\truck_02\data\truck_02_kab_indp_co.paa",
                "a3\soft_f_beta\truck_02\data\truck_02_repair_indp_co.paa"
            } },
            { "LDF", "narcos", {
                "a3\soft_f_enoch\truck_02\data\truck_02_kab_eaf_co.paa",
                "a3\soft_f_enoch\truck_02\data\truck_02_repair_eaf_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 15; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    class  I_Truck_02_fuel_F {        //      Zamak Citerne
        vItemSpace = 50;
        insurance = 12000;
        reservoir = 320;
        fuelfactor = 35;
        citerne = 7000;
        textures[] = {
            { "Hex sable", "narcos", {
               "a3\soft_f_beta\truck_02\data\truck_02_kab_opfor_co.paa",
               "a3\soft_f_beta\truck_02\data\truck_02_fuel_opfor_co.paa"
            } },
            { "Num vert", "narcos", {
               "a3\soft_f_beta\truck_02\data\truck_02_kab_indp_co.paa",
               "a3\soft_f_beta\truck_02\data\truck_02_fuel_indp_co.paa"
            } },
            { "LDF", "narcos", {
                "a3\soft_f_enoch\truck_02\data\truck_02_kab_eaf_co.paa",
                "a3\soft_f_enoch\truck_02\data\truck_02_fuel_eaf_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 15; };
            class seat { trunk = 6; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 10; };
        };
    };

    //  _______________________________________HEMTT__________________________________________________


    class B_Truck_01_mover_F {      //      HEMTT Sans remorque
        vItemSpace = 150;
        insurance = 20000;
        reservoir = 587;
        fuelfactor = 50;
        textures[] = {
            { "Sable", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "a3\soft_f_gamma\truck_01\data\truck_01_mprimer_co.paa"
            } },
            { "Vert", "civ", {
                "a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_mprimer_olive_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 25; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 5; };
            class carrosserie { trunk = 5; };
        };
    };

    class B_Truck_01_flatbed_F {        //      HEMTT Plateau
        vItemSpace = 390;
        insurance = 25000;
        reservoir = 587;
        fuelfactor = 50;
        textures[] = { 
            { "Sable", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "a3\soft_f_enoch\truck_01\data\truck_01_ammo_co.paa",
                "a3\soft_f_enoch\truck_01\data\truck_01_cargo_co.paa"
            } },
            { "Vert", "civ", {
                "a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "a3\soft_f_enoch\truck_01\data\truck_01_ammo_pacific_co.paa",
                "a3\soft_f_enoch\truck_01\data\truck_01_cargo_pacific_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 25; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    class B_Truck_01_cargo_F {        //      HEMTT Fret
        vItemSpace = 395; // TODO
        insurance = 26250; // TODO
        reservoir = 587;
        fuelfactor = 50;
        textures[] = { 
            { "Sable", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "a3\soft_f_enoch\truck_01\data\truck_01_ammo_co.paa",
                "a3\soft_f_enoch\truck_01\data\truck_01_cargo_co.paa"
            } },
            { "Vert", "civ", {
                "a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "a3\soft_f_enoch\truck_01\data\truck_01_ammo_pacific_co.paa",
                "a3\soft_f_enoch\truck_01\data\truck_01_cargo_pacific_co.paa"
            } }
        };

        class caches { // TODO
            class wheels { trunk = 25; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    class B_Truck_01_ammo_F {      //      HEMTT munitions
        vItemSpace = 400;
        insurance = 27500;
        reservoir = 587;
        fuelfactor = 50;
        textures[] = {
            { "Sable", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa"
            } },
            { "Vert", "civ", {
                "a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 25; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    class B_Truck_01_transport_F {      //      HEMTT Transport
        vItemSpace = 405;
        insurance = 28750;
        reservoir = 587;
        fuelfactor = 50;
        textures[] = {
            { "Sable", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa"
            } },
            { "Vert", "civ", {
                "a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_cargo_olive_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 25; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    class B_Truck_01_covered_F {      //      HEMTT couvert
        vItemSpace = 410;
        insurance = 30000;
        reservoir = 587;
        fuelfactor = 50;
        textures[] = {
            { "Sable", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"
            } },
            { "Vert", "civ", {
                "a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_cargo_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_cover_olive_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 25; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    

    class B_Truck_01_box_F {        //      HEMTT Box
        vItemSpace = 416;
        insurance = 31250;
        reservoir = 587;
        fuelfactor = 50;
        textures[] = {
            { "Sable (cargo bleu)", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa",
                "a3\structures_f\data\metal\containers\containers_01_set_co.paa"
            } },
            { "Vert (cargo bleu)", "civ", {
                "a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ammo_olive_co.paa",
                "a3\structures_f\data\metal\containers\containers_01_set_co.paa"
            } },
            { "Sable (cargo olive)", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa",
                "a3\structures_f\data\metal\containers\containers_02_set_co.paa"
            } },
            { "Vert (cargo olive)", "civ", {
                "a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ammo_olive_co.paa",
                "a3\structures_f\data\metal\containers\containers_02_set_co.paa"
            } },            
            { "Sable (cargo orange)", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "a3\soft_f_gamma\truck_01\data\truck_01_ammo_co.paa",
                "a3\structures_f\data\metal\containers\Containers_colors_03_co.paa"
            } },
            { "Vert (cargo orange)", "civ", {
                "a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ammo_olive_co.paa",
                "a3\structures_f\data\metal\containers\Containers_colors_03_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 25; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    class B_Truck_01_fuel_F {        //      HEMTT Fuel
        vItemSpace = 70;
        insurance = 32500;
        reservoir = 587;
        fuelfactor = 50;
        citerne = 15000;
        textures[] = { 
            { "Sable", "civ", {
                "a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
                "a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
                "a3\soft_f_gamma\truck_01\data\truck_01_fuel_co.paa"
            } },
            { "Vert", "civ", {
                "a3\soft_f_exp\truck_01\data\truck_01_ext_01_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_ext_02_olive_co.paa",
                "a3\soft_f_exp\truck_01\data\truck_01_fuel_olive_co.paa"
            } }
        };

        class caches {
            class wheels { trunk = 25; };
            class seat { trunk = 5; };
            class fauxplancher { trunk = 20; };
            class carrosserie { trunk = 20; };
        };
    };

    class d3s_zil_131_5 {   // NON UTILISE
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 250;
        fuelfactor = 83;
        vmax = 0;

        textures[] = {
            { "Blanc \ Rouge", "civ", {
               "d3s_zil_131\data\skins\130_body_ltx_co.paa"
            } },
            { "Kaki", "narcos", {
               "d3s_zil_131\data\skins\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_131\data\skins\130_body_green_co.paa"
            } },
            { "Orange", "civ", {
               "d3s_zil_130\data\130_body_orange_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_zil_131_3 {   // NON UTILISE
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 250;
        fuelfactor = 83;
        vmax = 0;

        textures[] = {
            { "Blanc \ Rouge", "civ", {
               "d3s_zil_131\data\skins\130_body_ltx_co.paa"
            } },
            { "Kaki", "narcos", {
               "d3s_zil_131\data\skins\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_131\data\skins\130_body_green_co.paa"
            } },
            { "Orange", "civ", {
               "d3s_zil_130\data\130_body_orange_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_zil_130 {      // NON UTILISE
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {
            { "Blanc", "civ", {
               "d3s_zil_130\data\130_body_ltx_co.paa"
            } },
            { "Kaki", "civ", {
               "d3s_zil_130\data\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_130\data\130_body_green_co.paa"
            } },
            { "Bleu", "civ", {
               "d3s_zil_130\data\130_body_blue_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_zil_130_07 {      // NON UTILISE
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        citerne = 4000;
        vmax = 0;

        textures[] = {
            { "Blanc", "civ", {
               "d3s_zil_130\data\130_body_ltx_co.paa"
            } },
            { "Kaki", "civ", {
               "d3s_zil_130\data\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_130\data\130_body_green_co.paa"
            } },
            { "Bleu", "civ", {
               "d3s_zil_130\data\130_body_blue_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_zil_130_03 {      // NON UTILISE
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {
            { "Blanc", "civ", {
               "d3s_zil_130\data\130_body_ltx_co.paa"
            } },
            { "Kaki", "civ", {
               "d3s_zil_130\data\130_body_co.paa"
            } },
            { "Vert", "civ", {
               "d3s_zil_130\data\130_body_green_co.paa"
            } },
            { "Bleu", "civ", {
               "d3s_zil_130\data\130_body_blue_co.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_gaz66_KUNG {      // NON UTILISE
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 210;
        fuelfactor = 70;
        vmax = 0;

        textures[] = {};

        addons[] = {};
    };

    class d3s_kamaz_4350_kung {    // NON UTILISE
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 300;
        fuelfactor = 100;
        vmax = 0;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\6350_ao.paa"
            } },
            { "Kaki", "civ", {
                "d3s_kamaz\data\skins\6350_ao_black.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\6350_ao_green.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\6350_ao_military.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_next_kung { // NON UTILISE
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 320;
        fuelfactor = 107;
        citerne = 4000;
        vmax = 0;

        textures[] = {
            { "Bleu", "civ", {
               "d3s_ural_next\data\skins\next_cab_blue.paa"
            } },
            { "Vert", "civ", {
               "d3s_ural_next\data\skins\next_cab_green.paa"
            } },
            { "Kaki", "civ", {
               "d3s_ural_next\data\skins\next_cab_haki.paa"
            } },
            { "Orange", "civ", {
               "d3s_ural_next\data\skins\next_cab_orange.paa"
            } },
            { "Rouge", "civ", {
               "d3s_ural_next\data\skins\next_cab_red.paa"
            } },
            { "Blanc", "civ", {
               "d3s_ural_next\data\skins\next_cab.paa"
            } },
        };

        addons[] = {};
    };

    class d3s_kamaz_kung {
        vItemSpace = 160;
        insurance = 3000;
        reservoir = 65;
        fuelfactor = 12;
        vmax = 0;

        textures[] = {
            { "Blanc", "civ", {
                "d3s_kamaz\data\skins\4310_ao.paa"
            } },
            { "Noir", "civ", {
                "d3s_kamaz\data\skins\4310_ao_black.paa"
            } },
            { "Bleu", "civ", {
                "d3s_kamaz\data\skins\4310_ao_blue.paa"
            } },
            { "Vert", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green.paa"
            } },
            { "Vert 2", "civ", {
                "d3s_kamaz\data\skins\4310_ao_green2.paa"
            } },
            { "Camo", "narcos", {
                "d3s_kamaz\data\skins\4310_ao_military.paa"
            } },
            { "Orange", "civ", {
                "d3s_kamaz\data\skins\4310_ao_orange.paa"
            } },
        };

        addons[] = {};
    };









};

