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

    class civ_fuelStat {
         side = "civ";
        vehicles[] = {
             //{ "ACE_Wheel", 1000, { "" }, { "", "", -1 } }
        };
    };

    class civ_garage {
         side = "civ";
        vehicles[] = {
             //{ "ACE_Wheel", 15000, { "" }, { "", "", -1 } }
        };
    };

    class civ_alphonse {
         side = "civ";
        vehicles[] = {
             //{ "RDS_tt650_Civ_01", 2000000, { "" }, { "", "", -1 } }
        };
    };

    

    class kart_shop {
        side = "civ";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "C_Kart_01_F", 3000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} }
        };
    };






    class admin_car {
        side = "civ";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "B_Boat_Armed_01_minigun_F", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "ARMSCor_AlouetteIII_B", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "CBRN_Containment_Vehicle", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "CBRN_Offroad_Comms", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },

            // D3S
            { "d3s_Aprilia_Tuono_V4_1100_RR", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_BMW_S_1000_RR", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_Ducati_Monster_1200_S", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_Ducati_XDiavel_S", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_Kawasaki_Ninja_H2R", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_Kawasaki_Z800", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_KTM_1290_Super_Duke", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_Suzuki_GSX_R_1000", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_e60_09_ACS5", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_stelvio_18", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_stelvio_18_Ti", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_stelvio_19_MNSTR", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_Q7_15", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_e60_09", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_f85_15_m", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_e89_12", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_g800_17", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_skylark_52", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_escalade_16", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_tahoe_08", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_tahoe_EX", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_challenger_15_LW", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_challenger_15_WIDE", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_challenger_15", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_srthellcat_15", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_charger_15", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_coronet_70", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_LaFerrari_14", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_raptor_SCR_17", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_raptor_17", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_savana_05", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_savana_VAN", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_h2_02", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_cherokee_18", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_cherokee_18_TRCK", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_trailcat_17", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_lx570_16", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_levante_s_17_mat", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_g350d_15", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_g63amg_16", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_g65amg_16", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_g65amg_Mansory", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_gl63amg_12", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_gl63amg_12_SE", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_s560_18", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_vv222_18", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_dawn_16_II", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_dawn_16", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_dawn_16_III", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_wrx_17", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_wrx_sti_17", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_wrx_17_FnF8", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_200_VX_16", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_200_16_EX", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_uaz_3159", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_uaz_3165M", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_uaz_3170", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_uaz_469P", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_uaz_3162", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_e60_09_EX", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_willys", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_niva_2329", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_tiger_2975", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_2", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_tent_2", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_bocha", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_tent", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_tent2", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_4350", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_4350_tent", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_4350_tent2", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_4350_kung", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_5350", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_5350_tent", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_5350_bocha", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_6350", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kraz_6315", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kraz_6316", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_actros_14", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_ural", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_ural_tent", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_next", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_next_tent", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_next_bocha", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_next_kung", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_130_01", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_130_06", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_130_05", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_130", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_130_02", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_130_04", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_130_07", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_130_03", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_131", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_131_2", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_131_4", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_131_5", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_zil_131_3", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_gaz66", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_gaz66_TENT", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_gaz66_AC", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_gaz66_KUNG", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_kamaz_kung", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_maz_6317", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_maz_6317_tent", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_maz_6317_cistern", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_maz_7429", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_maz_7429_cistern", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_452", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_3303", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            
            { "d3s_stelvio_18_COP", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_tahoe_PPV", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_raptor_PRP_17", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_cherokee_18_JPPV", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_escalade_16_cop", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_g63amg_16_Police", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_srthellcat_15_CPP", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_savana_INKAS", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_g63amg_16_FSB", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_lx570_16_FSB", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_stelvio_18_UNM", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_tahoe_UNM", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_raptor_UNM_17", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_cherokee_18_UNM", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_gl63amg_12_FSB", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "d3s_200_16_FSB", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },

            { "ivory_c", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            { "ivory_veyron", 10, { "" }, { "life_adminlevel", "SCALAR", 3 } },
            
        };
    };

    

    

    // ----------------------------------------------------------------------- TERRESTRE ----------------------------------------------------------------------------

    class civ_car {
        side = "civ";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            /*
            { "C_Quadbike_01_F", 2500, { "driver" }, { "", "", -1 } },
            { "C_Offroad_01_F", 12000, { "driver" }, { "", "", -1 } },
            { "C_Offroad_01_covered_F", 14000, { "driver" }, { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", 31000, { "driver" }, { "", "", -1 } },
            //{ "ivory_suburban", 62000, { "driver" }, { "", "", -1 } }, // 175
            { "ivory_190e", 45000, { "driver" }, { "", "", -1 } }, // merco benz 190e  230  //0-200  52s

            { "ivory_gti", 46000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"} }, // golf gti 250  //0-200  38s


            { "ivory_e36", 50000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} }, // BMe36 236  //0-200  34s

            { "ivory_supra", 55000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"} }, // supra  260  //0-200  33s

            //{ "C_SUV_01_F", 56000, { "" }, { "", "", -1 } }, // 250
            
            { "ivory_evox", 58000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} }, //261   //0-200  29s

            { "ivory_wrx", 60000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"} }, // subaru   250  //0-200  25s

            { "ivory_supra_topsecret", 64000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} }, // supra ivory_supra_topsecret  334 //0-200  25s
            
            { "ivory_isf", 70000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"} }, // lexus isf  271 //0-200  24s

            { "ivory_m3", 74000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"} }, // BM3  291   //0-200  24s
            
            { "ivory_r34", 78000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 28", "Niveau: 28<br/>Compétence: aucune"} }, // nissan skyline gtr  280   //0-200  23s

            { "ivory_rs4", 80000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"} }, // rs4  250  //0-200  23s

            { "ivory_elise", 90000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"} }, // lotus elise 236 //0-200  19s

            { "IVORY_R8", 110000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"} }, // Audi R8 296        //0-200  19s
            { "IVORY_R8SPYDER", 115000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"} }, // Audi R8 296

            { "ivory_gt500", 90000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 38", "Niveau: 38<br/>Compétence: aucune"} }, // shelby gt500  159

            { "ivory_c", 138000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"} }, // bencley    324 //0-200  22s

            { "ivory_lfa", 156000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 42", "Niveau: 42<br/>Compétence: aucune"} }, // lexus ivory_lfa      326   //0-200  17s
            
            { "ivory_mp4", 201000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"} }, // mclaren mp4 331  //0-200  13s
            
            { "ivory_f1", 680000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 48", "Niveau: 48<br/>Compétence: aucune"} }, // mclaren f1   373  //0-200  12s

            { "ivory_veyron", 1200000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"} }, // veyron    409     //0-200  8s
            */
            { "C_Quadbike_01_F", 2500, { "driver" }, { "", "", -1 } },
            { "d3s_uaz_3170", 9000, { "driver" }, { "", "", -1 } },
            { "d3s_uaz_3162", 11000, { "driver" }, { "", "", -1 } },
            { "d3s_avalon_18", 14000, { "driver" }, { "", "", -1 } },
            { "d3s_is_16", 15000, { "driver" }, { "", "", -1 } },
            { "d3s_uaz_3165M", 22000, { "driver" }, { "", "", -1 } },
            { "d3s_savana_VAN", 26000, { "driver" }, { "", "", -1 } },
            { "d3s_savana_05", 28000, { "driver" }, { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", 31000, { "driver" }, { "", "", -1 } },
            { "d3s_200_VX_16", 36000, { "driver" }, { "", "", -1 } },
            { "d3s_e89_12", 42000, { "driver" }, { "", "", -1 } },
            { "d3s_g350d_15", 68000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 4", "Niveau: 4<br/>Compétence: aucune"} },
            { "d3s_e60_09_m", 74000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"} },
            { "d3s_trailcat_17", 76000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"} },
            { "d3s_lx570_16", 92000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"} },
            { "d3s_gl63amg_12", 92000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"} },
            { "d3s_e53_03_30", 97000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "d3s_escalade_16", 101000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "d3s_challenger_15", 102000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "d3s_h2_02", 102000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "d3s_tahoe_08", 105000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "d3s_f85_15_m", 106000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "d3s_raptor_17", 112000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 17", "Niveau: 17<br/>Compétence: aucune"} },
            { "d3s_charger_15", 114000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 17", "Niveau: 17<br/>Compétence: aucune"} },
            { "d3s_cherokee_18", 118000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"} },
            { "d3s_s560_18", 127000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 19", "Niveau: 19<br/>Compétence: aucune"} },
            { "d3s_levante_17", 131000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} },
            { "d3s_stelvio_18", 136000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 21", "Niveau: 21<br/>Compétence: aucune"} },
            { "d3s_dawn_16", 150000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 24", "Niveau: 24<br/>Compétence: aucune"} },
            { "d3s_Q7_15", 172000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 27", "Niveau: 27<br/>Compétence: aucune"} },
            { "d3s_uaz_3159_AMG", 198000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"} },
            { "d3s_skylark_52", 240000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 37", "Niveau: 37<br/>Compétence: aucune"} },
            { "d3s_coronet_70", 320000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 41", "Niveau: 41<br/>Compétence: aucune"} },
            { "d3s_LaFerrari_14", 1196000, { "driver" }, { "", "", -1 }, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"} }

        };
    };

    class civ_truck {
        side = "civ";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {


            { "d3s_452", 17000, { "trucking" }, { "", "", -1 } },
            { "d3s_zil_130_01", 22000, { "trucking" }, { "", "", -1 } },
            //{ "C_Van_01_transport_F", 22000, { "trucking" }, { "", "", -1 } },
            { "d3s_zil_131", 92000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"} },
            { "d3s_kamaz", 137000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },
            { "d3s_kamaz_4350", 137000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },
            { "C_Van_02_vehicle_F", 32000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} }, //    Camionette Cargaison CIVIL
            { "d3s_next", 227000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} },
            { "d3s_maz_6317", 227000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} },
            { "d3s_kraz_6315", 362000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"} },
            { "d3s_kamaz_6350", 632000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 48", "Niveau: 48<br/>Compétence: aucune"} },
            { "d3s_maz_7429", 632000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 48", "Niveau: 48<br/>Compétence: aucune"} },
            { "d3s_actros_14", 632000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 48", "Niveau: 48<br/>Compétence: aucune"} }



            /*

            { "C_Van_01_transport_F", 22000, { "trucking" }, { "", "", -1 } },
            { "C_Van_01_box_F", 25000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 3", "Niveau: 3<br/>Compétence: aucune"} },
            { "C_Van_02_vehicle_F", 32000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} }, //    Camionette Cargaison CIVIL
            { "C_Van_02_transport_F", 34000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },
            { "C_Truck_02_transport_F", 42000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            //{ "O_Truck_03_transport_F", 110000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"} },
            //HEMTT
            { "B_Truck_01_mover_F", 80000, { "trucking" }, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"} },
            */


        };
    };

    class cop_car {
        side = "cop";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {

            { "B_Quadbike_01_F", 2500, { "" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_tahoe_PPV", 18000, { "" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "kecske_evox_gen_d", 58000, { "" }, { "life_coplevel", "SCALAR", 2 }, {"true", "Grade: Brigadier"} },
            { "d3s_cherokee_18_JPPV", 58000, { "" }, { "life_coplevel", "SCALAR", 3 }, {"true", "Grade: Brigadier Chef"} },
            { "B_GEN_Van_02_transport_F", 35000, { "" }, { "life_coplevel", "SCALAR", 3 }, {"true", "Grade: Brigadier Chef"} },
            { "B_GEN_Van_02_vehicle_F", 32000, { "" }, { "life_coplevel", "SCALAR", 3 }, {"true", "Grade: Brigadier Chef"} },
            { "Gendarmerie_Touereg", 86000, { "" }, { "life_coplevel", "SCALAR", 5 }, {"true", "Grade: Maréchal des Logis"} }, //  Touereg  237   //0-100  6s  //0-200  20s
            { "VPC_Gen", 160000, { "" }, { "life_coplevel", "SCALAR", 7 }, {"true", "Grade: Adjudant"} },
            { "Gendarmerie_GOLF6", 96000, { "" }, { "life_coplevel", "SCALAR", 7 }, {"true", "Grade: Adjudant"} },   // Golf    252 //0-100  4s  //0-200  14s
            { "d3s_raptor_PRP_17", 86000, { "" }, { "life_coplevel", "SCALAR", 8 }, {"true", "Grade: Adjudant Chef"} },
            { "Gendarmerie_RS4", 112000, { "" }, { "life_coplevel", "SCALAR", 8 }, {"true", "Grade: Adjudant Chef"} },
            { "B_G_Offroad_01_armed_F", 20000, { "" }, { "life_coplevel", "SCALAR", 8 }, {"true", "Grade: Adjudant Chef"} },
            //{ "d3s_srthellcat_15_CPP", 25000, { "" }, { "life_coplevel", "SCALAR", 8 }, {"true", "Grade: Adjudant Chef"} },
            { "B_MRAP_01_F", 230000, { "" }, { "life_coplevel", "SCALAR", 10 }, {"true", "Grade: Lieutenant"} },
            { "B_T_LSV_01_armed_F", 45000, { "" }, { "life_coplevel", "SCALAR", 11 }, {"true", "Grade: Capitaine"} },    // Prowler (Armé)
            { "Gendarmerie_CBRN_Vehicle", 32000, { "" }, { "life_coplevel", "SCALAR", 12 }, {"true", "Grade: Commandant"} },
            { "Gendarmerie_Mamba", 40000, { "" }, { "life_coplevel", "SCALAR", 12 }, {"true", "Grade: Commandant"} },
            { "CBRN_Containment_Vehicle", 32000, { "" }, { "life_coplevel", "SCALAR", 13 }, {"true", "Grade: Colonel"} },
            { "O_Truck_03_repair_F", 70000, { "" }, { "life_coplevel", "SCALAR", 13 }, {"true", "Grade: Colonel"} },
        };
    };

    class cop_banal {
        side = "cop";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "d3s_g63amg_16_FSB", 160000, { "cbanal" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_lx570_16_FSB", 183000, { "cbanal" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_gl63amg_12_FSB", 158000, { "cbanal" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_200_16_FSB", 186000, { "cbanal" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_stelvio_18_UNM", 210000, { "cbanal" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_tahoe_UNM", 164000, { "cbanal" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_raptor_UNM_17", 168000, { "cbanal" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_cherokee_18_UNM", 172000, { "cbanal" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
        };
    };

    class cop_pigt {
        side = "cop";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "d3s_raptor_UNM_17", 168000, { "cPigt" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_g63amg_16_FSB", 160000, { "cPigt" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_200_16_FSB", 186000, { "cPigt" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_stelvio_18_UNM", 210000, { "cPigt" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
            { "d3s_lx570_16_FSB", 183000, { "cPigt" }, { "life_coplevel", "SCALAR", 1 }, {"true", "Grade: GAV"} },
        };
    };

    class med_car {
        side = "med";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "brancardlu", 500, { "" }, { "life_medicLevel", "SCALAR", 2 } },          
            { "C_Van_02_medevac_F", 38000, { "" }, { "life_medicLevel", "SCALAR", 2 } },
            { "B_GEN_Van_02_vehicle_F", 38000, { "" }, { "life_medicLevel", "SCALAR", 3 } }, 
            { "C_IDAP_Van_02_medevac_F", 38000, { "" }, { "life_medicLevel", "SCALAR", 3 } }, 
            { "M_CVPI_EMS", 38000, { "" }, { "life_medicLevel", "SCALAR", 2 } },
            { "M_Tahoe_EMS", 38000, { "" }, { "life_medicLevel", "SCALAR", 2 } },
            { "M_Silverado", 38000, { "" }, { "life_medicLevel", "SCALAR", 2 } },
            { "M_Silverado_cab", 38000, { "" }, { "life_medicLevel", "SCALAR", 2 } },
            { "ch_umh_master3p2", 38000, { "" }, { "life_medicLevel", "SCALAR", 2 } },
            { "M_Ambulance", 38000, { "" }, { "life_medicLevel", "SCALAR", 2 } },
        };
    };

    class mafia_car {
        side = "civ";
        paymentType = "cash";
        legal = 1;
        vehicles[] = {
            //{ "ivory_suburban", 62000, { "mafia" }, { "", "", -1 } }, // 175

            { "d3s_is_16", 17250, { "mafia" }, { "", "", -1 } },
            { "d3s_savana_VAN", 29900, { "mafia" }, { "", "", -1 } },
            { "d3s_savana_05", 32200, { "mafia" }, { "", "", -1 } },
            { "d3s_g350d_15", 78200, { "mafia" }, { "", "", -1 }, {"life_playerlevel >= 4", "Niveau: 4<br/>Compétence: aucune"} },
            { "d3s_e60_09_m", 85100, { "mafia" }, { "", "", -1 }, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"} },
            { "d3s_gl63amg_12", 105800, { "mafia" }, { "", "", -1 }, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"} },
            { "d3s_escalade_16", 116150, { "mafia" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "d3s_levante_17", 150650, { "mafia" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} },
            { "d3s_stelvio_18", 156400, { "mafia" }, { "", "", -1 }, {"life_playerlevel >= 21", "Niveau: 21<br/>Compétence: aucune"} },
            { "d3s_gl63amg_12_SE", 197800, { "mafia" }, { "", "", -1 }, {"life_playerlevel >= 26", "Niveau: 26<br/>Compétence: aucune"} },
            { "d3s_is_16_SE", 219650, { "mafia" }, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"} },
            { "d3s_levante_s_17_mat", 243800, { "mafia" }, { "", "", -1 }, {"life_playerlevel >= 34", "Niveau: 34<br/>Compétence: aucune"} },
            { "d3s_stelvio_19_MNSTR", 345000, { "mafia" }, { "", "", -1 }, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"} },

            //{ "CUP_C_SUV_TK", 1000000, { "" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} }
        };
    };

    class narcos_car {
        side = "civ";
        paymentType = "cash";
        legal = 0;
        vehicles[] = {
            { "I_Quadbike_01_F", 1250, { "narcos" }, { "", "", -1 } },
            { "d3s_willys", 5980, { "" }, { "", "", -1 } },
            //{ "B_G_Offroad_01_F", 6900, { "" }, { "", "", -1 } },
            //{ "I_E_Offroad_01_covered_F", 8050, { "" }, { "", "", -1 } },
            { "d3s_uaz_3159", 9200, { "narcos" }, { "", "", -1 } },
            { "d3s_uaz_469P", 11500, { "narcos" }, { "", "", -1 }, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"} },
            //{ "d3s_niva_2329", 13800, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },
            //{ "I_G_Offroad_01_armed_F", 20000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 30 && ['vehiclesweapons'] call life_fnc_hasPerk", "Niveau: 30<br/>Compétence: véhicules armés"} },
            //{ "O_T_LSV_02_unarmed_F", 200100, { "insurge" }, { "", "", -1 }, {"'VehiclesV1' in life_insurge_cash_steps && life_playerlevel >= 35 && ['vehiclesarmor'] call life_fnc_hasPerk", "Niveau: 35<br/>Compétence: véhicules blindés"} },
            { "d3s_tiger_2975", 220000, { "narcos" }, { "", "", -1 }, {"'VehiclesV1' in life_insurge_cash_steps && life_playerlevel >= 40 && ['vehiclesarmor'] call life_fnc_hasPerk", "Niveau: 40<br/>Compétence: véhicules blindés"} },
            
            { "I_C_Offroad_02_LMG_F", 120000, { "narcos" }, { "", "", -1 }, {"life_playerlevel >= 30 && ['vehiclesweapons'] call life_fnc_hasPerk", "Niveau: 30<br/>Compétence: véhicules armés"} },
            //      Ifrit
            //{ "O_MRAP_02_F", 220000, { "insurge" }, { "", "", -1 }, {"'VehiclesV1' in life_insurge_cash_steps && life_playerlevel >= 40 && ['vehiclesarmor'] call life_fnc_hasPerk", "Niveau: 40<br/>Compétence: véhicules blindés"} },
            //      Strider
            //{ "I_MRAP_03_F", 280000, { "insurge" }, { "", "", -1 }, {"'VehiclesV1' in life_insurge_cash_steps && life_playerlevel >= 50 && ['vehiclesarmor'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: véhicules blindés"} }
        };
    };

    class narcos_truck {
        side = "civ";
        paymentType = "cash";
        legal = 0;
        vehicles[] = {
            { "O_G_Van_01_transport_F", 11000, { "narcos" }, { "", "", -1 } },
            { "d3s_gaz66", 26450, { "narcos" }, {"'VehiclesV1' in life_insurge_cash_steps && life_playerlevel >= 6", "Niveau: 6<br/>Cagnote: Vehicules"} },
            { "d3s_ural", 52325, { "narcos" }, {"'VehiclesV1' in life_insurge_cash_steps && life_playerlevel >= 10", "Niveau: 10<br/>Cagnote: Vehicules"} },
            //{ "I_C_Van_02_vehicle_F", 18400, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            //{ "I_C_Van_02_transport_F", 20125, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            //{ "O_Truck_03_transport_F", 129950, { "insurge" }, { "", "", -1 }, {"'VehiclesV1' in life_insurge_cash_steps && life_playerlevel >= 25", "Niveau: 25<br/>Cagnote: Vehicules"} }
        };
    };

    class civ_depan {
        side = "civ";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "Jonzie_Tow_Truck", 52000, { "" }, { "", "", -1 } },
            { "chmaster2_vtu", 36000, { "" }, { "", "", -1 } },
            { "chmaster2_pnb", 36000, { "" }, { "", "", -1 } },
            { "chmaster3_vsrl", 36000, { "" }, { "", "", -1 } },
            { "C_Van_01_fuel_F", 25000, { "" }, { "", "", -1 } }
        };
    };

    // ----------------------------------------------------------------------- AIR ----------------------------------------------------------------------------

    class civ_air {
        side = "civ";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", 400000, { "pilot" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },
            { "C_Plane_Civil_01_F", 90000, { "pilot" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "O_Heli_Light_02_unarmed_F", 550000, { "pilot" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} },       //      Orca
            { "I_Heli_Transport_02_F", 700000, { "pilot" }, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"} }          //      CH-49 Mohawk
            
            // Caisses
            /*{ "C_supplyCrate_F", 400000, { "pilot" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "B_CargoNet_01_ammo_F", 400000, { "pilot" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_MetalBarrel_F", 400000, { "pilot" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "FlexibleTank_01_forest_F", 400000, { "pilot" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "CargoNet_01_barrels_F", 400000, { "pilot" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} }*/
        };
    };

    class med_air {
        side = "med";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "EC135SAlu", 650000, { "" }, { "life_medicLevel", "SCALAR", 3 } },
        };
    };

    class cop_air {
        side = "cop";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "ARMSCor_AlouetteIII_B", 475000, { "cAir" }, { "life_coplevel", "SCALAR", 3 } },
            { "I_Heli_light_03_unarmed_F", 600000, { "cAir" }, { "life_coplevel", "SCALAR", 7 } },   // Hellcat
            { "B_Heli_Transport_03_unarmed_F", 1500000, { "cAir" }, { "life_coplevel", "SCALAR", 7 } },   //  Huron
            { "B_Heli_Transport_03_F", 1800000, { "cAir" }, { "life_coplevel", "SCALAR", 8 } },   //  Huron Armé
            { "B_Heli_Transport_01_F", 1300000, { "cAir" }, { "life_coplevel", "SCALAR", 8 } }, //      UH-80 Ghost Hawk
            { "B_T_VTOL_01_infantry_F", 8000000, { "cAir" }, { "life_coplevel", "SCALAR", 12 } }
        };
    };

    class narcos_air {
        side = "civ";
        paymentType = "cash";
        legal = 0;
        vehicles[] = {
            { "B_Heli_Light_01_F", 230000, { "narcos" }, { "", "", -1 }, {"'AirV1' in life_insurge_cash_steps && life_playerlevel >= 10", "Niveau: 10<br/>Cagnote: L'envol"} },
            //{ "O_Heli_Light_02_unarmed_POD", 316000, { "insurge" }, { "", "", -1 }, {"'AirV1' in life_insurge_cash_steps && life_playerlevel >= 20", "Niveau: 20<br/>Cagnote: L'envol"} },     //  Orca
            //{ "I_Heli_light_03_unarmed_F", 345000, { "insurge" }, { "", "", -1 }, {"'AirV2' in life_insurge_cash_steps && life_playerlevel >= 25", "Niveau: 25<br/>Cagnote: L'aigle"} },        // Hellcat
            //{ "CH49_Mohawk_POD", 402500, { "insurge" }, { "", "", -1 }, {"'AirV2' in life_insurge_cash_steps && life_playerlevel >= 30", "Niveau: 30<br/>Cagnote: L'aigle"} },          //      CH-49 Mohawk
            //{ "O_Heli_Transport_04_F", 920000, { "insurge" }, { "", "", -1 }, {"'AirV2' in life_insurge_cash_steps && life_playerlevel >= 35", "Niveau: 35<br/>Cagnote: L'aigle"} },     //  Mi-290 Taru
            //{ "B_Heli_Transport_03_unarmed_F", 862000, { "insurge" }, { "", "", -1 }, {"'AirV2' in life_insurge_cash_steps && life_playerlevel >= 40", "Niveau: 40<br/>Cagnote: L'aigle"} },   //  Huron
            //{ "B_Heli_Transport_03_F", 1035000, { "insurge" }, { "", "", -1 }, {"'AirV2' in life_insurge_cash_steps && life_playerlevel >= 45", "Niveau: 45<br/>Cagnote: L'aigle"} },     //  Huron Armé
            //{ "O_Heli_Attack_02_F", 1150000, { "insurge" }, { "", "", -1 }, {"'AirV2' in life_insurge_cash_steps && life_playerlevel >= 50", "Niveau: 50<br/>Cagnote: L'aigle"} },
            // Caisses
            
            /*
            { "C_supplyCrate_F", 400000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "B_CargoNet_01_ammo_F", 400000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_MetalBarrel_F", 400000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "CargoNet_01_barrels_F", 400000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "FlexibleTank_01_forest_F", 400000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_Pod_Heli_Transport_04_bench_F", 400000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_Pod_Heli_Transport_04_covered_F", 500000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_Pod_Heli_Transport_04_box_F", 600000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_Pod_Heli_Transport_04_fuel_F", 600000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "Land_Cargo10_military_green_F", 600000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "B_Slingload_01_Cargo_F", 600000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: <br/>Compétence: aucune"} },
            { "B_Slingload_01_Fuel_F", 600000, { "insurge" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} } */
        };
    };

    // ----------------------------------------------------------------------- Bateaux ----------------------------------------------------------------------------

    class civ_ship {
        side = "civ";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "C_Rubberboat", 2000, { "boat" }, { "", "", -1 } },   //  Embarcation legere
            { "C_Scooter_Transport_01_F", 8500, { "boat" }, { "", "", -1 }, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"} },    //  Scooter des mers
            { "C_Boat_Civil_01_F", 18000, { "boat" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },    //  Bateau classique
            { "C_Boat_Transport_02_F", 30000, { "boat" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} }, //  RHIB
            { "O_SDV_01_F", 150000, { "boat" }, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"} }
        };
    };

    class cop_ship {
        side = "cop";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "B_Boat_Transport_01_F", 2000, { "cg" }, { "life_coplevel", "SCALAR", 1 } }, //  Embarcation legere
            { "C_Boat_Civil_01_police_F", 18000, { "cg" }, { "life_coplevel", "SCALAR", 1 } },  //  Bateau classique
            { "I_C_Boat_Transport_02_F", 30000, { "cg" }, { "life_coplevel", "SCALAR", 4 } },   //  RHIB
            { "B_Boat_Armed_01_minigun_F", 100000, { "cg" }, { "life_coplevel", "SCALAR", 7 } },
            { "B_SDV_01_F", 150000, { "cg" }, { "life_coplevel", "SCALAR", 7 } }
        };
    };

    class med_ship {
        side = "med";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "C_Scooter_Transport_01_F", 18000, { "" }, { "life_medicLevel", "SCALAR", 2 } }, //  Embarcation legere
            { "SH_BLS_SP", 10000, { "" }, { "life_medicLevel", "SCALAR", 2 } }, //  Embarcation legere
        };
    };

    class narcos_ship {
        side = "civ";
        paymentType = "cash";
        legal = 0;
        vehicles[] = {
            { "I_Boat_Transport_01_F", 1000, { "narcos" }, { "", "", -1 } },   //  Embarcation legere
            { "I_SDV_01_F", 75000, { "narcos" }, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"} },
            { "I_Boat_Armed_01_minigun_F", 100000, { "narcos" }, { "", "", -1 }, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"} }
        };
    };

    class fed_car {
        side = "cop";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "B_Quadbike_01_F", 6000, { "" }, { "life_copUlevel", "EQUAL", 3 } },
            { "C_Offroad_01_F", 60000, { "" }, { "life_copUlevel", "EQUAL", 3 } },
            { "C_SUV_01_F", 80000, { "" }, { "life_copUlevel", "EQUAL", 3 } },
            { "C_Offroad_02_unarmed_F", 80000, { "" }, { "life_copUlevel", "EQUAL", 3 } },
          //{ "C_Hatchback_01_sport_F", 50000, { "" }, { "life_copUlevel", "EQUAL", 3 } },
            { "B_T_LSV_01_unarmed_F", 160000, { "" }, { "life_copUlevel", "EQUAL", 3 } },
            { "C_Offroad_01_repair_F", 160000, { "" }, { "life_copUlevel", "EQUAL", 3 } },
            { "B_G_Offroad_01_armed_F", 200000, { "" }, { "life_copUlevel", "EQUAL", 3 } },
            { "B_MRAP_01_F", 800000, { "" }, { "life_copUlevel", "EQUAL", 3 } },
            { "B_T_LSV_01_armed_F", 400000, { "" }, { "life_copUlevel", "EQUAL", 3 } }
        };
    };

    

    class narvalo_air {
        side = "civ";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            //{ "ARMSCor_AlouetteIII_B", 300000, { "" }, { "", "", -1 }}
        };
    };

    
    class civ_chopshop {
        side = "civ";
        paymentType = "cash";
        legal = 1;
        vehicles[] = {
            /*
            //      Voitures
            { "B_Quadbike_01_F", 3000, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_F", 13000, { "" }, { "", "", -1 } },
            { "C_Offroad_01_F", 30000, { "" }, { "", "", -1 } },
            { "C_SUV_01_F", 40000, { "" }, { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", 40000, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 50000, { "" }, { "", "", -1 } },
            //      Camions
            { "C_Van_01_transport_F", 80000, { "" }, { "", "", -1 } },
            { "B_Truck_01_mover_F", 100000, { "" }, { "", "", -1 } },
            { "C_Van_01_box_F", 130000, { "" }, { "", "", -1 } },
            { "I_Truck_02_transport_F", 200000, { "" }, { "", "", -1 }, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"} },
            { "I_Truck_02_covered_F", 250000, { "" }, { "", "", -1 }, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"} },
            { "I_Truck_02_ammo_F", 300000, { "" }, { "", "", -1 }, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"} },
            { "I_Truck_02_fuel_F", 300000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "O_Truck_03_transport_F", 400000, { "" }, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"} },
            { "B_Truck_01_transport_F", 500000, { "" }, { "", "", -1 }, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"} },
            { "O_Truck_03_covered_F", 500000, { "" }, { "", "", -1 }, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"} },
            { "B_Truck_01_covered_F", 600000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "O_Truck_03_repair_F", 600000, { "" }, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"} },
            { "B_Truck_01_ammo_F", 700000, { "" }, { "", "", -1 }, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"} },
            { "O_Truck_03_device_F", 700000, { "" }, { "", "", -1 }, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"} },
            { "O_Truck_03_ammo_F", 800000, { "" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} },
            { "B_Truck_01_box_F", 800000, { "" }, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"} },
            { "O_Truck_03_fuel_F", 800000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} },
            { "B_Truck_01_fuel_F", 800000, { "" }, { "", "", -1 }, {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"} }*/
        };
    };

    class president_car {
        side = "civ";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "d3s_escalade_16_gouv", 119000, { "" }, { "", "", -1 } },
            { "d3s_vv222_18", 615000, { "" }, { "", "", -1 } }
        };
    };

    class brinks_car {
        side = "civ";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "d3s_savana_INKAS", 2000, { "" }, { "", "", -1 } },
        };
    };
    
    class civ_press {
        side = "civ";
        paymentType = "bank";
        legal = 1;
        vehicles[] = {
            { "C_Van_02_service_F", 34000, { "" }, { "", "", -1 } },
        };
    };    
};