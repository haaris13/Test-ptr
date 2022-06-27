/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {

    class genstore {
        name = "Magasin général";
        side = "civ";
        level[] = { "", "", -1, "" };
        legal = 1;
        paymentType = "cash";

        other[] = {
            { "FirstAidKit", "", 499},
            { "bv_FlashLight", "", 50},
            { "SAN_Headlamp_v1", "", 90},
            { "SAN_Headlamp_v2", "", 90},       
            { "Binocular", "", 50},
            { "ItemGPS", "", 69},
            { "ItemMap", "", 25},
            { "ItemCompass", "", 15},
            { "ItemWatch", "", 49},
            { "ToolKit", "", 650},
            { "Chemlight_red", "", 6},
            { "Chemlight_yellow", "", 6},
            { "Chemlight_green", "", 6},
            { "Chemlight_blue", "", 6},
            { "tf_radio_civ", "", 39},
            { "murshun_cigs_matches", "", 50},
            { "murshun_cigs_lighter", "", 50},
            { "immersion_pops_poppack", "", 50},
            { "murshun_cigs_cigpack", "", 80},
            { "Xnooz_AppareilPhoto", "", 150},
        };
    };

    //Armory Shops
    class gun {
        name = "Magasin d'armes";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        legal = 1;
        paymentType = "bank";
        primary[] = {};

        secondary[] = {

                //=========================== Pistolet ==============================
                //  ---------------PM--------------
                { "hgun_Pistol_01_F", "", 2600, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                //  ------------ACP-C2-------------
                { "hgun_ACPC2_F", "", 2900, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
                { "RH_mak", "", 2900, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"}},
                //  --------------P07--------------
                { "hgun_P07_F", "", 3100, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "hgun_P07_khk_F", "", 3100, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "RH_tt33", "", 3200, {"life_playerlevel >= 9", "Niveau: 9<br/>Compétence: aucune"}},
                //  ------------Rook-40------------
                { "hgun_Rook40_F", "", 3200, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ------------4-five-------------
                { "hgun_Pistol_heavy_01_F", "", 3200, {"life_playerlevel >= 11", "Niveau: 11<br/>Compétence: aucune"}},
                { "hgun_Pistol_heavy_01_green_F", "", 3200, {"life_playerlevel >= 11", "Niveau: 11<br/>Compétence: aucune"}},
                { "RH_m1911", "", 3300, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"}},
                { "RH_g17", "", 3300, {"life_playerlevel >= 13", "Niveau: 13<br/>Compétence: aucune"}},
                { "RH_g19", "", 3300, {"life_playerlevel >= 14", "Niveau: 14<br/>Compétence: aucune"}},
                //{ "RH_m9", "", 3350, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "RH_p226", "", 3350, {"life_playerlevel >= 16", "Niveau: 16<br/>Compétence: aucune"}},
                { "RH_sw659", "", 3400, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},
                { "RH_cz75", "", 3500, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                { "RH_uspm", "", 3600, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
                { "RH_usp", "", 3700, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "RH_fn57", "", 3700, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},
                { "RH_gsh18", "", 3800, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "RH_fnp45", "", 3800, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"}},
                { "RH_deagle", "", 4000, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"}},
                //=========================== Revolver ==============================
                //  ------------Signal-------------
                { "hgun_Pistol_Signal_F", "", 1000, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                //  ------------Zubr .45 ACP-------------
                { "hgun_Pistol_heavy_02_F", "", 2700, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"}},
                { "RH_python", "", 2800, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                { "RH_mp412", "", 2900, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                { "RH_mateba", "", 3000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "RH_ttracker", "", 3200, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "RH_bull", "", 3500, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"}},
                //=========================== Auto ==============================
                { "RH_vp70", "", 3800, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},
                //{ "RH_muzi", "", 3000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //{ "RH_g18", "", 3400, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                //{ "RH_tec9", "", 3800, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                //{ "RH_vz61", "", 4200, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}}
                
            };

        ammo[] = {
                //=========================== Pistolet ==============================
                //  ---------------PM--------------
                { "10Rnd_9x21_Mag", "", 30 },
                //  ------------ACP-C2-------------
                { "9Rnd_45ACP_Mag", "", 32 },
                { "RH_8Rnd_9x18_Mak", "", 24},
                //  -----P07 & Rook-40 & Auto------
                { "16Rnd_9x21_Mag", "", 48},
                //{ "30Rnd_9x21_Mag", "", 90 },
                { "RH_8Rnd_762_tt33", "", 28},
                //  ------------4-five-------------
                { "11Rnd_45ACP_Mag", "", 39},
                { "RH_7Rnd_45cal_m1911", "", 25},
                //  ------------Glock-------------
                { "RH_17Rnd_9x19_g17", "", 51},
                { "RH_19Rnd_9x19_g18", "", 57},
                //{ "RH_33Rnd_9x19_g18", "", 99},
                //{ "RH_15Rnd_9x19_M9", "", 45},
                { "RH_15Rnd_9x19_SIG", "", 45},
                { "RH_14Rnd_9x19_sw", "", 42},
                { "RH_16Rnd_9x19_CZ", "", 48},
                { "RH_16Rnd_40cal_usp", "", 56},
                { "RH_12Rnd_45cal_usp", "", 42},
                { "RH_20Rnd_57x28_FN", "", 70},
                { "RH_18Rnd_9x19_gsh", "", 54},
                { "RH_15Rnd_45cal_fnp", "", 53},
                { "RH_7Rnd_50_AE", "", 25},
                //=========================== Revolver ==============================
                //  ------------Signal-------------
                { "6Rnd_RedSignal_F", "", 100},
                { "6Rnd_GreenSignal_F", "", 100},
                //  -------------Zubr--------------
                { "6Rnd_45ACP_Cylinder", "", 30},
                { "RH_6Rnd_357_Mag", "", 30},
                { "RH_6Rnd_44_Mag", "", 30},
                { "RH_6Rnd_45ACP_Mag", "", 30},
                { "RH_6Rnd_454_Mag", "", 30}
        };

        attachments[] = {
                { "optic_MRD", "", 250},
                { "optic_Yorris", "", 250},
                { "optic_MRD_black", "", 250},
                //  --------------ACO--------------
                {"optic_Aco", "", 1000 },
                {"optic_ACO_grn", "", 1000 },
                {"optic_Aco_smg", "", 1000 },
                {"optic_ACO_grn_smg", "", 1000 },
                //  ---------flashlight---------
                { "acc_flashlight", "", 290},
                { "acc_flashlight_pistol", "", 290},
                //  ----------pointer-----------
                { "acc_pointer_IR", "", 490}
        };

        other[] = {
            { "bv_FlashLight", "", 50},
            { "SAN_Headlamp_v1", "", 90},
            { "SAN_Headlamp_v2", "", 90},
            { "Binocular", "", 50},
            { "ItemGPS", "", 69},
            { "ItemMap", "", 25},
            { "ItemCompass", "", 15},
            { "ItemWatch", "", 49},
            { "ToolKit", "", 650},
            { "Chemlight_red", "", 6},
            { "Chemlight_yellow", "", 6},
            { "Chemlight_green", "", 6},
            { "Chemlight_blue", "", 6},
            { "tf_radio_civ", "", 39}
        };
    };

    class narcos {
        name = "Achat narcos";
        side = "civ";
        license = "narcos";
        level[] = { "", "", -1, "" };
        legal = 0;
        paymentType = "cash";
        primary[] = {
                //  ------------M4-------------
                { "KA_Model_723", "", 27059, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                { "KA_Model_733", "", 27059, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ------------SDAR-------------
                { "arifle_SDAR_F", "", 27059, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                //  ------------Rocket-------------
                { "launch_RPG7_F","", 80000, {"life_playerlevel >= 50 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Artilleur"}},
                { "launch_I_Titan_F","", 80000, {"life_playerlevel >= 50 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Artilleur"}}
        };
        secondary[] = {
                //=========================== Pistolet ==============================
                //  ---------------PM--------------
                { "hgun_Pistol_01_F", "", 3059, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                //  ------------ACP-C2-------------
                { "hgun_ACPC2_F", "", 3412, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
                { "RH_mak", "", 3412, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"}},
                //  --------------P07--------------
                { "hgun_P07_F", "", 3647, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "hgun_P07_khk_F", "", 3647, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "RH_tt33", "", 3765, {"life_playerlevel >= 9", "Niveau: 9<br/>Compétence: aucune"}},
                //  ------------Rook-40------------
                { "hgun_Rook40_F", "", 3765, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ------------4-five-------------
                { "hgun_Pistol_heavy_01_F", "", 3765, {"life_playerlevel >= 11", "Niveau: 11<br/>Compétence: aucune"}},
                { "hgun_Pistol_heavy_01_green_F", "", 3200, {"life_playerlevel >= 11", "Niveau: 11<br/>Compétence: aucune"}},
                { "RH_m1911", "", 3882, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"}},
                { "RH_g17", "", 3882, {"life_playerlevel >= 13", "Niveau: 13<br/>Compétence: aucune"}},
                { "RH_g19", "", 3882, {"life_playerlevel >= 14", "Niveau: 14<br/>Compétence: aucune"}},
                { "RH_p226", "", 3941, {"life_playerlevel >= 16", "Niveau: 16<br/>Compétence: aucune"}},
                { "RH_sw659", "", 4000, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},
                { "RH_cz75", "", 4118, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                { "RH_uspm", "", 4235, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
                { "RH_usp", "", 4353, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "RH_fn57", "", 4353, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},
                { "RH_gsh18", "", 4471, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "RH_fnp45", "", 4471, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"}},
                { "RH_deagle", "", 4706, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"}},
                //=========================== Revolver ==============================
                //  ------------Signal-------------
                { "hgun_Pistol_Signal_F", "", 1176, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                //  ------------Zubr .45 ACP-------------
                { "hgun_Pistol_heavy_02_F", "", 3176, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"}},
                { "RH_python", "", 3294, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                { "RH_mp412", "", 3412, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                { "RH_mateba", "", 3529, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "RH_ttracker", "", 3765, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "RH_bull", "", 4118, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"}}
        };
        ammo[] = {
                //=========================== Pistolet ==============================
                //  ---------------PM--------------
                { "10Rnd_9x21_Mag", "", 35 },
                //  ------------ACP-C2-------------
                { "9Rnd_45ACP_Mag", "", 38 },
                { "RH_8Rnd_9x18_Mak", "", 28},
                //  -----P07 & Rook-40 & Auto------
                { "16Rnd_9x21_Mag", "", 56},
                //{ "16Rnd_9x21_red_Mag", "", 8},
                //{ "16Rnd_9x21_green_Mag", "", 8},
                //{ "16Rnd_9x21_yellow_Mag", "", 8},
                { "30Rnd_9x21_Mag", "", 106 },
                { "RH_8Rnd_762_tt33", "", 33},
                //  ------------4-five-------------
                { "11Rnd_45ACP_Mag", "", 46},
                { "RH_7Rnd_45cal_m1911", "", 29},
                //  ------------Glock-------------
                { "RH_17Rnd_9x19_g17", "", 60},
                { "RH_19Rnd_9x19_g18", "", 67},
                { "RH_33Rnd_9x19_g18", "", 116},
                //{ "RH_15Rnd_9x19_M9", "", 45},
                { "RH_15Rnd_9x19_SIG", "", 53},
                { "RH_14Rnd_9x19_sw", "", 49},
                { "RH_16Rnd_9x19_CZ", "", 56},
                { "RH_16Rnd_40cal_usp", "", 66},
                { "RH_12Rnd_45cal_usp", "", 49},
                { "RH_20Rnd_57x28_FN", "", 82},
                { "RH_18Rnd_9x19_gsh", "", 64},
                { "RH_15Rnd_45cal_fnp", "", 62},
                { "RH_7Rnd_50_AE", "", 29},
                //=========================== Revolver ==============================
                //  ------------Signal-------------
                { "6Rnd_RedSignal_F", "", 118},
                { "6Rnd_GreenSignal_F", "", 118},
                //  -------------Zubr--------------
                { "6Rnd_45ACP_Cylinder", "", 35},
                { "RH_6Rnd_357_Mag", "", 35},
                { "RH_6Rnd_44_Mag", "", 35},
                { "RH_6Rnd_45ACP_Mag", "", 35},
                { "RH_6Rnd_454_Mag", "", 35},
                { "30Rnd_556x45_Stanag", "", 100 },
                { "KA_M16_30rnd_M855_FMJ_mag", "", 100 },
                //  -------------AKM--------------
                { "30Rnd_762x39_Mag_F", "", 100 },
                //  -------------AK12--------------
                { "30Rnd_762x39_AK12_Mag_F", "", 100 },
                { "30rnd_762x39_AK12_Lush_Mag_F", "", 100 },
                { "30rnd_762x39_AK12_Arid_Mag_F", "", 100 },
                //  ------------SDAR-------------
                { "20Rnd_556x45_UW_mag", "", 100 },
                //  -----------CAR-95-------------
                { "30Rnd_580x42_Mag_F", "", 100 },
                //  --------Type 115 & Katiba-------------
                { "30Rnd_65x39_caseless_green", "", 100 },
                //  ------------Promet-------------
                { "30Rnd_65x39_caseless_msbs_mag", "", 100 },
                //=========================== DMR ==============================
                //  ------- Rahim ---------
                { "10Rnd_762x54_Mag", "", 100 },
                //  ------- Mk-I EMR / Mk14 ---------
                { "10Rnd_Mk14_762x51_Mag", "", 100 },
                //  --- Mk-I EMR / Mk14 / SPAR-17 ---
                { "20Rnd_762x51_Mag", "", 100 },
                //  ---------CMR-76-----------
                { "20Rnd_650x39_Cased_Mag_F", "", 100 },
                //=========================== Sniper ==============================
                // ----------Cyrus--------------
                { "10Rnd_93x64_DMR_05_Mag", "", 100 },
                { "5Rnd_127x108_Mag", "", 100 },
                { "5Rnd_127x108_APDS_Mag", "", 100 },
                //  --------------RPG--------------
                { "RPG7_F","", 11765, {"life_playerlevel >= 50 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Artilleur"}},
                { "Titan_AA","", 11765, {"life_playerlevel >= 50 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Artilleur"}}
        };
        attachments[] = {
                { "optic_MRD", "", 590},
                { "optic_MRD_black", "", 590},
                { "optic_Yorris", "", 490},
                //  --------------ACO--------------
                {"optic_Aco", "", 750 },
                {"optic_ACO_grn", "", 750 },
                {"optic_Aco_smg", "", 750 },
                {"optic_ACO_grn_smg", "", 750 },
                //  --------------Holo-------------
                {"optic_Holosight", "", 850, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_khk_F", "", 850, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_blk_F", "", 850, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_smg", "", 850, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_smg_blk_F", "", 850, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ------------MRCO--------------
                {"optic_MRCO", "", 950, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                //  ------------ERCO--------------
                {"optic_ERCO_khk_F", "", 980, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                {"optic_ERCO_snd_F", "", 980, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                //  ------------RCO--------------
                {"optic_Hamr", "", 750, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},
                {"optic_Hamr_khk_F", "", 750, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},
                //  ------------ARCO--------------
                {"optic_Arco", "", 800, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                {"optic_Arco_ghex_F", "", 800, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                {"optic_Arco_blk_F", "", 800, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                //  ------------AMS--------------
                {"optic_AMS_khk", "", 1200, {"life_playerlevel >= 35 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 35<br/>Compétence: DMR ou Sniper"}},
                {"optic_AMS", "", 1200, {"life_playerlevel >= 35 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 35<br/>Compétence: DMR ou Sniper"}},
                {"optic_AMS_snd", "", 1200, {"life_playerlevel >= 35 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 35<br/>Compétence: DMR ou Sniper"}},
                //  ------------DMS--------------
                {"optic_DMS", "", 1400, {"life_playerlevel >= 38 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 38<br/>Compétence: DMR ou Sniper"}},
                {"optic_DMS_ghex_F", "", 1400, {"life_playerlevel >= 38 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 38<br/>Compétence: DMR ou Sniper"}},
                //  ------------MOS--------------
                {"optic_SOS", "", 1500, {"life_playerlevel >= 40 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 40<br/>Compétence: DMR ou Sniper"}},
                {"optic_SOS_khk_F", "", 1500, {"life_playerlevel >= 40 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 40<br/>Compétence: DMR ou Sniper"}},
                //  ------------Kahlia--------------
                {"optic_KHS_tan", "", 1800, {"life_playerlevel >= 45 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 45<br/>Compétence: DMR ou Sniper"}},
                {"optic_KHS_hex", "", 1800, {"life_playerlevel >= 45 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 45<br/>Compétence: DMR ou Sniper"}},
                {"optic_KHS_blk", "", 1800, {"life_playerlevel >= 45 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 45<br/>Compétence: DMR ou Sniper"}},
                {"optic_KHS_old", "", 1800, {"life_playerlevel >= 45 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 45<br/>Compétence: DMR ou Sniper"}},
                //  ---------flashlight---------
                { "acc_flashlight", "", 29},
                { "acc_flashlight_pistol", "", 29},
                //  ----------pointer-----------
                { "acc_pointer_IR", "", 49},
                {"KA_M16_flashlight", "", 49 },
                //  ------------Bipied--------------
                {"bipod_02_F_tan", "", 399 },
                {"bipod_02_F_hex", "", 399 },
                {"bipod_01_F_khk", "", 399 },
                {"bipod_01_F_mtp", "", 399 },
                {"bipod_03_F_blk", "", 399 },
                {"bipod_02_F_blk", "", 399 },
                {"bipod_01_F_blk", "", 399 },
                {"bipod_03_F_oli", "", 399 },
                {"bipod_01_F_snd", "", 399 },
        };
        
        other[] = {
            { "bv_FlashLight", "", 50},
            { "SAN_Headlamp_v1", "", 90},
            { "SAN_Headlamp_v2", "", 90},
            { "Binocular", "", 50},
            { "Xnooz_AppareilPhoto", "", 150},
            { "ItemGPS", "", 69},
            { "ItemMap", "", 25},
            { "ItemCompass", "", 15},
            { "ItemWatch", "", 49},
            { "ToolKit", "", 650},
            { "Chemlight_red", "", 6},
            { "Chemlight_yellow", "", 6},
            { "Chemlight_green", "", 6},
            { "Chemlight_blue", "", 6},
            { "tf_radio_reb", "", 39},
            { "FirstAidKit", "", 499},
        };
    };

    class rebel {
        name = "Achat insurge";
        side = "civ";
        license = "insurge";
        level[] = { "", "", -1, "" };
        legal = 0;
        paymentType = "cash";
        primary[] = {
                { "KA_Model_723", "", 27059, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                { "KA_Model_733", "", 27059, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                /*
                //  ---------------Sting--------------
                { "SMG_02_F", "", 15294, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ---------------Protector--------------
                { "SMG_05_F", "", 15882, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"}},
                //  ---------------Vector--------------
                { "SMG_01_F", "", 16471, {"life_playerlevel >= 14", "Niveau: 14<br/>Compétence: aucune"}},
                //  ---------------PDW 2000--------------
                { "hgun_PDW2000_F", "", 17647, {"life_playerlevel >= 16", "Niveau: 16<br/>Compétence: aucune"}},
                //  -----------AKS-74U----------
                { "arifle_AKS_F", "", 20000, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},    // SANS VISEURS //AKS 5.45mm
                //  ------------P90---------------
                { "SMG_03C_TR_black", "", 23529, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "SMG_03C_TR_camo", "", 23529, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "SMG_03C_TR_hex", "", 23529, {"life_playerlevel >= 30", "Niveau: 20<br/>Compétence: aucune"}},
                { "SMG_03C_TR_khaki", "", 23529, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                //  ------------P90---------------
                { "SMG_03_TR_black", "", 27059, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "SMG_03_TR_camo", "", 27059, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "SMG_03_TR_hex", "", 27059, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "SMG_03_TR_khaki", "", 27059, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                //  ------------MXC----------
                { "arifle_MXC_Black_F", "", 6800, {"life_playerlevel >= 11", "Niveau: 11<br/>Compétence: aucune"}}, //  Caliber: 6.5x39 mm
                { "arifle_MXC_F", "", 6800, {"life_playerlevel >= 11", "Niveau: 11<br/>Compétence: aucune"}},
                { "arifle_MXC_khk_F", "", 6800, {"life_playerlevel >= 11", "Niveau: 11<br/>Compétence: aucune"}},
                //  -----------SPAR-16----------
                { "arifle_SPAR_01_blk_F", "", 8500, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"}},   //  Caliber: 5.56x45 mm
                { "arifle_SPAR_01_snd_F", "", 8500, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"}},
                { "arifle_SPAR_01_khk_F", "", 8500, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"}},*/
                //  -----------Mk20C----------
                //{ "arifle_Mk20C_F", "", 23529, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},         //  Caliber: 5.56x45 mm
                //{ "arifle_Mk20C_plain_F", "", 23529, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  -----------AKM----------
                //{ "arifle_AKM_F", "", 23529, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}}, // SANS VISEURS
                //  -----------TRG20----------
                // "arifle_TRG20_F", "", 24706, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"}},         //  Caliber: 5.56x45 mm
                //  ---------AKU-12-----------
                //{ "arifle_AK12U_F", "", 24706, {"'WeaponsV1' in life_insurge_cash_steps && life_playerlevel >= 15", "Niveau: 15<br/>Cagnote: Friperie"}},         //  Caliber: 7.62x39 mm
                //{ "arifle_AK12U_arid_F", "", 24706, {"'WeaponsV1' in life_insurge_cash_steps && life_playerlevel >= 15", "Niveau: 15<br/>Cagnote: Friperie"}},
                //{ "arifle_AK12U_lush_F", "", 24706, {"'WeaponsV1' in life_insurge_cash_steps && life_playerlevel >= 15", "Niveau: 15<br/>Cagnote: Friperie"}},
                //  -----------Mk20----------
                //{ "arifle_Mk20_F", "", 27059, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},         //  Caliber: 5.56x45 mm
                //{ "arifle_Mk20_plain_F", "", 27059, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},
                //  ------------SDAR-------------
                { "arifle_SDAR_F", "", 27059, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                //  -----------TRG21----------
                //{ "arifle_TRG21_F", "", 27059, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},   //  Caliber: 5.56x45 mm
                //  -----------CAR-95----------
                //{ "arifle_CTAR_blk_F", "", 29412, {"'WeaponsV1' in life_insurge_cash_steps && life_playerlevel >= 30", "Niveau: 30<br/>Cagnote: Friperie"}},   //  Caliber: 5.8x42 mm
                //{ "arifle_CTAR_hex_F", "", 29412, {"'WeaponsV1' in life_insurge_cash_steps && life_playerlevel >= 30", "Niveau: 30<br/>Cagnote: Friperie"}},
                //{ "arifle_CTAR_ghex_F", "", 29412, {"'WeaponsV1' in life_insurge_cash_steps && life_playerlevel >= 30", "Niveau: 30<br/>Cagnote: Friperie"}},
                //  -------Carabine-Katiba-------
                //{ "arifle_Katiba_C_F", "", 29412, {"'WeaponsV1' in life_insurge_cash_steps && life_playerlevel >= 35", "Niveau: 35<br/>Cagnote: Friperie"}},      //  Caliber: 6.5x39 mm
                //  ---------Promet----------
                //{ "arifle_MSBS65_black_F", "", 30588, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},   //  Caliber: 6.5x39 mm
                //{ "arifle_MSBS65_sand_F", "", 30588, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                //{ "arifle_MSBS65_F", "", 30588, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                //{ "arifle_MSBS65_camo_F", "", 30588, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                //  ---------AK-12-----------
                //{ "arifle_AK12_F", "", 30588, {"'WeaponsV1' in life_insurge_cash_steps && life_playerlevel >= 40", "Niveau: 40<br/>Cagnote: Friperie"}},          //  Caliber: 7.62x39 mm
                //{ "arifle_AK12_arid_F", "", 30588, {"'WeaponsV1' in life_insurge_cash_steps && life_playerlevel >= 40", "Niveau: 40<br/>Cagnote: Friperie"}},
                //{ "arifle_AK12_lush_F", "", 30588, {"'WeaponsV1' in life_insurge_cash_steps && life_playerlevel >= 40", "Niveau: 40<br/>Cagnote: Friperie"}},
                //  ---------Promet MR----------
                //{ "arifle_MSBS65_Mark_black_F", "", 31765, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"}},   //  Caliber: 6.5x39 mm
                //{ "arifle_MSBS65_Mark_sand_F", "", 31765, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"}},
                //{ "arifle_MSBS65_Mark_F", "", 31765, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"}},
                //{ "arifle_MSBS65_Mark_camo_F", "", 31765, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"}},
                //  ----------Katiba-----------
                //{ "arifle_Katiba_F", "", 31765, {"'WeaponsV1' in life_insurge_cash_steps && life_playerlevel >= 50", "Niveau: 50<br/>Cagnote: Friperie"}},     //  Caliber: 6.5x39 mm
                //  -----------MX----------
                /*
                { "arifle_MX_Black_F", "", 9000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}}, //  Caliber: 6.5x39 mm
                { "arifle_MX_F", "", 9000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "arifle_MX_khk_F", "", 9000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                
                //  ---------Type 115----------
                { "arifle_ARX_blk_F", "", 9300, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}}, //  Caliber: 6.5x39 mm
                { "arifle_ARX_hex_F", "", 9300, {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"}},
                { "arifle_ARX_ghex_F", "", 9300, {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"}},

                //=========================== DMR ==============================

                //  -----------MXM----------
                /*{ "arifle_MX_F", "", 9400, {"life_playerlevel >= 35 && ['dmr'] call life_fnc_hasPerk", "Niveau: 35<br/>Compétence: DMR"}},       //  Caliber: 6.5x39 mm
                { "arifle_MX_Black_F", "", 9400, {"life_playerlevel >= 35 && ['dmr'] call life_fnc_hasPerk", "Niveau: 35<br/>Compétence: DMR"}},
                { "arifle_MX_khk_F", "", 9400, {"life_playerlevel >= 35 && ['dmr'] call life_fnc_hasPerk", "Niveau: 35<br/>Compétence: DMR"}},*/
                //  ---------Rahim----------
                //{ "srifle_DMR_01_F", "", 27059, {"life_playerlevel >= 35 && ['dmr'] call life_fnc_hasPerk", "Niveau: 35<br/>Compétence: DMR"}},            //  Caliber: 7.62x54 mm
                //  ---------Mk14-----------
                //{ "srifle_DMR_06_hunter_F", "", 29412, {"life_playerlevel >= 37 && ['dmr'] call life_fnc_hasPerk", "Niveau: 37<br/>Compétence: DMR"}},     //  Caliber: 7.62x51 mm 
                //{ "srifle_DMR_06_olive_F", "", 31176, {"life_playerlevel >= 39 && ['dmr'] call life_fnc_hasPerk", "Niveau: 39<br/>Compétence: DMR"}},
                //{ "srifle_DMR_06_camo_F", "", 31176, {"life_playerlevel >= 39 && ['dmr'] call life_fnc_hasPerk", "Niveau: 39<br/>Compétence: DMR"}},
                //  ---------CMR-76-----------
                //{ "srifle_DMR_07_blk_F", "", 31765, {"life_playerlevel >= 41 && ['dmr'] call life_fnc_hasPerk", "Niveau: 41<br/>Compétence: DMR"}},   //  Caliber: 6.5x39 mm
                //{ "srifle_DMR_07_hex_F", "", 31765, {"life_playerlevel >= 41 && ['dmr'] call life_fnc_hasPerk", "Niveau: 41<br/>Compétence: DMR"}},
                //{ "srifle_DMR_07_ghex_F", "", 31765, {"life_playerlevel >= 41 && ['dmr'] call life_fnc_hasPerk", "Niveau: 41<br/>Compétence: DMR"}},
                //  ---------Mk18 ABR----------
                //{ "srifle_EBR_F", "", 32941, {"life_playerlevel >= 43 && ['dmr'] call life_fnc_hasPerk", "Niveau: 43<br/>Compétence: DMR"}},            //  Caliber: 7.62x51 mm
                //  ---------SPAR-17-----------
                //{ "arifle_SPAR_03_blk_F", "", 34118, {"life_playerlevel >= 45 && ['dmr'] call life_fnc_hasPerk", "Niveau: 45<br/>Compétence: DMR"}},   //  Caliber: 7.62x51 mm
                //{ "arifle_SPAR_03_khk_F", "", 34118, {"life_playerlevel >= 45 && ['dmr'] call life_fnc_hasPerk", "Niveau: 45<br/>Compétence: DMR"}},
                //{ "arifle_SPAR_03_snd_F", "", 34118, {"life_playerlevel >= 45 && ['dmr'] call life_fnc_hasPerk", "Niveau: 45<br/>Compétence: DMR"}},
                //  ---------Mk-I EMR-----------
                //{ "srifle_DMR_03_F", "", 34118, {"life_playerlevel >= 50 && ['dmr'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: DMR"}},            //  Caliber: 7.62x51 mm
                //{ "srifle_DMR_03_khaki_F", "", 34118, {"life_playerlevel >= 50 && ['dmr'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: DMR"}},
                //{ "srifle_DMR_03_tan_F", "", 34118, {"life_playerlevel >= 50 && ['dmr'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: DMR"}},
                //{ "srifle_DMR_03_multicam_F", "", 34118, {"life_playerlevel >= 50 && ['dmr'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: DMR"}},
                //{ "srifle_DMR_03_woodland_F", "", 34118, {"life_playerlevel >= 50 && ['dmr'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: DMR"}},

                //=========================== Sniper ==============================
                // --------------Cyrus-------------------
                //{ "srifle_DMR_05_blk_F", "", 42353, {"life_playerlevel >= 35 && ['sniper'] call life_fnc_hasPerk", "Niveau: 35<br/>Compétence: Sniper"}},      //  Caliber: 9.3x64 mm
                //{ "srifle_DMR_05_tan_f", "", 42353, {"life_playerlevel >= 35 && ['sniper'] call life_fnc_hasPerk", "Niveau: 35<br/>Compétence: Sniper"}},
                //{ "srifle_DMR_05_hex_F", "", 42353, {"life_playerlevel >= 35 && ['sniper'] call life_fnc_hasPerk", "Niveau: 35<br/>Compétence: Sniper"}},/*
                // --------------MAR-10-------------------
                //{ "srifle_DMR_02_F", "", 20000, {"life_playerlevel >= 40 && ['sniper'] call life_fnc_hasPerk", "Niveau: 40<br/>Compétence: Sniper"}},          //  Caliber: .338 Lapua Magnum
                //{ "srifle_DMR_02_sniper_F", "", 20000, {"life_playerlevel >= 40 && ['sniper'] call life_fnc_hasPerk", "Niveau: 40<br/>Compétence: Sniper"}},
                //{ "srifle_DMR_02_camo_F", "", 20000, {"life_playerlevel >= 40 && ['sniper'] call life_fnc_hasPerk", "Niveau: 40<br/>Compétence: Sniper"}},
                // --------------M320 LRR-------------------
                //{ "srifle_LRR_F", "", 26000, {"life_playerlevel >= 45 && ['sniper'] call life_fnc_hasPerk", "Niveau: 45<br/>Compétence: Sniper"}},          //  Caliber: .408
                //{ "srifle_LRR_camo_F", "", 26000, {"life_playerlevel >= 45 && ['sniper'] call life_fnc_hasPerk", "Niveau: 45<br/>Compétence: Sniper"}},
                //{ "srifle_LRR_tnba_F", "", 26000, {"life_playerlevel >= 45 && ['sniper'] call life_fnc_hasPerk", "Niveau: 45<br/>Compétence: Sniper"}},*/
                // ---------------GM6 Lynx-------------------
                //{ "srifle_GM6_F", "", 75294, {"life_playerlevel >= 50 && ['sniper'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Sniper"}},          //  Caliber: 12.7x108 mm Russian
                //{ "srifle_GM6_camo_F", "", 75294, {"life_playerlevel >= 50 && ['sniper'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Sniper"}},
                //{ "srifle_GM6_ghex_F", "", 75294, {"life_playerlevel >= 50 && ['sniper'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Sniper"}},

                //  --------------RPG--------------
                /*{ "launch_RPG32_F","", 20000, {"life_playerlevel >= 45 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 45<br/>Compétence: Artilleur"}},
                { "launch_RPG32_ghex_F","", 20000, {"life_playerlevel >= 45 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 45<br/>Compétence: Artilleur"}},
                { "launch_MRAWS_sand_rail_F","", 26000, {"life_playerlevel >= 48 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 48<br/>Compétence: Artilleur"}},
                { "launch_MRAWS_olive_rail_F","", 26000, {"life_playerlevel >= 48 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 48<br/>Compétence: Artilleur"}},
                { "launch_MRAWS_green_rail_F","", 26000, {"life_playerlevel >= 48 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 48<br/>Compétence: Artilleur"}},*/
                //{ "launch_RPG7_F","", 80000, {"life_playerlevel >= 50 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Artilleur"}},
                //{ "launch_I_Titan_F","", 80000, {"life_playerlevel >= 50 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Artilleur"}}

                //  ---------------Pompe--------------
                /*{ "sgun_HunterShotgun_01_sawedoff_F", "", 6400, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                { "sgun_HunterShotgun_01_F", "", 7800, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},*/
        };
        secondary[] = {
                //=========================== Pistolet ==============================
                //  ---------------PM--------------
                { "hgun_Pistol_01_F", "", 3059, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                //  ------------ACP-C2-------------
                { "hgun_ACPC2_F", "", 3412, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
                { "RH_mak", "", 3412, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"}},
                //  --------------P07--------------
                { "hgun_P07_F", "", 3647, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "hgun_P07_khk_F", "", 3647, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "RH_tt33", "", 3765, {"life_playerlevel >= 9", "Niveau: 9<br/>Compétence: aucune"}},
                //  ------------Rook-40------------
                { "hgun_Rook40_F", "", 3765, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ------------4-five-------------
                { "hgun_Pistol_heavy_01_F", "", 3765, {"life_playerlevel >= 11", "Niveau: 11<br/>Compétence: aucune"}},
                { "hgun_Pistol_heavy_01_green_F", "", 3200, {"life_playerlevel >= 11", "Niveau: 11<br/>Compétence: aucune"}},
                { "RH_m1911", "", 3882, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"}},
                { "RH_g17", "", 3882, {"life_playerlevel >= 13", "Niveau: 13<br/>Compétence: aucune"}},
                { "RH_g19", "", 3882, {"life_playerlevel >= 14", "Niveau: 14<br/>Compétence: aucune"}},
                //{ "RH_m9", "", 3941, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "RH_p226", "", 3941, {"life_playerlevel >= 16", "Niveau: 16<br/>Compétence: aucune"}},
                { "RH_sw659", "", 4000, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},
                { "RH_cz75", "", 4118, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                { "RH_uspm", "", 4235, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
                { "RH_usp", "", 4353, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "RH_fn57", "", 4353, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},
                { "RH_gsh18", "", 4471, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "RH_fnp45", "", 4471, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"}},
                { "RH_deagle", "", 4706, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"}},
                //=========================== Revolver ==============================
                //  ------------Signal-------------
                { "hgun_Pistol_Signal_F", "", 1176, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                //  ------------Zubr .45 ACP-------------
                { "hgun_Pistol_heavy_02_F", "", 3176, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"}},
                { "RH_python", "", 3294, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                { "RH_mp412", "", 3412, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                { "RH_mateba", "", 3529, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "RH_ttracker", "", 3765, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "RH_bull", "", 4118, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"}}
                //=========================== Auto ==============================
                /*{ "RH_vp70", "", 5294, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                { "RH_muzi", "", 5882, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
                { "RH_tec9", "", 6118, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"}},
                { "RH_vz61", "", 6235, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "RH_g18", "", 6471, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}}*/
        };
        ammo[] = {
                //  ------------Pompe-------------
                //{ "2Rnd_12Gauge_Pellets", "", 6 },
                //=========================== Pistolet ==============================
                //  ---------------PM--------------
                { "10Rnd_9x21_Mag", "", 35 },
                //  ------------ACP-C2-------------
                { "9Rnd_45ACP_Mag", "", 38 },
                { "RH_8Rnd_9x18_Mak", "", 28},
                //  -----P07 & Rook-40 & Auto------
                { "16Rnd_9x21_Mag", "", 56},
                //{ "16Rnd_9x21_red_Mag", "", 8},
                //{ "16Rnd_9x21_green_Mag", "", 8},
                //{ "16Rnd_9x21_yellow_Mag", "", 8},
                { "30Rnd_9x21_Mag", "", 106 },
                { "RH_8Rnd_762_tt33", "", 33},
                //  ------------4-five-------------
                { "11Rnd_45ACP_Mag", "", 46},
                { "RH_7Rnd_45cal_m1911", "", 29},
                //  ------------Glock-------------
                { "RH_17Rnd_9x19_g17", "", 60},
                { "RH_19Rnd_9x19_g18", "", 67},
                { "RH_33Rnd_9x19_g18", "", 116},
                //{ "RH_15Rnd_9x19_M9", "", 45},
                { "RH_15Rnd_9x19_SIG", "", 53},
                { "RH_14Rnd_9x19_sw", "", 49},
                { "RH_16Rnd_9x19_CZ", "", 56},
                { "RH_16Rnd_40cal_usp", "", 66},
                { "RH_12Rnd_45cal_usp", "", 49},
                { "RH_20Rnd_57x28_FN", "", 82},
                { "RH_18Rnd_9x19_gsh", "", 64},
                { "RH_15Rnd_45cal_fnp", "", 62},
                { "RH_7Rnd_50_AE", "", 29},
                //=========================== Revolver ==============================
                //  ------------Signal-------------
                { "6Rnd_RedSignal_F", "", 118},
                { "6Rnd_GreenSignal_F", "", 118},
                //  -------------Zubr--------------
                { "6Rnd_45ACP_Cylinder", "", 35},
                { "RH_6Rnd_357_Mag", "", 35},
                { "RH_6Rnd_44_Mag", "", 35},
                { "RH_6Rnd_45ACP_Mag", "", 35},
                { "RH_6Rnd_454_Mag", "", 35},
                //=========================== Auto ==============================
                /*{ "RH_18Rnd_9x19_VP", "", 64},
                { "RH_30Rnd_9x19_UZI", "", 106},
                { "RH_32Rnd_9x19_tec", "", 113},
                { "RH_20Rnd_32cal_vz61", "", 82},
                //=========================== SMG ==============================
                //  -------Protector & Auto--------
                { "30Rnd_9x21_Mag_SMG_02", "", 282},
                //{ "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "", 15},
                //{ "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "", 15},
                //{ "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "", 15},
                //  --------------Vermin SMG--------
                { "30Rnd_45ACP_Mag_SMG_01", "", 318},
                //{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", "", 15},
                //{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "", 15},
                //{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow", "", 15},
                //  ----------------AKS--------------
                //{ "30Rnd_545x39_Mag_Green_F", "", 30 },
                { "30Rnd_545x39_Mag_F", "", 353},
                //{ "30Rnd_545x39_Mag_Tracer_Green_F", "", 30 },
                //{ "30Rnd_545x39_Mag_Tracer_F", "", 30 },
                //  ------------P90------------
                { "50Rnd_570x28_SMG_03", "", 588},*/
                //=========================== FUSILS ==============================
                //  -------------5.56--------------
                { "30Rnd_556x45_Stanag", "", 100 },
                { "KA_M16_30rnd_M855_FMJ_mag", "", 100 },
                //{ "30Rnd_556x45_Stanag_red", "", 30 },
                //{ "30Rnd_556x45_Stanag_green", "", 30 },
                //{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 30 },
                //{ "30Rnd_556x45_Stanag_Tracer_Red", "", 30 },
                //{ "30Rnd_556x45_Stanag_Tracer_Green", "", 30 },
                //  -------------AKM--------------
                { "30Rnd_762x39_Mag_F", "", 100 },
                //{ "30Rnd_762x39_Mag_Green_F", "", 45 },
                //{ "30Rnd_762x39_Mag_Tracer_F", "", 45 },
                //{ "30Rnd_762x39_Mag_Tracer_Green_F", "", 45 },
                //  -------------AK12--------------
                { "30Rnd_762x39_AK12_Mag_F", "", 100 },
                { "30rnd_762x39_AK12_Lush_Mag_F", "", 100 },
                { "30rnd_762x39_AK12_Arid_Mag_F", "", 100 },
                //  ------------SDAR-------------
                { "20Rnd_556x45_UW_mag", "", 100 },
                //  -----------CAR-95-------------
                { "30Rnd_580x42_Mag_F", "", 100 },
                //{ "30Rnd_580x42_Mag_Tracer_F", "", 30 },
                //  --------Type 115 & Katiba-------------
                { "30Rnd_65x39_caseless_green", "", 100 },
                //{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 45 },
                //  ------------Promet-------------
                { "30Rnd_65x39_caseless_msbs_mag", "", 100 },
                //{ "30Rnd_65x39_caseless_msbs_mag_Tracer", "", 45 },
                //  -----------MX----------
                //{ "30Rnd_65x39_caseless_mag", "", 45 },
                //{ "30Rnd_65x39_caseless_black_mag", "", 424 },
                //{ "30Rnd_65x39_caseless_mag_Tracer", "", 45 },
                //=========================== DMR ==============================
                //  ------- Rahim ---------
                { "10Rnd_762x54_Mag", "", 100 },
                //  ------- Mk-I EMR / Mk14 ---------
                { "10Rnd_Mk14_762x51_Mag", "", 100 },
                //  --- Mk-I EMR / Mk14 / SPAR-17 ---
                { "20Rnd_762x51_Mag", "", 100 },
                //  ---------CMR-76-----------
                { "20Rnd_650x39_Cased_Mag_F", "", 100 },
                //=========================== Sniper ==============================
                // ----------Cyrus--------------
                { "10Rnd_93x64_DMR_05_Mag", "", 100 },
                // ----------MAR-10--------------
                //{ "10Rnd_338_Mag", "", 300 },
                // ----------M320 LRR--------------
                //{ "7Rnd_408_Mag", "", 300 },
                // ----------GM6 Lynx--------------
                { "5Rnd_127x108_Mag", "", 100 },
                { "5Rnd_127x108_APDS_Mag", "", 100 },
                //  --------------RPG--------------
                //{ "RPG32_HE_F","", 12000, {"life_playerlevel >= 45 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 45<br/>Compétence: Artilleur"}},
                //{ "RPG7_F","", 11765, {"life_playerlevel >= 50 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Artilleur"}},
                //{ "Titan_AA","", 11765, {"life_playerlevel >= 50 && ['artilleur'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: Artilleur"}}

        };
        attachments[] = {
                { "optic_MRD", "", 590},
                { "optic_MRD_black", "", 590},
                { "optic_Yorris", "", 490},
                //  --------------ACO--------------
                {"optic_Aco", "", 750 },
                {"optic_ACO_grn", "", 750 },
                {"optic_Aco_smg", "", 750 },
                {"optic_ACO_grn_smg", "", 750 },
                //  --------------Holo-------------
                {"optic_Holosight", "", 850, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_khk_F", "", 850, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_blk_F", "", 850, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_smg", "", 850, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_smg_blk_F", "", 850, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ------------MRCO--------------
                {"optic_MRCO", "", 950, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                //  ------------ERCO--------------
                {"optic_ERCO_khk_F", "", 980, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                {"optic_ERCO_snd_F", "", 980, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                //  ------------RCO--------------
                {"optic_Hamr", "", 750, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},
                {"optic_Hamr_khk_F", "", 750, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},
                //  ------------ARCO--------------
                {"optic_Arco", "", 800, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                {"optic_Arco_ghex_F", "", 800, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                {"optic_Arco_blk_F", "", 800, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                //  ------------AMS--------------
                {"optic_AMS_khk", "", 1200, {"life_playerlevel >= 35 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 35<br/>Compétence: DMR ou Sniper"}},
                {"optic_AMS", "", 1200, {"life_playerlevel >= 35 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 35<br/>Compétence: DMR ou Sniper"}},
                {"optic_AMS_snd", "", 1200, {"life_playerlevel >= 35 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 35<br/>Compétence: DMR ou Sniper"}},
                //  ------------DMS--------------
                {"optic_DMS", "", 1400, {"life_playerlevel >= 38 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 38<br/>Compétence: DMR ou Sniper"}},
                {"optic_DMS_ghex_F", "", 1400, {"life_playerlevel >= 38 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 38<br/>Compétence: DMR ou Sniper"}},
                //  ------------MOS--------------
                {"optic_SOS", "", 1500, {"life_playerlevel >= 40 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 40<br/>Compétence: DMR ou Sniper"}},
                {"optic_SOS_khk_F", "", 1500, {"life_playerlevel >= 40 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 40<br/>Compétence: DMR ou Sniper"}},
                //  ------------Kahlia--------------
                {"optic_KHS_tan", "", 1800, {"life_playerlevel >= 45 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 45<br/>Compétence: DMR ou Sniper"}},
                {"optic_KHS_hex", "", 1800, {"life_playerlevel >= 45 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 45<br/>Compétence: DMR ou Sniper"}},
                {"optic_KHS_blk", "", 1800, {"life_playerlevel >= 45 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 45<br/>Compétence: DMR ou Sniper"}},
                {"optic_KHS_old", "", 1800, {"life_playerlevel >= 45 &&  ( ['dmr'] call life_fnc_hasPerk || ['sniper'] call life_fnc_hasPerk )", "Niveau: 45<br/>Compétence: DMR ou Sniper"}},
                //  ------------LRPS--------------
                //{"optic_LRPS", "", 2500 },
                //{"optic_LRPS_ghex_F", "", 2500 },
                //{"optic_LRPS_tna_F", "", 2500 },  
                //  ---------flashlight---------
                { "acc_flashlight", "", 29},
                { "acc_flashlight_pistol", "", 29},
                //  ----------pointer-----------
                { "acc_pointer_IR", "", 49},
                //  ------------Bipied--------------
                {"bipod_02_F_tan", "", 399 },
                {"bipod_02_F_hex", "", 399 },
                {"bipod_01_F_khk", "", 399 },
                {"bipod_01_F_mtp", "", 399 },
                {"bipod_03_F_blk", "", 399 },
                {"bipod_02_F_blk", "", 399 },
                {"bipod_01_F_blk", "", 399 },
                {"bipod_03_F_oli", "", 399 },
                {"bipod_01_F_snd", "", 399 }
        };
        other[] = {
            { "bv_FlashLight", "", 50},
            { "SAN_Headlamp_v1", "", 90},
            { "SAN_Headlamp_v2", "", 90},
            { "Binocular", "", 50},
            { "Xnooz_AppareilPhoto", "", 150},
            { "ItemGPS", "", 69},
            { "ItemMap", "", 25},
            { "ItemCompass", "", 15},
            { "ItemWatch", "", 49},
            { "ToolKit", "", 650},
            { "Chemlight_red", "", 6},
            { "Chemlight_yellow", "", 6},
            { "Chemlight_green", "", 6},
            { "Chemlight_blue", "", 6},
            { "tf_radio_reb", "", 39},
            { "FirstAidKit", "", 499},
        };
    };

    class mafia {
        name = "Achat Mafia";
        side = "civ";
        license = "mafia";
        level[] = { "", "", -1, "" };
        legal = 0;
        paymentType = "cash";
        primary[] = {
                //  ---------------Sting--------------
                { "SMG_02_F", "", 15294, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ---------------Protector--------------
                { "SMG_05_F", "", 15882, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"}},
                //  ---------------Vector--------------
                { "SMG_01_F", "", 16471, {"life_playerlevel >= 14", "Niveau: 14<br/>Compétence: aucune"}},
                //  ---------------PDW 2000--------------
                { "hgun_PDW2000_F", "", 17647, {"life_playerlevel >= 16", "Niveau: 16<br/>Compétence: aucune"}},
                //  -----------AKS-74U----------
                { "arifle_AKS_F", "", 20000, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},    // SANS VISEURS //AKS 5.45mm
                //  ------------P90---------------
                { "SMG_03C_TR_black", "", 23529, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "SMG_03C_TR_camo", "", 23529, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "SMG_03C_TR_hex", "", 23529, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "SMG_03C_TR_khaki", "", 23529, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                //  ------------P90---------------
                { "SMG_03_TR_black", "", 27059, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "SMG_03_TR_camo", "", 27059, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "SMG_03_TR_hex", "", 27059, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "SMG_03_TR_khaki", "", 27059, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}}
        };

        secondary[] = {
                ///  ------------Signal-------------
                { "hgun_Pistol_Signal_F", "", 2870, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                //  ---------------PM--------------
                { "hgun_Pistol_01_F", "", 2850, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
                //  ------------ACP-C2-------------
                { "hgun_ACPC2_F", "", 3080, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"}},
                { "RH_mak", "", 3200, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"}},
                { "RH_tt33", "", 3250, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                //  --------------P07--------------
                { "hgun_P07_F", "", 3500, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "hgun_P07_khk_F", "", 3500, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "RH_m1911", "", 3550, {"life_playerlevel >= 9", "Niveau: 9<br/>Compétence: aucune"}},
                //  ------------Rook-40------------
                { "hgun_Rook40_F", "", 3600, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ------------4-five-------------
                { "hgun_Pistol_heavy_01_F", "", 3600, {"life_playerlevel >= 11", "Niveau: 11<br/>Compétence: aucune"}},
                { "hgun_Pistol_heavy_01_green_F", "", 3650, {"life_playerlevel >= 11", "Niveau: 11<br/>Compétence: aucune"}},
                //{ "RH_m9", "", 920, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"}},
                { "RH_sw659", "", 3650, {"life_playerlevel >= 13", "Niveau: 13<br/>Compétence: aucune"}},
                { "RH_cz75", "", 3700, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                //{ "RH_g17", "", 966, {"life_playerlevel >= 17", "Niveau: 17<br/>Compétence: aucune"}},
                { "RH_g19", "", 3750, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                { "RH_fn57", "", 3750, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "RH_usp", "", 3750, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "RH_kimber_nw", "", 3800, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "RH_vp70", "", 3800, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},
                { "RH_gsh18", "", 3850, {"life_playerlevel >= 38", "Niveau: 38<br/>Compétence: aucune"}},
                { "RH_fnp45", "", 3850, {"life_playerlevel >= 42", "Niveau: 42<br/>Compétence: aucune"}},
                { "RH_p226", "", 3850, {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"}},
                { "RH_deagle", "", 3850, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"}},
                //=========================== Revolver ==============================
                { "RH_python", "", 3850, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                //  -------------Zubr--------------
                { "hgun_Pistol_heavy_02_F", "", 3850, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "RH_mp412", "", 3900, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                { "RH_ttracker", "", 3900, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
                { "RH_mateba", "", 3900, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
                { "RH_bull", "", 4000, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"}},
                //=========================== Auto ==============================
                { "RH_muzi", "", 3000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //{ "RH_g18", "", 3400, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "RH_tec9", "", 3800, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                { "RH_vz61", "", 4200, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}}
        };

        ammo[] = {
                //=========================== Pistolet ==============================
                //  ---------------PM--------------
                { "10Rnd_9x21_Mag", "", 35 },
                //  ------------ACP-C2-------------
                { "9Rnd_45ACP_Mag", "", 38 },
                { "RH_8Rnd_9x18_Mak", "", 28},
                //  -----P07 & Rook-40 & Auto------
                { "16Rnd_9x21_Mag", "", 56},
                //{ "16Rnd_9x21_red_Mag", "", 8},
                //{ "16Rnd_9x21_green_Mag", "", 8},
                //{ "16Rnd_9x21_yellow_Mag", "", 8},
                { "30Rnd_9x21_Mag", "", 106 },
                { "RH_8Rnd_762_tt33", "", 33},
                //  ------------4-five-------------
                { "11Rnd_45ACP_Mag", "", 46},
                { "RH_7Rnd_45cal_m1911", "", 29},
                //  ------------Glock-------------
                { "RH_17Rnd_9x19_g17", "", 60},
                { "RH_19Rnd_9x19_g18", "", 67},
                { "RH_33Rnd_9x19_g18", "", 116},
                //{ "RH_15Rnd_9x19_M9", "", 45},
                { "RH_15Rnd_9x19_SIG", "", 53},
                { "RH_14Rnd_9x19_sw", "", 49},
                { "RH_16Rnd_9x19_CZ", "", 56},
                { "RH_16Rnd_40cal_usp", "", 66},
                { "RH_12Rnd_45cal_usp", "", 49},
                { "RH_20Rnd_57x28_FN", "", 82},
                { "RH_18Rnd_9x19_gsh", "", 64},
                { "RH_15Rnd_45cal_fnp", "", 62},
                { "RH_7Rnd_50_AE", "", 29},
                //=========================== Revolver ==============================
                //  ------------Signal-------------
                { "6Rnd_RedSignal_F", "", 118},
                { "6Rnd_GreenSignal_F", "", 118},
                //  -------------Zubr--------------
                { "6Rnd_45ACP_Cylinder", "", 35},
                { "RH_6Rnd_357_Mag", "", 35},
                { "RH_6Rnd_44_Mag", "", 35},
                { "RH_6Rnd_45ACP_Mag", "", 35},
                { "RH_6Rnd_454_Mag", "", 35},
                //=========================== Auto ==============================
                { "RH_18Rnd_9x19_VP", "", 64},
                { "RH_30Rnd_9x19_UZI", "", 106},
                { "RH_32Rnd_9x19_tec", "", 113},
                { "RH_20Rnd_32cal_vz61", "", 82},
                //=========================== SMG ==============================
                //  -------Protector & Auto--------
                { "30Rnd_9x21_Mag_SMG_02", "", 100},
                //{ "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "", 15},
                //{ "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "", 15},
                //{ "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "", 15},
                //  --------------Vermin SMG--------
                { "30Rnd_45ACP_Mag_SMG_01", "", 100},
                //{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", "", 15},
                //{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "", 15},
                //{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow", "", 15},
                //  ----------------AKS--------------
                //{ "30Rnd_545x39_Mag_Green_F", "", 30 },
                { "30Rnd_545x39_Mag_F", "", 100},
                //{ "30Rnd_545x39_Mag_Tracer_Green_F", "", 30 },
                //{ "30Rnd_545x39_Mag_Tracer_F", "", 30 },
                //  ------------P90------------
                { "50Rnd_570x28_SMG_03", "", 100}
                
        };

        attachments[] = {
                { "optic_MRD", "", 150},
                { "optic_MRD_black", "", 150},
                { "optic_Yorris", "", 150},
                //  --------------ACO--------------

                {"optic_Aco", "", 350 },
                {"optic_ACO_grn", "", 350 },
                {"optic_Aco_smg", "", 350 },
                {"optic_ACO_grn_smg", "", 350 },
                //  --------------Holo-------------
                {"optic_Holosight", "", 450, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_khk_F", "", 450, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_blk_F", "", 450, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_smg", "", 450, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_smg_blk_F", "", 450, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //--------------------ARCO---------------------------
                {"optic_Arco_blk_F", "", 1000, {"life_playerlevel >= 10", "Niveau: 25<br/>Compétence: aucune"}},
        };

        other[] = {
            { "bv_FlashLight", "", 50},
            { "SAN_Headlamp_v1", "", 90},
            { "SAN_Headlamp_v2", "", 90},
            { "Binocular", "", 50},
            { "Xnooz_AppareilPhoto", "", 150},
            { "ItemGPS", "", 69},
            { "ItemMap", "", 25},
            { "ItemCompass", "", 15},
            { "ItemWatch", "", 49},
            { "ToolKit", "", 650},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "FirstAidKit", "", 499},
            {"tf_radio_civ", "", 2000}
        };
    };

    class cop_weapons {
        name = "Armurerie";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "" };
        paymentType = "bank";

        primary[] = {
            //  ---------------Protector--------------
            {"SMG_05_F", "", 13500, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            //  ------------SDAR-------------
            {"arifle_SDAR_F", "", 23000, {"(call life_coplevel) >= 2", "Brigadier"}},
            //  ------------P90---------------
            {"SMG_03C_TR_black", "", 20000, {"(call life_coplevel) >= 2", "Brigadier"}},
            //  ------------P90---------------
            {"SMG_03_TR_black", "", 23000, {"(call life_coplevel) >= 2", "Brigadier"}},
            //  ------------MXC----------
            {"arifle_MXC_Black_F", "", 23000, {"(call life_coplevel) >= 3", "Brigadier Chef"}},
            //  -----------MX----------
            {"arifle_MX_Black_F", "", 24500, {"(call life_coplevel) >= 4", "Maréchal des Logis"}},
            //  -----------SPAR-16----------
            {"arifle_SPAR_01_blk_F", "", 20000, {"(call life_coplevel) >= 5", "Gendarme"}},
            //  ---------SPAR-17-----------
            {"arifle_SPAR_03_blk_F", "", 29000, {"(call life_coplevel) >= 7", "Adjudant"}},
            //  ---------Mk-I EMR-----------
            {"srifle_DMR_03_F", "", 29000, {"(call life_coplevel) >= 8", "Adjudant Chef"}},
            //  ---------Mk18 ABR----------
            {"srifle_EBR_F", "", 28000, {"(call life_coplevel) >= 9", "Major"}},
            //  ---------Promet----------
            {"arifle_MSBS65_black_F", "", 26000, {"(call life_coplevel) >= 10", "Lieutenant"}},
            //  ---------Promet MR----------
            {"arifle_MSBS65_Mark_black_F", "", 27000, {"(call life_coplevel) >= 10", "Lieutenant"}},
            // --------------MAR-10-------------------
            {"srifle_DMR_02_F", "", 35000, {"(call life_coplevel) >= 10", "Lieutenant"}},
            // --------------M320 LRR-------------------
            {"srifle_LRR_F", "", 59000, {"(call life_coplevel) >= 10", "Lieutenant"}},
            // --------------MRAWS----------------
            {"launch_MRAWS_green_F", "", 80000, {"(call life_coplevel) >= 12", "Commandant"}},
            // --------------Titan AA-------------------
            {"launch_B_Titan_tna_F", "", 80000, {"(call life_coplevel) >= 12", "Commandant"}}
        };

        secondary[] = {
            {"DDOPP_X26_b", "", 500, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"RH_g17", "", 3300, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"RH_m9", "", 3350, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
        };

        ammo[] = {
            {"DDOPP_1Rnd_X26", "", 5, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"RH_17Rnd_9x19_g17", "", 51, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"RH_15Rnd_9x19_M9", "", 45, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            //  -------Protector & Auto--------
            {"30Rnd_9x21_Mag_SMG_02", "", 100, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            //  ------------SDAR-------------
            {"20Rnd_556x45_UW_mag", "", 100, {"(call life_coplevel) >= 2", "Brigadier"}},
            //  ------------P90------------
            {"50Rnd_570x28_SMG_03", "", 100, {"(call life_coplevel) >= 2", "Brigadier"}},
            //  -----------MX----------
            {"30Rnd_65x39_caseless_black_mag", "", 100, {"(call life_coplevel) >= 3", "Brigadier Chef"}},
            //  -------------5.56--------------
            {"30Rnd_556x45_Stanag", "", 100, {"(call life_coplevel) >= 5", "Gendarme"}},
            //  --- Mk-I EMR / Mk14 / SPAR-17 ---
            {"20Rnd_762x51_Mag", "", 100, {"(call life_coplevel) >= 7", "Adjudant"}},
            //  ------------Promet-------------
            {"30Rnd_65x39_caseless_msbs_mag", "", 100, {"(call life_coplevel) >= 10", "Lieutenant"}},
            // ----------MAR-10--------------
            {"10Rnd_338_Mag", "", 100, {"(call life_coplevel) >= 10", "Lieutenant"}},
            // ----------M320 LRR--------------
            {"7Rnd_408_Mag", "", 100, {"(call life_coplevel) >= 10", "Lieutenant"}},
            // ----------MRAWS--------------
            {"MRAWS_HEAT_F", "", 10000, {"(call life_coplevel) >= 12", "Commandant"}},
            // --------------Titan AA-------------------
            {"Titan_AA", "", 10000, {"(call life_coplevel) >= 12", "Commandant"}}
        };

        attachments[] = {
            //  ---------flashlight---------
            {"acc_flashlight", "", 29, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            //  --------------ACO--------------
            {"optic_Aco", "", 350, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"optic_ACO_grn", "", 350, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            //  --------------Holo-------------
            {"optic_Holosight_blk_F", "", 450, {"(call life_coplevel) >= 2", "Brigadier"}},
            //  ------------MRCO--------------
            {"optic_MRCO", "", 550, {"(call life_coplevel) >= 3", "Brigadier Chef"}},
            //  ------------RCO--------------
            {"optic_Hamr", "", 750, {"(call life_coplevel) >= 4", "Maréchal des Logis"}},
            //  ------------ARCO--------------
            {"optic_Arco_blk_F", "", 800, {"(call life_coplevel) >= 5", "Gendarme"}},
            {"optic_AMS", "", 1200, {"(call life_coplevel) >= 7", "Adjudant"}},
            {"optic_DMS", "", 1400, {"(call life_coplevel) >= 7", "Adjudant"}},
            
            {"optic_SOS", "", 1500, {"(call life_coplevel) >= 9", "Major"}},
            
            {"optic_LRPS", "", 2500, {"(call life_coplevel) >= 10", "Lieutenant"}},
            {"bipod_01_F_blk", "", 399, {"(call life_coplevel) >= 4", "Maréchal des Logis"}},
        };

        other[] = {
            { "bv_FlashLight", "", 50},
            { "SAN_Headlamp_v1", "", 90},
            { "SAN_Headlamp_v2", "", 90},
            { "Binocular", "", 50},
            { "Rangefinder", "", 200},
            { "ItemGPS", "", 69},
            { "ItemMap", "", 25},
            { "ToolKit", "", 60, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "FirstAidKit", "", 399, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "Chemlight_blue", "", 30, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "Chemlight_yellow", "", 30, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "Chemlight_red", "", 30, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "Chemlight_green", "", 30, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "SmokeShellLacrymo", "", 400, {"(call life_coplevel) >= 4", "Maréchal des Logis"}},
            { "tf_radio_gen", "", 40},
            { "Xnooz_AppareilPhoto", "", 200},
            { "CarteBanqueFusioH", "", 500, {"(call life_coplevel) >= 5", "Gendarme"}},
        };
    };

    class cop_weapons_pigt {
        name = "Armurerie";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "" };
        paymentType = "bank";

        primary[] = {
            //  ---------ACWR-----------
            {"wirk_acwr", "", 29000, {"(call life_coplevel) >= 2", ""}},
            //  ---------CZ 8’----------
            {"QIN_CZ_BREN2_556_8", "", 28000, {"(call life_coplevel) >= 2", ""}},
            //  ------------SDAR-------------
            {"arifle_SDAR_F", "", 23000, {"(call life_coplevel) >= 2", ""}},
            //  ------------P90---------------
            {"SMG_03C_TR_black", "", 20000, {"(call life_coplevel) >= 2", ""}},
            //  ------------P90---------------
            {"SMG_03_TR_black", "", 23000, {"(call life_coplevel) >= 2", ""}},
            //  ------------MXC----------
            {"arifle_MXC_Black_F", "", 23000, {"(call life_coplevel) >= 2", ""}},
            //  ---------Promet----------
            {"arifle_MSBS65_black_F", "", 26000, {"(call life_coplevel) >= 2", ""}},
            //  ---------Promet MR----------
            {"arifle_MSBS65_Mark_black_F", "", 27000, {"(call life_coplevel) >= 2", ""}},
            // --------------MAR-10-------------------
            {"srifle_DMR_02_F", "", 48000, {"(call life_coplevel) >= 2", ""}},
            // --------------M320 LRR-------------------
            {"srifle_LRR_F", "", 80000, {"(call life_coplevel) >= 2", ""}}
        };

        secondary[] = {
            {"DDOPP_X26_b", "", 500, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"RH_kimber_nw", "", 3300, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"RH_p226", "", 3350, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"hgun_Pistol_heavy_01_green_F", "", 3350, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
        };

        ammo[] = {
            {"DDOPP_1Rnd_X26", "", 5, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"RH_17Rnd_9x19_g17", "", 51, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"RH_15Rnd_9x19_M9", "", 45, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"11Rnd_45ACP_Mag", "", 45, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            {"wirk_acwr_mag", "", 45, {"(call life_coplevel) >= 2", ""}},
            { "RH_15Rnd_9x19_SIG", "", 53},
            { "RH_7Rnd_45cal_m1911", "", 53},
            //  -------Protector & Auto--------
            {"30Rnd_9x21_Mag_SMG_02", "", 100, {"(call life_coplevel) >= 2", ""}},
            //  ------------SDAR-------------
            {"20Rnd_556x45_UW_mag", "", 100, {"(call life_coplevel) >= 2", ""}},
            //  ------------P90------------
            {"50Rnd_570x28_SMG_03", "", 100, {"(call life_coplevel) >= 2", ""}},
            //  -----------CZ 8----------
            {"qin_30Rnd_556x45_Stanag_Tracer_Red", "", 100, {"(call life_coplevel) >= 2", ""}},
            //  -----------MX----------
            {"30Rnd_65x39_caseless_black_mag", "", 100, {"(call life_coplevel) >= 2", ""}},
            //  -------------5.56--------------
            {"30Rnd_556x45_Stanag", "", 100, {"(call life_coplevel) >= 2", ""}},
            //  --- Mk-I EMR / Mk14 / SPAR-17 ---
            {"20Rnd_762x51_Mag", "", 100, {"(call life_coplevel) >= 2", ""}},
            //  ------------Promet-------------
            {"30Rnd_65x39_caseless_msbs_mag", "", 100, {"(call life_coplevel) >= 2", ""}},
            // ----------MAR-10--------------
            {"10Rnd_338_Mag", "", 100, {"(call life_coplevel) >= 2", ""}},
            // ----------M320 LRR--------------
            {"7Rnd_408_Mag", "", 100, {"(call life_coplevel) >= 2", ""}}
        };

        attachments[] = {
            //  ---------flashlight---------
            {"acc_flashlight", "", 29, {"(call life_coplevel) >= 1", ""}},
            //  --------------ACO--------------
            {"optic_Aco", "", 350, {"(call life_coplevel) >= 1", ""}},
            {"optic_ACO_grn", "", 350, {"(call life_coplevel) >= 1", ""}},
            //  --------------Holo-------------
            {"optic_Holosight_blk_F", "", 450, {"(call life_coplevel) >= 2", ""}},
            //  ------------MRCO--------------
            {"optic_MRCO", "", 550, {"(call life_coplevel) >= 2", ""}},
            //  ------------RCO--------------
            {"optic_Hamr", "", 750, {"(call life_coplevel) >= 2", ""}},
            //  ------------ARCO--------------
            {"optic_Arco_blk_F", "", 800, {"(call life_coplevel) >= 2", ""}},
            {"optic_AMS", "", 1200, {"(call life_coplevel) >= 2", ""}},
            {"optic_DMS", "", 1400, {"(call life_coplevel) >= 2", ""}},
            
            {"optic_SOS", "", 1500, {"(call life_coplevel) >= 2", ""}},
            
            {"optic_LRPS", "", 2500, {"(call life_coplevel) >= 2", ""}},
            {"bipod_01_F_blk", "", 399, {"(call life_coplevel) >= 2", ""}},
            {"acc_pointer_IR", "", 59, {"(call life_coplevel) >= 1", ""}},
        };

        other[] = {
            { "bv_FlashLight", "", 50},
            { "SAN_Headlamp_v1", "", 90},
            { "SAN_Headlamp_v2", "", 90},
            { "Binocular", "", 50},
            { "Rangefinder", "", 200},
            { "ItemGPS", "", 69},
            { "ItemMap", "", 25},
            { "ToolKit", "", 60, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "FirstAidKit", "", 399, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "Chemlight_blue", "", 30, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "Chemlight_yellow", "", 30, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "Chemlight_red", "", 30, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "Chemlight_green", "", 30, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "SmokeShellLacrymo", "", 400, {"(call life_coplevel) >= 1", "Gendarme Adjoint Volontaire"}},
            { "tf_radio_gen", "", 40},
            { "Xnooz_AppareilPhoto", "", 200},
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        paymentType = "bank";
        level[] = { "", "", -1, "" };
        legal = 1;
        other[] = {
            { "bv_FlashLight", "", 50},
            { "SAN_Headlamp_v1", "", 90},
            { "SAN_Headlamp_v2", "", 90},
            { "Binocular", "", 50},
            { "ItemGPS", "", 69},
            { "ItemMap", "", 25},
            { "ItemCompass", "", 15},
            { "ItemWatch", "", 49},
            { "ToolKit", "", 650},
            { "Medikit", "", 400},
            { "FirstAidKit", "", 25},
            { "Chemlight_red", "", 6},
            { "Chemlight_yellow", "", 6},
            { "Chemlight_green", "", 6},
            { "Chemlight_blue", "", 6},
            { "BadgePompierFusioH", "", 30},
            { "tf_radio_med", "", 39},
            { "FirstAidKit", "", 99}
        };

    };

    class depan_basic {
        name = "store";
        side = "civ";
        license = "";
        paymentType = "bank";
        level[] = { "", "", -1, "" };
        legal = 1;
        other[] = {
            { "BadgeDepanneurFusioH", "", 50},
            { "bv_FlashLight", "", 50},
            { "SAN_Headlamp_v1", "", 90},
            { "SAN_Headlamp_v2", "", 90},
            { "Binocular", "", 50},
            { "ItemGPS", "", 69},
            { "ItemMap", "", 25},
            { "ItemCompass", "", 15},
            { "ItemWatch", "", 49},
            { "ToolKit", "", 500},
            { "Chemlight_red", "", 6},
            { "Chemlight_yellow", "", 6},
            { "Chemlight_green", "", 6},
            { "Chemlight_blue", "", 6},
            { "tf_radio_civ", "", 39},
            { "FirstAidKit", "", 499},
        };
    };



    class sell_weap {
        name = "Armurerie";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        paymentType = "cash";

        primary[] = {
            //  ---------------Sting--------------
            {"SMG_02_F", "", 7647},
            //  ---------------Protector--------------
            {"SMG_05_F", "", 7941},
            //  ---------------Vector--------------
            {"SMG_01_F", "", 8235},
            //  ---------------PDW 2000--------------
            {"hgun_PDW2000_F", "", 8824},
            //  -----------AKS-74U----------
            {"arifle_AKS_F", "", 10000},
            //  ------------P90---------------
            {"SMG_03C_TR_black", "", 11765},
            //  ---------------M16--------------
            {"KA_M16A2", "", 15000},
            {"KA_M16A2_M203", "", 15000},

        };

        secondary[] = {
            //=========================== Auto ==============================
                { "RH_vp70", "", 1324, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                { "RH_muzi", "", 1471, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
                { "RH_tec9", "", 1529, {"life_playerlevel >= 7", "Niveau: 7<br/>Compétence: aucune"}},
                { "RH_vz61", "", 1559, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "RH_g18", "", 1618, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},    
                //------------Deagle gold----------
                {"RH_Deagleg", "", 4000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"RH_Deaglem", "", 4000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"RH_Deagles", "", 4000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"RH_kimber", "", 3000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"RH_kimber_nw", "", 3000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"RH_ttracker_g", "", 4000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}}
        };

        ammo[] = {
            {"KA_M16_30rnd_M855_FMJ_mag", "", 50},
            {"UGL_FlareWhite_F", "", 50},
            {"UGL_FlareGreen_F", "", 50},
            {"UGL_FlareRed_F", "", 50},
            {"UGL_FlareYellow_F", "", 50},
                //  -------Protector & Auto--------
                { "30Rnd_9x21_Mag_SMG_02", "", 10},
                //{ "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "", 15},
                //{ "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "", 15},
                //{ "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "", 15},
                //  --------------Vermin SMG--------
                { "30Rnd_45ACP_Mag_SMG_01", "", 10},
                //{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", "", 15},
                //{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "", 15},
                //{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow", "", 15},
                //  ----------------AKS--------------
                //{ "30Rnd_545x39_Mag_Green_F", "", 30 },
                { "30Rnd_545x39_Mag_F", "", 10 },
                //{ "30Rnd_545x39_Mag_Tracer_Green_F", "", 30 },
                //{ "30Rnd_545x39_Mag_Tracer_F", "", 30 },
                //  ------------P90------------
                { "50Rnd_570x28_SMG_03", "", 50 },

                { "RH_18Rnd_9x19_VP", "", 10},
                { "RH_30Rnd_9x19_UZI", "", 10},
                { "RH_32Rnd_9x19_tec", "", 10},
                { "RH_20Rnd_32cal_vz61", "", 10},
                //  ------------Glock-------------
                { "RH_17Rnd_9x19_g17", "", 10},
                { "RH_19Rnd_9x19_g18", "", 10},
                { "RH_7Rnd_50_AE", "", 10},
                { "RH_7Rnd_45cal_m1911", "", 10},
                { "RH_7Rnd_45cal_m1911", "", 10},
                { "RH_6Rnd_45ACP_Mag", "", 10},
        };

        attachments[] = {
            {"KA_M16A2_Scope", "", 50},
            {"KA_M2_Scope", "", 50},
            {"KA_M16_flashlight", "", 50},

            {"RH_M6X", "", 50},
            {"RH_X2", "", 50},
            {"RH_X300", "", 50},

                { "optic_MRD", "", 150},
                { "optic_MRD_black", "", 150},
                { "optic_Yorris", "", 150},
                //  --------------ACO--------------
                {"optic_Aco", "", 350 },
                {"optic_ACO_grn", "", 350 },
                {"optic_Aco_smg", "", 350 },
                {"optic_ACO_grn_smg", "", 350 },
                //  --------------Holo-------------
                {"optic_Holosight", "", 450},
                {"optic_Holosight_khk_F", "", 450},
                {"optic_Holosight_blk_F", "", 450},
                {"optic_Holosight_smg", "", 450},
                {"optic_Holosight_smg_blk_F", "", 450}
        };

        other[] = {

        };
    };

    class press {
        name = "Press";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        paymentType = "bank";

        primary[] = {
            {"XZ_CamRecorder_1", "", 500},
        };

        secondary[] = {
            {"Xnooz_AppareilPhoto", "", 500},
        };

        ammo[] = {

        };

        attachments[] = {
            
        };

        other[] = {

        };
    };
};