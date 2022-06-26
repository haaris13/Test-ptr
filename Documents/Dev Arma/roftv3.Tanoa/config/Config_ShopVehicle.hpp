/*

    Config : CfgCarShops
    Shop Vehicle
    Autor :  Bryan "Tonic" Boardwine, IronBlade

*/

class CfgCarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: SCALAR (Rental Price)
    *        2: ARRAY (license required)
    *            Ex: { "driver", "trucking", "rebel" }
    *        3: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */

    
    /** ********************************************************************************************
        START : SHOP COP (Avant la proposition par Karma THOMAS)
    ********************************************************************************************* */
    /*class cop_car {
        side = "cop";
        vehicles[] = {
            { "Mk3Plu_Gendarmerie", 3200, { "" }, { "life_coplevel", "SCALAR", 3 } },
            { "Tahoelu_Gendarmerie", 1900, { "" }, { "life_coplevel", "SCALAR", 4 } },
            { "ML63Plu_Gendarmerie", 2800, { "" }, { "life_coplevel", "SCALAR", 2 } }, 
            { "RS3lu_Gendarmerie", 1000, { "" }, { "life_coplevel", "SCALAR", 5 } },
            { "M5lu_Gendarmerie", 9000, { "" }, { "life_coplevel", "SCALAR", 6 } },
            { "RS6_Avant_Gendarmerie", 1600, { "" }, { "life_coplevel", "SCALAR", 7 } },
            { "RS7Plu_Gendarmerie", 19000, { "" }, { "life_coplevel", "SCALAR", 8 } },
            { "C63Slu_Gendarmerie", 2900, { "" }, { "life_coplevel", "SCALAR", 9 } }, 
            { "AlessioM4GND", 4500, { "" }, { "life_coplevel", "SCALAR", 4 } },
            { "G65lu_Gendarmerie", 4900, { "" }, { "life_coplevel", "SCALAR", 8 } },
            { "Abarth500lu_Gendarmerie", 4900, { "" }, { "life_coplevel", "SCALAR", 3 } },
            { "berlingo1_gn", 4900, { "" }, { "life_coplevel", "SCALAR", 1 } },
            { "chtondeuse_gn", 4900, { "" }, { "life_coplevel", "SCALAR", 12 } },
            { "chds_21_gn", 4900, { "" }, { "life_coplevel", "SCALAR", 9 } },
            { "4l_gn", 4900, { "" }, { "life_coplevel", "SCALAR", 1 } },
            { "chsm_gn", 4900, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "cha110_gn", 4900, { "" }, { "life_coplevel", "SCALAR", 5 } }
        };
    };
    // Véhicule spécialisation Gendarmerie

    class cop_EDSR {
        side = "cop";
        vehicles[] = {
            { "Chironlu_Gendarmerie", 5550, { "" }, { "life_coplevel", "SCALAR", 2 } },     //rapide
            { "F12lu_Gendarmerie", 3550, { "" }, { "life_coplevel", "SCALAR", 2 } },    // rapide
            { "FocusRSlu_Gendarmerie", 10050, { "" }, { "life_coplevel", "SCALAR", 2 } },   //rapide
            { "Gallardolu_Gendarmerie", 6650, { "" }, { "life_coplevel", "SCALAR", 2 } },   //rapide
            { "GT3lu_Gendarmerie", 6550, { "" }, { "life_coplevel", "SCALAR", 2 } },    //rapide
            { "Macanlu_Gendarmeire", 5550, { "" }, { "life_coplevel", "SCALAR", 2 } },        //rapide
            { "1200RT_gn_ch", 5550, { "" }, { "life_coplevel", "SCALAR", 2 } },        //rapide
            { "FJR1300_gn_ch", 5550, { "" }, { "life_coplevel", "SCALAR", 2 } }        //rapide
        };
    };

    class cop_GIGN {
        side = "cop";
        vehicles[] = {
            { "VAB_AT", 4500, { "" }, { "life_coplevel", "SCALAR", 2 } },     //GIP
            { "VBL_AT", 4500, { "" }, { "life_coplevel", "SCALAR", 2 } }     //GIP
        };
    };

    class cop_ban {
        side = "cop";
        vehicles[] = {
            { "AlessioRS5cop", 6000, { "" }, { "life_coplevel", "SCALAR", 2 } },    //bana
            { "chrr_svr_bac", 4000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "chKodiaq_bac", 2100, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "chgolf7_bac", 2500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_ctsv_16_unm", 2500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_300_12_UNM", 2500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_challenger_15_CPU", 3500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_taurus_UNM_10", 4050, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_camry_18_UNM", 5500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_f86_15_UNM", 2500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_escalade_16_unm", 2580, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_tahoe_UNM", 3000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_durango_18_UNM", 2500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_explorer_UNM_13", 2500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_raptor_UNM_17", 2500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_cherokee_18_UNM", 2500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "d3s_vklasse_17_UNM", 3300, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "RS6_AvantBlu", 6000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "RS6_AvantBlu_GMK", 6100, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "RS6_AvantBlu_GMK2", 6000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "ML63Blu", 6700, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "C63S_GMKBana", 6100, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "CLA45lu_civ_B", 6100, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "G65lu_B", 6100, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "G65OFFlu_B", 6100, { "" }, { "life_coplevel", "SCALAR", 2 }}
        };
    };


    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", 1000, { "" }, { "life_coplevel", "SCALAR", 2 } }, 
            { "CY_GENDARMERIE_EC635", 1000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "B_Plane_CAS_01_dynamicLoadout_F", 1000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "NH90", 1000, { "" }, { "life_coplevel", "SCALAR", 2 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "I_C_Boat_Transport_02_F", 1200, { "" }, { "", "", -1 }, {""} }, 
            { "Vedette_gendarmerie", 1300, { "" }, { "", "", -1 }, {""} },
            { "B_Boat_Armed_01_minigun_F", 5000, { "" }, { "", "", -1 }, {""} },
            { "B_SDV_01_F", 5000, { "" }, { "", "", -1 }, {""} }
        };
    };

    class cop_mobile {
        side = "cop";
        vehicles[] = {
            { "IvecoCh_GN", 1000, { "" }, { "life_coplevel", "SCALAR", 2 } }, // 
            { "Manlu", 1000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "chrenault_bdf", 1000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "chscania_bdf", 1000, { "" }, { "life_coplevel", "SCALAR", 2 } }
        };
    };
    */

    /** ********************************************************************************************
        START : SHOP COP
    ********************************************************************************************* */
    
    // veichule terestre serigraphie gendarmerie
    class cop_car {
        side = "cop";
        vehicles[] = {
            { "Alessio206_N", 5500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture peugot 206
            { "AlessioVIR_N", 5500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture peugot 206
            
            { "AlessioM4_N", 1500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture citroen c4
            { "AlessioRS4N", 4500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // 
            { "AlessioMustangN", 4500, { "" }, { "life_coplevel", "SCALAR", 2 } }, // rs 3
            { "golf7_N", 4500, { "" }, { "life_coplevel", "SCALAR", 2 } }, // rs 3
            { "mondeovignale_N", 4500, { "" }, { "life_coplevel", "SCALAR", 2 } }, // rs 3
            { "mondeosw_N", 4500, { "" }, { "life_coplevel", "SCALAR", 3 } }, // rs 3
            { "Kodiaq_N", 4500, { "" }, { "life_coplevel", "SCALAR", 8 } }, // rs 3


            { "AlessioTouareg_N", 1500, { "" }, { "life_coplevel", "SCALAR", 4 } }, // voiture BMW M4
            { "d3s_escalade_16_cop", 1500, { "" }, { "life_coplevel", "SCALAR", 4 } }, // 4x4 scodia kodiaq 
            { "d3s_cherokee_18_JPPV", 1500, { "" }, { "life_coplevel", "SCALAR", 2 } }, // 4x4 dacia duster
            { "d3s_titan_17_PPV", 1500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // utilitaire peugot partner2 
            { "V12_SVRCOP", 1500, { "" }, { "life_coplevel", "SCALAR", 2 } }, // utilitaire peugeot expert3
            { "V12_CLASSX_POLICE", 2000, { "" }, { "life_coplevel", "SCALAR", 4 } }, // voiture clio IV
            { "kangooII1_N", 2000, { "" }, { "life_coplevel", "SCALAR", 4 } }, // voiture megane estate
            { "Trafic3_N", 2000, { "" }, { "life_coplevel", "SCALAR", 4 } }, // 4x4 land rover defender 
            { "Master3p2_N", 2000, { "" }, { "life_coplevel", "SCALAR", 4 } }, // 4x4 ford ranger 3
            { "Trafic_gn", 2000, { "" }, { "life_coplevel", "SCALAR", 4 } }, // utilitaire renault trafic
            { "Mer_Vito_gn", 2000, { "" }, { "life_coplevel", "SCALAR", 4 } }, // utilitaire mercedes-benz vito
            { "chfocussw3p2_gn", 2500, { "" }, { "life_coplevel", "SCALAR", 10 } }, // voiture ford focus sw3
            { "chfcrs", 2500, { "" }, { "life_coplevel", "SCALAR", 10 } }, // voiture ford focus RS
            { "chmgrs", 2500, { "" }, { "life_coplevel", "SCALAR", 10 } }, // voiture reneault megane RS
            { "chC8_gn", 2500, { "" }, { "life_coplevel", "SCALAR", 10 } }, // voiture citroen C8
            { "chMaster3p2_gn", 2500, { "" }, { "life_coplevel", "SCALAR", 10 } }, // utilitaire renault master 3
            { "IvecoCh_GN", 2500, { "" }, { "life_coplevel", "SCALAR", 10 } }, // utilitaire iveco daily
         { "B_GEN_Van_02_transport_F", 112500, { "" }, { "life_coplevel", "SCALAR", 10 } }, // utilitaire iveco daily

            
            { "chscania_bdf", 3500, { "" }, { "life_coplevel", "SCALAR", 10 } } // camion scania 124L BF
        };
    };


    // veichule terestre serigraphie gendarmerie specialise
    class cop_deviant {
        side = "cop";
        vehicles[] = {           
            { "chtondeuse_gn", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture tondeuse
            { "cha110_gn", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture apline a110
            { "chds_21_gn", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture chevrolet DS 21
            { "fgtz3", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture ford grand torino
            { "4l_gn", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } } // voiture renault 4L
        };
    };

    class cop_edsr {
        side = "cop";
        vehicles[] = {           
            { "meganers_B", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // moto BMW 1200
            { "focusrs_B", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture audi RS7
            { "AlessioWRX_B", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture audi RS7
            { "AlessioC63B", 5500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture BMW M5
            { "AlessioGTRB", 5500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture BMW M5
            { "AlessioAventadorB", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture BMW M5
            { "Chironlu_Gendarmerie", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture Bugatti chiron
            { "GT3lu_Gendarmerie", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture proshe GTR3 RS
            { "Panameralu_Gendarmerie", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture proshe panamera
            { "rs01ch_Gendarmerie", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture renault RS01
            { "R35Plu_Gendarmerie", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture Nissan GTR35 
            { "RS6_AvantBlu_GMK", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } }, // voiture Nissan GTR35 
            
            { "Raptorlu_Gendarmerie", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } } // 4x4 Ford raptor
        };
    };

    class cop_bri {
        side = "cop";
        vehicles[] = {           
            { "chgolf7_gn_bana", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture volvagen golf 7 bana
            { "Crownlu_B", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture ford crown victoria bana
            { "mondeovch_gn_bana", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture ford mondeo vignale bana
            { "Model_Slu_B", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture tesla model S bana
            { "RS6_AvantBlu", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture audi RS6 bana
            { "C63Slu_B", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture mercedes C63 bana
            { "chrr_svr_gn_bana", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // 4x4 land rover SVR bana
            { "chKodiaq_gn_bana", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // 4x4 scodia codiaq bana 
            { "Tahoelu_B", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // 4x4 chevrolet tahoe bana 
            { "G65lu_B", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } } // 4x4 mercedes G65 bana 
        };
    };

    class cop_psig {
        side = "cop";
        vehicles[] = {           
            { "d3s_300_12_UNM", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // 4x4 Brabus G850
            { "d3s_tahoe_UNM", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // 4x4 cadillac escalade
            { "B_MRAP_01_F", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } } // 4x4 PVP gendarmerie
        };
    };

    class cop_gign {
        side = "cop";
        vehicles[] = {           
            { "B_MRAP_01_F", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // voiture peugot P4
            { "Iveco_N", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // 4x4 PVP armee de terre 
            { "chgbc_180", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } }, // camion renault GBC
            { "d3s_fseries_17_P3E", 2500, { "" }, { "life_coplevel", "SCALAR", 1 } } // camion multi passrelle
        };
    };


    // veichule maritime serigraphie gendarmerie specialise
    class cop_ship {
        side = "cop";
        vehicles[] = {           
            { "C_Boat_Civil_01_police_F", 3000, { "" }, { "life_coplevel", "SCALAR", 1 } }, // bateau embarcation legere
            { "Vedette_gendarmerie", 3000, { "" }, { "life_coplevel", "SCALAR", 1 } }, // bateau vedette
            { "C_Boat_Transport_02_F", 3000, { "" }, { "life_coplevel", "SCALAR", 1 } }, // bateau RHIB
            { "B_Boat_Armed_01_minigun_F", 10000, { "" }, { "life_coplevel", "SCALAR", 1 } } // bateau vedette

        };
    }; 

    // veichule aerien serigraphie gendarmerie specialise
    class cop_air {
        side = "cop";
        vehicles[] = {           
            { "MELB_MH6M", 5000, { "" }, { "life_coplevel", "SCALAR", 1 } }, // helico MH6M
            //{ "EC135GNlu", 5000, { "" }, { "life_coplevel", "SCALAR", 1 } }, // helico EC635
            { "AS_365", 5000, { "" }, { "life_coplevel", "SCALAR", 1 } }, // helico erocoptere
            { "NH90_GR2", 5000, { "" }, { "life_coplevel", "SCALAR", 1 } }, // helico NH90
            { "AH6_ALAT", 5000, { "" }, { "life_coplevel", "SCALAR", 2 } }, // helico AH6
            { "EC635_Unarmed_BW", 5000, { "" }, { "life_coplevel", "SCALAR", 2 } }, // helico EC635 BW
            { "NH90_CAIMAN_ALAT", 5000, { "" }, { "life_coplevel", "SCALAR", 2 } }, // helico NH90 caiman
            { "C_Plane_Civil_01_F", 5000, { "" }, { "life_coplevel", "SCALAR", 2 } }, // avion cesna
            { "B_Plane_CAS_01_dynamicLoadout_F", 5000, { "" }, { "life_coplevel", "SCALAR", 2 } }, // avion a10-D
            { "sab_C130_JC", 15000, { "" }, { "life_coplevel", "SCALAR", 3 } }, // avion a10-D

            
            { "sab_C130_J", 5000, { "" }, { "life_coplevel", "SCALAR", 2 } } // avion C130
        };
    }; 
    
    /** ********************************************************************************************
        END : SHOP COP
    ********************************************************************************************* */

    class fed_car {
        side = "cop";
        vehicles[] = {
        };
    }; 

    
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "Alessio206", 7000, { "" }, { "", "", -1 } }, 
            { "Caddylu_civ", 1000, { "" }, { "", "", -1 } }, // Mini Austin Clubman 

            { "d3s_zaz968m", 7700, { "" }, { "", "", -1 } }, 
            { "chtwingoI_civ", 7890, { "" }, { "", "", -1 } }, 
            { "chtwingoII_civ", 12000, { "" }, { "", "", -1 } }, 
            { "ClioIch_civ", 12000, { "" }, { "", "", -1 } },
            { "d3s_beetle_04", 40500, { "" }, { "", "", -1 } },
            { "Renault_Clio_civ", 40540, { "" }, { "", "", -1 } }, 
            { "Renault_Scenic_civ", 29505, { "" }, { "", "", -1 } },
            { "chclio3_civ", 36550, { "" }, { "", "", -1 } },
            { "Renault_ClioIV_civ", 39880, { "" }, { "", "", -1 } },
            { "Renault_Espace_civ", 39505, { "" }, { "", "", -1 } }, 
            { "chmegane2_civ", 44850, { "" }, { "", "", -1 } }, 
            { "Megane_civ", 51490, { "" }, { "", "", -1 } },
            { "Peugeot_308_civ", 42950, { "" }, { "", "", -1 } }, 
            { "d3s_fiesta_16_230", 77580, { "" }, { "", "", -1 } },
            { "focus03_civ", 45650, { "" }, { "", "", -1 } }, 
            { "focus3ch_civ", 53950, { "" }, { "", "", -1 } },
            //{ "FocusRSlu_civ", 64530, { "" }, { "", "", -1 } },
            { "d3s_giulietta_16", 52050, { "" }, { "", "", -1 } }, 
            //{ "d3s_giulia_quad_16", 65950, { "" }, { "", "", -1 } },
            //{ "AlessioQuadrifoglio", 75750, { "" }, { "", "", -1 } },
            { "AlessioVIRM", 57455, { "" }, { "", "", -1 } }, // golf 4
            { "berlingo1_civ", 18500, { "" }, { "", "", -1 } }, 
            { "kangooII1_civ", 15650, { "" }, { "", "", -1 } }, 
            { "kangooI1_civ", 12540, { "" }, { "", "", -1 } },
            //{ "Cardinal_Grinder", 150000, { "" }, { "", "", -1 } },
            //{ "Chevrolet_Advance_1953", 160000, { "" }, { "", "", -1 } },
            //{ "Ford_Model_B_1932", 180000, { "" }, { "", "", -1 } },
            //{ "Holden_Coupe_Utility_1951", 190000, { "" }, { "", "", -1 } },
            //{ "Righteous_Spike", 200000, { "" }, { "", "", -1 } },
            { "d3s_amazing_a45_16_EX", 450000, { "" }, { "", "", -1 } }
        };
    };

    // @todo : Véhicules pour la ste location de camion
    class truck_Aloca {
        side = "civ";
        vehicles[] = {
            { "Volvo_FH13", 200000, { "" }, { "", "", -1 }},
            { "Renault_Range_T", 400000, { "" }, { "", "", -1 }},
            { "Peterbilt379lu_b", 700000, { "" }, { "", "", -1 } }
          
        };
    };


 class quatrequatre {
        side = "civ";
        vehicles[] = {
          
            { "d3s_willys", 45000, { "" }, { "", "", -1 } },
            { "UAZ471lu", 45000, { "" }, { "", "", -1 } },  
            { "cWrangler_1", 45000, { "" }, { "", "", -1 } },  
            { "d3s_qx56_13", 136500, { "" }, { "", "", -1 } },
            { "d3s_QX60_16", 95000, { "" }, { "", "", -1 } },
            { "d3s_uaz_469P_EXP", 84000, { "" }, { "", "", -1 } },


            { "d3s_QX60_16_S", 119850, { "" }, { "", "", -1 } },             
            { "d3s_qx56_ht_13", 194450, { "" }, { "", "", -1 } }, 
            //{ "d3s_QX60_16_SE", 234450, { "" }, { "", "", -1 } }, 
            //{ "d3s_qx56_13_SE", 314450, { "" }, { "", "", -1 } },
            { "d3s_explorer_13", 62282, { "" }, { "", "", -1 } },
            { "d3s_explorer_sport_13", 84469, { "" }, { "", "", -1 } },
            { "d3s_escalade_16", 198599, { "" }, { "", "", -1 } }, 
            //{ "d3s_durango_18_se", 294390, { "" }, { "", "", -1 } }, 
            { "d3s_evoque_16", 114390, { "" }, { "", "", -1 } }, 
            { "d3s_evoque_sd4_16", 144390, { "" }, { "", "", -1 } }, 
            { "d3s_svr_17_SI4", 184590, { "" }, { "", "", -1 } },
            { "d3s_vogue_14_CHARGED", 194590, { "" }, { "", "", -1 } },
            //{ "d3s_svr_17_e", 196599, { "" }, { "", "", -1 } },
            { "d3s_evoque_si4_16", 234590, { "" }, { "", "", -1 } }, 
            //{ "d3s_vogue_14_SVA", 254590, { "" }, { "", "", -1 } },
            //{ "d3s_svr_17_V8", 294590, { "" }, { "", "", -1 } },
            //{ "d3s_evoque_16_se", 359599, { "" }, { "", "", -1 } },
            { "d3s_vogue_14_HSE", 404999, { "" }, { "", "", -1 } },
            { "d3s_tahoe_08", 104898, { "" }, { "", "", -1 } },   
            //{ "d3s_tahoe_ltz_08", 144898, { "" }, { "", "", -1 } },
            //{ "d3s_tahoe_EX", 244899, { "" }, { "", "", -1 } },
            //{ "d3s_tahoe_limited", 254999, { "" }, { "", "", -1 } },
            { "d3s_cherokee_18", 148999, { "" }, { "", "", -1 } }, 
            { "d3s_cherokee_18_LTD", 188999, { "" }, { "", "", -1 } },
            { "d3s_cherokee_18_TRCK", 245000, { "" }, { "", "", -1 } }, 
            { "d3s_santafe_19", 100000, { "" }, { "", "", -1 } }, 
            { "d3s_santafe_19_prem", 145000, { "" }, { "", "", -1 } },
            { "d3s_santafe_19_High", 185000, { "" }, { "", "", -1 } },  
            { "d3s_vogue_14_V6", 200000, { "" }, { "", "", -1 } },
            { "d3s_svr_17_TDV", 210000, { "" }, { "", "", -1 } }, 
            { "d3s_svr_17_SVR", 220000, { "" }, { "", "", -1 } },
            { "d3s_svr_17_SDV8", 230000, { "" }, { "", "", -1 } }, 
            { "d3s_svr_17_SDV6", 240000, { "" }, { "", "", -1 } }, 
            { "d3s_svr_17_SD4", 250000, { "" }, { "", "", -1 } }, 
            { "d3s_svr_17_HSE", 260000, { "" }, { "", "", -1 } },
            { "d3s_raptor_17", 234760, { "" }, { "", "", -1 } },   
            { "d3s_fseries_17", 315099, { "" }, { "", "", -1 } },
            //{ "d3s_fseries_XLT_17", 359564, { "" }, { "", "", -1 } }, 
            //{ "d3s_fseries_LTD_17", 389564, { "" }, { "", "", -1 } }, 
            //{ "d3s_fseries_PLT_17", 433899, { "" }, { "", "", -1 } }              
        };
    };

class abcar {
        side = "civ";
        vehicles[] = {  
            { "d3s_clubman_11", 630000, { "" }, { "", "", -1 } }, // Mini Austin Clubman 
            
            { "Abarth500lu_civ", 672000, { "" }, { "", "", -1 } },            
            { "d3s_e89_12", 1190000, { "" }, { "", "", -1 } }, //Z3
            { "d3s_e89_12_M", 1372000, { "" }, { "", "", -1 } }, 
             { "chRS2", 1372000, { "" }, { "", "", -1 } }, // rajout rs2

        
            { "d3s_f87_17", 1183000, { "" }, { "", "", -1 } }, //serie2
            { "d3s_f87_17_sport", 1372000, { "" }, { "", "", -1 } },
            { "d3s_f87_17_ACH", 1568000, { "" }, { "", "", -1 } },//serie3
            { "d3s_f87_18_m", 1813000, { "" }, { "", "", -1 } }, 
            { "d3s_f80_14", 1855000, { "" }, { "", "", -1 } }, //serie4
            { "d3s_f80_14_cs", 2100000, { "" }, { "", "", -1 } }, 
            { "d3s_f80_14_GTS", 2310000, { "" }, { "", "", -1 } }, 
            { "d3s_f80_14_SE", 2450000, { "" }, { "", "", -1 } },
            { "d3s_amazing_f82_16_IND", 2646000, { "" }, { "", "", -1 } },
            { "AlessioBM4", 2730000, { "" }, { "", "", -1 } },
            { "d3s_amazing_f82_16_EX", 2940000, { "" }, { "", "", -1 } }, 
            { "d3s_e60_09_m", 2170000, { "" }, { "", "", -1 } },//M5 
            { "d3s_e60_09", 2520000, { "" }, { "", "", -1 } },
            { "d3s_f10_12", 2583000, { "" }, { "", "", -1 } },
            { "d3s_f10_12_IND", 2718800, { "" }, { "", "", -1 } },
            { "M5lu_civ", 2754920, { "" }, { "", "", -1 } }, 
            { "d3s_e60_09_ACS5", 2800000, { "" }, { "", "", -1 } },  // Ci-dessous ceux en commentaire à faire en x2 
            { "d3s_f90_18_FE", 1668940, { "" }, { "", "", -1 } },
            { "M5_E60lu", 1718850, { "" }, { "", "", -1 } }, 
            { "AlessioM5", 1998150, { "" }, { "", "", -1 } },
            { "d3s_f13_13", 3304000, { "" }, { "", "", -1 } }, //M6
            { "d3s_f13_13_Comp", 1888950, { "" }, { "", "", -1 } }, 
            { "d3s_f13_13_CE", 1932000, { "" }, { "", "", -1 } },
            { "d3s_e38_98", 2347100, { "" }, { "", "", -1 } }, //serie7
            { "d3s_e38_98_GRU", 1305640, { "" }, { "", "", -1 } }, 
            { "d3s_f85_15_m", 2009700, { "" }, { "", "", -1 } }, //x5
            { "d3s_f85_15", 1179500, { "" }, { "", "", -1 } }, 
            { "d3s_f86_15_m", 2149560, { "" }, { "", "", -1 } },//x6
            { "X6lu", 2461900, { "" }, { "", "", -1 } },
            { "d3s_f86_15", 1398950, { "" }, { "", "", -1 } }, 
            { "d3s_amazing_ACS8_17", 4970000, { "" }, { "", "", -1 } },//serie I
            { "d3s_amazing_ACS8_17_IND", 2555000, { "" }, { "", "", -1 } }, 
            { "TTRSlu_civ", 1815100, { "" }, { "", "", -1 } },
            { "RS3lu_civ", 1869000, { "" }, { "", "", -1 } },
            { "AlessioRS4", 2037000, { "" }, { "", "", -1 } }, //RS4
            { "rs4carbone", 2232300, { "" }, { "", "", -1 } }, // Audi RS4 Carbone 
            { "AlessioRS5", 2331000, { "" }, { "", "", -1 } },//RS5
            { "RS6_Avantlu_civ", 2450000, { "" }, { "", "", -1 } },
            { "RS7lu_civ", 2506000, { "" }, { "", "", -1 } },
            { "AlessioR8", 3431680, { "" }, { "", "", -1 } },//R8
            { "Alessio190", 315000, { "" }, { "", "", -1 } }, 
            { "d3s_amazing_a45_16", 1061900, { "" }, { "", "", -1 } }, //classA
            { "d3s_amazing_a45_16_AMG", 1200500, { "" }, { "", "", -1 } },
            { "A45lu", 1330000, { "" }, { "", "", -1 } },
            { "d3s_C180_14", 1099000, { "" }, { "", "", -1 } }, //classC
            { "d3s_C220_14", 1214500, { "" }, { "", "", -1 } }, 
            { "d3s_C250_14", 1380400, { "" }, { "", "", -1 } },
            { "d3s_C300_14", 1386560, { "" }, { "", "", -1 } }, 
            { "d3s_C350_14", 1379770, { "" }, { "", "", -1 } },
            { "d3s_C450_15", 696780, { "" }, { "", "", -1 } },
           { "d3s_C43_16", 696150, { "" }, { "", "", -1 } }, 
            { "CLA45lu_civ", 665000, { "" }, { "", "", -1 } }, //vmax: 263     ch: 400
            { "d3s_C63_14", 1799000, { "" }, { "", "", -1 } },
           { "CLS63lu_civ", 668500, { "" }, { "", "", -1 } }, //vmax: 250     ch: 466
           { "C63Slu", 942200, { "" }, { "", "", -1 } }, //vmax: 310     ch: 610
            { "AlessioC63", 1302000, { "" }, { "", "", -1 } },
           { "d3s_cla_14", 619150, { "" }, { "", "", -1 } },
           { "d3s_cla_15", 595000, { "" }, { "", "", -1 } }, 
           { "d3s_cla_220_15", 655550, { "" }, { "", "", -1 } }, 
            { "d3s_cla_250_14", 696150, { "" }, { "", "", -1 } },
           { "d3s_cla_250_15", 697340, { "" }, { "", "", -1 } },
            { "d3s_cla_14_SE", 950180, { "" }, { "", "", -1 } }, 
            { "d3s_e220_16", 1519840, { "" }, { "", "", -1 } },//classE
            { "d3s_e250_16", 1393000, { "" }, { "", "", -1 } }, 
            { "d3s_e350_16", 1395100, { "" }, { "", "", -1 } }, 
            { "d3s_e400_16", 1015560, { "" }, { "", "", -1 } },
            { "d3s_w212_13", 1186780, { "" }, { "", "", -1 } }, 
            { "d3s_w212s_13", 1186780, { "" }, { "", "", -1 } }, 
            { "d3s_s550_18", 2310000, { "" }, { "", "", -1 } }, //classS
            { "d3s_amgGT_19_43", 2315880, { "" }, { "", "", -1 } },//ClassGT
            { "d3s_amgGT_15", 2501100, { "" }, { "", "", -1 } },
            { "d3s_amgGT_19_53", 1327550, { "" }, { "", "", -1 } }, 
            { "d3s_amgGT_19_63", 1397550, { "" }, { "", "", -1 } },
           { "d3s_amgGT_19_First", 1452920, { "" }, { "", "", -1 } },
            { "d3s_amgGT_19_63S", 1537550, { "" }, { "", "", -1 } },
            { "SLSlu", 3020500, { "" }, { "", "", -1 } }, //vmax: 320     ch: 671 
            { "d3s_gle300_19", 1344000, { "" }, { "", "", -1 } }, //classGLE
            { "d3s_gle350_19", 1635900, { "" }, { "", "", -1 } },
            { "d3s_gle43amg_15", 1911000, { "" }, { "", "", -1 } },
            { "d3s_gle63amg_15", 1032850, { "" }, { "", "", -1 } },
            { "d3s_gle450_19", 1274000, { "" }, { "", "", -1 } }, 
            { "d3s_gle63amgS_15", 1396500, { "" }, { "", "", -1 } }, 
            { "d3s_gls63_17", 2501100, { "" }, { "", "", -1 } }, //classGLS
            { "d3s_gls63amg_17", 1397550, { "" }, { "", "", -1 } }, 
            { "d3s_gl63amg_12", 1992200, { "" }, { "", "", -1 } },//classGL
            { "d3s_gl63amg_12_SE", 1157240, { "" }, { "", "", -1 } }, 
            { "d3s_g350d_15", 1325100, { "" }, { "", "", -1 } }, //classG
            { "d3s_g500_35_15", 1327900, { "" }, { "", "", -1 } },
            { "d3s_g500_18", 1635480, { "" }, { "", "", -1 } },
            { "d3s_g500_15", 1912400, { "" }, { "", "", -1 } },
            { "d3s_g63amg_16", 2217600, { "" }, { "", "", -1 } },
            { "d3s_g63amg_18", 2499000, { "" }, { "", "", -1 } }, 
            { "d3s_g63amg_18_CE", 1319500, { "" }, { "", "", -1 } },
            { "G65lu", 2940000, { "" }, { "", "", -1 } }, //vmax: 230     ch: 712   4x4 
            { "d3s_g63amg_463_16", 1499400, { "" }, { "", "", -1 } }, 
            { "d3s_g63amg_16_CE", 1652000, { "" }, { "", "", -1 } }, 
            { "d3s_g63amg_18_e1", 1792000, { "" }, { "", "", -1 } },
            { "d3s_g65amg_16", 1579620, { "" }, { "", "", -1 } },
            { "d3s_g65amg_17_FINAL", 1655850, { "" }, { "", "", -1 } },            
            { "d3s_ml350_09", 1619100, { "" }, { "", "", -1 } },//classML
            { "d3s_ml550_09", 2038400, { "" }, { "", "", -1 } },
            { "d3s_cayenne_turbo_s_16", 1619100, { "" }, { "", "", -1 } },
            { "d3s_ML63_09", 1116500, { "" }, { "", "", -1 } },
             { "ML63lu_civ", 1158150, { "" }, { "", "", -1 } }, //vmax: 248     ch: 625 suv
            { "d3s_xesv_17", 2534000, { "" }, { "", "", -1 } },//jaguar
            { "Macanlu_civ", 2030000, { "" }, { "", "", -1 } }, //vmax: 279     ch: 500
            { "Panameralu", 2135000, { "" }, { "", "", -1 } }, //vmax: 281     ch: 510
            { "AlessioPanamera", 2298800, { "" }, { "", "", -1 } }, // Porsche Panamera Turbo   
            { "AlessioCayman", 2316300, { "" }, { "", "", -1 } }, // Porsche 718 Cayman 
            { "GT3lu_civ", 2555140, { "" }, { "", "", -1 } }, //vmax: 308     ch: 710           
            { "d3s_cullinan_19_BB", 6120000, { "" }, { "", "", -1 } }        
        };
    };

    class japancar {
        side = "civ";
        vehicles[] = {
            { "YG_silvia_s15_02", 95000, { "" }, { "", "", -1 } },
            { "d3s_wrx_17", 120000, { "" }, { "", "", -1 } },
            { "d3s_wrx_sti_17", 150000, { "" }, { "", "", -1 } },
            { "d3s_wrx_sti_YG", 170000, { "" }, { "", "", -1 } },
            { "d3s_avalon_18", 65000, { "" }, { "", "", -1 } },
            { "d3s_avalon_18_LTD", 125000, { "" }, { "", "", -1 } },
            { "d3s_avalon_18_SE", 195000, { "" }, { "", "", -1 } },
            { "d3s_camry_18", 86000, { "" }, { "", "", -1 } },
            { "d3s_camry_18_XSE", 136000, { "" }, { "", "", -1 } },
            { "d3s_camry_18_SE", 196000, { "" }, { "", "", -1 } },
            { "R35lu_civ", 219000, { "" }, { "", "", -1 } },
            { "WRXlu_civ", 150000, { "" }, { "", "", -1 } },
            { "R34lu", 199000, { "" }, { "", "", -1 } }, 
            { "Celicalu_civ", 155000, { "" }, { "", "", -1 } }
        };
    };

    class luxe_shop {
        side = "civ";
        vehicles[] = { 
            { "AlessioMGA", 1500000, { "" }, { "", "", -1 }, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"} }, // cab 160 230 80
            { "d3s_bentayga_18", 6000000, { "" }, { "", "", -1 }, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"} }, //bentley suv 220 252 65
            { "d3s_lm002_90", 4100000, { "" }, { "", "", -1 }, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"} }, //lambo 4x4 220 450 65
            { "d3s_ghibli_14_30", 4400000, { "" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} }, //masseratti 250 350 65
            { "d3s_ghost_18_EWB", 4700000, { "" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} }, //rolls 250 570 65
            { "d3s_novus_phantom_18", 4750000, { "" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} }, //rolls 250 571 65
            { "d3s_urus_12", 6000000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} }, //lambo 250 580 65
            { "Wraithlu_civ", 6300000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} }, //rolls 248 732 120
            { "Stradalelu_civ", 6350000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} }, //alfa 260 330 120
            { "d3s_ghibli_14_q4", 6400000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} }, //masseratti 270 410 65
            { "d3s_levante_17", 6700000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} }, //masseratti 310 430 65
            { "AlessioGallardo", 6750000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} }, // cab 320 580 90
            { "d3s_alfieri_14", 8000000, { "" }, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"} }, //masseratti 297 760 200
            { "AlessioGTB", 8100000, { "" }, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"} }, //330 625 90
            { "Gallardolu_civ", 8200000, { "" }, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"} }, //vmax: 323     ch: 660 hypersport 120
            { "d3s_continentalGT_18", 8300000, { "" }, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"} }, //bentley 330 635 100
            { "Alessio458", 8400000, { "" }, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"} }, //330 650 90
            { "AlessioSuperfast", 8400000, { "" }, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"} }, //330 700 80
            { "AVENTADOR_CARBONE", 8450000, { "" }, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"} }, //350 800 90
            { "FFlu_civ", 8550000, { "" }, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"} }, //vmax: 336     ch: 760 hypersport  120
            { "F12lu_civ", 8700000, { "" }, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"} }, //vmax: 342     ch: 840 hypersport 120
            { "AlessioAventador", 8900000, { "" }, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"} }, //350 800 90
            { "Enzolu", 8950000, { "" }, { "", "", -1 } }, //vmax: 346     ch: 840 hypersport 120
            { "AlessioHuayra", 9300000, { "" }, { "", "", -1 }, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"} }, // 360 800 90 paggini
            { "d3s_rapide_10_AMR", 9800000, { "" }, { "", "", -1 }, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"} }, // aston 330 603 200
            { "P1lu_civ", 9950000, { "" }, { "", "", -1 }, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"} }, //mclaren 349 1016 120
            { "AlessioLaFerrari", 10000000, { "" }, { "", "", -1 }, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"} }, //350kh 800 150
            { "d3s_asterion_15", 10500000, { "" }, { "", "", -1 }, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"} }, //lambo 330 910 200
            { "AlessioAgera", 12000000, { "" }, { "", "", -1 }, {"life_playerlevel >= 55", "Niveau: 55<br/>Compétence: aucune"} }, //420k 845 80
            { "Chironlu_civ", 13000000, { "" }, { "", "", -1 }, {"life_playerlevel >= 65", "Niveau: 65<br/>Compétence: aucune"} } //bugatti 450 1700 120           
        };
    };
    class civ_moto {
         side = "civ";
        vehicles[] = {
            { "V12_MONKEY_BC", 2000, { "" }, { "", "", -1 } },
            { "V12_KTM50CCB", 4000, { "" }, { "", "", -1 } },
            { "V12_KTM", 3500, { "" }, { "", "", -1 } }, 
            { "V12_YFZ450_BLEU", 5500, { "" }, { "", "", -1 } }, 
            { "V12_YFZ450_RACE2", 8000, { "" }, { "", "", -1 } }, 
            { "YamahaQlu_civ", 7500, { "" }, { "", "", -1 } }, 
            { "V12_TMAX2017_MAT", 9500, { "" }, { "", "", -1 } }, 
            { "d3s_Kawasaki_Z800", 12500, { "" }, { "", "", -1 } }, 
            { "d3s_Aprilia_Tuono_V4_1100_RR", 12000, { "" }, { "", "", -1 } }, 
            { "V12_CRF450SGEND", 18500, { "" }, { "", "", -1 } },
            { "d3s_KTM_1290_Super_Duke", 18590, { "" }, { "", "", -1 } }, 
            { "V12_DIAVEL_BR", 20500, { "" }, { "", "", -1 } }, 
            { "d3s_Suzuki_GSX_R_1000", 22500, { "" }, { "", "", -1 } }, 
            { "d3s_Kawasaki_ZX7RR", 24500, { "" }, { "", "", -1 } },
            { "V12_APRILIARSV4_BC", 26500, { "" }, { "", "", -1 } },
            { "V12_S1000RR2018_Origine", 28500, { "" }, { "", "", -1 } }, 
            { "V12_S1000RRSTREET_BC", 30500, { "" }, { "", "", -1 } },
            { "d3s_Suzuki_Hayabusa", 33500, { "" }, { "", "", -1 } }, 
            { "FJR1300_ch", 36000, { "" }, { "", "", -1 } }, 
            { "V12_KAWASAKIH2_2017_BC", 37500, { "" }, { "", "", -1 } }, 
            { "V12_YZF_OR", 35000, { "" }, { "", "", -1 } },
            { "V12_HARLEYBOBBER_BC", 36590, { "" }, { "", "", -1 } }, 
            { "V12_HARLEYKNUCKLEHEAD_BC", 40500, { "" }, { "", "", -1 } }
        };
    };
    class american_car {
        side = "civ";
        vehicles[] = {
            { "d3s_malibu_18", 95000, { "" }, { "", "", -1 } }, //220 240ch 65
            { "d3s_crown_98", 105000, { "" }, { "", "", -1 } }, //220 242ch 65
            { "d3s_skylark_52", 135000, { "" }, { "", "", -1 } }, //220 290ch 65
            { "d3s_hornet_54", 125000, { "" }, { "", "", -1 } },  //220 490ch 65
            { "d3s_300C_12", 120000, { "" }, { "", "", -1 } }, //220 296ch 65
            { "d3s_challenger_15", 135599, { "" }, { "", "", -1 } }, //220 305ch 65
            { "Crownlu", 136010, { "" }, { "", "", -1 } },//222 328ch 120
            { "d3s_300S_12", 142489, { "" }, { "", "", -1 } }, //220 367ch 65
            { "Cobralu", 1402489, { "" }, { "", "", -1 } }, //Shelby rajout


            { "d3s_malibu_18_LT", 158522, { "" }, { "", "", -1 } }, //250 365ch 65
            { "d3s_charger_15", 162450, { "" }, { "", "", -1 } }, //250 364ch 65
            { "d3s_challenger_15_RT", 190000, { "" }, { "", "", -1 } }, //250 410ch 65
            { "d3s_srthellcat_15", 205599, { "" }, { "", "", -1 } }, //250 492 65
            { "d3s_challenger_15_SP", 209999, { "" }, { "", "", -1 } }, //250 492ch 65
            { "d3s_malibu_18_Prem", 220000, { "" }, { "", "", -1 } }, //270 500ch 65
            { "d3s_ctsv_16", 227850, { "" }, { "", "", -1 } }, // 250 649ch 65
            { "Charger_1969lu_white", 238999, { "" }, { "", "", -1 } },//248 525ch 120          
            { "Charger_1969lu_Race", 251750, { "" }, { "", "", -1 } }, // 248 525ch 120
            { "CHRlu_civ", 274000, { "" }, { "", "", -1 } }, //263 531ch 120
            { "Suburbanlu", 274599, { "" }, { "", "", -1 } }, //238 555ch 120
            { "d3s_300SRT_12", 279450, { "" }, { "", "", -1 } }, // 250 477ch 200
            { "Mustanglu_civ", 338500, { "" }, { "", "", -1 } }, //260 528ch 120
            { "d3s_boss_15", 350502, { "" }, { "", "", -1 } }, //270 750ch 65
            { "SRT8_12lu_civ", 358999, { "" }, { "", "", -1 } },//278 577ch 120             
            { "d3s_challenger_15_392", 362866, { "" }, { "", "", -1 } }, //300 540ch 100
            { "Challengerlu_civ", 364850, { "" }, { "", "", -1 } }, //290 577ch 120
            { "GT500lu_civ", 372580, { "" }, { "", "", -1 } }, //302 771ch 120
            { "Cruiserlu_tun", 378450, { "" }, { "", "", -1 } }, //310 560ch 120
            { "d3s_camaro_16", 385650, { "" }, { "", "", -1 } }, //300 335ch 200
            { "d3s_srthellcat_15_HELL", 412751, { "" }, { "", "", -1 } }, //328 707ch 65            
            { "d3s_challenger_15_HELL", 425999, { "" }, { "", "", -1 } }, //328 717ch 100
            { "d3s_camaro_ss_16", 436850, { "" }, { "", "", -1 } }, //320 455ch 200            
            { "d3s_camaro_zl1_17", 459560, { "" }, { "", "", -1 } },//320 650ch 200
            { "d3s_camaro_zl1_1le_18", 466850, { "" }, { "", "", -1 } }, //320 650ch 200
            { "d3s_malibu_18_red", 525850, { "" }, { "", "", -1 } }, //300 750ch 400
            { "Model_Slu_civ", 528000, { "" }, { "", "", -1 } }, //248 700ch 120 
            { "d3s_challenger_15_WIDE", 559000, { "" }, { "", "", -1 } }, //328 717ch 200
            { "d3s_challenger_15_LW", 619950, { "" }, { "", "", -1 } }, //270 717ch 400             
            { "d3s_boss_15_payback", 708950, { "" }, { "", "", -1 } }, //330 750ch 65
            { "d3s_challenger_15_DM", 735500, { "" }, { "", "", -1 } } //328 850 400       
        };
    };



    class civ_fuelStat {
          sides[] = {"civ","med","cop"}; // pour que les flics/medic puissent prendre des roues un peu partout
        vehicles[] = {
             { "ACE_Wheel", 0, { "" }, { "", "", -1 } } //origine 100
        };
    };

    class cop_wheelsShop { // QG Police
         side = "cop";
        vehicles[] = {
             { "ACE_Wheel", 0, { "" }, { "", "", -1 } }
        };
    };

    class civ_garage {
         side = "civ";
        vehicles[] = {
             { "ACE_Wheel", 0, { "" }, { "", "", -1 } } //origine 2500
        };
    };

    class civ_alphonse {
         side = "civ";
        vehicles[] = {
        };
    };

    class mafia_car {
        side = "civ";
        vehicles[] = {
          { "vurtual_mtvr_4x4", 900000, { "mafia" }, { "", "", -1 } },
          { "vurtual_mtvr_mk23", 1100000, { "mafia" }, { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {            
            { "C_Kart_01_F", 20000, { "" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} }
        };
    };

    class med_air {
        side = "med";
        vehicles[] = {
          { "EC135SClu", 75000, { "" }, { "", "", -1 } },
          { "CY_SC_EC635_CARGO", 85000, { "" }, { "", "", -1 } },
          { "AS_365", 95000, { "" }, { "", "", -1 } }
        };
    };

    class med_car {
        side = "med";
        vehicles[] = {
          { "brancardch", 6000, { "" }, { "", "", -1 } },
          { "brancardlu", 9000, { "" }, { "", "", -1 } },  
          { "Clio_VLCG", 8200, { "" }, { "", "", -1 } },
          { "chtype_h_vsab", 9000, { "" }, { "", "", -1 } },
          { "chtrafic1_vsab", 9050, { "" }, { "", "", -1 } },
          { "chmaster1_vsab", 10000, { "" }, { "", "", -1 } },
          { "kangooI2_vl", 10800, { "" }, { "", "", -1 } },
          { "chClioIII_VLCG", 18700, { "" }, { "", "", -1 } },
          { "chtrafic1_vtu", 16900, { "" }, { "", "", -1 } },
          { "chtrafic1_vtp", 16900, { "" }, { "", "", -1 } },
          { "chmaster2p1_vsab", 17800, { "" }, { "", "", -1 } },
          { "chmaster2_vsav", 22000, { "" }, { "", "", -1 } },
          { "chmaster2_vps", 21000, { "" }, { "", "", -1 } },
          { "chmaster2_vtp", 23000, { "" }, { "", "", -1 } },
          { "chmaster2_vtu", 24000, { "" }, { "", "", -1 } },
          { "trafic3_vtp", 22000, { "" }, { "", "", -1 } },
          { "chmaster3_vsrl", 27000, { "" }, { "", "", -1 } },
          { "fcch", 18000, { "" }, { "", "", -1 } },
          { "ccrl", 18000, { "" }, { "", "", -1 } },
          { "PMA", 80000, { "" }, { "", "", -1 } },
          { "devidoirch", 9000, { "" }, { "", "", -1 } },
          { "devidoirchvsr", 9000, { "" }, { "", "", -1 } },
          { "EPA", 19000, { "" }, { "", "", -1 } },
          { "chepa_MAN", 24000, { "" }, { "", "", -1 } },
          { "chfmogp", 27000, { "" }, { "", "", -1 } },  
          { "Transit_vtp", 28000, { "" }, { "", "", -1 } },
          { "VSAV_Ducato", 29100, { "" }, { "", "", -1 } },
          { "chMaster3p2_vsav", 29200, { "" }, { "", "", -1 } },
          { "chvsavar_master3p2", 23300, { "" }, { "", "", -1 } },
          { "chMaster3_vtu", 27350, { "" }, { "", "", -1 } },
          { "chMaster3_vtp", 29450, { "" }, { "", "", -1 } },
          { "Trafic_vtp", 30500, { "" }, { "", "", -1 } },
          { "ccfs_renault", 30550, { "" }, { "", "", -1 } },
          { "ccfm_renault", 30600, { "" }, { "", "", -1 } },
          { "CCRM_MAN", 30650, { "" }, { "", "", -1 } },
          { "chepa_Mercedes_Atego", 40100, { "" }, { "", "", -1 } },
          { "VSR", 14850, { "" }, { "", "", -1 } },
          { "chvsavar_iveco", 44950, { "" }, { "", "", -1 } },
          { "chMaster3p2ng_vsav", 44950, { "" }, { "", "", -1 } },
          { "kangooII1_vl", 7000, { "" }, { "", "", -1 } },  
          { "chdefender_vlhr", 29000, { "" }, { "", "", -1 } },
          { "chdefender_vsavhr", 40250, { "" }, { "", "", -1 } },
          { "chBEA_Scania_P280", 40000, { "" }, { "", "", -1 } },
          { "chepa_Mercedes_Atego_1530", 44000, { "" }, { "", "", -1 } },
          { "FPT_MAN", 49500, { "" }, { "", "", -1 } },
          { "ccfm1_renault", 70000, { "" }, { "", "", -1 } },
          { "CCRM_Renault", 35200, { "" }, { "", "", -1 } },
          { "chepa_renault_lander", 46000, { "" }, { "", "", -1 } },
          { "FPT_Mercedes", 32850, { "" }, { "", "", -1 } },
          { "berlingo2_vlcg", 22150, { "" }, { "", "", -1 } }, 
          { "C_Van_02_medevac_F", 22150, { "" }, { "", "", -1 } },
          { "chduster14_vlhr", 23150, { "" }, { "", "", -1 } },
          { "Expert_VRID", 24150, { "" }, { "", "", -1 } },
          { "ranger15ch_VLHR", 22190, { "" }, { "", "", -1 } },
          { "chVSAV_Sprinter", 22180, { "" }, { "", "", -1 } },
          { "chvsavar_boxer", 23170, { "" }, { "", "", -1 } },
          { "VSAV_Boxer", 20150, { "" }, { "", "", -1 } },
          { "ccfm_mercedes", 20130, { "" }, { "", "", -1 } },
          { "midlum_recru", 13150, { "" }, { "", "", -1 } },
          { "1200RT_sp_ch", 19190, { "" }, { "", "", -1 } },
          { "ranger17ch_VLHR", 30600, { "" }, { "", "", -1 } }
        };
    };

    //spécialisation SP

    class gap_car {
        side = "med";
        vehicles[] = {
          { "brancardch", 200, { "" }, { "", "", -1 } },
          { "brancardlu", 200, { "" }, { "", "", -1 } },
          { "IvecoCh_grimp", 200, { "" }, { "", "", -1 } },
          { "chdefender_grimp", 200, { "" }, { "", "", -1 } },
          { "chcitan_vlcg", 200, { "" }, { "", "", -1 } },
          { "kangooII1_vl", 200, { "" }, { "", "", -1 } },
          { "chmaster2_vtu", 200, { "" }, { "", "", -1 } },
          { "VPL_Boxer", 200, { "" }, { "", "", -1 } }
        };
    };	


     class gno_car {
        side = "med";
        vehicles[] = {
          { "brancardch", 200, { "" }, { "", "", -1 } },
          { "brancardlu", 200, { "" }, { "", "", -1 } },
          { "chMaster3_vrch", 200, { "" }, { "", "", -1 } },
          { "trafic3_vsat", 200, { "" }, { "", "", -1 } }
        };
    };	

    class sssm_car {
            side = "med";
            vehicles[] = {
            { "brancardch", 200, { "" }, { "", "", -1 } },
            { "brancardlu", 200, { "" }, { "", "", -1 } },
            { "trafic3_vsm", 200, { "" }, { "", "", -1 } },
            { "chvsavar_ivecoar", 200, { "" }, { "", "", -1 } },
            { "RealMan_SprinterAR", 200, { "" }, { "", "", -1 } },
            { "chvsavar_sprinter", 200, { "" }, { "", "", -1 } },
            { "Megane_Estate_vli", 200, { "" }, { "", "", -1 } }
            };
        };

    class admin_car {
        side = "admin";
        vehicles[] = {
           { "ageracover", 0, { "" }, { "", "", -1 } },
           { "C63_ROCKET_MET", 0, { "" }, { "", "", -1 } }, //new 
           { "rs4cover2", 0, { "" }, { "", "", -1 } }, //  donateur
           { "rs4V12met", 0, { "" }, { "", "", -1 } }, //   donateur 
           { "rs4camo1met", 0, { "" }, { "", "", -1 } }, //  donateur 
           { "rs4camo1", 0, { "" }, { "", "", -1 } }, // donateur
            // AFaire

            { "Manlu", 12540, { "" }, { "", "", -1 } }, //vmax: 154     ch: 570    passagers= 21
            { "Transitlu_civ", 12540, { "" }, { "", "", -1 } }, //vmax: 178     ch: 150 fourgonnette
                      
            // americain

            { "Crownlu", 12540, { "" }, { "", "", -1 } }, //vmax: 222     ch: 328
            { "Mk3lu_civ", 12540, { "" }, { "", "", -1 } }, //vmax: 243     ch: 350
            { "Mustanglu_civ", 12540, { "" }, { "", "", -1 } }, //vmax: 260     ch: 528
            { "Raptorlu_road", 12540, { "" }, { "", "", -1 } }, //vmax: 227     ch: 511 pickup
            { "SRT8_12lu_civ", 12540, { "" }, { "", "", -1 } }, //vmax: 278     ch: 577
            { "Charger_1969lu_white", 12540, { "" }, { "", "", -1 } }, //vmax: 248     ch: 525
            { "Cruiserlu_tun", 12540, { "" }, { "", "", -1 } }, //vmax: 310     ch: 560
            { "Tahoelu_civ", 12540, { "" }, { "", "", -1 } }, //vmax: 238     ch: 555 suv
            { "Suburbanlu", 12540, { "" }, { "", "", -1 } }, //vmax: 238     ch: 555 suv
            { "Raptorlu_offroad", 12540, { "" }, { "", "", -1 } }, //vmax: 228     ch: 511 pickup avec rampe feu
            { "Charger_1969lu_Race", 12540, { "" }, { "", "", -1 } }, //vmax: 248     ch: 525
            { "Challengerlu_civ", 12540, { "" }, { "", "", -1 } }, //vmax: 290     ch: 577
            { "CHRlu_civ", 12540, { "" }, { "", "", -1 } }, //vmax: 263     ch: 531
            { "GT500lu_civ", 12540, { "" }, { "", "", -1 } }, //vmax: 302     ch: 711
            { "Vanduralu", 12540, { "" }, { "", "", -1 } }, //vmax: 158     ch: 258 fourgon
            { "Vanduralu_t", 12540, { "" }, { "", "", -1 } }, //vmax: 158     ch: 258 fourgon
            { "Vanduralu_tu", 12540, { "" }, { "", "", -1 } }, //vmax: 158     ch: 258 fourgon
            { "Saleenlu_civ", 12540, { "" }, { "", "", -1 } }, //vmax: 322     ch: 750 hypersport
            { "Model_Slu_civ", 12540, { "" }, { "", "", -1 } }, //vmax: 248     ch: 700
            { "YamahaQlu_civ", 12540, { "" }, { "", "", -1 } }, //vmax: 180     ch: 148 quad
            { "Peterbilt379lu_f", 12540, { "" }, { "", "", -1 } },  //vmax: 130     ch: 900 benne avec ferraille
            { "Peterbilt379lu_c", 12540, { "" }, { "", "", -1 } }, //vmax: 130     ch: 900 citerne
            { "Peterbilt379lu_b", 12540, { "" }, { "", "", -1 } }, //vmax: 130     ch: 900 benne vide
            { "Peterbilt379lu_v", 12540, { "" }, { "", "", -1 } }//vmax: 130     ch: 900 marchandise(logo arma)
        };
    };

    class onu_car {
        side = "civ";
        vehicles[] = {};
    };

    class sud {
        side = "civ";
        vehicles[] = {};
    };

    class onu_air {
        side = "civ";
        vehicles[] = {};
    };

    class onu_ship {
        side = "civ";
        vehicles[] = {};
    };

    class security_car {
        side = "civ";
        vehicles[] = {};
    };

    class president_car {
        side = "civ";
        vehicles[] = {
            { "d3s_vv222_18", 150000, { "" }, { "", "", -1 } }, // Mecedes Maybach S650 PullMan
            { "d3s_camaro_zl1_17", 180000, { "" }, { "", "", -1 } },
            { "V12_SVR", 200000, { "" }, { "", "", -1 } },
            { "ch_sprinter_civ_tv", 100000, { "" }, { "", "", -1 } },
            { "sciage_comp", 250000, { "" }, { "", "", -1 } },
            { "diam_comp", 250000, { "" }, { "", "", -1 } },
            { "sunrisebeach", 250000, { "" }, { "", "", -1 } },
            { "chbetonniere", 250000, { "" }, { "", "", -1 } },
            { "Peterbilt379lu_f", 250000, { "" }, { "", "", -1 } },
            { "Peterbilt379lu_v", 250000, { "" }, { "", "", -1 } },
            { "Peterbilt379lu_c", 250000, { "" }, { "", "", -1 } },
            { "Volvo_FHlu_v", 250000, { "" }, { "", "", -1 } },
            { "chcitan_civ_fm", 250000, { "" }, { "", "", -1 } },
            { "chpush_back", 250000, { "" }, { "", "", -1 } },
            { "agora_tcl", 250000, { "" }, { "", "", -1 } },
            { "Trafic2_civ_taxi", 250000, { "" }, { "", "", -1 } },
            { "chmegane_4_estate_taxi", 250000, { "" }, { "", "", -1 } },
            { "Mer_Vito_civ_taxi", 250000, { "" }, { "", "", -1 } },
            { "C_Tractor_01_F", 250000, { "" }, { "", "", -1 } }
        };
    };

    class med_ship {
        side = "med";
        vehicles[] = {
            { "SH_BLS_SP", 100000, { "" }, { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = { 
            { "d3s_luaz969m", 4000, { "" }, { "", "", -1 } },
            { "chexpert3_cciv", 7500, { "" }, { "", "", -1 } },
            { "chtrafic1_ut", 17000, { "" }, { "", "", -1 } },
            { "type_hch_car", 25500, { "" }, { "", "", -1 } },
            { "Peugeot_Boxer_civ", 34000, { "" }, { "", "", -1 } },
            { "chmaster2ut_civ", 46750, { "" }, { "", "", -1 } },
            { "Ducato_civ", 55250, { "" }, { "", "", -1 } },
            { "Vanduralu", 60500, { "" }, { "", "", -1 } },
            { "Vanduralu_t", 60500, { "" }, { "", "", -1 } },
            { "Vanduralu_tu", 60500, { "" }, { "", "", -1 } },
            { "C_Van_01_fuel_F", 85000, { "" }, { "", "", -1 }, {"prof_livraison >= 0", "Niveau livraison: 0<br/>Compétence: aucune"} },
            { "B_Truck_01_fuel_F", 220000, { "" }, { "", "", -1 }, {"prof_livraison >= 10", "Niveau livraison: 10<br/>Compétence: aucune"} }, 
            { "C_Truck_02_fuel_F", 450000, { "" }, { "", "", -1 }, {"prof_livraison >= 250", "Niveau livraison: 250<br/>Compétence: aucune"} },
            { "d3s_kamaz_5350_bocha", 500000, { "" }, { "", "", -1 }, {"prof_livraison >= 500", "Niveau livraison: 500<br/>Compétence: aucune"} },
            { "chciternvol_bp", 550000, { "" }, { "", "", -1 }, {"prof_livraison >= 500", "Niveau livraison: 500<br/>Compétence: aucune"} },
            { "chciternvol_total", 550000, { "" }, { "", "", -1 }, {"prof_livraison >= 500", "Niveau livraison: 500<br/>Compétence: aucune"} },
            { "Volvo_FHlu_c", 600000, { "" }, { "", "", -1 }, {"prof_livraison >= 500", "Niveau livraison: 500<br/>Compétence: aucune"} },
            //{ "d3s_zil_131_4", 300000, { "" }, { "", "", -1 }, {"prof_livraison >= 500", "Niveau livraison: 500<br/>Compétence: aucune"} },
            { "d3s_kamaz", 145000, { "" }, { "", "", -1 }, {"life_playerlevel >= 2", "Niveau: 2<br/>Compétence: aucune"} },
            { "d3s_kamaz_2", 250000, { "" }, { "", "", -1 }, {"life_playerlevel >= 4", "Niveau: 4<br/>Compétence: aucune"} },
            { "d3s_kamaz_5350", 355000, { "" }, { "", "", -1 }, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"} },
            { "Volvo_FH13", 512500, { "" }, { "", "", -1 }, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"} },
            { "midlum", 670000, { "" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },
            { "Renault_Range_T", 827500, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "chbenne", 827500, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "SLB2k11_Scania_420_weis", 995000, { "" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} },
            { "V12_STRALIS23", 1292500, { "" }, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"} },
            { "d3s_actros_14_giga", 1450000, { "" }, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"} }  
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
          //{ "d3s_kraz_6315 ", 200000, { "insurge" }, { "", "", -1 },{"life_playerlevel >= 50 && ['vehiclesweapons'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Véhicules armés"}},
         // { "d3s_kamaz_tent2 ", 200000, { "insurge" }, { "", "", -1 },{"life_playerlevel >= 50 && ['vehiclesweapons'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Véhicules armés"}},
         // { "d3s_kamaz_tent ", 200000, { "insurge" }, { "", "", -1 },{"life_playerlevel >= 50 && ['vehiclesweapons'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Véhicules armés"}},  
          { "Raptorlu_road", 500000, { "insurge" }, { "", "", -1 },{"life_playerlevel >= 50 && ['vehiclesweapons'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Véhicules armés"}},
          { "Raptorlu_offroad", 400000, { "insurge" }, { "", "", -1 },{"life_playerlevel >= 50 && ['vehiclesweapons'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Véhicules armés"}},
          { "I_G_Offroad_01_armed_F", 10000000, { "insurge" }, { "", "", -1 },{"life_playerlevel >= 50 && ['vehiclesweapons'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Véhicules armés"}}
        };
    };

    class reb_truck {
        side = "civ";
        vehicles[] = {
          { "DAR_MK27E", 1600000, { "insurge"  }, { "", "", -1 }},
          { "vurtual_mtvr_mk27", 1800000, { "insurge" }, { "", "", -1 }}
        };
    };

    class civ_chopshop {
        side = "civ";
        vehicles[] = {
            //      Voitures j'ai renomé - AlessioRS5Gofast - en miniscule
            { "WRX_Gofast", 550000, { "" }, { "", "", -1 } },
            { "AlessioMustangGofast", 600000, { "" }, { "", "", -1 } },
            { "AlessioC63Black", 650000, { "" }, { "", "", -1 } },
            { "C63S_Gofast", 650000, { "" }, { "", "", -1 } },            
            { "AlessioRS5Gofast", 700000, { "" }, { "", "", -1 } }, 
            { "AlessioRS4Gofast", 750000, { "" }, { "", "", -1 } },
            { "AlessioM5Gofast", 800000, { "" }, { "", "", -1 } },
            { "M5_Gofast", 800000, { "" }, { "", "", -1 } },
            { "RS6_Gofast", 850000, { "" }, { "", "", -1 } }
        };
    };

    class navalo_air {
        side = "civ";
        vehicles[] = {};
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", 220000, { "" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },
            { "EC135Noirlu", 220000, { "" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },
            { "B_Heli_Light_01_F", 260000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "O_Heli_Light_02_unarmed_F", 310000, { "" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} },       //      Orca
            { "d3s_AS_365", 370000, { "" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 25<br/>Compétence: aucune"} },
            { "EC635_Unarmed", 385000, { "" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 25<br/>Compétence: aucune"} },
            { "C_IDAP_Heli_Transport_02_F", 385000, { "" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 25<br/>Compétence: aucune"} },
            //{ "sab_aircrane", 400000, { "" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 25<br/>Compétence: aucune"} },
            { "I_Heli_Transport_02_F", 320000, { "" }, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"} },          //      CH-49 Mohawk
            { "C_Plane_Civil_01_F", 120000, { "" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} },
            { "sab_dc3", 120000, { "" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} },
            { "sab_comet", 119000, { "" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} },
            { "sab_katana", 118000, { "" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} },
            { "sab_piper", 117000, { "" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} },
            { "sab_grob115", 116000, { "" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} },
            { "sab_stampe", 115000, { "" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} },
            { "sab_faallegro", 110000, { "" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} },
            { "sab_robindr400", 108000, { "" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} },
            { "sab_zlin", 105000, { "" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} },
           // { "sab_geebee", 100000, { "" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} }, //bug
            //{ "sab_do228", 900000, { "" }, { "", "", -1 }, {"prof_livraison >= 250", "Niveau livraison: 250<br/>Compétence: aucune"} },
            { "Sab_cz_An2", 950000, { "" }, { "", "", -1 }, {"prof_livraison >= 250", "Niveau livraison: 250<br/>Compétence: aucune"} },
            { "Sab_af_An2", 950000, { "" }, { "", "", -1 }, {"prof_livraison >= 250", "Niveau livraison: 250<br/>Compétence: aucune"} },
            { "Sab_tk_An2", 950000, { "" }, { "", "", -1 }, {"prof_livraison >= 250", "Niveau livraison: 250<br/>Compétence: aucune"} },
            { "sab_an2_sea", 950000, { "" }, { "", "", -1 }, {"prof_livraison >= 250", "Niveau livraison: 250<br/>Compétence: aucune"} },
            { "sab_aeroc", 1000000, { "" }, { "", "", -1 }, {"prof_livraison >= 250", "Niveau livraison: 250<br/>Compétence: aucune"} },
            //{ "sab_sikorskys38", 1200000, { "" }, { "", "", -1 }, {"prof_livraison >= 350", "Niveau livraison: 350<br/>Compétence: aucune"} },
            { "sab_trimotor", 1200000, { "" }, { "", "", -1 }, {"prof_livraison >= 350", "Niveau livraison: 350<br/>Compétence: aucune"} },
            { "sab_falcon", 1600000, { "" }, { "", "", -1 }, {"prof_livraison >= 500", "Niveau livraison: 500<br/>Compétence: aucune"} },
             { "sab_C130_H_CSAT3", 1600000, { "" }, { "", "", -1 }, {"prof_livraison >= 500", "Niveau livraison: 500<br/>Compétence: aucune"} },

            { "do228_ch_ac", 1500000, { "" }, { "", "", -1 }, {"prof_livraison >= 300", "Niveau livraison: 300<br/>Compétence: aucune"} }
            //{ "A320_ch_VY", 2000000, { "" }, { "", "", -1 }, {"prof_livraison >= 500", "Niveau livraison: 500<br/>Compétence: aucune"} }
            // Caisses
           // { "C_supplyCrate_F", 200000, { "" }, { "", "", -1 }, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"} },
           // { "B_CargoNet_01_ammo_F", 250000, { "" }, { "", "", -1 }, {"life_playerlevel >= 55", "Niveau: 55<br/>Compétence: aucune"} },
           // { "Land_MetalBarrel_F", 300000, { "" }, { "", "", -1 }, {"life_playerlevel >= 60", "Niveau: 60<br/>Compétence: aucune"} },
           // { "FlexibleTank_01_forest_F", 350000, { "" }, { "", "", -1 }, {"life_playerlevel >= 65", "Niveau: 65<br/>Compétence: aucune"} },
           // { "CargoNet_01_barrels_F", 1000000, { "" }, { "", "", -1 }, {"life_playerlevel >= 70", "Niveau: 70<br/>Compétence: aucune"} }
        };
    };

    class reb_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_stripped_F", 320000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "CH49_Mohawk_POD", 250000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },            
            { "O_Heli_Light_02_unarmed_POD", 270000, { "" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} },     //  Orca
            { "Sab_A2_An2", 1000000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"} },       //Gros avion
            { "O_Heli_Transport_04_F", 250000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"} },     //  Mi-290 Taru
            { "B_Heli_Transport_03_unarmed_F", 280000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"} },     //  Huron
            // Caisses
            { "C_supplyCrate_F", 100000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "B_CargoNet_01_ammo_F", 100000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_MetalBarrel_F", 100000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "CargoNet_01_barrels_F", 100000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "FlexibleTank_01_forest_F", 100000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_Pod_Heli_Transport_04_bench_F", 100000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_Pod_Heli_Transport_04_covered_F", 100000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_Pod_Heli_Transport_04_box_F", 100000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_Pod_Heli_Transport_04_fuel_F", 100000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_Cargo10_military_green_F", 100000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "B_Slingload_01_Cargo_F", 100000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: <br/>Compétence: aucune"} },
            { "B_Slingload_01_Fuel_F", 100000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} }
        };
    };

    class cop_ship_cm {
        side = "cop";
        vehicles[] = {
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "B_Boat_Transport_01_F", 35000, { "" }, { "", "", -1 } },
            { "C_Scooter_Transport_01_F", 10000, { "" }, { "", "", -1 }, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"} },
            { "C_Boat_Civil_01_F", 200000, { "" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },
            { "I_C_Boat_Transport_02_F", 250000, { "" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },
            { "C_Boat_Transport_02_F", 300000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "B_SDV_01_F", 200000, { "" }, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"} },
            { "Burnes_MK10_1", 1065000, { "" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} }
        };
    };


    class reb_ship {
        side = "civ";
        vehicles[] = {
        };
    };

    class civ_depan {
        side = "civ";
        vehicles[] = {
              { "chtwingoII_DIR", 8000, { "" }, { "", "Niveau: 0<br/>Compétence: aucune", -1 } },
              { "ClioIII_DIR", 8000, { "" }, { "", "Niveau: 0<br/>Compétence: aucune", -1 } },
              { "KangooI2_DIR", 8000, { "" }, { "", "Niveau: 0<br/>Compétence: aucune", -1 } },
              { "Master3_DIR", 8000, { "" }, { "", "Niveau: 0<br/>Compétence: aucune", -1 } },
              { "Trafic3_DIR", 8000, { "" }, { "", "Niveau: 0<br/>Compétence: aucune", -1 } },
              { "tcs_pl", 43000, { "" }, { "", "Niveau: 0<br/>Compétence: aucune", -1 } },
              { "tcs_transport", 33000, { "" }, { "", "Niveau: 0<br/>Compétence: aucune", -1 } },
              { "tcs_plat", 25000, { "" }, { "", "Niveau: 0<br/>Compétence: aucune", -1 } }
        };
    };

    
    class civ_brinks {
        side = "civ";
        vehicles[] = {
            { "chVario_brinks", 120000, { "" }, { "", "", -1 } }, 
            { "C_Van_02_vehicle_F", 95000, { "" }, { "", "", -1 } },
            { "suburban", 95000, { "" }, { "", "", -1 } },
            { "chH1", 195000, { "" }, { "", "", -1 } },
            { "chH1_ST", 200000, { "" }, { "", "", -1 } },
            { "C_Offroad_01_F", 95000, { "" }, { "", "", -1 } },
            { "Manlu", 350000, { "" }, { "", "", -1 } }
        };
    };
};
