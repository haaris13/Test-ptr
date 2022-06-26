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
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        legal = 1;
        primary[] = {
        };
        secondary[] = {
          { "RH_mak", "", 10000, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
          { "hlc_pistol_P226WestGerman", "", 11000, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
          { "RH_g17", "", 12000, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
          { "RH_cz75", "", 13000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
          { "RH_ttracker", "", 14000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}}
        };
        ammo[] = {
          { "RH_8Rnd_9x18_Mak", "", 100},
          { "hlc_15Rnd_9x19_B_P226", "", 100},
          { "RH_17Rnd_9x19_g17", "", 100},
          { "RH_16Rnd_9x19_CZ", "", 100}, 
          { "RH_10Rnd_22LR_mk2", "", 225}, //rajout arme de poing craftable munition
          { "RH_6Rnd_45ACP_Mag", "", 150}
        };
        attachments[] = {
        };
        other[] = {
          { "Binocular", "", 100},
          { "ItemGPS", "", 100},
          { "ItemMap", "", 100},
          { "ItemCompass", "", 100},
          { "ItemWatch", "", 100},
          //{ "toolKit", "", 150},
          { "ACE_CableTie", "", 150},         
          { "Chemlight_red", "", 50},
          { "Chemlight_yellow", "", 50},
          { "Chemlight_green", "", 50},
          { "Chemlight_blue", "", 50},
          { "ACE_EarPlugs", "", 50},
          { "tf_anprc148jem", "", 100}
        };
    };


     class brinks {
        name = "Brink";
        side = "civ";
        license = "brinks";
        level[] = { "", "", -1, "" };
        legal = 1;
        primary[] = {
        };
        secondary[] = {
          { "hlc_smg_mp5a4", "", 100000, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
          { "hlc_smg_mp510", "", 100000, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
          { "hlc_smg_mp5k_PDW", "", 100000, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
          { "hlc_rifle_auga2para_b", "", 110000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}}
         
        };
        ammo[] = {
          { "RH_8Rnd_9x18_Mak", "", 100},
          { "hlc_15Rnd_9x19_B_P226", "", 100},
          { "RH_17Rnd_9x19_g17", "", 100},
          { "RH_16Rnd_9x19_CZ", "", 100}, 
          { "RH_10Rnd_22LR_mk2", "", 225}, //rajout arme de poing craftable munition
          { "RH_6Rnd_45ACP_Mag", "", 150},
           { "hlc_30Rnd_10mm_B_MP5", "", 150}

        }; 
          attachments[] = {
                { "optic_Yorris", "", 9350, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ACO_grn", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_Holosight_blk_F", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_Hamr", "", 9400, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ACE_optic_Hamr_2D", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_mrco_2d", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                //{ "ace_optic_arco_pip", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_artel_m14", "", 9200, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_lrt_m14", "", 9300, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ams_khk", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_lrps_pip", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_zf95base", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_hamr_pip", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_dms_weathered_f", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_dms", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                 { "optic_ams", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}}
        };
        other[] = {
          { "Binocular", "", 100},
          { "ItemGPS", "", 100},
          { "ItemMap", "", 100},
          { "ItemCompass", "", 100},
          { "ItemWatch", "", 100},
          //{ "toolKit", "", 150},
          { "ACE_CableTie", "", 150},         
          { "Chemlight_red", "", 50},
          { "Chemlight_yellow", "", 50},
          { "Chemlight_green", "", 50},
          { "Chemlight_blue", "", 50},
          { "ACE_EarPlugs", "", 50},
          { "tf_anprc148jem", "", 100}
        };
    };

       class gunwapo {
        name = "Munitions";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        legal = 1;
        primary[] = {
        };
        secondary[] = {
        };
        ammo[] = {
          { "RH_8Rnd_9x18_Mak", "", 100},
          { "hlc_15Rnd_9x19_B_P226", "", 100},
          { "RH_17Rnd_9x19_g17", "", 100},
          { "RH_16Rnd_9x19_CZ", "", 100}, 
          { "RH_10Rnd_22LR_mk2", "", 225}, //rajout arme de poing craftable munition
          { "RH_6Rnd_45ACP_Mag", "", 150}
        };
        attachments[] = {
        };
        other[] = {
          { "Binocular", "", 100},
          { "ItemGPS", "", 100},
          { "ItemMap", "", 100},
          { "ItemCompass", "", 100},
          { "ItemWatch", "", 100},
          //{ "toolKit", "", 150},
          { "ACE_CableTie", "", 150},         
          { "Chemlight_red", "", 50},
          { "Chemlight_yellow", "", 50},
          { "Chemlight_green", "", 50},
          { "Chemlight_blue", "", 50},
          { "ACE_EarPlugs", "", 50},
          { "tf_anprc148jem", "", 100}
        };
    };

    class rebel {
        name = "Achat insurgé Groupe Oficiel";
        side = "civ";
        license = "insurge";
        level[] = { "", "", -1, "" };
        legal = 0;
        primary[] = {
              // ------------P90-----------
                { "SMG_03C_black", "", 110000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
              // ------------AKS-----------
                { "arifle_AKS_F", "", 130000, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
              // ------------HK416C-----------
                { "hlc_rifle_416C", "", 140000, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
              // ------------HK416C Rose-----------
                { "hlc_rifle_BAB", "", 140000, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
              // ------------HK416C Rose-----------
                
               // { "hlc_rifle_RU556", "", 320000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
               // { "hlc_rifle_416D20_wdl", "", 325000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
              //  { "hlc_rifle_awcovert", "", 350000, {"life_playerlevel >= 70", "Niveau: 70<br/>Compétence: aucune"}},
              //  { "hlc_rifle_M1903A1", "", 330000, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
              //  { "arifle_AKM_F", "", 380000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
              //  { "hlc_rifle_sg553RLB", "", 410000, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
             //   { "arifle_SPAR_03_blk_F", "", 400500, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
             //   { "hlc_rifle_ak47", "", 303080, {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"}},
              //  { "hlc_rifle_M1903A1_unertl", "", 480800, {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"}},
             //   { "hlc_rifle_FN3011Tactical_green", "", 485900, {"life_playerlevel >= 60", "Niveau: 60<br/>Compétence: aucune"}},
              //  { "launch_RPG7_F", "", 500000, {"life_playerlevel >= 65", "Niveau: 65<br/>Compétence: aucune"}} 
        };
        secondary[] = {
                //  ---------------PM--------------
                { "hgun_Pistol_01_F", "", 9000, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                //  --------------P07--------------
                { "hgun_P07_F", "", 12000, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "hgun_P07_khk_F", "", 12000, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                //  ------------Rook-40------------
                { "hgun_Rook40_F", "", 13000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ------------ACP-C2-------------
                { "hgun_ACPC2_F", "", 14000, {"life_playerlevel >= 13", "Niveau: 13<br/>Compétence: aucune"}},
                //  ------------4-five-------------
                { "hgun_Pistol_heavy_01_F", "", 16000, {"life_playerlevel >= 16", "Niveau: 16<br/>Compétence: aucune"}},
                //  -------------Zubr--------------
                { "hgun_Pistol_heavy_02_F", "", 19000, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"}},
                { "RH_tec9", "", 19000, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"}},
                { "RH_m9c", "", 19000, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"}},

                //  ------------Signal-------------
                { "hgun_Pistol_Signal_F", "", 5000, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
        };
        ammo[] = {
                //  ------------P90-------------
                { "50Rnd_570x28_SMG_03", "", 250 },
                { "ACE_2Rnd_12Gauge_Pellets_No1_Buck", "", 125 },
                { "2Rnd_12Gauge_Slug", "", 125 },
                //  ------------AKS-------------
                { "30Rnd_545x39_Mag_F", "", 250 },
                //  ------------HK416C-------------
                { "hlc_30rnd_556x45_EPR", "", 250 },
                //  ------------HK416C-------------
               
                { "hlc_5rnd_300WM_FMJ_AWM", "", 500 },
               
                { "hlc_30rnd_556x45_EPR", "", 500 },
                { "ACE_30Rnd_556x45_Stanag_Mk262_mag", "", 500 },
               
                
                { "RH_32Rnd_9x19_tec", "", 500 },
                { "RH_15Rnd_9x19_M9", "", 500 },
               
                { "hlc_5rnd_3006_1903", "", 500 }

        };
        attachments[] = {
                { "optic_Yorris", "", 9350, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ACO_grn", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_Holosight_blk_F", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_Hamr", "", 9400, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ACE_optic_Hamr_2D", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_mrco_2d", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                //{ "ace_optic_arco_pip", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_artel_m14", "", 9200, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_lrt_m14", "", 9300, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ams_khk", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_lrps_pip", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_zf95base", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_hamr_pip", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_dms_weathered_f", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_dms", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                 { "optic_ams", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}}
        };
        other[] = {
            { "Binocular", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            //{ "toolKit", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_bodyBag", "", 200},
            { "ACE_Flashlight_MX991", "", 150},
           
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "Ace_ATragMX", "", 100}, //table de tir snipe 3 lignes
            { "Ace_Kestrel4500", "", 100},
            { "Ace_RangeCard", "", 100}

        };
    };

class damocles {
        name = "Damocles Groupe Oficiel";
        side = "civ";
        license = "damocles";
        level[] = { "", "", -1, "" };
        legal = 0;
        primary[] = {
              // ------------P90-----------
                { "hlc_rifle_samr2", "", 140000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}}
             

        };
        secondary[] = {
                //  ---------------PM--------------
                { "RH_fn57", "", 9000, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                //  --------------P07--------------
                { "hgun_P07_F", "", 12000, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "hgun_P07_khk_F", "", 12000, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                //  ------------Rook-40------------
                { "hgun_Rook40_F", "", 13000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ------------ACP-C2-------------
                { "hgun_ACPC2_F", "", 14000, {"life_playerlevel >= 13", "Niveau: 13<br/>Compétence: aucune"}},
                //  ------------4-five-------------
                { "hgun_Pistol_heavy_01_F", "", 16000, {"life_playerlevel >= 16", "Niveau: 16<br/>Compétence: aucune"}},
                //  -------------Zubr--------------
                { "hgun_Pistol_heavy_02_F", "", 19000, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"}},
                { "RH_tec9", "", 19000, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"}},
                { "RH_m9c", "", 19000, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"}},

                //  ------------Signal-------------
                { "hgun_Pistol_Signal_F", "", 5000, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
        };
        ammo[] = {
                //  ------------P90-------------
             
                 { "hlc_30rnd_556x45_SOST", "", 500 },//damocless
                { "RH_20Rnd_57x28_FN", "", 500 }, //damocless
            
               
                { "hlc_5rnd_3006_1903", "", 500 }

        };
        attachments[] = {
                { "optic_Yorris", "", 9350, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ACO_grn", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_Holosight_blk_F", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_Hamr", "", 9400, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ACE_optic_Hamr_2D", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_mrco_2d", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                //{ "ace_optic_arco_pip", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_artel_m14", "", 9200, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_lrt_m14", "", 9300, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ams_khk", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_lrps_pip", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_zf95base", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_hamr_pip", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_dms_weathered_f", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_dms", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                 { "optic_ams", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}}
        };
        other[] = {
            { "Binocular", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            //{ "toolKit", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_bodyBag", "", 200},
            { "ACE_Flashlight_MX991", "", 150},
           
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "Ace_ATragMX", "", 100}, //table de tir snipe 3 lignes
            { "Ace_Kestrel4500", "", 100},
            { "Ace_RangeCard", "", 100}

        };
    };

    class psylium {
        name = "Groupe Oficiel: Psylium";
        side = "civ";
        license = "psylium";
       level[] = { "", "", -1, "" };
        legal = 0;
        primary[] = {
                { "hlc_rifle_ACR_Carb_tan", "", 140000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}}

        };
        secondary[] = {
                { "hlc_pistol_Mk25", "", 9000, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}}
 
        };
        ammo[] = {       
                { "hlc_30rnd_556x45_EPR_EMAG", "", 500 },
                { "hlc_15Rnd_9x19_B_P226", "", 500 }, 
                { "hlc_5rnd_3006_1903", "", 500 },
                { "hlc_30rnd_556x45_EPR", "", 500 }
                

        };
        attachments[] = {
                { "optic_Yorris", "", 9350, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ACO_grn", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_Holosight_blk_F", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_Hamr", "", 9400, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ACE_optic_Hamr_2D", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_mrco_2d", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                //{ "ace_optic_arco_pip", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_artel_m14", "", 9200, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_lrt_m14", "", 9300, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ams_khk", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_lrps_pip", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_zf95base", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_hamr_pip", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_dms_weathered_f", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_dms", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ams", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}}
        };
        other[] = {
            { "Binocular", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            //{ "toolKit", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_bodyBag", "", 200},
            { "ACE_Flashlight_MX991", "", 150},           
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "Ace_ATragMX", "", 100}, //table de tir snipe 3 lignes
            { "Ace_Kestrel4500", "", 100},
            { "Ace_RangeCard", "", 100}
        };
    };


    class bratva {
        name = "Groupe Oficiel: bratva";
        side = "civ";
        license = "bratva";
       level[] = { "", "", -1, "" };
        legal = 0;
        primary[] = {
            { "hlc_rifle_M27IAR", "", 140000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
            { "hlc_rifle_ACR_SBR_black", "", 140000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
            { "hlc_rifle_M1903A1", "", 240000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}}
        };
        secondary[] = {
            { "hlc_pistol_Mk25", "", 9000, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}}
 
        };
        ammo[] = {       
            { "hlc_30rnd_556x45_EPR_EMAG", "", 500 },
            { "hlc_30rnd_556x45_EPR", "", 500 },
            { "hlc_15Rnd_9x19_B_P226", "", 500 }, 
            { "hlc_5rnd_3006_1903", "", 500 } 
        };
        attachments[] = {
                { "optic_Yorris", "", 9350, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "acc_flashlight", "", 2350, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ACO_grn", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_Holosight_blk_F", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_Hamr", "", 9400, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ACE_optic_Hamr_2D", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_mrco_2d", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                //{ "ace_optic_arco_pip", "", 9000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_artel_m14", "", 9200, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_lrt_m14", "", 9300, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ams_khk", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_lrps_pip", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "hlc_optic_zf95base", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "ace_optic_hamr_pip", "", 10000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_dms_weathered_f", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_dms", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "bipod_01_f_blk", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
                { "optic_ams", "", 9500, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}}
        };
        other[] = {
            { "Binocular", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            //{ "toolKit", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_bodyBag", "", 200},
            { "ACE_Flashlight_MX991", "", 150},           
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "Ace_ATragMX", "", 100}, //table de tir snipe 3 lignes
            { "Ace_Kestrel4500", "", 100},
            { "ACE_Flashlight_MX991", "", 500}, //fumigène
            { "Ace_RangeCard", "", 100},
            { "MiniGrenade", "", 5000 },
            { "ACE_M84", "Flashbang", 5000}
        };
    };


     class mafia {
        name = "Achat Mafia";
        side = "civ";
        license = "mafia";
        level[] = { "", "", -1, "" };
        legal = 0;
        primary[] = {
                //  ----------Protector------------
                { "hlc_rifle_augpara_b", "", 150000, {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"}}, //bad
                //  -------------PDW---------------
                { "hgun_PDW2000_F", "", 154000, {"life_playerlevel >= 14", "Niveau: 14<br/>Compétence: aucune"}},
                { "sgun_HunterShotgun_01_sawedoff_F", "", 175000, {"life_playerlevel >= 14", "Niveau: 14<br/>Compétence: aucune"}},
                //  -------Vermin SMG--------------
                { "SMG_01_F", "", 160000, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},
                //  ------------Sting--------------
                { "SMG_02_F", "", 185000, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
                { "hlc_smg_9mmar", "", 210000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}}, //bad
                { "hlc_rifle_aek971", "", 211000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}}, //bad

                //  ------------SDAR---------------
                { "arifle_SDAR_F", "", 240000, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}}
        };
        secondary[] = {
                //  ---------------PM--------------
                { "hgun_Pistol_01_F", "", 9000, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
                //  --------------P07--------------
                { "hgun_P07_F", "", 12000, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                { "hgun_P07_khk_F", "", 12000, {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"}},
                //  ------------Rook-40------------
                { "hgun_Rook40_F", "", 13000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                //  ------------ACP-C2-------------
                { "hgun_ACPC2_F", "", 14000, {"life_playerlevel >= 13", "Niveau: 13<br/>Compétence: aucune"}},
                //  ------------4-five-------------
                { "hgun_Pistol_heavy_01_F", "", 16000, {"life_playerlevel >= 16", "Niveau: 16<br/>Compétence: aucune"}},
                //  -------------Zubr--------------
                { "hgun_Pistol_heavy_02_F", "", 19000, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"}},
                { "RH_tec9", "", 19000, {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"}},

                //  ------------Signal-------------
                { "hgun_Pistol_Signal_F", "", 5000, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}}
        };

        ammo[] = {
                //  ------------ACP-C2-------------
                { "9Rnd_45ACP_Mag", "", 300 },
                { "ACE_2Rnd_12Gauge_Pellets_No1_Buck", "", 125 },
                { "hlc_30Rnd_9x19_B_MP5", "", 125 },
                { "hlc_30Rnd_545x39_B_AK", "", 125 },

       
                { "2Rnd_12Gauge_Slug", "", 125 },
                //  -------------Zubr--------------
                { "6Rnd_45ACP_Cylinder", "", 150 },
                //  ------------4-five-------------
                { "11Rnd_45ACP_Mag", "", 250 },
                //  ---------------PM--------------
                { "10Rnd_9x21_Mag", "", 250 },
                //  -----P07 & Rook-40 & Auto------
                { "16Rnd_9x21_Mag", "",  400 },
                { "16Rnd_9x21_red_Mag", "", 400 },
                { "16Rnd_9x21_green_Mag", "", 400 },
                { "16Rnd_9x21_yellow_Mag", "", 400 },
                { "30Rnd_9x21_Mag", "", 750 },
                { "30Rnd_9x21_Red_Mag", "", 750 },
                { "30Rnd_9x21_Green_Mag", "", 750 }, 
                { "30Rnd_9x21_Yellow_Mag", "", 750 },
                //  -------Protector & Auto--------
                { "30Rnd_9x21_Mag_SMG_02", "", 750 },
                { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "", 750 },
                { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "", 750 },
                { "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "", 750 },
                //  --------------Vermin SMG--------
                { "30Rnd_45ACP_Mag_SMG_01", "", 750 },
                { "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", "", 750 },
                { "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "", 750 },
                { "30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow", "", 750 },
                //  ------------SDAR-------------
                { "6Rnd_RedSignal_F", "", 500 },
                 { "20Rnd_556x45_UW_mag", "", 500 },
                //  ------------P90-------------

                //  ------------Signal-------------
                { "6Rnd_RedSignal_F", "", 150 },
                { "30Rnd_545x39_Mag_F", "", 1750 },
                { "RH_32Rnd_9x19_tec", "", 750 },
                { "6Rnd_GreenSignal_F", "", 150 }
        };

        attachments[] = {
                {"optic_MRD", "", 9500},
                {"optic_Yorris", "", 9400},
                {"rhs_acc_ekp1", "", 10000 },
                //  --------------ACO--------------
                {"optic_Aco", "", 6500 },
                {"optic_ACO_grn", "", 6500 },
                {"optic_Aco_smg", "", 6500 },
                {"optic_ACO_grn_smg", "", 6500 },
                //  --------------Holo-------------
                {"optic_Holosight", "", 7000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_khk_F", "", 7000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_blk_F", "", 7000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_smg", "", 7000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_Holosight_smg_blk_F", "", 7000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
                {"optic_dms", "", 10000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}}
                
        };

        other[] = {
            { "Binocular", "", 100},
            { "Leupold_Mk4_cam", "", 500},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
           // { "toolKit", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_bodyBag", "", 200},
            { "ACE_Flashlight_MX991", "", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100}
        };
    };

    //Basic Shops
    class genstore {
        name = "Magasin Généraliste";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        legal = 1;
        other[] = {
            { "Binocular", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_Flashlight_MX991", "", 70},
            //{ "toolKit", "", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "tf_anprc148jem", "", 100},
            { "Xnooz_AppareilPhoto", "", 200},
            { "SAN_Headlamp_v2", "", 300},
            { "SAN_Headlamp_v1", "", 300},
            { "Xnooz_micro2", "", 100},
            { "Xnooz_micro1", "", 100},
            { "XZ_CamRecorder_1", "", 150},
            { "ACE_EarPlugs", "", 50},
            { "murshun_cigs_cigpack", "", 10},
            { "murshun_cigs_lighter", "", 10},
            { "V12_JOIN", "", 50},
            { "immersion_pops_pop0", "", 10},
            { "immersion_cigs_cigar0", "", 10},
            { "TRYK_Beard_BK", "", 150, { "", "", -1 } },
            { "TRYK_Beard_BL", "", 150, { "", "", -1 } },
            { "TRYK_Beard", "", 150, { "", "", -1 } },
            { "TRYK_Beard_BW", "", 150, { "", "", -1 } },
            { "TRYK_Beard_Gr", "", 150, { "", "", -1 } },
            { "TRYK_Beard_BK2", "", 150, { "", "", -1 } },
            { "TRYK_Beard_BL2", "", 150, { "", "", -1 } },
            { "TRYK_Beard2", "", 150, { "", "", -1 } },
            { "TRYK_Beard_BW2", "", 150, { "", "", -1 } },
            { "TRYK_Beard_Gr2", "", 150, { "", "", -1 } },
            { "TRYK_SBeard_BK", "", 150, { "", "", -1 } },
            { "TRYK_SBeard_BL", "", 150, { "", "", -1 } },
            { "TRYK_SBeard", "", 150, { "", "", -1 } },
            { "TRYK_SBeard_BW", "", 150, { "", "", -1 } },
            { "TRYK_SBeard_Gr", "", 150, { "", "", -1 } },
            { "TRYK_SBeard_BK4", "", 150, { "", "", -1 } },
            { "TRYK_SBeard_BL4", "", 150, { "", "", -1 } },
            { "TRYK_SBeard4", "", 150, { "", "", -1 } },            
            { "TRYK_SBeard_BW4", "", 150, { "", "", -1 } },
            { "TRYK_SBeard_Gr4", "", 150, { "", "", -1 } },
            { "murshun_cigs_matches", "", 10}
        };
    };

    class f_station_store {
        name = "Magasin de la Station essence";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        legal = 1;
        other[] = {
            { "Binocular", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_Flashlight_MX991", "", 70},
            { "ACE_wirecutter", "", 1000},
            //{ "toolKit", "", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100}
        };
    };

    class medic {
        name = "Magasin Médecin Général";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        legal = 1;

        primary[] = {
            //  ------------MP5---------------
          { "ASN_fireextinguisher", "", 100}
        };
        ammo[] = {
           { "ASN_fireammo", "", 50}         
        };
        other[] = {
            { "ACE_epinephrine", "", 10},
            { "ACE_morphine", "", 10},
			{ "ACE_adenosine", "", 10},
			{ "ACE_atropine", "", 10},
			{ "ACE_packingBandage", "", 10},
			{ "ACE_elasticBandage", "", 10},
			{ "ACE_quikclot", "", 10},
			{ "ACE_bloodIV", "", 25},
			{ "ACE_bloodIV_250", "", 25},
			{ "ACE_bloodIV_500", "", 25},
			{ "ACE_salineIV", "", 25},
			{ "ACE_salineIV_250", "", 25},
			{ "ACE_salineIV_500", "", 25},
			{ "ACE_splint", "", 25},
			{ "ACE_tourniquet", "", 25},
			{ "ACE_bodyBag", "", 25},
			{ "ACE_surgicalKit", "", 25},
			{ "ACE_personalAidKit", "", 25},
			{ "Chemlight_red", "", 50},
			{ "Chemlight_yellow", "", 50},
			{ "Chemlight_green", "", 50},
			{ "Chemlight_blue", "", 50},
			{ "ToolKit", "", 150},
			{ "ACE_EarPlugs", "", 50},
			{ "ACE_Flashlight_MX991", "", 100},
			{ "ItemMap", "", 100},
			{ "ItemCompass", "", 100},
			{ "Itemwatch", "", 100},
			{ "tf_anprc148jem", "", 100},
			{ "ItemGPS", "", 100},
			{ "Binocular", "", 100},
			{ "SAN_Headlamp_v1", "", 100},
			{ "SAN_Headlamp_v2", "", 100},
            { "lance_incendie", "", 100}
			
        };
    };


class spe_medic {
        name = "Magasin Spécialités";
        side = "med";
        license = "med_spe";
        level[] = { "", "", -1, "" };
        legal = 1;

        primary[] = {
            //  ------------MP5---------------
          { "ASN_fireextinguisher", "", 100}
        };
        ammo[] = {
           { "ASN_fireammo", "", 50}         
        };
        other[] = {
          
            { "ACE_UAVBattery", "", 25},
            { "ACE_Chemlight_UltraHiOrange", "", 25},
            { "ACE_Chemlight_HiGreen", "", 150},
            { "ACE_Chemlight_HiRed", "", 150},
            { "ACE_Chemlight_HiYellow", "", 300},
            { "ACE_Chemlight_HiBlue", "", 300},
            { "ACE_Chemlight_HiWhite", "", 100},
           //{ "toolKit", "", 150},
            { "ACE_HandFlare_Green", "", 50},
            { "ACE_HandFlare_Red", "", 50},
            { "ACE_HandFlare_Yellow", "", 50},
            { "ACE_HandFlare_White", "", 50},
            { "I_UavTerminal", "", 50},
            { "C_UavTerminal", "", 50}

         
        };
    };

    // Stuff police
    class cop_gardPaix {
        name = "GAV";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "Vous devez être un Gendarme Adjoint Volontaire" };

        primary[] = {
          { "hlc_smg_mp5a2", "", 1000},
          { "bg21_famas2", "", 1000}
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000}            
        };

        ammo[] = {                   
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 }
        };

        attachments[] = {
                { "optic_Yorris", "", 200},
                { "optic_Holosight_blk_F", "", 200},
                { "optic_Holosight_smg_blk_F", "", 200},
                { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 100},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 100},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };

    class cop_Bri {
        name = "Brigadier";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Vous devez être brigadier" };
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},  
            { "bg21_famas2", "", 1000}
        };

        secondary[] = {
            { "CSW_M26C", "", 1000},
            { "hlc_pistol_P226US", "", 1000}                
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "25Rnd_556x45_famas", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 }         
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };


    class cop_brigadierC {
        name = "BrigadierChef";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Vous devez être brigadier-chef" };
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},      
            { "bg21_famas2", "", 1000},
            { "SMG_03_TR_khaki", "", 1000}     
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_atropine", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };

    class cop_Marechal {
        name = "Marechal des logis";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "Vous devez être Marechal des Logis" };
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},     
            { "bg21_famas2", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000}
           
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "ACE_optic_Hamr_2D", "", 200},
            { "ace_optic_hamr_pip", "", 200},
            { "bipod_02_F_blk", "", 200},
            { "acc_flashlight_pistol", "", 200},
            { "optic_MRCO", "", 200},
            { "optic_Arco_blk_F", "", 200},
            { "optic_Hamr", "", 200}
        };
        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };



    class cop_Gendarme {
        name = "Gendarme de carriere";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "Vous devez être gendarme de carrière" };   
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},       
            { "bg21_famas2", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "hlc_rifle_G36V", "", 1000}
           
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            {"30Rnd_65x39_caseless_black_mag", "", 300 },
            {"hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "ACE_optic_Hamr_2D", "", 200},
            { "ace_optic_hamr_pip", "", 200},
            { "bipod_02_F_blk", "", 200},
            { "acc_flashlight_pistol", "", 200},
            { "optic_MRCO", "", 200},
            { "optic_Arco_blk_F", "", 200},
            { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };


    class cop_MarechalC {
        name = "Marechal des logis Chef";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "Vous devez être Marechal des logis Chef" };   
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},       
            { "bg21_famas2", "", 1000},
            { "hlc_rifle_M4", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "hlc_rifle_G36V", "", 1000}
  
        };
        
        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 } 
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "ACE_optic_Hamr_2D", "", 200},
            { "ace_optic_hamr_pip", "", 200},
            { "bipod_02_F_blk", "", 200},
            { "acc_flashlight_pistol", "", 200},
            { "optic_DMS", "", 200},
            { "optic_MRCO", "", 200},
            { "optic_ams", "", 200},
            { "optic_Arco_blk_F", "", 200},
            { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };

    class cop_Adjudant {
        name = "Adjudant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "Vous devez être Adjudant" };   
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},     
            { "bg21_famas2", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "hlc_rifle_G36V", "", 1000},
            
            { "hlc_rifle_416D10_ptato", "", 1000}
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "ACE_optic_Hamr_2D", "", 200},
            { "ace_optic_hamr_pip", "", 200},
            { "bipod_02_F_blk", "", 200},
            { "acc_flashlight_pistol", "", 200},
            { "optic_DMS", "", 200},
            { "optic_MRCO", "", 200},
            { "optic_ams", "", 200},
            { "optic_Arco_blk_F", "", 200},
            { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };

    class cop_AdjudantC {
        name = "Adjudant Chef";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "Vous devez être Adjudant Chef" };
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},        
            { "bg21_famas2", "", 1000},
            { "hlc_rifle_M4", "", 1000},
            { "hlc_rifle_416D20", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "hlc_rifle_G36V", "", 1000},
           
            { "hlc_rifle_416D10_ptato", "", 1000}
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
                { "optic_Yorris", "", 200},
                { "optic_Holosight_blk_F", "", 200},
                { "optic_Holosight_smg_blk_F", "", 200},
                { "ACE_optic_Hamr_2D", "", 200},
                { "ace_optic_hamr_pip", "", 200},
                { "bipod_02_F_blk", "", 200},
                { "acc_flashlight_pistol", "", 200},
                { "optic_DMS", "", 200},
                { "optic_MRCO", "", 200},
                { "optic_ams", "", 200},
                { "optic_Arco_blk_F", "", 200},
                { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };


    class cop_Major {
        name = "Major";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "Vous devez être Major" };
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},        
            { "bg21_famas2", "", 1000},
            { "hlc_rifle_M4", "", 1000},
            { "hlc_rifle_416D20", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "hlc_rifle_G36V", "", 1000},
            { "arifle_MXC_Black_F", "", 1000},
           
            { "hlc_rifle_416D10_ptato", "", 1000},
            { "hlc_rifle_ACR_Carb_black", "", 1000}
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            {"30Rnd_65x39_caseless_black_mag", "", 300 },
            {"hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "ACE_optic_Hamr_2D", "", 200},
            { "ace_optic_hamr_pip", "", 200},
            { "bipod_02_F_blk", "", 200},
            { "acc_flashlight_pistol", "", 200},
            { "optic_DMS", "", 200},
            { "optic_MRCO", "", 200},
            { "optic_ams", "", 200},
            { "optic_Arco_blk_F", "", 200},
            { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "1Rnd_Smoke_Grenade_shell", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };

    class cop_EleveLieut {
        name = "Eleve Lieutenant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 10, "Vous devez être Eleve Lieutenant" };
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},        
            { "bg21_famas1", "", 1000},
            { "hlc_rifle_M4", "", 1000},
            { "hlc_rifle_416D20", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "hlc_rifle_G36V", "", 1000},
            { "arifle_MXC_Black_F", "", 1000},
         
            { "hlc_rifle_416D10_ptato", "", 1000},
            { "hlc_rifle_ACR_Carb_black", "", 1000}
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
                { "optic_Yorris", "", 200},
                { "optic_Holosight_blk_F", "", 200},
                { "optic_Holosight_smg_blk_F", "", 200},
                { "ACE_optic_Hamr_2D", "", 200},
                { "ace_optic_hamr_pip", "", 200},
                { "bipod_02_F_blk", "", 200},
                { "acc_flashlight_pistol", "", 200},
                { "optic_DMS", "", 200},
                { "optic_MRCO", "", 200},
                { "optic_ams", "", 200},
                { "optic_Arco_blk_F", "", 200},
                { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };


    class cop_Lieutenant {
        name = "Lieutenant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 11, "Vous devez être Lieutenant" };
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},        
            { "bg21_famas1", "", 1000},
            { "hlc_rifle_M4", "", 1000},
            { "hlc_rifle_416D20", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "hlc_rifle_G36V", "", 1000},
            { "arifle_MXC_Black_F", "", 1000},
           
            { "hlc_rifle_416D10_ptato", "", 1000},
            { "hlc_rifle_ACR_Carb_black", "", 1000}
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
                { "optic_Yorris", "", 200},
                { "optic_Holosight_blk_F", "", 200},
                { "optic_Holosight_smg_blk_F", "", 200},
                { "ACE_optic_Hamr_2D", "", 200},
                { "ace_optic_hamr_pip", "", 200},
                { "bipod_02_F_blk", "", 200},
                { "acc_flashlight_pistol", "", 200},
                { "optic_DMS", "", 200},
                { "optic_MRCO", "", 200},
                { "optic_ams", "", 200},
                { "optic_Arco_blk_F", "", 200},
                { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };



    class cop_Capitaine {
        name = "Capitaine";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 12, "Vous devez être capitaine" };
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},        
            { "bg21_famas1", "", 1000},
            { "hlc_rifle_M4", "", 1000},
            { "hlc_rifle_416D20", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "hlc_rifle_G36V", "", 1000},
            { "arifle_MXC_Black_F", "", 1000},
         
            { "hlc_rifle_416D10_ptato", "", 1000},
            { "hlc_rifle_ACR_Carb_black", "", 1000}
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "ACE_optic_Hamr_2D", "", 200},
            { "ace_optic_hamr_pip", "", 200},
            { "bipod_02_F_blk", "", 200},
            { "acc_flashlight_pistol", "", 200},
            { "optic_DMS", "", 200},
            { "optic_MRCO", "", 200},
            { "optic_ams", "", 200},
            { "optic_Arco_blk_F", "", 200},
            { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };



    class cop_commandant {
        name = "Commandant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 13, "Vous devez être commandant" };
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},        
            { "bg21_famas1", "", 1000},
            { "hlc_rifle_M4", "", 1000},
            { "hlc_rifle_416D20", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "hlc_rifle_G36V", "", 1000},
            { "arifle_MXC_Black_F", "", 1000},
            { "hlc_rifle_416D10_ptato", "", 1000},
            { "hlc_rifle_ACR_Carb_black", "", 1000}
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "ACE_optic_Hamr_2D", "", 200},
            { "ace_optic_hamr_pip", "", 200},
            { "bipod_02_F_blk", "", 200},
            { "acc_flashlight_pistol", "", 200},
            { "optic_DMS", "", 200},
            { "optic_MRCO", "", 200},
            { "optic_ams", "", 200},
            { "optic_Arco_blk_F", "", 200},
            { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };

    class cop_LieutenantC {
        name = "Lieutenant Colonel";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 14, "Vous devez être Lieutenant Colonel" };
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},        
            { "bg21_famas1", "", 1000},
            { "hlc_rifle_M4", "", 1000},
            { "hlc_rifle_416D20", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "hlc_rifle_G36V", "", 1000},
            { "arifle_MXC_Black_F", "", 1000},
            { "hlc_rifle_416D10_ptato", "", 1000},
            { "hlc_rifle_ACR_Carb_black", "", 1000}
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "ACE_optic_Hamr_2D", "", 200},
            { "ace_optic_hamr_pip", "", 200},
            { "bipod_02_F_blk", "", 200},
            { "acc_flashlight_pistol", "", 200},
            { "optic_DMS", "", 200},
            { "optic_MRCO", "", 200},
            { "optic_ams", "", 200},
            { "optic_Arco_blk_F", "", 200},
            { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };

    class cop_Colonel {
        name = "Colonel";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 15, "Vous devez être Colonel" };
        primary[] = {
            { "hlc_smg_mp5a2", "", 1000},
            { "hlc_rifle_augpara_b", "", 1000},        
            { "bg21_famas1", "", 1000},
            { "hlc_rifle_M4", "", 1000},
            { "hlc_rifle_416D20", "", 1000},
            { "hlc_rifle_G36C", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "hlc_rifle_G36V", "", 1000},
            { "arifle_MXC_Black_F", "", 1000},
            { "hlc_rifle_416D10_ptato", "", 1000},
            { "hlc_rifle_ACR_Carb_black", "", 1000}
        };

        secondary[] = {
            { "hlc_pistol_P226US", "", 1000},
            { "CSW_M26C", "", 1000}
        };

        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
	        { "hlc_15Rnd_9x19_B_P226", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "ACE_optic_Hamr_2D", "", 200},
            { "ace_optic_hamr_pip", "", 200},
            { "bipod_02_F_blk", "", 200},
            { "acc_flashlight_pistol", "", 200},
            { "optic_DMS", "", 200},
            { "optic_MRCO", "", 200},
            { "optic_ams", "", 200},
            { "optic_Arco_blk_F", "", 200},
            { "optic_Hamr", "", 200}
        };

        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
            { "toolKit", "", 150},
            { "ACE_tourniquet", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100},
            { "ACE_bodyBag", "", 25}
        };
    };

    class cop_entrainement {
        name = "Armurier Entrainement";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "Pas d'autorisation pour vous" };
        primary[] = {
           
        };
        secondary[] = {
          
        };
        ammo[] = {
            { "hlc_30Rnd_9x19_B_MP5", "", 300 },
	        { "25Rnd_556x45_famas", "", 300 },
            { "CSW_Taser_Probe_Mag", "", 300 },
            { "RH_17Rnd_9x19_g17", "", 300 },
            { "hlc_25Rnd_9x19mm_M882_AUG", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },                    
            { "10Rnd_50BW_Mag_F", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "MiniGrenade", "", 300 },
            { "30Rnd_65x39_caseless_black_mag", "", 300 },
            { "hlc_30rnd_556x45_EPR_G36", "", 300 },
            { "29rnd_300BLK_STANAG_T", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 }, 
            { "hlc_20Rnd_762x51_B_M14", "", 300 },
            { "hlc_20rnd_762x51_b_G3", "", 300 },
            { "20Rnd_762x51_Mag", "", 300 },
            { "hlc_20rnd_762x51_barrier_G3", "", 300 }  
        };
        attachments[] = {};
        other[] = {};
    };

    //spécialisation Gendarmerie
    class cop_PSIG {
        name = "PSIG";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Vous devez avoir la spécialisation GIP" };
        primary[] = {
            { "hlc_rifle_bcmjack", "", 1000},
            { "hlc_rifle_ACR_Carb_black", "", 1000},
            { "CSW_M870", "", 1000}  
        };

        secondary[] = {
            { "CSW_M26C", "", 1000},
            { "CSW_FN57_Ballistic_Shield", "", 1000}
        };

        ammo[] = {
            { "50Rnd_570x28_SMG_03", "", 300 },
            { "20Rnd_762x51_Mag", "", 300 },
            { "30Rnd_556x45_Stanag_Sand", "", 300 },
            { "20Rnd_762x51_Mag", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },
            { "hlc_30Rnd_556x45_EPR_sg550", "", 300 },
            { "CSW_M870_8Rnd_buck", "", 300 },
            { "CSW_M870_8Rnd_slug", "", 300 },
            { "CSW_M870_4Rnd_stun", "", 300 },
            { "CSW_20Rnd_57x28_SS190", "", 300 }
        };

        attachments[] = {
            { "optic_Yorris", "", 200},
            { "optic_Holosight_blk_F", "", 200},
            { "optic_Holosight_smg_blk_F", "", 200},
            { "ACE_optic_Hamr_2D", "", 200},
            { "ace_optic_hamr_pip", "", 200},
            { "bipod_02_F_blk", "", 200},
            { "acc_flashlight_pistol", "", 200},
            { "optic_DMS", "", 200},
            { "optic_MRCO", "", 200},
            { "optic_ams", "", 200},
            { "optic_Arco_blk_F", "", 200},
            { "CSW_FN57_flashlight_glare_1", "", 200},
            { "CSW_FN57_Shield_P", "", 200}
        };

        other[] = {};
    };

    class cop_GIGN {
        name = "GIGN";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Vous devez avoir la spécialisation GIP" };
        primary[] = {
            { "hlc_rifle_g3ka4", "", 1000},
            { "hlc_rifle_ACR_Carb_black", "", 1000},
            { "arifle_SPAR_03_blk_F", "", 1000},
            { "srifle_DMR_03_F", "", 1000},
            { "CSW_M870", "", 1000}
        };

        secondary[] = {
            { "CSW_M26C", "", 1000},
            { "CSW_FN57_Ballistic_Shield", "", 1000}
        };

        ammo[] = {
            { "20Rnd_762x51_Mag", "", 300 },
            { "30Rnd_556x45_Stanag_Sand", "", 300 },
            { "hlc_20rnd_762x51_b_G3", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },
            { "hlc_30Rnd_556x45_EPR_sg550", "", 300 },
            { "CSW_M870_8Rnd_buck", "", 300 },
            { "CSW_M870_8Rnd_slug", "", 300 },
            { "CSW_M870_4Rnd_stun", "", 300 },
            { "CSW_20Rnd_57x28_SS190", "", 300 }
        };

        attachments[] = {
                { "optic_Yorris", "", 200},
                { "optic_Holosight_blk_F", "", 200},
                { "optic_Holosight_smg_blk_F", "", 200},
                { "ACE_optic_Hamr_2D", "", 200},
                { "ace_optic_hamr_pip", "", 200},
                { "bipod_02_F_blk", "", 200},
                { "acc_flashlight_pistol", "", 200},
                { "optic_DMS", "", 200},
                { "optic_MRCO", "", 200},
                { "optic_ams", "", 200},
                { "optic_Arco_blk_F", "", 200},
                { "CSW_FN57_flashlight_glare_1", "", 200},
                { "CSW_FN57_Shield_P", "", 200}
        };

        other[] = {};
    };

    class cop_tireur_de_Precision {
        name = "Tireur de précision";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Vous devez avoir la spécialisation tireur de précision" };
        primary[] = {
            { "hlc_rifle_PSG1A1_RIS", "", 1000},
            { "hlc_rifle_awmagnum_BL", "", 1000},
            { "srifle_EBR_F", "", 1000}
        };

        secondary[] = {
        };

        ammo[] = {
            { "hlc_20rnd_762x51_barrier_G3", "", 300 },
            { "hlc_5rnd_300WM_mk248_AWM", "", 300 },
            { "ACE_20Rnd_762x51_M118LR_Mag", "", 300 }
        };

        attachments[] = {
                { "optic_KHS_blk", "", 200},
                { "ACE_optic_LRPS_PIP", "", 200},
                { "optic_AMS", "", 200},
                { "bipod_01_F_blk", "", 200}
        };

        other[] = {
            { "Ace_ATragMX", "", 100},
            { "Ace_Kestrel4500", "", 100},
            { "Ace_RangeCard", "", 100}
        };
    };

    class cop_tireur_de_heliporte {
        name = "Tireur de précision";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Vous devez avoir la spécialisation tireur de précision" };
        primary[] = {
            { "hlc_rifle_416D20", "", 1000}
        };

        secondary[] = {};

        ammo[] = {
            { "150Rnd_556x45_Drum_Mag_Tracer_F", "", 300 }
        };

        attachments[] = {};
        other[] = {};
    };

    //spécialisation police
    class cop_gip {
        name = "GIP";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Vous devez avoir la spécialisation GIP" };
        primary[] = {
            { "hlc_rifle_PSG1A1_RIS", "", 4000},
            { "srifle_DMR_03_F", "", 4000},
            { "arifle_SPAR_01_snd_F", "", 4000},
            { "arifle_SPAR_02_snd_F", "", 4000},
            { "arifle_SPAR_03_snd_F", "", 4000},
            { "hlc_rifle_SG550Sniper_RIS", "", 7000},
            { "hlc_rifle_SG553SB_RIS", "", 7000}
        };

        secondary[] = {
            { "RH_g19", "", 1000},
            { "CSW_M26C", "", 1000},
            { "hgun_Rook40_snds_F", "", 1000}
        };

        ammo[] = {
            { "50Rnd_570x28_SMG_03", "", 300 },
            { "20Rnd_762x51_Mag", "", 300 },
            { "30Rnd_556x45_Stanag_Sand", "", 300 },
            { "20Rnd_762x51_Mag", "", 300 },
            { "hlc_30rnd_556x45_EPR", "", 300 },
            { "hlc_30Rnd_556x45_EPR_sg550", "", 300 },
            { "hlc_30Rnd_556x45_EPR_sg550", "", 300 }
	
        };

        attachments[] = {
                { "optic_KHS_blk", "", 200},
                { "ACE_optic_LRPS_PIP", "", 200},
                { "optic_AMS", "", 200},
                { "bipod_01_F_blk", "", 200}   
        };

        other[] = {
            { "Ace_ATragMX", "", 100},
            { "Ace_Kestrel4500", "", 100},
            { "Ace_RangeCard", "", 100}
        };
    };

    //spécialisation police

    // Stuff police
    class cop_fede {
        name = "Achat Fédéraux";
        side = "cop";
        license = "";
        level[] = { "life_copUlevel", "EQUAL", 3, "Interdit !" };
        primary[] = {
            //  ------------MP5---------------
            { "hlc_smg_mp5a2", "", 1000},
            { "SMG_03_TR_khaki", "", 1000},
            { "arifle_MXC_Black_F", "", 1000},
            { "hlc_rifle_416D20", "", 1000},
            { "hlc_rifle_M14dmr_Rail", "", 1000},
            { "arifle_SPAR_03_blk_F", "", 1000},
            { "rifle_EBR_F", "", 1000},
            { "launch_MRAWS_sand_rail_F", "", 10000},
            { "srifle_DMR_03_F", "", 1000},

            //  ------------Mosberg---------------
            { "Mossberg_590", "", 1000}

        };
        secondary[] = {
            //  -------------Glock 19-------------
            { "RH_g19", "", 1000},
            //  -------------Glock 17-------------
            { "RH_g17", "", 1000},
            { "CSW_M26C", "", 1000},
            //  -------------MP5K-------------
            { "hlc_smg_mp5k", "", 1000}
        };
        ammo[] = {
            //  -------------Glock 19--------------
            { "RH_17Rnd_9x19_g17", "", 300 },
            //  -------------MP5K-MP5--------------
            { "hlc_30Rnd_9x19_SD_MP5", "", 300 },
            //  ----------------Mosberg----------------
            { "8Rnd_Mossberg_590_Pellets", "", 300 },
            {"50Rnd_570x28_SMG_03", "", 300 },
             {"30Rnd_65x39_caseless_black_mag", "", 300 },
              {"20Rnd_762x51_Mag", "", 300 },
               {"MRAWS_HEAT_F", "", 300 },
                  {"ACE_20Rnd_762x51_M118LR_Mag", "", 300 },
                   { "CSW_Taser_Probe_Mag", "", 300 },
            //  ----------------Mosberg----------------
            { "8Rnd_Mossberg_590_Slug", "", 300 }

        };
        attachments[] = {
                { "optic_Yorris", "", 200},
                { "optic_Holosight_blk_F", "", 200},
                { "optic_Holosight_smg_blk_F", "", 200},
                { "ACE_optic_Hamr_2D", "", 200},
                { "ace_optic_hamr_pip", "", 200},
                { "hlc_20Rnd_762x51_B_M14", "", 300 },
                { "bipod_02_F_blk", "", 200},
                { "acc_flashlight_pistol", "", 200},
                { "optic_DMS", "", 200},
                { "optic_MRCO", "", 200},
                { "optic_ams", "", 200},
                { "optic_Arco_blk_F", "", 200}
        };
        other[] = {
            { "Binocular", "", 100},
            { "Rangefinder", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
           // { "toolKit", "", 150},
            { "ACE_atropine", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_CableTie", "", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "ACE_Flashlight_MX991", "", 150},
            { "ACE_wirecutter", "", 1000},
            { "ACE_M84", "Flashbang", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100}
        };
    };


    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        legal = 1;
        other[] = {
            { "ItemGPS", "", 100},
            { "Binocular", "", 150},
             { "Land_Defibrillator_F", "", 5},  //test defri 
           // { "toolKit", "", 150},
            { "ACE_fieldDressing", "", 25},
            { "ACE_elasticBandage", "", 25},
            { "ACE_packingBandage", "", 25},
            { "ACE_quikclot", "", 25},
            { "Medikit", "", 250},
            { "ACE_EarPlugs", "", 50}, 
            { "tf_anprc148jem", "", 100}
        };
    };

    class depan_basic {
        name = "store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        legal = 1;
        other[] = {
            { "ItemGPS", "", 100},
            { "Binocular", "", 150},
           // { "toolKit", "", 150},
            { "ACE_fieldDressing", "", 50},
            { "ACE_elasticBandage", "", 50},
            { "ACE_packingBandage", "", 50},
            { "ACE_quikclot", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100}
        };
    };

    class onu {
        name = "ONU";
        side = "civ";
        license = "";
        level[] = { "life_euLevel", "SCALAR", 1, "Interdit !" };
        primary[] = {
        };

        secondary[] = {
        };

        ammo[] = {
        };

        attachments[] = {
        };

        other[] = {
        };
    };

    // ALPHONSE

    class alphonse {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        primary[] = {
            // ------------M4----------------
            { "rhs_weap_m4_carryhandle_mstock", "", 120000 },
            // ------------M16A4----------------
            { "rhs_weap_m16a4_carryhandle_pmag", "", 140000 },
            // ------------- FAMAS -----------
            { "R3F_Famas_surb", "", 150000 },
            { "R3F_Famas_F1", "", 160000 },
            { "R3F_Famas_G2", "", 170000 },
            // ------------M4A1----------------
            { "rhs_weap_m4a1_carryhandle_mstock", "", 190000 },
            // ------------- MK18 -----------
            { "rhs_weap_mk18_bk", "", 200000 },
            { "rhs_weap_mk18_wd", "", 200000 },
            { "rhs_weap_mk18_d", "", 200000 },
            // --------- M4A1 Block II -----------
            { "rhs_weap_m4a1_blockII_bk", "", 200000 },
            { "rhs_weap_m4a1_blockII_M203_bk", "", 210000 },
            { "rhs_weap_m4a1_blockII_wd", "", 200000 },
            { "rhs_weap_m4a1_blockII_M203_wd", "", 210000 },
            { "rhs_weap_m4a1_blockII_d", "", 200000 },
            { "rhs_weap_m4a1_blockII_M203_d", "", 210000 },
            // -------------- M249 -----------
            { "rhs_weap_m249_pip_S_vfg", "", 220000 },
            // ---------------M14----------------
            { "rhs_weap_m14ebrri", "", 300000 },
            // ---------------M11----------------
            { "rhs_weap_sr25", "", 320000 },
            { "rhs_weap_sr25_wd", "", 320000 },
            // ------------M2010 XMR-------------
            { "rhs_weap_XM2010", "", 450000 },
            { "rhs_weap_XM2010_wd", "", 450000 }

            /*{ "rhs_weap_m16a4_pmag", "", 150000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
            { "rhs_weap_m16a4_carryhandle_M203", "", 170000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
            { "rhs_weap_m27iar", "", 200000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},

            { "rhs_weap_m4_m203", "", 180000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},

            { "rhs_weap_mk18_bk", "", 200000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
            { "rhs_weap_mk18_KAC_bk", "", 200000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
            { "rhs_weap_mk18_m320", "", 250000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
            { "rhs_weap_mk18_KAC_wd", "", 220000, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},*/
        };

        secondary[] = {
            // ------------MP7----------------
            { "rhsusf_weap_MP7A2", "", 20000 },
            // ------------P90----------------
            { "SMG_03C_TR_black", "", 100000 },
            // ---------- Mosing -----------
            { "rhs_weap_m38", "", 50000},
            // ----------- Kar 98-----------
            { "rhs_weap_kar98k", "", 50000},
            // -------------- M24 -----------
            { "rhs_weap_m24sws_blk", "", 200000 },
            { "rhs_weap_m24sws_ghillie", "", 200000 },
            // -------------- M40A5 -----------
            { "rhs_weap_m40a5", "", 250000 },
            { "rhs_weap_m40a5_wd", "", 250000 }
        };

        ammo[] = {
            // ------------P90----------------
            { "50Rnd_570x28_SMG_03", "", 1000},
            //  --------------MP7A2--------
            { "rhsusf_mag_40Rnd_46x30_AP", "", 500},
            { "rhsusf_mag_40Rnd_46x30_FMJ", "", 1000},
            { "rhsusf_mag_40Rnd_46x30_JHP", "", 2000},
            //  -------------5.56--------------
            { "30Rnd_556x45_Stanag", "", 1500 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 1500 },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 1500 },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 1500 },
            // -------------- M249 -----------
            { "rhsusf_100Rnd_556x45_soft_pouch", "", 5000},
            // -------------- Mosing -----------
            { "rhsgref_5Rnd_762x54_m38", "", 500},
            // ------------- Kar 98-------------
            { "rhsgref_5Rnd_792x57_kar98k", "", 500},
            // -------------- M14 ET M11 -----------
            { "rhsusf_20Rnd_762x51_m118_special_Mag", "", 4000},
            // -------------- M24 -----------
            { "rhsusf_5Rnd_762x51_m118_special_Mag", "", 1000},
            // -------------- M40 -----------
            { "rhsusf_10Rnd_762x51_m118_special_Mag", "", 1500},
            // ------------M2010 XMR-------------
            { "rhsusf_5Rnd_300winmag_xm2010", "", 1500},
            // -------------- GL -----------
            { "rhs_mag_m713_Red", "", 1000},
            { "rhs_mag_m715_Green", "", 1000},
            { "rhs_mag_m714_White", "", 1000}
        };

        attachments[] = {
                { "optic_ACO_grn", "", 1000},
                { "optic_Arco_blk_F", "", 1000},
                { "optic_ERCO_blk_F", "", 1000},
                { "rhsusf_acc_eotech_552", "", 1000},
                { "rhsusf_acc_M2A1", "", 1000},
                { "optic_Holosight_smg_blk_F", "", 1000},
                { "rhsusf_acc_ACOG_RMR", "", 1000},
                { "rhsusf_acc_M8541_low", "", 20000},
                { "rhsusf_acc_LEUPOLDMK4_2", "", 50000},
                { "rhsusf_acc_LEUPOLDMK4_2_d", "", 50000},
                { "rhsusf_acc_grip3", "", 1000},
                { "rhs_acc_grip_rk6", "", 1000},
                { "rhs_acc_grip_ffg2", "", 1000},
                { "rhsusf_acc_grip2", "", 1000},
                { "rhs_acc_perst3", "", 1000},
                { "rhsusf_acc_M952V", "", 1000},
                { "rhs_acc_2dpZenit_ris", "", 1000},
                { "acc_flashlight", "", 1000},
                { "acc_pointer_IR", "", 1000}
        };

        other[] = {
            { "Binocular", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
          //  { "toolKit", "", 150},
            { "Chemlight_red", "", 50},
            { "Chemlight_yellow", "", 50},
            { "Chemlight_green", "", 50},
            { "Chemlight_blue", "", 50},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100}
        };
    };
    // ALPHONSE

    class security {
        name = "Armes";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        primary[] = {

            { "hlc_rifle_G36KV", "", 100000 },
            { "hlc_rifle_G36VAG36", "", 200000 },
            { "RH_M6X", "", 200000 }
        };

        secondary[] = {
            // ------------MP7----------------
            { "hlc_pistol_Mk25TR", "", 20000 }
        };

        ammo[] = {
            { "hlc_30rnd_556x45_EPR_G36", "", 1000},
            { "RH_12Rnd_45cal_usp", "", 1000},
            { "SmokeShell", "", 1000},
            { "SmokeShellBlue", "", 1000},
            { "1Rnd_Smoke_Grenade_shell", "", 1000},
            { "UGL_FlareRed_F", "", 1000},
            { "1Rnd_Smoke_Grenade_shell", "", 1000}
        };

        attachments[] = {
            { "hlc_optic_HensoldtZO_lo_Docter", "", 1000},
            { "bipod_01_F_blk", "", 1000},
            { "ACE_muzzle_mzls_L", "", 1000},
            { "ACE_optic_Hamr_2D", "", 1000},
            { "ACE_muzzle_mzls_L", "", 1000},
            { "ACE_acc_pointer_green", "", 2000}
        };

        other[] = {
            { "Binocular", "", 100},
            { "ItemGPS", "", 100},
            { "ItemMap", "", 100},
            { "ItemCompass", "", 100},
            { "ItemWatch", "", 100},
          //  { "toolKit", "", 150},
            { "murshun_cigs_lighter", "", 10},
            { "murshun_cigs_cigpack", "", 10},
            { "ACE_elasticBandage", "", 10},
            { "ACE_CableTie", "", 10},
            { "ACE_EarPlugs", "", 50},
            { "tf_anprc148jem", "", 100}
        };
    };

    class gun_sud {
        name = "Amuerie du Sud";
        side = "civ";
        license = "gun_sud";
        level[] = { "", "", -1, "" };
        primary[] = {
        };
        secondary[] = {
          { "RH_mak", "", 10000, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}},
          { "hlc_pistol_P226WestGerman", "", 11000, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
          { "RH_g17", "", 12000, {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"}},
          { "RH_cz75", "", 13000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
          { "RH_ttracker", "", 14000, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}}
        };
        ammo[] = {
          { "RH_8Rnd_9x18_Mak", "", 3000},
          { "hlc_15Rnd_9x19_B_P226", "", 3000},
          { "RH_17Rnd_9x19_g17", "", 3000},
          { "RH_16Rnd_9x19_CZ", "", 3000},
          { "RH_6Rnd_45ACP_Mag", "", 3000}
        };
        attachments[] = {
        };
        other[] = {
          { "Binocular", "", 100},
          { "ItemGPS", "", 100},
          { "ItemMap", "", 100},
          { "ItemCompass", "", 100},
          { "ItemWatch", "", 100},
        //  { "toolKit", "", 150},
          { "ACE_CableTie", "", 150},
          { "Chemlight_red", "", 50},
          { "Chemlight_yellow", "", 50},
          { "Chemlight_green", "", 50},
          { "Chemlight_blue", "", 50},
          { "ACE_EarPlugs", "", 50},
          { "tf_anprc148jem", "", 100}
        };
    };

        class gouv {
        name = "Amuerie du gouvernement";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        primary[] = {
          { "arifle_Katiba_C_F", "", 10000, {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"}}
        };
        secondary[] = {
        };
        ammo[] = {
          { "30Rnd_65x39_caseless_green", "", 2000}
        };
        attachments[] = {
          { "ace_optic_hamr_pip", "", 500},
          { "optic_aco", "", 500}
        };
        other[] = {
          { "ItemMap", "", 100},
          { "ItemCompass", "", 100},
          { "ItemGPS", "", 100},
        //  { "toolKit", "", 150},
        //  { "ACE_CableTie", "", 150},
          { "Chemlight_red", "", 50},
          { "Chemlight_yellow", "", 50},
          { "Chemlight_green", "", 50},
          { "Chemlight_blue", "", 50},
          { "ACE_EarPlugs", "", 50},
          { "tf_anprc148jem", "", 100}
        };
    };
};
