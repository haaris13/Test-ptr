/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {

      class cop_banal {
        title = "STR_Shops_Bruce";
        license = "cbanal";
        side = "cop";
        legal = 1;
        paymentType = "cash";
        uniforms[] = {
            
            //      ______________CIVIL______________

            // ----------------TRYK------------------
            { "TRYK_U_B_BLTAN_T", "", 60, { "", "", -1 } },
            { "TRYK_U_B_C02_Tsirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLKTAN_Tshirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_OD_BLK_2", "", 60, { "", "", -1 } },
            { "TRYK_U_B_OD_BLK", "", 60, { "", "", -1 } },
            { "TRYK_U_B_ODTAN", "", 60, { "", "", -1 } },
            { "TRYK_U_B_ODTAN_Tshirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_TAN_1", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_TAN_2", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_BLK_R", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_gry_R", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_OD_R", "", 60, { "", "", -1 } },
            { "TRYK_U_B_wh_OD_Rollup_CombatUniform", "", 60, { "", "", -1 } },
            { "TRYK_U_B_wh_tan_Rollup_CombatUniform", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BK", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BL", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BWH", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_od", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_R", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_RED2", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WH", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WHB", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_ylb", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_od_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BK_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BL_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BWH_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_R_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WH_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_U_denim_hood_blk", "", 60, { "", "", -1 } },
            { "TRYK_U_denim_hood_mc", "", 60, { "", "", -1 } },
            { "TRYK_U_denim_hood_nc", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BG_BK", "", 60, { "", "", -1 } },
            { "TRYK_U_B_RED_T_BG_BR", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BG_WH", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BK", "", 60, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BG_BK", "", 60, { "", "", -1 } },
            { "U_OrestTRYK_U_B_Denim_T_BG_WHesBody", "", 60, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BK", "", 60, { "", "", -1 } },
            //      -------------------------------------
            { "U_C_Man_casual_1_F", "", 50, { "", "", -1 } },
            { "U_C_Man_casual_2_F", "", 50, { "", "", -1 } },
            { "U_C_Man_casual_3_F", "", 50, { "", "", -1 } },
            { "U_C_Man_casual_4_F", "", 50, { "", "", -1 } },
            { "U_C_Man_casual_5_F", "", 50, { "", "", -1 } },
            { "U_C_Man_casual_6_F", "", 50, { "", "", -1 } },
            //      -------------------------------------
            { "U_C_man_sport_1_F", "", 40, { "", "", -1 } },
            { "U_C_man_sport_2_F", "", 40, { "", "", -1 } }, 
            { "U_C_man_sport_3_F", "", 40, { "", "", -1 } }, 
            { "U_C_Uniform_Scientist_02_formal_F", 40, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_skull_F", 40, { "", "", -1 } }, 
            { "U_I_L_Uniform_01_tshirt_black_F", 40, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_olive_F", 40, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_sport_F", 40, { "", "", -1 } },

            //      ----------------Polos----------------
            { "U_C_Poloshirt_blue", "", 40, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "", 40, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "", 40, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "", 40, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "", 40, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "", 40, { "", "", -1 } },
            //      -------------------------------------
            { "U_C_Poor_1", "", 40, { "", "", -1 } },
            { "U_Competitor", "", 40, { "", "", -1 } },
            { "U_OrestesBody", "", 40, { "", "", -1 } },
            { "U_Marshal", "", 40, { "", "", -1 } },
            //      ---------------Bandits-------------
            { "U_I_C_Soldier_Bandit_1_F", "", 40, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_2_F", "", 40, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_3_F", "", 40, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_4_F", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_bandit", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_brown", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_poor_co", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_v3", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_poor_v2_co", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_poor_v3_co", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_cloth1_co", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_v2", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla3_bushman", "", 40, { "", "", -1 } },
            //      -------------------------------------
            { "U_C_HunterBody_grn", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla2_1", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla2_2", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla2_3", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla3_1", "", 40, { "", "", -1 } },
            { "U_Rangemaster", "", 50, { "", "", -1 } },
            { "U_C_Mechanic_01_F", "", 60, { "", "", -1 } },
            //      -----------------Driver--------------
            { "U_C_WorkerCoveralls", "", 40, { "", "", -1 } },
            { "U_C_WorkerCoveralls_grey", "", 40, { "", "", -1 } },
            //{ "U_C_WorkerCoveralls_black", "", 40, { "", "", -1 } },
            { "U_C_WorkerCoveralls_urbancamo", "", 40, { "", "", -1 } },
            { "U_C_WorkerCoveralls_bandit", "", 40, { "", "", -1 } },

            { "U_C_Scientist", "", 40, { "", "", -1 } },
            //      ------------------------------------
            { "U_I_HeliPilotCoveralls", "", 170, { "", "", -1 } },
            { "U_B_PilotCoveralls", "", 170, { "", "", -1 } },
            { "U_C_Uniform_Farmer_01_F", "", 60, { "", "", -1 } },
            { "U_C_E_LooterJacket_01_F", "", 90, { "", "", -1 } },
            { "U_C_Uniform_Scientist_02_formal_F", "", 90, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_skull_F", "", 60, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_black_F", "", 60, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_sport_F", "", 60, { "", "", -1 } },


        };

        headgear[] = {

            //      ______________CIVIL______________

            //--------------------TRYK-----------------
            { "TRYK_H_woolhat_WH", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_tan", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_CW", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_cu", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_br", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_tan_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_od_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_blk_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_OD_US", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_TAN", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_BLK", "", 49, { "", "", -1 } },
            { "TRYK_H_pakol2", "", 49, { "", "", -1 } },
            { "TRYK_H_pakol", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_od_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_blk_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_Glasses", "", 49, { "", "", -1 } },
            //      -------------Bandanna---------------
            { "H_Bandanna_blu", "", 5, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 5, { "", "", -1 } },
            { "H_Bandanna_khk", "", 5, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 5, { "", "", -1 } },
            { "H_Bandanna_gry", "", 5, { "", "", -1 } },
            { "H_Bandanna_sand", "", 5, { "", "", -1 } },
            { "H_Bandanna_sgg", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer_blk", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer_grn", "", 5, { "", "", -1 } },
            { "H_Bandanna_camo", "", 5, { "", "", -1 } },
            { "H_Bandanna_khk_hs", "", 5, { "", "", -1 } },
            //      -------------Casquettes--------------
            { "H_Cap_grn_BI", "", 19, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "", 19, { "", "", -1 } },
            { "H_Cap_blk_ION", "", 19, { "", "", -1 } },
            { "H_Cap_tan", "", 19, { "", "", -1 } },
            { "H_Cap_tan_specops_US", "", 19, { "", "", -1 } },
            { "H_Cap_usblack", "", 19, { "", "", -1 } },
            { "H_Cap_blk", "", 19, { "", "", -1 } },
            { "H_Cap_oli", "", 19, { "", "", -1 } },
            { "H_Cap_oli_hs", "", 19, { "", "", -1 } },
            { "H_Cap_press", "", 19, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "", 19, { "", "", -1 } },
            { "H_Cap_surfer", "", 19, { "", "", -1 } },
            { "H_Cap_grn", "", 19, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 19, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 29, { "", "", -1 } },
            { "H_Cap_blu", "", 19, { "", "", -1 } },
            { "H_Cap_red", "", 19, { "", "", -1 } },
            //      ------Casquettes et Headphones-------
            { "H_Cap_marshal", "", 49, { "", "", -1 } },
            { "H_Cap_headphones", "", 49, { "", "", -1 } },
            //      -------------Chapeaux--------------
            { "H_Hat_blue", "", 39, { "", "", -1 } },
            { "H_Hat_camo", "", 39, { "", "", -1 } },
            { "H_Hat_checker", "", 39, { "", "", -1 } },
            { "H_Hat_grey", "", 39, { "", "", -1 } },
            { "H_Hat_tan", "", 39, { "", "", -1 } },
            { "H_Hat_brown", "", 39, { "", "", -1 } },
            { "H_StrawHat", "", 39, { "", "", -1 } },
            { "H_StrawHat_dark", "", 39, { "", "", -1 } },
            { "H_TurbanO_blk", "", 39, { "", "", -1 } },
            //      -------------Bonniehat--------------
            { "H_Booniehat_mcamo", "", 29, { "", "", -1 } },
            { "H_Booniehat_oli", "", 29, { "", "", -1 } },
            { "H_Booniehat_tan", "", 29, { "", "", -1 } },
            //{ "H_Booniehat_dgtl", "", 29, { "", "", -1 } },
            //{ "H_Booniehat_tna_F", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 29, { "", "", -1 } },
            //{ "H_Booniehat_wld", "", 29, { "", "", -1 } },
            //{ "H_Booniehat_taiga", "", 29, { "", "", -1 } },
            { "H_Booniehat_mgrn", "", 29, { "", "", -1 } },
            { "H_Booniehat_eaf", "", 29, { "", "", -1 } },
            //      -------------Safari--------------
            { "H_Hat_Safari_olive_F", "", 29, { "", "", -1 } },
            { "H_Hat_Safari_sand_F", "", 29, { "", "", -1 } },
            //      -------------Watchcap--------------
            { "H_Watchcap_blk", "", 49, { "", "", -1 } },
            { "H_Watchcap_camo", "", 49, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 49, { "", "", -1 } },
            { "H_Watchcap_khk", "", 49, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 49, { "", "", -1 } },
            { "H_Helmet_Skate", "", 49, { "", "", -1 } },
            //      ----------Casques Chantier---------------
            { "H_Construction_basic_white_F", "", 29, { "", "", -1 } },
            { "H_Construction_earprot_white_F", "", 39, { "", "", -1 } },
            { "H_Construction_headset_white_F", "", 49, { "", "", -1 } },
            { "H_Construction_basic_yellow_F", "", 29, { "", "", -1 } },
            { "H_Construction_earprot_yellow_F", "", 39, { "", "", -1 } },
            { "H_Construction_headset_yellow_F", "", 49, { "", "", -1 } },
            { "H_Construction_basic_black_F", "", 29, { "", "", -1 } },
            { "H_Construction_earprot_black_F", "", 39, { "", "", -1 } },
            { "H_Construction_headset_black_F", "", 49, { "", "", -1 } },
            { "H_Construction_basic_red_F", "", 29, { "", "", -1 } },
            { "H_Construction_earprot_red_F", "", 39, { "", "", -1 } },
            { "H_Construction_headset_red_F", "", 49, { "", "", -1 } },
            { "H_Construction_basic_vrana_F", "", 29, { "", "", -1 } },
            { "H_Construction_earprot_vrana_F", "", 39, { "", "", -1 } },
            { "H_Construction_headset_vrana_F", "", 49, { "", "", -1 } },
            //      -------------Head Set---------------
            { "H_EarProtectors_white_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_white_F", "", 39, { "", "", -1 } },
            { "H_EarProtectors_yellow_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_yellow_F", "", 39, { "", "", -1 } },
            { "H_EarProtectors_black_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_black_F", "", 39, { "", "", -1 } },
            { "H_EarProtectors_orange_F", "", 29, { "", "", -1 } },

        };
        goggles[] = {

            //      ______________CIVIL______________

            //      --------------Shades--------------
            { "G_Shades_Black", "", 49, { "", "", -1 } },
            { "G_Shades_Blue", "", 49, { "", "", -1 } },
            { "G_Shades_Green", "", 49, { "", "", -1 } },
            { "G_Shades_Red", "", 49, { "", "", -1 } },
            { "G_Lady_Blue", "", 49, { "", "", -1 } },
            //      --------------Sport--------------
            { "G_Sport_Red", "", 69, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 69, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 69, { "", "", -1 } },
            { "G_Sport_Checkered", "", 69, { "", "", -1 } },
            { "G_Sport_Blackred", "", 69, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 69, { "", "", -1 } },
            //      -------------Spectacles--------------
            { "G_Spectacles", "", 39, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 49, { "", "", -1 } },
            { "G_Squares", "", 49, { "", "", -1 } },
            { "G_Squares_Tinted", "", 59, { "", "", -1 } },
            { "G_Lowprofile", "", 59, { "", "", -1 } },
            { "G_Tactical_Clear", "", 69, { "", "", -1 } },
            { "G_Tactical_Black", "", 69, { "", "", -1 } },
            { "G_Aviator", "", 500, { "", "", -1 } },
            { "G_Bandanna_blk", "", 20, { "", "", -1 } },
            { "G_Bandanna_khk", "", 20, { "", "", -1 } },
            { "G_Bandanna_oli", "", 20, { "", "", -1 } },

        };
        vests[] = {

            //      ______________CIVIL______________

            //      ------------Gilets refléchissants--------------
            { "V_Safety_blue_F", "", 25, { "", "", -1 } },
            { "V_Safety_yellow_F", "", 25, { "", "", -1 } },
            //      ------------Ceinture--------------
            { "V_Rangemaster_belt", "", 79, { "", "", -1 } },
            //      ------------Ceinture jambe--------------
            { "V_LegStrapBag_coyote_F", "", 79, { "", "", -1 } },
            { "V_LegStrapBag_black_F", "", 79, { "", "", -1 } },
            { "V_LegStrapBag_olive_F", "", 79, { "", "", -1 } },
            //      ------------Multipoches--------------
            { "V_Pocketed_coyote_F", "", 79, { "", "", -1 } },
            { "V_Pocketed_black_F", "", 79, { "", "", -1 } },
            { "V_Pocketed_olive_F", "", 79, { "", "", -1 } },
            //      -----------Bandouliere--------------
            { "V_BandollierB_cbr", "", 99, { "", "", -1 } },
            { "V_BandollierB_khk", "", 99, { "", "", -1 } },
            { "V_BandollierB_oli", "", 99, { "", "", -1 } },
            { "V_BandollierB_rgr", "", 99, { "", "", -1 } },
            { "V_BandollierB_blk", "", 99, { "", "", -1 } },

        };

        backpacks[] = {


            //      ______________CIVIL______________

            //      -------------Messager--------------
            { "B_Messenger_Coyote_F", "", 59, { "", "", -1 } },
            { "B_Messenger_Gray_F", "", 59, { "", "", -1 } },
            { "B_Messenger_Black_F", "", 59, { "", "", -1 } },
            { "B_Messenger_Olive_F", "", 59, { "", "", -1 } },
            { "B_Messenger_IDAP_F", "", 59, { "", "", -1 } },
            //      -------------AssaultPack--------------
            { "B_AssaultPack_cbr", "", 89, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 89, { "", "", -1 } },
            { "B_AssaultPack_Kerry", "", 89, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 89, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 89, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 89, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 89, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 89, { "", "", -1 } },
            { "B_AssaultPack_wdl_F", "", 89, { "", "", -1 } },
            { "B_AssaultPack_eaf_F", "", 89, { "", "", -1 } },
            //      -------------FieldPack--------------
            { "B_FieldPack_cbr", "", 99, { "", "", -1 } },
            { "B_FieldPack_khk", "", 99, { "", "", -1 } },
            { "B_FieldPack_blk", "", 99, { "", "", -1 } },
            { "B_FieldPack_oli", "", 99, { "", "", -1 } },
            //{ "B_FieldPack_taiga_F", "", 99, { "", "", -1 } },
            { "B_FieldPack_green_F", "", 99, { "", "", -1 } },
            //      -------------TacticalPack--------------
            { "B_TacticalPack_blk", "", 112, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 112, { "", "", -1 } },
            { "B_TacticalPack_rgr", "", 112, { "", "", -1 } },
            { "B_HuntingBackpack", "", 112, { "", "", -1 } },

            //      -------------Kitbag--------------
            { "B_Kitbag_cbr", "", 139, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 139, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 139, { "", "", -1 } },

            //      -------------Carryall---------------
            { "B_Carryall_oli", "", 199, { "", "", -1 } },
            { "B_Carryall_cbr", "", 199, { "", "", -1 } },
            { "B_Carryall_khk", "", 199, { "", "", -1 } },

         };
    };

    class bruce {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 1;
        paymentType = "cash";
        uniforms[] = {
            
            //      ______________CIVIL______________

            // ----------------TRYK------------------
            { "TRYK_T_BLK_PAD", "", 60, { "", "", -1 } },
            { "TRYK_T_OD_PAD", "", 60, { "", "", -1 } },
            { "TRYK_U_pad_hood_odBK", "", 60, { "", "", -1 } },
            { "TRYK_U_pad_hood_Cl", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW3", "", 60, { "", "", -1 } },
            { "TRYK_U_denim_jersey_blu", "", 60, { "", "", -1 } },
            { "TRYK_T_BLK_PAD", "", 60, { "", "", -1 } },
            { "TRYK_T_OD_PAD", "", 60, { "", "", -1 } },
            { "TRYK_T_TAN_PAD", "", 60, { "", "", -1 } },
            { "TRYK_U_pad_hood_odBK", "", 60, { "", "", -1 } },
            { "TRYK_U_pad_hood_Cl", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW3", "", 60, { "", "", -1 } },
            { "TRYK_U_denim_jersey_blu", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLTAN_T", "", 60, { "", "", -1 } },
            { "TRYK_U_B_C02_Tsirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLKTAN_Tshirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_OD_BLK_2", "", 60, { "", "", -1 } },
            { "TRYK_U_B_OD_BLK", "", 60, { "", "", -1 } },
            { "TRYK_U_B_ODTAN", "", 60, { "", "", -1 } },
            { "TRYK_U_B_ODTAN_Tshirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_TAN_1", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_TAN_2", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_BLK_R", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_gry_R", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_OD_R", "", 60, { "", "", -1 } },
            { "TRYK_U_B_wh_OD_Rollup_CombatUniform", "", 60, { "", "", -1 } },
            { "TRYK_U_B_wh_tan_Rollup_CombatUniform", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BK", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BL", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BWH", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_od", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_R", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_RED2", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WH", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WHB", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_ylb", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_od_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BK_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BL_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BWH_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_R_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WH_Sleeve", "", 60, { "", "", -1 } },
            { "TRYK_U_denim_hood_blk", "", 60, { "", "", -1 } },
            { "TRYK_U_denim_hood_mc", "", 60, { "", "", -1 } },
            { "TRYK_U_denim_hood_nc", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BG_BK", "", 60, { "", "", -1 } },
            { "TRYK_U_B_RED_T_BG_BR", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BG_WH", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BK", "", 60, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BG_BK", "", 60, { "", "", -1 } },
            { "U_OrestTRYK_U_B_Denim_T_BG_WHesBody", "", 60, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BK", "", 60, { "", "", -1 } },
            //      -------------------------------------
            { "U_C_Man_casual_1_F", "", 50, { "", "", -1 } },
            { "U_C_Man_casual_2_F", "", 50, { "", "", -1 } },
            { "U_C_Man_casual_3_F", "", 50, { "", "", -1 } },
            { "U_C_Man_casual_4_F", "", 50, { "", "", -1 } },
            { "U_C_Man_casual_5_F", "", 50, { "", "", -1 } },
            { "U_C_Man_casual_6_F", "", 50, { "", "", -1 } },
            //      -------------------------------------
            { "U_C_man_sport_1_F", "", 40, { "", "", -1 } },
            { "U_C_man_sport_2_F", "", 40, { "", "", -1 } }, 
            { "U_C_man_sport_3_F", "", 40, { "", "", -1 } }, 
            { "U_C_Uniform_Scientist_02_formal_F", 40, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_skull_F", 40, { "", "", -1 } }, 
            { "U_I_L_Uniform_01_tshirt_black_F", 40, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_olive_F", 40, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_sport_F", 40, { "", "", -1 } },

            //      ----------------Polos----------------
            { "U_C_Poloshirt_blue", "", 40, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "", 40, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "", 40, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "", 40, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "", 40, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "", 40, { "", "", -1 } },
            //      -------------------------------------
            { "U_C_Poor_1", "", 40, { "", "", -1 } },
            { "U_Competitor", "", 40, { "", "", -1 } },
            { "U_OrestesBody", "", 40, { "", "", -1 } },
            { "U_Marshal", "", 40, { "", "", -1 } },
            //      ---------------Bandits-------------
            { "U_I_C_Soldier_Bandit_1_F", "", 40, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_2_F", "", 40, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_3_F", "", 40, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_4_F", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_bandit", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_brown", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_poor_co", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_v3", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_poor_v2_co", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_poor_v3_co", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_cloth1_co", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla1_v2", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla3_bushman", "", 40, { "", "", -1 } },
            //      -------------------------------------
            { "U_C_HunterBody_grn", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla2_1", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla2_2", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla2_3", "", 40, { "", "", -1 } },
            { "U_BG_Guerilla3_1", "", 40, { "", "", -1 } },
            { "U_Rangemaster", "", 50, { "", "", -1 } },
            { "U_C_Mechanic_01_F", "", 60, { "", "", -1 } },
            //      -----------------Driver--------------
            { "U_C_WorkerCoveralls", "", 40, { "", "", -1 } },
            { "U_C_WorkerCoveralls_grey", "", 40, { "", "", -1 } },
            //{ "U_C_WorkerCoveralls_black", "", 40, { "", "", -1 } },
            { "U_C_WorkerCoveralls_urbancamo", "", 40, { "", "", -1 } },
            { "U_C_WorkerCoveralls_bandit", "", 40, { "", "", -1 } },

            { "U_C_Scientist", "", 40, { "", "", -1 } },
            //      ------------------------------------
            { "U_I_HeliPilotCoveralls", "", 170, { "", "", -1 } },
            { "U_B_PilotCoveralls", "", 170, { "", "", -1 } },
            { "U_C_Uniform_Farmer_01_F", "", 60, { "", "", -1 } },
            { "U_C_E_LooterJacket_01_F", "", 90, { "", "", -1 } },
            { "U_C_Uniform_Scientist_02_formal_F", "", 90, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_skull_F", "", 60, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_black_F", "", 60, { "", "", -1 } },
            { "U_I_L_Uniform_01_tshirt_sport_F", "", 60, { "", "", -1 } },


        };

        headgear[] = {

            //      ______________CIVIL______________

            //--------------------TRYK-----------------
            { "EF_BNE_BK", "", 49, { "", "", -1 } },
            { "EF_BNE_BL", "", 49, { "", "", -1 } },
            { "EF_BNE_BR", "", 49, { "", "", -1 } },
            { "EF_BNE_R", "", 49, { "", "", -1 } },
            { "EF_BNE_V", "", 49, { "", "", -1 } },
            { "EF_BNE_W", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_WH", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_tan", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_CW", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_cu", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_br", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_tan_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_od_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_blk_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_OD_US", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_TAN", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_BLK", "", 49, { "", "", -1 } },
            { "TRYK_H_pakol2", "", 49, { "", "", -1 } },
            { "TRYK_H_pakol", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_od_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_blk_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_Glasses", "", 49, { "", "", -1 } },
            //      -------------Bandanna---------------
            { "H_Bandanna_blu", "", 5, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 5, { "", "", -1 } },
            { "H_Bandanna_khk", "", 5, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 5, { "", "", -1 } },
            { "H_Bandanna_gry", "", 5, { "", "", -1 } },
            { "H_Bandanna_sand", "", 5, { "", "", -1 } },
            { "H_Bandanna_sgg", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer_blk", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer_grn", "", 5, { "", "", -1 } },
            { "H_Bandanna_camo", "", 5, { "", "", -1 } },
            { "H_Bandanna_khk_hs", "", 5, { "", "", -1 } },
            //      -------------Casquettes--------------
            { "H_Cap_grn_BI", "", 19, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "", 19, { "", "", -1 } },
            { "H_Cap_blk_ION", "", 19, { "", "", -1 } },
            { "H_Cap_tan", "", 19, { "", "", -1 } },
            { "H_Cap_tan_specops_US", "", 19, { "", "", -1 } },
            { "H_Cap_usblack", "", 19, { "", "", -1 } },
            { "H_Cap_blk", "", 19, { "", "", -1 } },
            { "H_Cap_oli", "", 19, { "", "", -1 } },
            { "H_Cap_oli_hs", "", 19, { "", "", -1 } },
            { "H_Cap_press", "", 19, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "", 19, { "", "", -1 } },
            { "H_Cap_surfer", "", 19, { "", "", -1 } },
            { "H_Cap_grn", "", 19, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 19, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 29, { "", "", -1 } },
            { "H_Cap_blu", "", 19, { "", "", -1 } },
            { "H_Cap_red", "", 19, { "", "", -1 } },
            //      ------Casquettes et Headphones-------
            { "H_Cap_marshal", "", 49, { "", "", -1 } },
            { "H_Cap_headphones", "", 49, { "", "", -1 } },
            //      -------------Chapeaux--------------
            { "H_Hat_blue", "", 39, { "", "", -1 } },
            { "H_Hat_camo", "", 39, { "", "", -1 } },
            { "H_Hat_checker", "", 39, { "", "", -1 } },
            { "H_Hat_grey", "", 39, { "", "", -1 } },
            { "H_Hat_tan", "", 39, { "", "", -1 } },
            { "H_Hat_brown", "", 39, { "", "", -1 } },
            { "H_StrawHat", "", 39, { "", "", -1 } },
            { "H_StrawHat_dark", "", 39, { "", "", -1 } },
            { "H_TurbanO_blk", "", 39, { "", "", -1 } },
            //      -------------Bonniehat--------------
            { "H_Booniehat_mcamo", "", 29, { "", "", -1 } },
            { "H_Booniehat_oli", "", 29, { "", "", -1 } },
            { "H_Booniehat_tan", "", 29, { "", "", -1 } },
            //{ "H_Booniehat_dgtl", "", 29, { "", "", -1 } },
            //{ "H_Booniehat_tna_F", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 29, { "", "", -1 } },
            //{ "H_Booniehat_wld", "", 29, { "", "", -1 } },
            //{ "H_Booniehat_taiga", "", 29, { "", "", -1 } },
            { "H_Booniehat_mgrn", "", 29, { "", "", -1 } },
            { "H_Booniehat_eaf", "", 29, { "", "", -1 } },
            //      -------------Safari--------------
            { "H_Hat_Safari_olive_F", "", 29, { "", "", -1 } },
            { "H_Hat_Safari_sand_F", "", 29, { "", "", -1 } },
            //      -------------Watchcap--------------
            { "H_Watchcap_blk", "", 49, { "", "", -1 } },
            { "H_Watchcap_camo", "", 49, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 49, { "", "", -1 } },
            { "H_Watchcap_khk", "", 49, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 49, { "", "", -1 } },
            { "H_Helmet_Skate", "", 49, { "", "", -1 } },
            //      ----------Casques Chantier---------------
            { "H_Construction_basic_white_F", "", 29, { "", "", -1 } },
            { "H_Construction_earprot_white_F", "", 39, { "", "", -1 } },
            { "H_Construction_headset_white_F", "", 49, { "", "", -1 } },
            { "H_Construction_basic_yellow_F", "", 29, { "", "", -1 } },
            { "H_Construction_earprot_yellow_F", "", 39, { "", "", -1 } },
            { "H_Construction_headset_yellow_F", "", 49, { "", "", -1 } },
            { "H_Construction_basic_black_F", "", 29, { "", "", -1 } },
            { "H_Construction_earprot_black_F", "", 39, { "", "", -1 } },
            { "H_Construction_headset_black_F", "", 49, { "", "", -1 } },
            { "H_Construction_basic_red_F", "", 29, { "", "", -1 } },
            { "H_Construction_earprot_red_F", "", 39, { "", "", -1 } },
            { "H_Construction_headset_red_F", "", 49, { "", "", -1 } },
            { "H_Construction_basic_vrana_F", "", 29, { "", "", -1 } },
            { "H_Construction_earprot_vrana_F", "", 39, { "", "", -1 } },
            { "H_Construction_headset_vrana_F", "", 49, { "", "", -1 } },
            //      -------------Head Set---------------
            { "H_EarProtectors_white_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_white_F", "", 39, { "", "", -1 } },
            { "H_EarProtectors_yellow_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_yellow_F", "", 39, { "", "", -1 } },
            { "H_EarProtectors_black_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_black_F", "", 39, { "", "", -1 } },
            { "H_EarProtectors_orange_F", "", 29, { "", "", -1 } },

        };
        goggles[] = {

            //      ______________CIVIL______________

            //      --------------Shades--------------
            { "G_Shades_Black", "", 49, { "", "", -1 } },
            { "G_Shades_Blue", "", 49, { "", "", -1 } },
            { "G_Shades_Green", "", 49, { "", "", -1 } },
            { "G_Shades_Red", "", 49, { "", "", -1 } },
            { "G_Lady_Blue", "", 49, { "", "", -1 } },
            //      --------------Sport--------------
            { "G_Sport_Red", "", 69, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 69, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 69, { "", "", -1 } },
            { "G_Sport_Checkered", "", 69, { "", "", -1 } },
            { "G_Sport_Blackred", "", 69, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 69, { "", "", -1 } },
            //      -------------Spectacles--------------
            { "G_Spectacles", "", 39, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 49, { "", "", -1 } },
            { "G_Squares", "", 49, { "", "", -1 } },
            { "G_Squares_Tinted", "", 59, { "", "", -1 } },
            { "G_Lowprofile", "", 59, { "", "", -1 } },
            { "G_Tactical_Clear", "", 69, { "", "", -1 } },
            { "G_Tactical_Black", "", 69, { "", "", -1 } },
            { "G_Aviator", "", 500, { "", "", -1 } },
            { "G_Bandanna_blk", "", 20, { "", "", -1 } },
            { "G_Bandanna_khk", "", 20, { "", "", -1 } },
            { "G_Bandanna_oli", "", 20, { "", "", -1 } },

        };
        vests[] = {

            //      ______________CIVIL______________

            //      ------------Gilets refléchissants--------------
            { "V_Safety_blue_F", "", 25, { "", "", -1 } },
            { "V_Safety_yellow_F", "", 25, { "", "", -1 } },
            //      ------------Ceinture--------------
            { "V_Rangemaster_belt", "", 79, { "", "", -1 } },
            //      ------------Ceinture jambe--------------
            { "V_LegStrapBag_coyote_F", "", 79, { "", "", -1 } },
            { "V_LegStrapBag_black_F", "", 79, { "", "", -1 } },
            { "V_LegStrapBag_olive_F", "", 79, { "", "", -1 } },
            //      ------------Multipoches--------------
            { "V_Pocketed_coyote_F", "", 79, { "", "", -1 } },
            { "V_Pocketed_black_F", "", 79, { "", "", -1 } },
            { "V_Pocketed_olive_F", "", 79, { "", "", -1 } },
            //      -----------Bandouliere--------------
            { "V_BandollierB_cbr", "", 99, { "", "", -1 } },
            { "V_BandollierB_khk", "", 99, { "", "", -1 } },
            { "V_BandollierB_oli", "", 99, { "", "", -1 } },
            { "V_BandollierB_rgr", "", 99, { "", "", -1 } },
            { "V_BandollierB_blk", "", 99, { "", "", -1 } },

        };

        backpacks[] = {


            //      ______________CIVIL______________

            //      -------------Messager--------------
            { "B_Messenger_Coyote_F", "", 59, { "", "", -1 } },
            { "B_Messenger_Gray_F", "", 59, { "", "", -1 } },
            { "B_Messenger_Black_F", "", 59, { "", "", -1 } },
            { "B_Messenger_Olive_F", "", 59, { "", "", -1 } },
            { "B_Messenger_IDAP_F", "", 59, { "", "", -1 } },
            //      -------------AssaultPack--------------
            { "B_AssaultPack_cbr", "", 89, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 89, { "", "", -1 } },
            { "B_AssaultPack_Kerry", "", 89, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 89, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 89, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 89, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 89, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 89, { "", "", -1 } },
            { "B_AssaultPack_wdl_F", "", 89, { "", "", -1 } },
            { "B_AssaultPack_eaf_F", "", 89, { "", "", -1 } },
            //      -------------FieldPack--------------
            { "B_FieldPack_cbr", "", 99, { "", "", -1 } },
            { "B_FieldPack_khk", "", 99, { "", "", -1 } },
            { "B_FieldPack_blk", "", 99, { "", "", -1 } },
            { "B_FieldPack_oli", "", 99, { "", "", -1 } },
            //{ "B_FieldPack_taiga_F", "", 99, { "", "", -1 } },
            { "B_FieldPack_green_F", "", 99, { "", "", -1 } },
            //      -------------TacticalPack--------------
            { "B_TacticalPack_blk", "", 112, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 112, { "", "", -1 } },
            { "B_TacticalPack_rgr", "", 112, { "", "", -1 } },
            { "B_HuntingBackpack", "", 112, { "", "", -1 } },

            //      -------------Kitbag--------------
            { "B_Kitbag_cbr", "", 139, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 139, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 139, { "", "", -1 } },

            //      -------------Carryall---------------
            { "B_Carryall_oli", "", 199, { "", "", -1 } },
            { "B_Carryall_cbr", "", 199, { "", "", -1 } },
            { "B_Carryall_khk", "", 199, { "", "", -1 } },
         };
    };

    class mafia_clothing {
        title = "STR_Shops_Bruce";
        license = "mafia";
        side = "civ";
        paymentType = "cash";
        legal = 0;

        uniforms[] = {
            { "U_I_G_resistanceLeader_F", "", 500, { "", "", -1 } },
            { "U_NikosAgedBody", "", 500, { "", "", -1 } },
            { "U_NikosBody", "", 500, { "", "", -1 } },
            { "U_O_R_Gorka_01_black_F", "", 500, { "", "", -1 } },
            { "U_O_R_Gorka_01_brown_F", "", 500, { "", "", -1 } },
            { "U_NikosBody", "", 500, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW3", "", 500, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW9", "", 500, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW7", "", 500, { "", "", -1 } },
            { "TRYK_U_B_BLK_Tshirt", "", 500, { "", "", -1 } },
            { "TRYK_U_B_BLK", "", 500, { "", "", -1 } },
            { "TRYK_U_Bts_PCUs", "", 500, { "", "", -1 } },
            { "TRYK_U_Bts_GRYGRY_PCUs", "", 500, { "", "", -1 } },
            { "TRYK_U_B_PCUHs", "", 500, { "", "", -1 } },
            { "TRYK_U_B_PCUGHs", "", 500, { "", "", -1 } },
            { "TRYK_U_B_PCUODHs", "", 500, { "", "", -1 } },
            { "TRYK_U_B_PCUHs", "", 500, { "", "", -1 } },
            { "TRYK_U_B_PCUHs", "", 500, { "", "", -1 } },

        };

        headgear[] = {

            //      ______________CIVIL______________

            //      -------------Bandanna---------------
            
            //      -------------Casquettes--------------
            { "TRYK_H_woolhat_WH", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_tan", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_CW", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_cu", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_br", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_tan_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_od_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_blk_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_OD_US", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_TAN", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_BLK", "", 49, { "", "", -1 } },
            { "TRYK_H_pakol2", "", 49, { "", "", -1 } },
            { "TRYK_H_pakol", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_od_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_blk_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_Glasses", "", 49, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 19, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "", 19, { "", "", -1 } },
            { "H_Cap_blk_ION", "", 19, { "", "", -1 } },
            { "H_Cap_tan", "", 19, { "", "", -1 } },
            { "H_Cap_tan_specops_US", "", 19, { "", "", -1 } },
            { "H_Cap_usblack", "", 19, { "", "", -1 } },
            { "H_Cap_blk", "", 19, { "", "", -1 } },
            { "H_Cap_oli", "", 19, { "", "", -1 } },
            { "H_Cap_oli_hs", "", 19, { "", "", -1 } },
            { "H_Cap_press", "", 19, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "", 19, { "", "", -1 } },
            { "H_Cap_surfer", "", 19, { "", "", -1 } },
            { "H_Cap_grn", "", 19, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 19, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 29, { "", "", -1 } },
            { "H_Cap_blu", "", 19, { "", "", -1 } },
            { "H_Cap_red", "", 19, { "", "", -1 } },
            //      ------Casquettes et Headphones-------
            { "H_Cap_marshal", "", 49, { "", "", -1 } },
            { "H_Cap_headphones", "", 49, { "", "", -1 } },
            //      -------------Chapeaux--------------
            { "H_Hat_blue", "", 39, { "", "", -1 } },
            { "H_Hat_camo", "", 39, { "", "", -1 } },
            { "H_Hat_checker", "", 39, { "", "", -1 } },
            { "H_Hat_grey", "", 39, { "", "", -1 } },
            { "H_Hat_tan", "", 39, { "", "", -1 } },
            { "H_Hat_brown", "", 39, { "", "", -1 } },
            { "H_TurbanO_blk", "", 39, { "", "", -1 } },
            { "H_StrawHat", "", 39, { "", "", -1 } },
            { "H_StrawHat_dark", "", 39, { "", "", -1 } },
            //      -------------Bonniehat--------------
            { "H_Booniehat_mcamo", "", 29, { "", "", -1 } },
            { "H_Booniehat_oli", "", 29, { "", "", -1 } },
            { "H_Booniehat_tan", "", 29, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 29, { "", "", -1 } },
            { "H_Booniehat_tna_F", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 29, { "", "", -1 } },
            { "H_Booniehat_wld", "", 29, { "", "", -1 } },
            { "H_Booniehat_taiga", "", 29, { "", "", -1 } },
            { "H_Booniehat_mgrn", "", 29, { "", "", -1 } },
            { "H_Booniehat_eaf", "", 29, { "", "", -1 } },
            //      -------------Safari--------------
            { "H_Hat_Safari_olive_F", "", 29, { "", "", -1 } },
            { "H_Hat_Safari_sand_F", "", 29, { "", "", -1 } },
            //      -------------Watchcap--------------
            { "H_Watchcap_blk", "", 49, { "", "", -1 } },
            { "H_Watchcap_camo", "", 49, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 49, { "", "", -1 } },
            { "H_Watchcap_khk", "", 49, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 49, { "", "", -1 } },

        };

        goggles[] = {
            { "H_Bandanna_blu", "", 5, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 5, { "", "", -1 } },
            { "H_Bandanna_khk", "", 5, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 5, { "", "", -1 } },
            { "H_Bandanna_gry", "", 5, { "", "", -1 } },
            { "H_Bandanna_sand", "", 5, { "", "", -1 } },
            { "H_Bandanna_sgg", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer_blk", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer_grn", "", 5, { "", "", -1 } },
            { "H_Bandanna_camo", "", 5, { "", "", -1 } },
            { "H_Bandanna_khk_hs", "", 5, { "", "", -1 } },
            { "H_BandMask_blk", "", 5, { "", "", -1 } },
            { "B_NSHD_Ahegao", "", 5, { "", "", -1 } },
            { "B_NSHD_Anarchy", "", 5, { "", "", -1 } },
            { "B_SHD_Skull", "", 5, { "", "", -1 } },
            { "B_SHD_WD2", "", 5, { "", "", -1 } },
            { "B_NSHD_Shark", "", 5, { "", "", -1 } },
            { "B_NSHD_Skull", "", 5, { "", "", -1 } },
            { "B_SHD_Anarchy", "", 5, { "", "", -1 } },
            { "B_NSHD_WD2", "", 5, { "", "", -1 } },
            { "B_NSHD_WD1", "", 5, { "", "", -1 } },
            //      ______________CIVIL______________

            //      --------------Shades--------------
            { "G_Shades_Black", "", 49, { "", "", -1 } },
            { "G_Shades_Blue", "", 49, { "", "", -1 } },
            { "G_Shades_Green", "", 49, { "", "", -1 } },
            { "G_Shades_Red", "", 49, { "", "", -1 } },
            { "G_Lady_Blue", "", 49, { "", "", -1 } },
            //      --------------Sport--------------
            { "G_Sport_Red", "", 69, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 69, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 69, { "", "", -1 } },
            { "G_Sport_Checkered", "", 69, { "", "", -1 } },
            { "G_Sport_Blackred", "", 69, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 69, { "", "", -1 } },
            //      -------------Spectacles--------------
            { "G_Spectacles", "", 39, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 49, { "", "", -1 } },
            //      -------------Squares--------------
            { "G_Squares", "", 49, { "", "", -1 } },
            { "G_Squares_Tinted", "", 59, { "", "", -1 } },
            //      ----------------------------------
            { "G_Lowprofile", "", 59, { "", "", -1 } },
            { "G_Aviator", "", 500, { "", "", -1 } },

            //      ______________MAFIA______________

            //      -------------Tactical----------------
            { "G_Tactical_Clear", "", 69, { "", "", -1 } },
            { "G_Tactical_Black", "", 69, { "", "", -1 } },
            //      -------------Combat----------------
            { "G_Combat", "", 79, { "", "", -1 } },
            { "G_Combat_Goggles_tna_F", "", 79, { "", "", -1 } },
            //      -------------Bandanna----------------
            { "G_Bandanna_blk", "", 20, { "", "", -1 } },
            { "G_Bandanna_khk", "", 20, { "", "", -1 } },
            { "G_Bandanna_oli", "", 20, { "", "", -1 } },
            { "G_Bandanna_tan", "", 20, { "", "", -1 } },
            { "G_Bandanna_shades", "", 69, { "", "", -1 } },
            { "G_Bandanna_sport", "", 89, { "", "", -1 } },
            { "G_Bandanna_beast", "", 45, { "", "", -1 }},
            { "G_Bandanna_aviator", "", 520, { "", "", -1 } },
            //      --------------Balaclava------------------
            { "G_Balaclava_oli", "", 25, { "", "", -1 } },
            { "G_Balaclava_blk", "", 25, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 84, { "", "", -1 } },
            { "G_Balaclava_combat", "", 94, { "", "", -1 } },
            //    ------------Respirator-----------------
            { "G_AirPurifyingRespirator_02_olive_F", "", 399, { "", "", -1 } },
            { "G_AirPurifyingRespirator_02_sand_F", "", 399, { "", "", -1 } },
            { "G_AirPurifyingRespirator_01_F", "", 399, { "", "", -1 } },
            { "G_AirPurifyingRespirator_02_black_F", "", 499, { "", "", -1 } },

            //      ______________REBEL______________

            //      -----------Stealth Balaclava--------------
            { "G_Balaclava_TI_blk_F", "", 50, { "", "", -1 }},
            { "G_Balaclava_TI_G_blk_F", "", 120, { "", "", -1 }},
            { "G_Balaclava_TI_tna_F", "", 50, { "", "", -1 }},
            { "G_Balaclava_TI_G_tna_F", "", 120, { "", "", -1 }},

        };

        vests[] = {

            //      ------------Ceinture--------------
            { "V_Rangemaster_belt", "", 79, { "", "", -1 } },
            //      ------------Ceinture jambe--------------
            { "V_LegStrapBag_coyote_F", "", 79, { "", "", -1 } },
            { "V_LegStrapBag_black_F", "", 79, { "", "", -1 } },
            { "V_LegStrapBag_olive_F", "", 79, { "", "", -1 } },
            //      ------------Multipoches--------------
            { "V_Pocketed_coyote_F", "", 79, { "", "", -1 } },
            { "V_Pocketed_black_F", "", 79, { "", "", -1 } },
            { "V_Pocketed_olive_F", "", 79, { "", "", -1 } },
            //      -----------Bandouliere--------------
            { "V_BandollierB_cbr", "", 99, { "", "", -1 } },
            { "V_BandollierB_khk", "", 99, { "", "", -1 } },
            { "V_BandollierB_oli", "", 99, { "", "", -1 } },
            { "V_BandollierB_rgr", "", 99, { "", "", -1 } },
            { "V_BandollierB_blk", "", 99, { "", "", -1 } },
            //      ---------------Petit---------------
            { "V_TacVest_brn", "", 1599, { "", "", -1 } },
            { "V_TacVest_khk", "", 1599, { "", "", -1 } },

            { "V_TacVest_blk", "", 1599, { "", "", -1 } },

        };
        backpacks[] = {
            //      ______________CIVIL______________

            //      -------------Messager--------------
            { "B_Messenger_Coyote_F", "", 59, { "", "", -1 } },
            { "B_Messenger_Gray_F", "", 59, { "", "", -1 } },
            { "B_Messenger_Black_F", "", 59, { "", "", -1 } },
            { "B_Messenger_Olive_F", "", 59, { "", "", -1 } },
            { "B_Messenger_IDAP_F", "", 59, { "", "", -1 } },
            //      -------------AssaultPack--------------
            { "B_AssaultPack_cbr", "", 89, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 89, { "", "", -1 } },
            { "B_AssaultPack_Kerry", "", 89, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 89, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 89, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 89, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 89, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 89, { "", "", -1 } },
            { "B_AssaultPack_wdl_F", "", 89, { "", "", -1 } },
            { "B_AssaultPack_eaf_F", "", 89, { "", "", -1 } },
            //      -------------FieldPack--------------
            { "B_FieldPack_cbr", "", 99, { "", "", -1 } },
            { "B_FieldPack_khk", "", 99, { "", "", -1 } },
            { "B_FieldPack_blk", "", 99, { "", "", -1 } },
            { "B_FieldPack_oli", "", 99, { "", "", -1 } },
            { "B_FieldPack_taiga_F", "", 99, { "", "", -1 } },
            { "B_FieldPack_green_F", "", 99, { "", "", -1 } },
            //      -------------TacticalPack--------------
            { "B_TacticalPack_blk", "", 112, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 112, { "", "", -1 } },
            { "B_TacticalPack_rgr", "", 112, { "", "", -1 } },
            { "B_HuntingBackpack", "", 112, { "", "", -1 } },
            //      -------------Kitbag--------------
            { "B_Kitbag_cbr", "", 139, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 139, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 139, { "", "", -1 } },
            //      -------------Carryall---------------
            { "B_Carryall_oli", "", 199, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 199, { "", "", -1 } },
            { "B_Carryall_cbr", "", 199, { "", "", -1 } },
            { "B_Carryall_khk", "", 199, { "", "", -1 } },

         };
    };

    class gun_clothing {
      title = "STR_Shops_Bruce";
      license = "";
      side = "civ";
      legal = 1;
      paymentType = "bank";
      uniforms[] = {
            { "U_I_G_Story_Protagonist_F", "", 250, { "", "", -1 } },
      };

      headgear[] = {
            { "H_EarProtectors_red_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_orange_F", "", 39, { "", "", -1 } },
            { "H_HeadSet_white_F", "", 39, { "", "", -1 } },
            { "H_HeadSet_yellow_F", "", 39, { "", "", -1 } },
            { "H_HeadSet_black_F", "", 39, { "", "", -1 } },
            { "H_HeadSet_red_F", "", 39, { "", "", -1 } },
            { "H_Cap_marshal", "", 49, { "", "", -1 } },
            /*
            { "H_MilCap_blue", "", 20, { "", "", -1 } },
            { "H_MilCap_gry", "", 20, { "", "", -1 } },
            { "H_MilCap_grn", "", 20, { "", "", -1 } },
            */
            //      ------Casquettes et Headphones-------
            { "H_Cap_headphones", "", 49, { "", "", -1 } }
      };

      goggles[] = {
            { "G_Lowprofile", "", 59, { "", "", -1 } },
            //{ "G_EyeProtectors_F", "", 65, { "", "", -1 } },
            //{ "G_EyeProtectors_Earpiece_F", "", 80, { "", "", -1 } },
      };

      vests[] = {};

      backpacks[] = {};
     };

    class cop {
        title = "STR_Shops_Bruce";
        license = "";
        side = "cop";
        legal = 0;
        paymentType = "bank";

        uniforms[] = {
            { "U_B_Wetsuit", "", 300, { "life_coplevel", "SCALAR", 1 } },
            { "U_POD_Gen_Recrue_W", "", 300, { "life_coplevel", "SCALAR", 1 } },
            { "Gendarmerie_Officer1_uniform", "", 300, { "life_coplevel", "SCALAR", 2 } },
            { "CBRN_Expansion_Gendarmerie", "", 300, { "life_coplevel", "SCALAR", 2 } },
            { "Gendarmerie_long_uniform", "", 300, { "life_coplevel", "SCALAR", 4 } },
            { "Gendarmerie_uniform_Rolled", "", 300, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_GEN_Commander_F", "", 300, { "life_coplevel", "SCALAR", 10 } },            
        };

        vests[] = {
            { "V_TacVest_gen_F", "", 300, { "life_coplevel", "SCALAR", 1 } },
            { "CBRN_Pistol_belt", "", 300, { "life_coplevel", "SCALAR", 1 } },

            { "V_POD_Gen_03_Nego_A", "", 300, { "life_coplevel", "SCALAR", 5 } },
            { "V_POD_Gen_03_Nego_B", "", 300, { "life_coplevel", "SCALAR", 5 } },
            { "V_POD_Gen_03_Nego_C", "", 300, { "life_coplevel", "SCALAR", 5 } },

            { "V_POD_Gen_01_NoName_A", "", 300, { "life_coplevel", "SCALAR", 1 } },
            { "V_POD_Gen_02_NoName_A", "", 300, { "life_coplevel", "SCALAR", 1 } },

            { "V_POD_Gen_01_GAV_A", "", 300, { "life_coplevel", "EQUAL", 1 } },
            { "V_POD_Gen_02_GAV_A", "", 300, { "life_coplevel", "EQUAL", 1 } },

            { "V_POD_Gen_01_Brigadier_A", "", 300, { "life_coplevel", "EQUAL", 2 } },
            { "V_POD_Gen_02_Brigadier_A", "", 300, { "life_coplevel", "EQUAL", 2 } },

            { "V_POD_Gen_01_BrigadierChef_A", "", 300, { "life_coplevel", "EQUAL", 3 } },
            { "V_POD_Gen_02_BrigadierChef_A", "", 300, { "life_coplevel", "EQUAL", 3 } },

            { "V_POD_Gen_01_MarechalDesLogis_A", "", 300, { "life_coplevel", "EQUAL", 4 } },
            { "V_POD_Gen_02_MarechalDesLogis_A", "", 300, { "life_coplevel", "EQUAL", 4 } },

            { "V_POD_Gen_01_Gendarme_A", "", 300, { "life_coplevel", "EQUAL", 5 } },
            { "V_POD_Gen_02_Gendarme_A", "", 300, { "life_coplevel", "EQUAL", 5 } },

            { "V_POD_Gen_01_MarechalDesLogisChef_A", "", 300, { "life_coplevel", "EQUAL", 6 } },
            { "V_POD_Gen_02_MarechalDesLogisChef_A", "", 300, { "life_coplevel", "EQUAL", 6 } },

            { "V_POD_Gen_01_Adjudant_A", "", 300, { "life_coplevel", "EQUAL", 7 } },
            { "V_POD_Gen_02_Adjudant_A", "", 300, { "life_coplevel", "EQUAL", 7 } },

            { "V_POD_Gen_01_AdjudantChef_A", "", 300, { "life_coplevel", "EQUAL", 8 } },
            { "V_POD_Gen_02_AdjudantChef_A", "", 300, { "life_coplevel", "EQUAL", 8 } },

            { "V_POD_Gen_01_Major_A", "", 300, { "life_coplevel", "EQUAL", 9 } },
            { "V_POD_Gen_02_Major_A", "", 300, { "life_coplevel", "EQUAL", 9 } },

            { "V_POD_Gen_01_Lieutenant_A", "", 300, { "life_coplevel", "EQUAL", 10 } },
            { "V_POD_Gen_02_Lieutenant_A", "", 300, { "life_coplevel", "EQUAL", 10 } },

            { "V_POD_Gen_01_Captaine_A", "", 300, { "life_coplevel", "EQUAL", 11 } },
            { "V_POD_Gen_02_Captaine_A", "", 300, { "life_coplevel", "EQUAL", 11 } },

            { "V_POD_Gen_01_Commandant_A", "", 300, { "life_coplevel", "EQUAL", 12 } },
            { "V_POD_Gen_02_Commandant_A", "", 300, { "life_coplevel", "EQUAL", 12 } },

            { "V_POD_Gen_01_Colonel_A", "", 300, { "life_coplevel", "EQUAL", 13 } },
            { "V_POD_Gen_02_Colonel_A", "", 300, { "life_coplevel", "EQUAL", 13 } },

            { "V_RebreatherB", "", 300, { "life_coplevel", "SCALAR", 1 } },
        };

        headgear[] = {
            { "Patrol_Cap", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "H_Watchcap_blk", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "H_PASGT_basic_black_F", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "STF_Helmet_SpecOps", "", 100, { "life_coplevel", "SCALAR", 5 } },
            { "STF_Helmet_Peltor_SpecOps", "", 100, { "life_coplevel", "SCALAR", 5 } },
            { "Gendarmerie_Officer_Beret", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "Gendarmerie_CMND_Beret", "", 100, { "life_coplevel", "SCALAR", 10 } },
            { "H_Beret_gen_F", "", 100, { "life_coplevel", "SCALAR", 10 } },
            { "SH_Beret_Lieutenant", "", 100, { "life_coplevel", "EQUAL", 10 } },
            { "SH_Beret_Capitaine", "", 100, { "life_coplevel", "EQUAL", 11 } },
            { "SH_Beret_Commandant", "", 100, { "life_coplevel", "EQUAL", 12 } },
            { "SH_Beret_Colonel", "", 100, { "life_coplevel", "EQUAL", 13 } },
        };

        goggles[] = {
            { "G_Sport_BlackWhite", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "G_Sport_Blackyellow", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "G_Lady_Blue", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "G_Tactical_Clear", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "G_Aviator", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "G_Combat", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "G_B_Diving", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "G_RegulatorMask_F", "", 100, { "life_coplevel", "SCALAR", 2 } },
        };

        backpacks[] = {
            { "Gendar_LegStrap", "Gendarmerie", 200, { "life_coplevel", "SCALAR", 1 } },
            { "B_SCBA_01_F", "", 200, { "life_coplevel", "SCALAR", 2 } }
        };
    };

    class cop_pigt {
        title = "STR_Shops_Bruce";
        license = "";
        side = "cop";
        legal = 0;
        paymentType = "bank";

        uniforms[] = {
            { "U_B_Wetsuit", "", 300, { "life_coplevel", "SCALAR", 1 } },
            { "Gendarmerie_long_uniform", "", 300, { "life_coplevel", "SCALAR", 1 } },
            { "Gendarmerie_uniform_Rolled", "", 300, { "life_coplevel", "SCALAR", 2 } },
            { "CBRN_Expansion_Gendarmerie", "", 300, { "life_coplevel", "SCALAR", 2 } }          
        };

        vests[] = {
            { "V_POD_Gen_02_NoName_A", "", 300, { "life_coplevel", "SCALAR", 1 } },
            { "V_POD_Gen_02_NoName_B", "", 300, { "life_coplevel", "SCALAR", 1 } },
            { "V_POD_Gen_02_NoName_C", "", 300, { "life_coplevel", "SCALAR", 1 } },
        };

        headgear[] = {
            { "STF_Helmet_EarGuard_SpecOps", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "STF_Helmet_Chops_SpecOps", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "STF_Helmet_Peltor_SpecOps", "", 100, { "life_coplevel", "SCALAR", 1 } },
        };

        goggles[] = {
            { "G_Balaclava_TI_blk_F", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "G_RegulatorMask_F", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "G_B_Diving", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "G_Bandanna_aviator", "", 100, { "life_coplevel", "SCALAR", 1 } },
        };

        backpacks[] = {
            { "Gendar_LegStrap", "Gendarmerie", 200, { "life_coplevel", "SCALAR", 1 } },
            { "Gendar_shoulder_bag", "Gendarmerie", 200, { "life_coplevel", "SCALAR", 1 } },
            { "B_UGV_02_Science_backpack_F", "Gendarmerie", 200, { "life_coplevel", "SCALAR", 1 } },
            { "B_SCBA_01_F", "", 200, { "life_coplevel", "SCALAR", 1 } }
        };
    };

    class chimie {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 0;
        paymentType = "cash";
        
        uniforms[] = {
            { "U_C_Driver_1_white", "Combinaison de Chimiste", 10000, { "", "", -1 } }
        };

        headgear[] = {
            { "H_PilotHelmetFighter_B", "Masque Chimiste", 10000, { "", "", -1 } }
        };

        goggles[] = {};

        vests[] = {
            { "V_RebreatherB", "Respirateur Chimiste", 2500, { "", "", -1 } }
        };

        backpacks[] = {};
    };

    class dive {
        title = "STR_Shops_Bruce";
        license = "dive";
        side = "civ";
        legal = 1;
        paymentType = "cash";
        uniforms[] = {
            { "U_B_Wetsuit", "", 250, { "", "", -1 } }
        };
        headgear[] = {

        };
        goggles[] = {

            { "G_Diving", "", 50, { "", "", -1 } }
        };
        vests[] = {

            { "V_RebreatherB", "", 650, { "", "", -1 } }
        };
        backpacks[] = {

        };
    };

      class depan {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 1;
        paymentType = "cash";
        uniforms[] = {

            { "depan_tenue_F", "", 300, { "", "", -1 } },
            { "depan_tenue_sta_F", "", 300, { "", "", -1 } },
            { "U_C_WorkerCoveralls_black", "", 250, { "", "", -1 } },
        };
        headgear[] = {

            { "H_Construction_basic_orange_F", "", 30, { "", "", -1 } },
            { "H_Construction_earprot_orange_F", "", 30, { "", "", -1 } },
            { "H_Construction_headset_orange_F", "", 49, { "", "", -1 } },
            
        };
        goggles[] = {

            { "G_EyeProtectors_F", "", 50, { "", "", -1 } },
            { "V12_MASQUE_SOUDURE", "", 50, { "", "", -1 } },
        };
        vests[] = {

            { "V_Safety_orange_F", "", 50, { "", "", -1 } }
        };
        backpacks[] = {
            { "B_Kitbag_cbr", "", 139, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 139, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 139, { "", "", -1 } },
            { "sac_depan", "", 150, { "", "", -1 } },
        };
      };

    class medic {
        title = "STR_Shops_Bruce";
        license = "";
        side = "med";
        legal = 1;
        paymentType = "bank";
        uniforms[] = {

            { "U_Marshal", "", 400, { "", "", -1 } },
            { "U_C_Paramedic_01_F", "", 200, { "", "", -1 } },
            { "U_B_Wetsuit", "", 150, { "", "", -1 } },
            { "CBRN_Expansion_Yellow", "", 150, { "", "", -1 } },

            { "U_Dragon", "", 2000, { "", "", -1 } },

            { "PomMmE_SAPEURND_SP", "", 500, { "life_medicLevel", "EQUAL", 1 } },
            { "PomMmE_FROIDSAPEURND_SP", "", 500, { "life_medicLevel", "EQUAL", 1 } },

            { "PomMmE_SAPEUR_SP", "", 500, { "life_medicLevel", "EQUAL", 2 } },
            { "PomMmE_FROIDSAPEUR_SP", "", 500, { "life_medicLevel", "EQUAL", 2 } },

            { "PomMmE_CAPORAL_SP", "", 500, { "life_medicLevel", "EQUAL", 3 } },
            { "PomMmE_FROIDCAPORAL_SP", "", 500, { "life_medicLevel", "EQUAL", 3 } },

            { "PomMmE_CAPORALC_SP", "", 500, { "life_medicLevel", "EQUAL", 4 } },
            { "PomMmE_FROIDCAPORALCHEF_SP", "", 500, { "life_medicLevel", "EQUAL", 4 } },

            { "PomMmE_SERGENT_SP", "", 500, { "life_medicLevel", "EQUAL", 5 } },
            { "PomMmE_FROIDSERGENT_SP", "", 500, { "life_medicLevel", "EQUAL", 5 } },

            { "PomMmE_SERGENTC_SP", "", 500, { "life_medicLevel", "EQUAL", 6 } },
            { "PomMmE_FROIDSERGENTC_SP", "", 500, { "life_medicLevel", "EQUAL", 6 } },

            { "PomMmE_ADJUDANT_SP", "", 500, { "life_medicLevel", "EQUAL", 7 } },
            { "PomMmE_FROIDADJUDANT_SP", "", 500, { "life_medicLevel", "EQUAL", 7 } },

            { "PomMmE_ADJUDANTC_SP", "", 500, { "life_medicLevel", "EQUAL", 8 } },
            { "PomMmE_FROIDADJUDANTC_SP", "", 500, { "life_medicLevel", "EQUAL", 8 } },

            { "PomMmE_LIEUTENANT_SP", "", 500, { "life_medicLevel", "EQUAL", 9 } },
            { "PomMmE_FROIDLIEUTENANT_SP", "", 500, { "life_medicLevel", "EQUAL", 9 } },

            { "PomMmE_LIEUTENANT_SP", "", 500, { "life_medicLevel", "EQUAL", 10 } },
            { "PomMmE_FROIDLIEUTENANT_SP", "", 500, { "life_medicLevel", "EQUAL", 10 } },

            { "PomMmE_CAPITAINE_SP", "", 500, { "life_medicLevel", "EQUAL", 11 } },
            { "PomMmE_FROIDCAPITAINE_SP", "", 500, { "life_medicLevel", "EQUAL", 11 } },

            { "PomMmE_COMMANDANT_SP", "", 500, { "life_medicLevel", "EQUAL", 12 } },
            { "PomMmE_FROIDCOMMANDANT_SP", "", 500, { "life_medicLevel", "EQUAL", 12 } },

            { "PomMmE_LTNCOLONEL_SP", "", 500, { "life_medicLevel", "EQUAL", 13 } },
            { "PomMmE_FROIDLTNCOLONEL_SP", "", 500, { "life_medicLevel", "EQUAL", 13 } },

            { "PomMmE_COLONEL_SP", "", 500, { "life_medicLevel", "EQUAL", 14 } },
            { "PomMmE_FROIDCOLONEL_SP", "", 500, { "life_medicLevel", "EQUAL", 14 } },
        };
        headgear[] = {
            
            //      ______________CIVIL______________

            //      -------------Bandanna---------------
            { "H_Bandanna_blu", "", 5, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 5, { "", "", -1 } },
            { "H_Bandanna_khk", "", 5, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 5, { "", "", -1 } },
            { "H_Bandanna_gry", "", 5, { "", "", -1 } },
            { "H_Bandanna_sand", "", 5, { "", "", -1 } },
            { "H_Bandanna_sgg", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer_blk", "", 5, { "", "", -1 } },
            { "H_Bandanna_surfer_grn", "", 5, { "", "", -1 } },
            { "H_Bandanna_camo", "", 5, { "", "", -1 } },
            { "H_Bandanna_khk_hs", "", 5, { "", "", -1 } },
            { "H_BandMask_blk", "", 5, { "", "", -1 } },
            //      -------------Casquettes--------------
            { "H_Cap_grn_BI", "", 19, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "", 19, { "", "", -1 } },
            { "H_Cap_blk_ION", "", 19, { "", "", -1 } },
            { "H_Cap_tan", "", 19, { "", "", -1 } },
            { "H_Cap_tan_specops_US", "", 19, { "", "", -1 } },
            { "H_Cap_usblack", "", 19, { "", "", -1 } },
            { "H_Cap_blk", "", 19, { "", "", -1 } },
            { "H_Cap_oli", "", 19, { "", "", -1 } },
            { "H_Cap_oli_hs", "", 19, { "", "", -1 } },
            { "H_Cap_press", "", 19, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "", 19, { "", "", -1 } },
            { "H_Cap_surfer", "", 19, { "", "", -1 } },
            { "H_Cap_grn", "", 19, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 19, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 29, { "", "", -1 } },
            { "H_Cap_blu", "", 19, { "", "", -1 } },
            { "H_Cap_red", "", 19, { "", "", -1 } },
            //      ------Casquettes et Headphones-------
            { "H_Cap_marshal", "", 49, { "", "", -1 } },
            { "H_Cap_headphones", "", 49, { "", "", -1 } },
            //      -------------Chapeaux--------------
            { "H_Hat_blue", "", 39, { "", "", -1 } },
            { "H_Hat_camo", "", 39, { "", "", -1 } },
            { "H_Hat_checker", "", 39, { "", "", -1 } },
            { "H_Hat_grey", "", 39, { "", "", -1 } },
            { "H_Hat_tan", "", 39, { "", "", -1 } },
            { "H_Hat_brown", "", 39, { "", "", -1 } },
            { "H_TurbanO_blk", "", 39, { "", "", -1 } },
            { "H_StrawHat", "", 39, { "", "", -1 } },
            { "H_StrawHat_dark", "", 39, { "", "", -1 } },
            //---------------Beret & casque moddé----------------
            { "PomMmE_ADJUDANT_BERETSP", "", 39, { "", "", -1 } },
            { "PomMmE_ADJUDANTC_BERETSP", "", 39, { "", "", -1 } },
            { "PomMmE_CAPITAINE_BERETSP", "", 39, { "", "", -1 } },
            { "PomMmE_CAPORAL_BERETSP", "", 39, { "", "", -1 } },
            { "PomMmE_CAPORALC_BERETSP", "", 39, { "", "", -1 } },
            { "PomMmE_COLONEL_BERETSP", "", 39, { "", "", -1 } },
            { "PomMmE_COMMANDANT_BERETSP", "", 39, { "", "", -1 } },
            { "PomMmE_LIEUTENANT_BERETSP", "", 39, { "", "", -1 } },
            { "PomMmE_LTNCOLONEL_BERETSP", "", 39, { "", "", -1 } },
            { "PomMmE_SAPEUR_BERETSP", "", 39, { "", "", -1 } },
            { "PomMmE_SERGENT_BERETSP", "", 39, { "", "", -1 } },
            { "PomMmE_SERGENTC_BERETSP", "", 39, { "", "", -1 } },
            { "H_SP_HELI_DRAGON", "", 39, { "", "", -1 } },
            //      -------------Bonniehat--------------
            { "H_Booniehat_mcamo", "", 29, { "", "", -1 } },
            { "H_Booniehat_oli", "", 29, { "", "", -1 } },
            { "H_Booniehat_tan", "", 29, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 29, { "", "", -1 } },
            { "H_Booniehat_tna_F", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 29, { "", "", -1 } },
            { "H_Booniehat_wld", "", 29, { "", "", -1 } },
            { "H_Booniehat_taiga", "", 29, { "", "", -1 } },
            { "H_Booniehat_mgrn", "", 29, { "", "", -1 } },
            { "H_Booniehat_eaf", "", 29, { "", "", -1 } },
            //      -------------Safari--------------
            { "H_Hat_Safari_olive_F", "", 29, { "", "", -1 } },
            { "H_Hat_Safari_sand_F", "", 29, { "", "", -1 } },
            //      -------------Watchcap--------------
            { "H_Watchcap_blk", "", 49, { "", "", -1 } },
            { "H_Watchcap_camo", "", 49, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 49, { "", "", -1 } },
            { "H_Watchcap_khk", "", 49, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 49, { "", "", -1 } },
            //      -------------Head Set---------------
            { "H_EarProtectors_white_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_white_F", "", 39, { "", "", -1 } },
            { "H_EarProtectors_yellow_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_yellow_F", "", 39, { "", "", -1 } },
            { "H_EarProtectors_black_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_black_F", "", 39, { "", "", -1 } },
            { "H_EarProtectors_orange_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_orange_F", "", 39, { "", "", -1 } },
            { "H_EarProtectors_red_F", "", 29, { "", "", -1 } },
            { "H_HeadSet_red_F", "", 39, { "", "", -1 } }
        };

        goggles[] = {

            //      ______________CIVIL______________

            //      --------------Shades--------------
            { "G_Respirator_white_F", "", 49, { "", "", -1 } },
            { "G_Respirator_blue_F", "", 49, { "", "", -1 } },
            { "G_Respirator_yellow_F", "", 49, { "", "", -1 } },
            { "G_Shades_Black", "", 49, { "", "", -1 } },
            { "G_Shades_Blue", "", 49, { "", "", -1 } },
            { "G_Shades_Green", "", 49, { "", "", -1 } },
            { "G_Shades_Red", "", 49, { "", "", -1 } },
            { "G_Lady_Blue", "", 49, { "", "", -1 } },
            //      --------------Sport--------------
            { "G_Sport_Red", "", 69, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 69, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 69, { "", "", -1 } },
            { "G_Sport_Checkered", "", 69, { "", "", -1 } },
            { "G_Sport_Blackred", "", 69, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 69, { "", "", -1 } },
            //      -------------Spectacles--------------
            { "G_Spectacles", "", 39, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 49, { "", "", -1 } },
            //      -------------Squares--------------
            { "G_Squares", "", 49, { "", "", -1 } },
            { "G_Squares_Tinted", "", 59, { "", "", -1 } },
            //      ----------------------------------
            { "G_Lowprofile", "", 59, { "", "", -1 } },
            { "G_Aviator", "", 500, { "", "", -1 } },
            //      ______________MAFIA______________
            //      -------------Tactical----------------
            { "G_Tactical_Clear", "", 69, { "", "", -1 } },
            { "G_Tactical_Black", "", 69, { "", "", -1 } },
            //      -------------Combat----------------
            { "G_Combat", "", 79, { "", "", -1 } },
            { "G_Combat_Goggles_tna_F", "", 79, { "", "", -1 } },
            //      -------------Bandanna----------------
            { "G_Bandanna_blk", "", 20, { "", "", -1 } },
            { "G_Bandanna_khk", "", 20, { "", "", -1 } },
            { "G_Bandanna_oli", "", 20, { "", "", -1 } },
            { "G_Bandanna_tan", "", 20, { "", "", -1 } },
            { "G_Bandanna_shades", "", 69, { "", "", -1 } },
            { "G_Bandanna_sport", "", 89, { "", "", -1 } },
            { "G_Bandanna_beast", "", 45, { "", "", -1 }},
            { "G_Bandanna_aviator", "", 520, { "", "", -1 } },
            //      --------------Balaclava------------------
            { "G_Balaclava_oli", "", 25, { "", "", -1 } },
            { "G_Balaclava_blk", "", 25, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 84, { "", "", -1 } },
            { "G_Balaclava_combat", "", 94, { "", "", -1 } },
            //      ______________DIVING______________

            { "G_Diving", "", 50, { "", "", -1 } },
            { "G_I_Diving", "", 29, { "", "", -1 } },
            { "G_O_Diving", "", 29, { "", "", -1 } },
            { "G_B_Diving", "", 29, { "", "", -1 } },
            { "G_RegulatorMask_F", "", 29, { "", "", -1 } },  
        };
        vests[] = {
            { "V_Safety_blue_Samu", "", 150, { "", "", -1 } },
            { "V_Safety_yellow_Samu", "", 150, { "", "", -1 } },
            //      -----------Bandouliere--------------
            { "V_BandollierB_blk", "", 79, { "", "", -1 } },

            //      ______________DIVING______________

            //      ----------Respirateurs--------------
            { "V_RebreatherB", "", 650, { "", "", -1 } },
            { "V_RebreatherIA", "", 1000, { "", "", -1 } },
            { "V_RebreatherIR", "", 1000, { "", "", -1 } },



        };
        backpacks[] = {
            { "B_Kitbag_rgr", "Sac de Secouriste", 150, { "", "", -1 } },
            { "B_Carryall_oli", "Sac Lourd de Secouriste", 150, { "", "", -1 } },
            { "PomMmE_SAC_SP", "", 150, { "", "", -1 } },
            { "B_SCBA_01_F", "", 150, { "", "", -1 } }
        };
    };

    class alphonse {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 0;
        paymentType = "cash";        
        uniforms[] = {
            { "U_BG_Guerrilla_6_1", "", 5000, { "", "", -1 }},
        };

        headgear[] = {
        };

        goggles[] = {
            { "Mask_M40_OD", "", 5000, { "", "", -1 }}
        };

        vests[] = {

        };

        backpacks[] = {
           { "rhs_assault_umbts_noir", "", 10000, { "", "", -1 } }
        };
    };

    class press {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 0;
        paymentType = "cash";        
        uniforms[] = {
            { "U_C_Journalist", "", 40, { "", "", -1 }},
        };

        headgear[] = {
            { "H_Cap_press", "", 100, { "", "", -1 }},
        };

        goggles[] = {};

        vests[] = {
            { "V_Press_F", "", 500, { "", "", -1 }},
        };

        backpacks[] = {
           { "B_Messenger_Coyote_F", "", 100, { "", "", -1 } },
           { "B_Messenger_Gray_F", "", 100, { "", "", -1 } },
           { "B_Messenger_Black_F", "", 100, { "", "", -1 } },
        };
    };


    class reb {
        title = "STR_Shops_Bruce";
        license = "insurge";
        side = "civ";
        legal = 0;
        paymentType = "cash";
        uniforms[] = {

            //      ______________REBEL______________

            //-------------------Narcos--------------
            { "TRYK_U_B_BLKTAN_CombatUniform", "", 120, { "", "", -1 } },
            { "TRYK_U_B_BLKTANR_CombatUniformTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_Delta_BDU", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_Delta_BDUTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_Ranger_BDU", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_Ranger_BDUTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_BLK_BDUTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_BLK_BDUTshirt2", "", 120, { "", "", -1 } },
            { "TRYK_U_B_GRTAN_CombatUniform", "", 120, { "", "", -1 } },
            { "TRYK_U_B_GRTANR_CombatUniformTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_ODTAN_CombatUniform", "", 120, { "", "", -1 } },
            { "TRYK_U_B_ODTANR_CombatUniformTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_TANTAN_CombatUniform", "", 120, { "", "", -1 } },
            { "TRYK_U_B_TANTAN_R_CombatUniform", "", 120, { "", "", -1 } },
            { "TRYK_U_B_BLTAN_T", "", 60, { "", "", -1 } },
            { "TRYK_U_B_C02_Tsirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLKTAN_Tshirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_OD_BLK_2", "", 60, { "", "", -1 } },
            { "TRYK_U_B_OD_BLK", "", 60, { "", "", -1 } },
            { "TRYK_U_B_ODTAN", "", 60, { "", "", -1 } },
            { "TRYK_U_B_ODTAN_Tshirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_TAN_1", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_TAN_2", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_BLK_R", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_gry_R", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_OD_R", "", 60, { "", "", -1 } },
            //      -------------Mixte---------------
            //{ "U_I_C_Soldier_Para_5_F", "", 90, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            //{ "U_I_C_Soldier_Para_3_F", "", 120, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            //{ "U_I_C_Soldier_Para_4_F", "", 150, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
            //{ "U_I_C_Soldier_Para_1_F", "", 150, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
            //{ "U_I_C_Soldier_Para_2_F", "", 190, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},          
            //{ "U_O_R_Gorka_01_camo_F", "", 190, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
            //{ "U_BG_Guerilla1_kabeiroi", "", 200, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
            //{ "U_BG_Guerilla1_1", "", 200, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
            //{ "U_BG_Guerilla1_2_F", "", 200, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},

            //{ "U_I_E_Uniform_01_tanktop_F", "", 200, { "", "", -1 }, {"'ClothingV1' in life_insurge_cash_steps && life_playerlevel >= 30", "Niveau: 30<br/>Cagnote: Friperie"}},
            //{ "U_I_CombatUniform_shortsleeve", "", 220, { "", "", -1 }, {"'ClothingV1' in life_insurge_cash_steps && life_playerlevel >= 30", "Niveau: 30<br/>Cagnote: Friperie"}}, 
            //{ "U_I_CombatUniform", "", 220, { "", "", -1 }, {"'ClothingV1' in life_insurge_cash_steps && life_playerlevel >= 30", "Niveau: 30<br/>Cagnote: Friperie"}},
            //{ "U_I_L_Uniform_01_camo_F", "", 220, { "", "", -1 }, {"'ClothingV1' in life_insurge_cash_steps && life_playerlevel >= 35", "Niveau: 35<br/>Cagnote: Friperie"}},
            //{ "U_I_E_Uniform_01_shortsleeve_F", "", 220, { "", "", -1 }, {"'ClothingV1' in life_insurge_cash_steps && life_playerlevel >= 35", "Niveau: 35<br/>Cagnote: Friperie"}},
            //{ "U_I_E_Uniform_01_officer_F", "", 220, { "", "", -1 }, {"'ClothingV1' in life_insurge_cash_steps && life_playerlevel >= 35", "Niveau: 35<br/>Cagnote: Friperie"}},

            //      -------------INDEP---------------
            //      --------------Officer---------------
            

            //{ "U_I_E_Uniform_01_F", "", 120, { "", "", -1 },
            //{ "U_O_T_Officer_F", "", 120, { "", "", -1 } },
            //{ "U_I_OfficerUniform", "", 120, { "", "", -1 },
            //{ "U_O_OfficerUniform_ocamo", "", 120, { "", "", -1 },
            //{ "U_I_C_Soldier_Camo_F", "", 120, { "", "", -1 },
            //      ------------Pilote helicoptaire---------------
            //{ "U_I_HeliPilotCoveralls", "", 160, { "", "", -1 } },
            //{ "U_B_HeliPilotCoveralls", "", 160, { "", "", -1 } },
            //{ "U_I_E_Uniform_01_coveralls_F", "", 160, { "", "", -1 } },
            //      --------------Protec---------------
            //{ "U_O_SpecopsUniform_ocamo", "", 120, { "", "", -1 } },
            //{ "U_O_SpecopsUniform_oucamo", "", 120, { "", "", -1 } },
            //{ "U_O_T_Soldier_F", "", 120, { "", "", -1 } },
            //      ----------------Pilote avion---------------
            //{ "U_B_PilotCoveralls", "", 150, { "", "", -1 } },
            //{ "U_I_pilotCoveralls", "", 150, { "", "", -1 } },
            //{ "U_O_PilotCoveralls", "", 899, { "", "", -1 }, {"life_playerlevel >= 50 && ['nocraft'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: La flemme"}},

            //      ______________DIVING______________

            //      -------------Tenues---------------
            { "U_I_Wetsuit", "", 350, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
            //{ "U_O_Wetsuit", "", 350, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
        };

        headgear[] = {

            //      ______________CIVIL______________

            //      -------------Bandanna---------------
            
            //{ "H_Bandanna_blu", "", 5, { "", "", -1 } },
            //{ "H_Bandanna_cbr", "", 5, { "", "", -1 } },
            //{ "H_Bandanna_khk", "", 5, { "", "", -1 } },
            //{ "H_Bandanna_mcamo", "", 5, { "", "", -1 } },
            //{ "H_Bandanna_gry", "", 5, { "", "", -1 } },
            //{ "H_Bandanna_sand", "", 5, { "", "", -1 } },
            //{ "H_Bandanna_sgg", "", 5, { "", "", -1 } },
            //{ "H_Bandanna_surfer", "", 5, { "", "", -1 } },
            //{ "H_Bandanna_surfer_blk", "", 5, { "", "", -1 } },
            //{ "H_Bandanna_surfer_grn", "", 5, { "", "", -1 } },
            //{ "H_Bandanna_camo", "", 5, { "", "", -1 } },
            //{ "H_Bandanna_khk_hs", "", 5, { "", "", -1 } },
            //{ "H_BandMask_blk", "", 5, { "", "", -1 } },
            //      -------------Casquettes--------------
            { "TRYK_H_woolhat_WH", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_tan", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_CW", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_cu", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_br", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_tan_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_od_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_blk_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_OD_US", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_TAN", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_BLK", "", 49, { "", "", -1 } },
            { "TRYK_H_pakol2", "", 49, { "", "", -1 } },
            { "TRYK_H_pakol", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_od_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_blk_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_Glasses", "", 49, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 19, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "", 19, { "", "", -1 } },
            { "H_Cap_blk_ION", "", 19, { "", "", -1 } },
            { "H_Cap_tan", "", 19, { "", "", -1 } },
            { "H_Cap_tan_specops_US", "", 19, { "", "", -1 } },
            { "H_Cap_usblack", "", 19, { "", "", -1 } },
            { "H_Cap_blk", "", 19, { "", "", -1 } },
            { "H_Cap_oli", "", 19, { "", "", -1 } },
            { "H_Cap_oli_hs", "", 19, { "", "", -1 } },
            //{ "H_Cap_press", "", 19, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "", 19, { "", "", -1 } },
            //{ "H_Cap_surfer", "", 19, { "", "", -1 } },
            { "H_Cap_grn", "", 19, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 19, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 29, { "", "", -1 } },
            { "H_Cap_blu", "", 19, { "", "", -1 } },
            //{ "H_Cap_red", "", 19, { "", "", -1 } },
            //      ------Casquettes et Headphones-------
            //{ "H_Cap_marshal", "", 49, { "", "", -1 } },
            //{ "H_Cap_headphones", "", 49, { "", "", -1 } },
            //      -------------Bonniehat--------------
            { "H_Booniehat_mcamo", "", 29, { "", "", -1 } },
            { "H_Booniehat_oli", "", 29, { "", "", -1 } },
            { "H_Booniehat_tan", "", 29, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 29, { "", "", -1 } },
            { "H_Booniehat_tna_F", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 29, { "", "", -1 } },
            { "H_Booniehat_wld", "", 29, { "", "", -1 } },
            { "H_Booniehat_taiga", "", 29, { "", "", -1 } },
            { "H_Booniehat_mgrn", "", 29, { "", "", -1 } },
            { "H_Booniehat_eaf", "", 29, { "", "", -1 } },
            //      -------------Watchcap--------------
            { "H_Watchcap_blk", "", 49, { "", "", -1 } },
            { "H_Watchcap_camo", "", 49, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 49, { "", "", -1 } },
            { "H_Watchcap_khk", "", 49, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 49, { "", "", -1 } },
            //      ----------------------------------
            //{ "H_Helmet_Skate", "", 49, { "", "", -1 } },
            //      -------------Head Set---------------
            //{ "H_EarProtectors_white_F", "", 29, { "", "", -1 } },
            //{ "H_HeadSet_white_F", "", 39, { "", "", -1 } },
            //{ "H_EarProtectors_yellow_F", "", 29, { "", "", -1 } },
            //{ "H_HeadSet_yellow_F", "", 39, { "", "", -1 } },
            //{ "H_EarProtectors_black_F", "", 29, { "", "", -1 } },
            //{ "H_HeadSet_black_F", "", 39, { "", "", -1 } },
            //{ "H_EarProtectors_orange_F", "", 29, { "", "", -1 } },
            //{ "H_HeadSet_orange_F", "", 39, { "", "", -1 } },
            //{ "H_EarProtectors_red_F", "", 29, { "", "", -1 } },
            //{ "H_HeadSet_red_F", "", 39, { "", "", -1 } },
            //      -------------Casque mili---------------
            //      ------------Military Cap--------------
            //{ "H_MilCap_blue", "", 20, { "", "", -1 } },
            //{ "H_MilCap_gry", "", 20, { "", "", -1 } },
            //{ "H_MilCap_mcamo", "", 20, { "", "", -1 } },
            //{ "H_MilCap_ocamo", "", 20, { "", "", -1 } },
            //{ "H_MilCap_ghex_F", "", 20, { "", "", -1 } },
            //{ "H_MilCap_dgtl", "", 20, { "", "", -1 } },
            //{ "H_MilCap_tna_F", "", 20, { "", "", -1 } },
            //{ "H_MilCap_OUcamo", "", 20, { "", "", -1 } },
            //{ "H_MilCap_wdl", "", 20, { "", "", -1 } },
            //{ "H_MilCap_taiga", "", 20, { "", "", -1 } },
            //{ "H_MilCap_grn", "", 20, { "", "", -1 } },
            //{ "H_MilCap_eaf", "", 20, { "", "", -1 } },
            //      ----------------------------------
            //{ "H_ShemagOpen_khk", "", 30, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
            //{ "H_Shemag_olive_hs", "", 30, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
            //{ "H_Shemag_olive", "", 30, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
            //{ "H_ShemagOpen_tan", "", 30, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
            //      ------------Casque Indep---------------
            //{ "H_HelmetIA", "", 250, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
            //{ "H_PASGT_basic_olive_F", "", 250, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
            //      -----------Casques equiage---------------
            //{ "H_Tank_eaf_F", "", 49, { "", "", -1 } },
            //{ "H_HelmetCrew_I", "", 350, { "", "", -1 } },
            //{ "H_HelmetCrew_B", "", 350, { "", "", -1 } },
            //{ "H_HelmetCrew_O", "", 350, { "", "", -1 } },
            //{ "H_HelmetCrew_O_ghex_F", "", 350, { "", "", -1 } },
            //      ----------------------------------
            //{ "H_CrewHelmetHeli_O", "", 650, { "", "", -1 }},
            //{ "H_CrewHelmetHeli_B", "", 650, { "", "", -1 }},
            //{ "H_CrewHelmetHeli_I", "", 650, { "", "", -1 }}

            //{ "H_Tank_black_F", "", 150, { "", "", -1 }, {"'ClothingV1' in life_insurge_cash_steps && life_playerlevel >= 20", "Niveau: 20<br/>Cagnote: Friperie"}},
            //{ "H_HelmetB_camo", "", 250, { "", "", -1 }, {"'ClothingV1' in life_insurge_cash_steps && life_playerlevel >= 30", "Niveau: 30<br/>Cagnote: Friperie"}},
        };
        goggles[] = {
            { "B_NSHD_MCAM", "", 5, { "", "", -1 } },
            { "B_NSHD_Gas", "", 5, { "", "", -1 } },
            { "B_SHD_Gas", "", 5, { "", "", -1 } },
            { "B_NSHD_TAZ07", "", 5, { "", "", -1 } },
            { "B_NSHD_TAZ90", "", 5, { "", "", -1 } },
            //      ______________CIVIL______________

            //      --------------Shades--------------
            //{ "G_Shades_Black", "", 49, { "", "", -1 } },
            //{ "G_Shades_Blue", "", 49, { "", "", -1 } },
            //{ "G_Shades_Green", "", 49, { "", "", -1 } },
            //{ "G_Shades_Red", "", 49, { "", "", -1 } },
            //{ "G_Lady_Blue", "", 49, { "", "", -1 } },
            //      --------------Sport--------------
            //{ "G_Sport_Red", "", 69, { "", "", -1 } },
            //{ "G_Sport_Blackyellow", "", 69, { "", "", -1 } },
            //{ "G_Sport_BlackWhite", "", 69, { "", "", -1 } },
            //{ "G_Sport_Checkered", "", 69, { "", "", -1 } },
            //{ "G_Sport_Blackred", "", 69, { "", "", -1 } },
            //{ "G_Sport_Greenblack", "", 69, { "", "", -1 } },
            //      -------------Spectacles--------------
            //{ "G_Spectacles", "", 39, { "", "", -1 } },
            //{ "G_Spectacles_Tinted", "", 49, { "", "", -1 } },
            //      -------------Squares--------------
            //{ "G_Squares", "", 49, { "", "", -1 } },
            //{ "G_Squares_Tinted", "", 59, { "", "", -1 } },
            //      ----------------------------------
            //{ "G_Lowprofile", "", 59, { "", "", -1 } },
            //{ "G_Aviator", "", 500, { "", "", -1 } },

            //      ______________MAFIA______________

            //      -------------Tactical----------------
            //{ "G_Tactical_Clear", "", 69, { "", "", -1 } },
            //{ "G_Tactical_Black", "", 69, { "", "", -1 } },
            //      -------------Combat----------------
            //{ "G_Combat", "", 79, { "", "", -1 } },
            //{ "G_Combat_Goggles_tna_F", "", 79, { "", "", -1 } },
            //      -------------Bandanna----------------
            //{ "G_Bandanna_blk", "", 20, { "", "", -1 } },
            //{ "G_Bandanna_khk", "", 20, { "", "", -1 } },
            { "G_Bandanna_oli", "", 20, { "", "", -1 } },
            { "G_Bandanna_tan", "", 20, { "", "", -1 } },
            { "G_Bandanna_shades", "", 69, { "", "", -1 } },
            { "G_Bandanna_sport", "", 89, { "", "", -1 } },
            //{ "G_Bandanna_beast", "", 45, { "", "", -1 }},
            //{ "G_Bandanna_aviator", "", 520, { "", "", -1 } },
            //      --------------Balaclava------------------
            { "G_Balaclava_oli", "", 25, { "", "", -1 } },
            { "G_Balaclava_blk", "", 25, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 84, { "", "", -1 } },
            { "G_Balaclava_combat", "", 94, { "", "", -1 } },

            //      ______________REBEL______________

            //      -----------Stealth Balaclava--------------
            //{ "G_Balaclava_TI_blk_F", "", 50, { "", "", -1 }},
            //{ "G_Balaclava_TI_G_blk_F", "", 120, { "", "", -1 }},
            //{ "G_Balaclava_TI_tna_F", "", 50, { "", "", -1 }},
            //{ "G_Balaclava_TI_G_tna_F", "", 120, { "", "", -1 }},

        };
        vests[] = {

            //      ______________CIVIL______________
            //      ------------Ceinture--------------
            { "V_Rangemaster_belt", "", 79, { "", "", -1 } },
            //      ------------Ceinture jambe--------------
            { "V_LegStrapBag_coyote_F", "", 79, { "", "", -1 } },
            { "V_LegStrapBag_black_F", "", 79, { "", "", -1 } },
            { "V_LegStrapBag_olive_F", "", 79, { "", "", -1 } },
            //      ------------Multipoches--------------
            { "V_Pocketed_coyote_F", "", 79, { "", "", -1 } },
            { "V_Pocketed_black_F", "", 79, { "", "", -1 } },
            { "V_Pocketed_olive_F", "", 79, { "", "", -1 } },
            //      -----------Bandouliere--------------
            { "V_BandollierB_cbr", "", 99, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            { "V_BandollierB_khk", "", 99, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            { "V_BandollierB_oli", "", 99, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            { "V_BandollierB_rgr", "", 99, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            { "V_BandollierB_blk", "", 99, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            //      -----------------------------------

            //      ______________REBEL______________

            //      -----------------------------------
            { "V_CarrierRigKBT_01_Olive_F", "", 1599, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            { "TRYK_V_Bulletproof_BLK", "", 1599, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            // { "V_TacChestrig_cbr_F", "", 120, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            // { "V_TacChestrig_oli_F", "", 120, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            // { "V_TacChestrig_grn_F", "", 120, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            //      -----------------------------------
            // { "V_Chestrig_khk", "", 130, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            // { "V_Chestrig_oli", "", 130, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            // { "V_Chestrig_rgr", "", 130, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            // { "V_Chestrig_blk", "", 130, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            //      -----------Grenadier--------------
            // { "V_HarnessOGL_brn", "", 150, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
            // { "V_HarnessOGL_gry", "", 150, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
            // { "V_HarnessOGL_ghex_F", "", 150, { "", "", -1 }, {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"}},
            //      -----------------------------------
            // { "V_HarnessO_brn", "", 150, { "", "", -1 }, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},
            // { "V_HarnessO_gry", "", 150, { "", "", -1 }, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},
            // { "V_HarnessO_ghex_F", "", 150, { "", "", -1 }, {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"}},

            // { "V_SmershVest_01_F", "", 199, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
            // { "V_SmershVest_01_radio_F", "", 199, { "", "", -1 }, {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"}},
            //      ---------------Petit---------------
            // { "V_TacVest_brn", "", 1599, { "", "", -1 }, {"life_playerlevel >= 23", "Niveau: 23<br/>Compétence: aucune"}},
            // { "V_TacVest_khk", "", 1599, { "", "", -1 }, {"life_playerlevel >= 23", "Niveau: 23<br/>Compétence: aucune"}},
            // { "V_TacVest_camo", "", 1599, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
            // { "V_TacVest_oli", "", 1599, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
            //{ "V_TacVest_blk", "", 1599, { "", "", -1 } },
            // { "V_I_G_resistanceLeader_F", "", 1599, { "", "", -1 }, {"life_playerlevel >= 28", "Niveau: 28<br/>Compétence: aucune"}},
            // { "V_Chestrig_khk", "", 1599, { "", "", -1 }, {"life_playerlevel >= 28", "Niveau: 28<br/>Compétence: aucune"}},
            // { "V_Chestrig_khk", "", 1599, { "", "", -1 }, {"life_playerlevel >= 28", "Niveau: 28<br/>Compétence: aucune"}},
            // { "V_Chestrig_blk", "", 1599, { "", "", -1 }, {"life_playerlevel >= 28", "Niveau: 28<br/>Compétence: aucune"}},
            // { "V_Chestrig_oli", "", 1599, { "", "", -1 }, {"life_playerlevel >= 28", "Niveau: 28<br/>Compétence: aucune"}},
            // { "V_Chestrig_rgr", "", 1599, { "", "", -1 }, {"life_playerlevel >= 28", "Niveau: 28<br/>Compétence: aucune"}},
            // { "V_TacChestrig_cbr_F", "", 1599, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
            // { "V_TacChestrig_oli_F", "", 1599, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
            // { "V_TacChestrig_grn_F", "", 1599, { "", "", -1 }, {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"}},
            //      ---------------Petit---------------
            // { "V_TacVest_camo", "", 1599, { "", "", -1 }, {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"}},
            // { "V_TacVest_khk", "", 1599, { "", "", -1 }, {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"}},
            // { "V_TacVest_brn", "", 1599, { "", "", -1 }, {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"}},
            // { "V_TacVest_blk", "", 1599, { "", "", -1 }, {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"}},
            // { "V_TacVest_oli", "", 1599, { "", "", -1 }, {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"}},
            // { "V_I_G_resistanceLeader_F", "", 1599, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},
            //{ "V_TacVestIR_blk", "", 1599, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},
            //{ "V_PlateCarrier1_blk", "", 1599, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},
            //{ "V_PlateCarrier1_rgr_noflag_F", "", 1599, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},
            //{ "V_CarrierRigKBT_01_EAF_F", "", 1599, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},
            //{ "V_CarrierRigKBT_01_Olive_F", "", 1599, { "", "", -1 }, {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"}},
            { "V_RebreatherIA", "", 2000, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},

            //{ "V_CarrierRigKBT_01_light_EAF_F", "", 4649, { "", "", -1 }, {"'ClothingV1' in life_insurge_cash_steps && life_playerlevel >= 40", "Niveau: 40<br/>Cagnote: Friperie"}},
            //{ "V_CarrierRigKBT_01_light_Olive_F", "", 4649, { "", "", -1 }, {"'ClothingV1' in life_insurge_cash_steps && life_playerlevel >= 40", "Niveau: 40<br/>Cagnote: Friperie"}},


            //{ "V_CarrierRigKBT_01_EAF_F", "", 4600, { "", "", -1 } },
            //{ "V_CarrierRigKBT_01_Olive_F", "", 4600, { "", "", -1 } },
            //
            //{ "V_CarrierRigKBT_01_heavy_EAF_F", "", 4849, { "", "", -1 } },
            //{ "V_CarrierRigKBT_01_heavy_Olive_F", "", 4849, { "", "", -1 } },

            //      ______________CRAFT______________
            //{ "V_PlateCarrierIA1_dgtl", "", 4600, { "", "", -1 }, {"life_playerlevel >= 50 && ['nocraft'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: La flemme"}},
            //{ "V_PlateCarrierIA2_dgtl", "", 5200, { "", "", -1 }, {"life_playerlevel >= 50 && ['nocraft'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: La flemme"}},
            //{ "V_PlateCarrierIAGL_dgtl", "", 5600, { "", "", -1 }, {"life_playerlevel >= 50 && ['nocraft'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: La flemme"}},
            //{ "V_PlateCarrierIAGL_oli", "", 5600, { "", "", -1 }, {"life_playerlevel >= 50 && ['nocraft'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: La flemme"}},   

        };

        backpacks[] = {

            //      -------------AssaultPack--------------
            { "B_AssaultPack_cbr", "", 89, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 89, { "", "", -1 } },
            { "B_AssaultPack_Kerry", "", 89, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 89, { "", "", -1 } },
            { "B_AssaultPack_ocamo", "", 89, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 89, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 89, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 89, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 89, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 89, { "", "", -1 } },
            { "B_AssaultPack_wdl_F", "", 89, { "", "", -1 } },
            { "B_AssaultPack_eaf_F", "", 89, { "", "", -1 } },
            //      -------------FieldPack--------------
            { "B_FieldPack_cbr", "", 99, { "", "", -1 } },
            { "B_FieldPack_ghex_F", "", 99, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 99, { "", "", -1 } },
            { "B_FieldPack_khk", "", 99, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 99, { "", "", -1 } },
            { "B_FieldPack_blk", "", 99, { "", "", -1 } },
            { "B_FieldPack_oli", "", 99, { "", "", -1 } },
            { "B_FieldPack_taiga_F", "", 99, { "", "", -1 } },
            { "B_FieldPack_green_F", "", 99, { "", "", -1 } },
            //      -------------TacticalPack--------------
            { "B_TacticalPack_ocamo", "", 112, { "", "", -1 } },
            { "B_TacticalPack_mcamo", "", 112, { "", "", -1 } },
            { "B_TacticalPack_blk", "", 112, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 112, { "", "", -1 } },
            { "B_TacticalPack_rgr", "", 112, { "", "", -1 } },
            { "B_HuntingBackpack", "", 112, { "", "", -1 } },
            //      -------------Viper leger--------------
            { "B_ViperLightHarness_hex_F", "", 125, { "", "", -1 } },
            { "B_ViperLightHarness_khk_F", "", 125, { "", "", -1 } },
            { "B_ViperLightHarness_oli_F", "", 125, { "", "", -1 } },
            { "B_ViperLightHarness_ghex_F", "", 125, { "", "", -1 } },
            { "B_ViperLightHarness_blk_F", "", 125, { "", "", -1 } },
            //      -------------Kitbag--------------
            { "B_Kitbag_cbr", "", 139, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 139, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 139, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 139, { "", "", -1 } },
            //      -----------------Viper---------------------
            { "B_ViperHarness_hex_F", "", 150, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 150, { "", "", -1 } },
            { "B_ViperHarness_oli_F", "", 150, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 150, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 150, { "", "", -1 } },
            //      -------------Carryall---------------
            { "B_Carryall_ghex_F", "", 199, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 199, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 199, { "", "", -1 } },
            { "B_Carryall_oli", "", 199, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 199, { "", "", -1 } },
            { "B_Carryall_cbr", "", 199, { "", "", -1 } },
            { "B_Carryall_khk", "", 199, { "", "", -1 } },
            { "B_Carryall_wdl_F", "", 199, { "", "", -1 } },
            { "B_Carryall_green_F", "", 199, { "", "", -1 } },




        };
     };

     class narcos {
        title = "STR_Shops_Bruce";
        license = "narcos";
        side = "civ";
        legal = 0;
        paymentType = "cash";
        uniforms[] = {
            //-------------------Narcos--------------
            { "TRYK_U_B_BLKTAN_CombatUniform", "", 120, { "", "", -1 } },
            { "TRYK_U_B_BLKTANR_CombatUniformTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_Delta_BDU", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_Delta_BDUTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_Ranger_BDU", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_Ranger_BDUTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_BLK_BDUTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_3CD_BLK_BDUTshirt2", "", 120, { "", "", -1 } },
            { "TRYK_U_B_GRTAN_CombatUniform", "", 120, { "", "", -1 } },
            { "TRYK_U_B_GRTANR_CombatUniformTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_ODTAN_CombatUniform", "", 120, { "", "", -1 } },
            { "TRYK_U_B_ODTANR_CombatUniformTshirt", "", 120, { "", "", -1 } },
            { "TRYK_U_B_TANTAN_CombatUniform", "", 120, { "", "", -1 } },
            { "TRYK_U_B_TANTAN_R_CombatUniform", "", 120, { "", "", -1 } },
            { "TRYK_U_B_BLTAN_T", "", 60, { "", "", -1 } },
            { "TRYK_U_B_C02_Tsirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLKTAN_Tshirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_OD_BLK_2", "", 60, { "", "", -1 } },
            { "TRYK_U_B_OD_BLK", "", 60, { "", "", -1 } },
            { "TRYK_U_B_ODTAN", "", 60, { "", "", -1 } },
            { "TRYK_U_B_ODTAN_Tshirt", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_TAN_1", "", 60, { "", "", -1 } },
            { "TRYK_U_B_BLK_TAN_2", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_BLK_R", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_gry_R", "", 60, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_OD_R", "", 60, { "", "", -1 } },
            //      -------------Tenues---------------
            { "U_I_Wetsuit", "", 350, { "", "", -1 }, {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"}},
        };

        headgear[] = {
            { "TRYK_H_woolhat_WH", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_tan", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_CW", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_cu", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat_br", "", 49, { "", "", -1 } },
            { "TRYK_H_woolhat", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_tan_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_od_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_r_cap_blk_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_OD_US", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_TAN", "", 49, { "", "", -1 } },
            { "TRYK_R_CAP_BLK", "", 49, { "", "", -1 } },
            { "TRYK_H_pakol2", "", 49, { "", "", -1 } },
            { "TRYK_H_pakol", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_od_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_blk_Glasses", "", 49, { "", "", -1 } },
            { "TRYK_H_headsetcap_Glasses", "", 49, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 19, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "", 19, { "", "", -1 } },
            { "H_Cap_blk_ION", "", 19, { "", "", -1 } },
            { "H_Cap_tan", "", 19, { "", "", -1 } },
            { "H_Cap_tan_specops_US", "", 19, { "", "", -1 } },
            { "H_Cap_usblack", "", 19, { "", "", -1 } },
            { "H_Cap_blk", "", 19, { "", "", -1 } },
            { "H_Cap_oli", "", 19, { "", "", -1 } },
            { "H_Cap_oli_hs", "", 19, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "", 19, { "", "", -1 } },
            { "H_Cap_grn", "", 19, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 19, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 29, { "", "", -1 } },
            { "H_Cap_blu", "", 19, { "", "", -1 } },
            { "H_Booniehat_mcamo", "", 29, { "", "", -1 } },
            { "H_Booniehat_oli", "", 29, { "", "", -1 } },
            { "H_Booniehat_tan", "", 29, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 29, { "", "", -1 } },
            { "H_Booniehat_tna_F", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk", "", 29, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 29, { "", "", -1 } },
            { "H_Booniehat_wld", "", 29, { "", "", -1 } },
            { "H_Booniehat_taiga", "", 29, { "", "", -1 } },
            { "H_Booniehat_mgrn", "", 29, { "", "", -1 } },
            { "H_Booniehat_eaf", "", 29, { "", "", -1 } },
            //      -------------Watchcap--------------
            { "H_Watchcap_blk", "", 49, { "", "", -1 } },
            { "H_Watchcap_camo", "", 49, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 49, { "", "", -1 } },
            { "H_Watchcap_khk", "", 49, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 49, { "", "", -1 } },
      };

      goggles[] = {
            { "B_NSHD_MCAM", "", 5, { "", "", -1 } },
            { "B_NSHD_Gas", "", 5, { "", "", -1 } },
            { "B_SHD_Gas", "", 5, { "", "", -1 } },
            { "B_NSHD_TAZ07", "", 5, { "", "", -1 } },
            { "B_NSHD_TAZ90", "", 5, { "", "", -1 } },
            { "G_Bandanna_oli", "", 20, { "", "", -1 } },
            { "G_Bandanna_tan", "", 20, { "", "", -1 } },
            { "G_Bandanna_shades", "", 69, { "", "", -1 } },
            { "G_Bandanna_sport", "", 89, { "", "", -1 } },
            { "G_Balaclava_oli", "", 25, { "", "", -1 } },
            { "G_Balaclava_blk", "", 25, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 84, { "", "", -1 } },
            { "G_Balaclava_combat", "", 94, { "", "", -1 } },
      };

      vests[] = {

            //      ______________CIVIL______________
            //      ------------Ceinture--------------
            { "V_Rangemaster_belt", "", 79, { "", "", -1 } },
            //      ------------Ceinture jambe--------------
            { "V_LegStrapBag_coyote_F", "", 79, { "", "", -1 } },
            { "V_LegStrapBag_black_F", "", 79, { "", "", -1 } },
            { "V_LegStrapBag_olive_F", "", 79, { "", "", -1 } },
            //      ------------Multipoches--------------
            { "V_Pocketed_coyote_F", "", 79, { "", "", -1 } },
            { "V_Pocketed_black_F", "", 79, { "", "", -1 } },
            { "V_Pocketed_olive_F", "", 79, { "", "", -1 } },
            //      -----------Bandouliere--------------
            { "V_BandollierB_cbr", "", 99, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            { "V_BandollierB_khk", "", 99, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            { "V_BandollierB_oli", "", 99, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            { "V_BandollierB_rgr", "", 99, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            { "V_BandollierB_blk", "", 99, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            //      -----------------------------------

            //      ______________REBEL______________

            //      -----------------------------------
            { "V_CarrierRigKBT_01_Olive_F", "", 1599, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            { "TRYK_V_Bulletproof_BLK", "", 1599, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
            { "V_RebreatherIA", "", 2000, { "", "", -1 }, {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"}},
        };

        backpacks[] = {

            //      -------------AssaultPack--------------
            { "B_AssaultPack_cbr", "", 89, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 89, { "", "", -1 } },
            { "B_AssaultPack_Kerry", "", 89, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 89, { "", "", -1 } },
            { "B_AssaultPack_ocamo", "", 89, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 89, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 89, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 89, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 89, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 89, { "", "", -1 } },
            { "B_AssaultPack_wdl_F", "", 89, { "", "", -1 } },
            { "B_AssaultPack_eaf_F", "", 89, { "", "", -1 } },
            //      -------------FieldPack--------------
            { "B_FieldPack_cbr", "", 99, { "", "", -1 } },
            { "B_FieldPack_ghex_F", "", 99, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 99, { "", "", -1 } },
            { "B_FieldPack_khk", "", 99, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 99, { "", "", -1 } },
            { "B_FieldPack_blk", "", 99, { "", "", -1 } },
            { "B_FieldPack_oli", "", 99, { "", "", -1 } },
            { "B_FieldPack_taiga_F", "", 99, { "", "", -1 } },
            { "B_FieldPack_green_F", "", 99, { "", "", -1 } },
            //      -------------TacticalPack--------------
            { "B_TacticalPack_ocamo", "", 112, { "", "", -1 } },
            { "B_TacticalPack_mcamo", "", 112, { "", "", -1 } },
            { "B_TacticalPack_blk", "", 112, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 112, { "", "", -1 } },
            { "B_TacticalPack_rgr", "", 112, { "", "", -1 } },
            { "B_HuntingBackpack", "", 112, { "", "", -1 } },
            //      -------------Viper leger--------------
            { "B_ViperLightHarness_hex_F", "", 125, { "", "", -1 } },
            { "B_ViperLightHarness_khk_F", "", 125, { "", "", -1 } },
            { "B_ViperLightHarness_oli_F", "", 125, { "", "", -1 } },
            { "B_ViperLightHarness_ghex_F", "", 125, { "", "", -1 } },
            { "B_ViperLightHarness_blk_F", "", 125, { "", "", -1 } },
            //      -------------Kitbag--------------
            { "B_Kitbag_cbr", "", 139, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 139, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 139, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 139, { "", "", -1 } },
            //      -----------------Viper---------------------
            { "B_ViperHarness_hex_F", "", 150, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 150, { "", "", -1 } },
            { "B_ViperHarness_oli_F", "", 150, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 150, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 150, { "", "", -1 } },
            //      -------------Carryall---------------
            { "B_Carryall_ghex_F", "", 199, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 199, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 199, { "", "", -1 } },
            { "B_Carryall_oli", "", 199, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 199, { "", "", -1 } },
            { "B_Carryall_cbr", "", 199, { "", "", -1 } },
            { "B_Carryall_khk", "", 199, { "", "", -1 } },
            { "B_Carryall_wdl_F", "", 199, { "", "", -1 } },
            { "B_Carryall_green_F", "", 199, { "", "", -1 } },
        };
     };

      class johnson {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 1;
        paymentType = "bank";
        uniforms[] = {
            { "EF_M_jkt4", "", 10000, { "", "", -1 } },
            { "EF_M_jkt42", "", 10000, { "", "", -1 } },
            { "EF_suit_1", "", 10000, { "", "", -1 } },
            { "EF_suit_2", "", 10000, { "", "", -1 } },
            { "EF_suit_3", "", 10000, { "", "", -1 } },
            { "EF_suit_4", "", 10000, { "", "", -1 } },
            { "EF_suit_5", "", 10000, { "", "", -1 } },
            { "EF_suit_6", "", 10000, { "", "", -1 } },
            { "EF_suit_7", "", 10000, { "", "", -1 } },
            { "EF_suit_8", "", 10000, { "", "", -1 } },
            { "TRYK_SUITS_BLK_F", "", 10000, { "", "", -1 } },
            { "EF_M_jkt4", "", 5000, { "", "", -1 } },
            { "EF_M_jkt2_3", "", 5000, { "", "", -1 } },
            { "EF_M_jkt2_32", "", 5000, { "", "", -1 } },
            { "EF_M_jkt32_2", "", 5000, { "", "", -1 } },
            { "EF_M_jkt2_4", "", 5000, { "", "", -1 } },
            { "EF_M_jkt3", "", 5000, { "", "", -1 } },
            { "EF_M_jkt42", "", 5000, { "", "", -1 } },
            { "EF_M_jkt32", "", 5000, { "", "", -1 } },

        };
        headgear[] = {
            { "EF_HAT_BK", "", 1500, { "", "", -1 } },
            { "EF_HAT_BW", "", 1500, { "", "", -1 } },
            { "EF_HAT_CL", "", 1500, { "", "", -1 } },
            { "EF_HAT_PI", "", 8000, { "", "", -1 } },
            { "EF_HAT_SG", "", 1500, { "", "", -1 } },
        };
        goggles[] = {

            { "B_SHD_Calavera", "", 1000, { "", "", -1 } },
        };
        vests[] = {

        };
        backpacks[] = {
         { "TRYK_B_Carryall_wh", "", 200, { "", "", -1 } },
         { "TRYK_B_Carryall_blk", "", 200, { "", "", -1 } },   

        };
    };

    class women {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 1;
        paymentType = "cash";
        uniforms[] = {
            { "EF_FEM_2U", "", 250, { "", "", -1 } },
            { "EF_FEM_2BK", "", 250, { "", "", -1 } },
            { "EF_FEM_3_2", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9B", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9B2", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9B3", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9BL", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9K", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9K3", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9V", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9W", "", 250, { "", "", -1 } },
            { "EF_FEM_3_3B", "", 250, { "", "", -1 } },
            { "EF_FEM_3_3BL", "", 250, { "", "", -1 } },
            { "EF_FEM_3_3SG", "", 250, { "", "", -1 } },
            { "EF_FEM_3_8_BKBK", "", 250, { "", "", -1 } },
            { "EF_FEM_3_8_BKBK2", "", 250, { "", "", -1 } },
            { "EF_FEM_3_8_BWBK", "", 250, { "", "", -1 } },
            { "EF_FEM_3_8_BWGR", "", 250, { "", "", -1 } },
            { "EF_FEM_3_8_RDBK", "", 250, { "", "", -1 } },
            { "EF_FEM_3_8_2BKBKW", "", 250, { "", "", -1 } },
            { "EF_FEM_3_8_2BWGRW", "", 250, { "", "", -1 } },
            { "EF_FEM_3_8_2GRGRRC2", "", 250, { "", "", -1 } },
            { "EF_FEM_3_8_2RDBKW", "", 250, { "", "", -1 } },
            { "EF_FEM_3_3_PUNK", "", 250, { "", "", -1 } },
            { "EF_FEM_3_42", "", 250, { "", "", -1 } },
            { "EF_FEM_3_3LPBPS", "", 250, { "", "", -1 } },
            { "EF_FEM_3_3LPBP", "", 250, { "", "", -1 } },
            { "EF_FEM_3_3LPBR2", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9_2BKBK", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9_2BWGR", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9_2GRRD", "", 250, { "", "", -1 } },
            { "EF_FEM_3_5B", "", 250, { "", "", -1 } },
            { "EF_FEM_3_5BP", "", 250, { "", "", -1 } },
            { "EF_FEM_3_5RC", "", 250, { "", "", -1 } },
            { "EF_FEM_3", "", 250, { "", "", -1 } },
            { "EF_FEM_4", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9_2B", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9_2K2", "", 250, { "", "", -1 } },
            { "EF_FEM_4_72ADR", "", 250, { "", "", -1 } },
            { "EF_FEM_4_77", "", 250, { "", "", -1 } },
            { "EF_FEM_4_77R", "", 250, { "", "", -1 } },
            { "EF_FEM_4_74", "", 250, { "", "", -1 } },
            { "EF_FEM_4_7", "", 250, { "", "", -1 } },
            { "EF_FEM_4_72", "", 250, { "", "", -1 } },
            { "EF_FEM_4_72R", "", 250, { "", "", -1 } },
            { "EF_FEM_4_4B", "", 250, { "", "", -1 } },
            { "EF_FEM_72", "", 250, { "", "", -1 } },
            { "EF_FEM_73", "", 250, { "", "", -1 } },
            { "EF_FEM_7", "", 250, { "", "", -1 } },
            { "EF_FEM_8_2", "", 250, { "", "", -1 } },
            { "EF_FEM_8_3", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9_BK", "", 250, { "", "", -1 } },
            { "EF_FEM_3_9_BW", "", 250, { "", "", -1 } },
            
        };
        headgear[] = {

        };
        goggles[] = {
            //{ "B_SHD_Calavera", "", 1500, { "", "", -1 } },
        };
        vests[] = {

        };
        backpacks[] = {
            { "EF_FBAG_BK", "", 100, { "", "", -1 } },
            { "EF_FBAG_BL", "", 100, { "", "", -1 } },
            { "EF_FBAG_BW", "", 100, { "", "", -1 } },
            { "EF_FBAG_SG", "", 100, { "", "", -1 } },
            { "EF_FBAG_VL", "", 100, { "", "", -1 } },
            { "EF_FBAG_BK", "", 100, { "", "", -1 } },
            { "EF_FBAG_BK", "", 100, { "", "", -1 } },
            { "EF_FBAG_BK", "", 100, { "", "", -1 } },
            { "EF_FBAG_BK", "", 100, { "", "", -1 } },
            { "EF_FBAG_BK", "", 100, { "", "", -1 } },
            { "EF_FBAG_BK", "", 100, { "", "", -1 } },
            { "EF_FBAG_BK", "", 100, { "", "", -1 } },
            { "EF_FBAG_BK", "", 100, { "", "", -1 } },
            { "EF_FBAG_BK", "", 100, { "", "", -1 } },
        };
    };
};