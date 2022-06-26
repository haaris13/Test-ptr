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
      class bruce {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 1;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            //      ______________CIVIL______________
            { "EF_HM_B1", "", 400, { "", "", -1 } },
            { "EF_HM_BL1", "", 400, { "", "", -1 } },
            { "EF_HM_OD1", "", 400, { "", "", -1 } },
            { "EF_HM_SG1", "", 400, { "", "", -1 } },
            { "EF_HM_PP1", "", 400, { "", "", -1 } },
            { "EF_HM_B2", "", 400, { "", "", -1 } },
            { "EF_HM_BL2", "", 400, { "", "", -1 } },
            { "EF_HM_BL2", "", 400, { "", "", -1 } },
            { "EF_HM_OD2", "", 400, { "", "", -1 } },
            { "EF_HM_SG2", "", 400, { "", "", -1 } },
            { "EF_HM_PP2", "", 400, { "", "", -1 } },
            { "EF_MKJKT", "", 400, { "", "", -1 } },
            { "EF_M_jkt2", "", 400, { "", "", -1 } },
            { "EF_M_jkt22", "", 400, { "", "", -1 } },
            { "EF_M_jkt1", "", 400, { "", "", -1 } },
            { "EF_MKJKT2", "", 400, { "", "", -1 } },
            { "EF_M_jkt2_2", "", 400, { "", "", -1 } },
            { "EF_M_jkt2_22", "", 400, { "", "", -1 } },
            { "EF_M_jkt1_2", "", 400, { "", "", -1 } },
            { "EF_M_jkt2_3", "", 400, { "", "", -1 } },
            { "EF_M_jkt2_32", "", 400, { "", "", -1 } },
            { "EF_M_jkt1_3", "", 400, { "", "", -1 } },
            { "EF_M_jkt32_2", "", 400, { "", "", -1 } },
            { "EF_M_jkt2_4", "", 400, { "", "", -1 } },
            { "EF_M_jkt4", "", 400, { "", "", -1 } },
            { "EF_M_jkt3", "", 400, { "", "", -1 } },
            { "EF_M_jkt42", "", 400, { "", "", -1 } },
            { "EF_M_jkt32", "", 400, { "", "", -1 } },
            { "EF_HM_LPBPS", "", 400, { "", "", -1 } },
            { "EF_HM_LPBP", "", 400, { "", "", -1 } },
            { "EF_HM_LPBR", "", 400, { "", "", -1 } },
            { "EF_HM_LPBW", "", 400, { "", "", -1 } },
            { "EF_HM_LPB", "", 400, { "", "", -1 } },
            { "EF_HM_LPBL", "", 400, { "", "", -1 } },
            { "EF_HM_LPBPS2", "", 400, { "", "", -1 } },
            { "EF_HM_LPBP2", "", 400, { "", "", -1 } },
            { "EF_HM_LPBR2", "", 1200, { "", "", -1 } },
            { "EF_HM_LPBW2", "", 1200, { "", "", -1 } },
            { "EF_HM_LPB2", "", 400, { "", "", -1 } },
            { "EF_HM_LPBL2", "", 400, { "", "", -1 } },
            { "EF_MX1", "", 400, { "", "", -1 } },
            { "EF_suit_1", "", 400, { "", "", -1 } },
            { "EF_suit_2", "", 400, { "", "", -1 } },
            { "EF_suit_3", "", 500, { "", "", -1 } },
            { "EF_suit_4", "", 1000, { "", "", -1 } },
            { "EF_suit_5", "", 1000, { "", "", -1 } },
            { "EF_suit_6", "", 1000, { "", "", -1 } },
            { "EF_suit_7", "", 1000, { "", "", -1 } },
            { "EF_suit_8", "", 1000, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "", 600, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "", 600, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "", 600, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "", 600, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "", 600, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "", 600, { "", "", -1 } },
            { "U_BG_Guerilla3_1", "", 600, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW8", "", 4000, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW3", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW9", "", 1000, { "", "", -1 } },
            { "TRYK_U_B_PCUHsW7", "", 1000, { "", "", -1 } },
            { "TRYK_U_B_C02_Tsirt", "", 1000, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_BLK_R", "", 1000, { "", "", -1 } },
            { "U_C_man_sport_3_F", "", 1000, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_gry_R", "", 1000, { "", "", -1 } },
            { "TRYK_U_B_PCUGs_OD_R", "", 1000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BK", "", 1000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BL", "", 1000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_BWH", "", 1000, { "", "", -1 } },
            { "TRYK_shirts_DENIM_od", "", 400, { "", "", -1 } },
            { "TRYK_shirts_DENIM_R", "", 400, { "", "", -1 } },
            { "TRYK_shirts_DENIM_RED2", "", 400, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WH", "", 400, { "", "", -1 } },
            { "TRYK_shirts_DENIM_WHB", "", 400, { "", "", -1 } },
            { "TRYK_shirts_DENIM_ylb", "", 5000, { "", "", -1 } },
            { "TRYK_U_denim_hood_blk", "", 5000, { "", "", -1 } },
            { "TRYK_U_denim_hood_nc", "", 5000, { "", "", -1 } },
            { "TRYK_U_denim_jersey_blk", "", 5000, { "", "", -1 } },
            { "TRYK_U_denim_jersey_blu", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_BL", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_BLK", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_COY", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_wh", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_G_BL", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_G_BLK", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_G_COY", "", 5000, { "", "", -1 } },
            { "TRYK_U_taki_G_WH", "", 5000, { "", "", -1 } },
            { "TRYK_SUITS_BLK_F", "", 5000, { "", "", -1 } },
            { "TRYK_SUITS_BR_F", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BG_BK", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_RED_T_BG_BR", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BG_WH", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BK", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_RED_T_BR", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_WH", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BG_BK", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BG_WH", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BK", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_WH", "", 5000, { "", "", -1 } },
            { "U_BG_Guerilla2_2", "", 5000, { "", "", -1 } },
            { "U_BG_Guerilla2_3", "", 5000, { "", "", -1 } },
            { "U_BG_Guerilla2_1", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_4_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_5_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_1_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_3_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Bandit_2_F", "", 5000, { "", "", -1 } },
            { "U_C_Man_casual_4_F", "", 5000, { "", "", -1 } },
            { "U_C_Man_casual_5_F", "", 5000, { "", "", -1 } },
            { "U_C_Man_casual_6_F", "", 5000, { "", "", -1 } },
            { "EF_FEM_3_2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9B", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9B2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9B3", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9BL", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9BL2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9BL3", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9K", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9K2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9K3", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9R", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9R2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9R3", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9V", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9V2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9V3", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9W", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9W2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9W3", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3B", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3BL", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3OD", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3SG", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3PP", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3B2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_8_BKBK", "", 500, { "", "", -1 } },
            { "EF_FEM_3_8_BKBK2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_8_BWBK", "", 500, { "", "", -1 } },
            { "EF_FEM_3_8_BWGR", "", 500, { "", "", -1 } },
            { "EF_FEM_3_8_GRGR", "", 500, { "", "", -1 } },
            { "EF_FEM_3_8_GRBK", "", 500, { "", "", -1 } },
            { "EF_FEM_3_8_RDBK", "", 500, { "", "", -1 } },
            { "EF_FEM_3_8_RDRD", "", 500, { "", "", -1 } },
            { "EF_FEM_3_8_2BKBKBC", "", 500, { "", "", -1 } },
            { "EF_FEM_3_8_2BWGRW", "", 500, { "", "", -1 } },
            { "EF_FEM_3_8_2BWBKBWH", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3_PUNK", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3LPBPS", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3LPBP", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3LPBR", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3LPBW", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3LPB", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3LPBL", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3LPBPS2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3LPBP2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3LPBR2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_3LPBW2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_75", "", 500, { "", "", -1 } },
            { "EF_FEM_3_75R", "", 500, { "", "", -1 } },
            { "EF_FEM_3_75R2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_76", "", 500, { "", "", -1 } },
            { "EF_FEM_3_76R2", "", 500, { "", "", -1 } },
            { "EF_FEM_3_73", "", 500, { "", "", -1 } },
            { "EF_FEM_3_74", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9_2BKBK", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9_2BKRD", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9_2BKGR", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9_2BWBK", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9_2GRBK", "", 500, { "", "", -1 } },
            { "EF_FEM_3_9_2BLBK", "", 500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            //      ______________CIVIL______________
            { "H_Bandanna_blu", "", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 150, { "", "", -1 } },
            { "H_Bandanna_khk", "", 150, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "", 150, { "", "", -1 } },
            { "H_Bandanna_sand", "", 150, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 150, { "", "", -1 } },
            { "H_Bandanna_surfer_blk", "", 150, { "", "", -1 } },
            { "H_Bandanna_surfer_grn", "", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "", 150, { "", "", -1 } },
            { "H_Beret_blk", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_1_orange_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 150, { "", "", -1 } },
            { "V12_F1", "", 150, { "", "", -1 } },
            { "V12_F11", "", 150, { "", "", -1 } },
            { "V12_F12", "", 150, { "", "", -1 } },
            { "V12_F13", "", 150, { "", "", -1 } },
            { "V12_F14", "", 150, { "", "", -1 } },
            { "V12_F15", "", 150, { "", "", -1 } },
            { "V12_F16", "", 150, { "", "", -1 } },
            { "V12_F17", "", 150, { "", "", -1 } },
            { "V12_F18", "", 150, { "", "", -1 } },
            { "V12_CASQUE_INTEGRALE_BLANC", "", 150, { "", "", -1 } },
            { "V12_CASQUE_INTEGRALE_BLEU", "", 150, { "", "", -1 } },
            { "V12_CASQUE_INTEGRALE_NOIR", "", 150, { "", "", -1 } },
            { "V12_CASQUE_INTEGRALE_ORANGE", "", 150, { "", "", -1 } },
            { "V12_CASQUE_INTEGRALE_ROUGE", "", 150, { "", "", -1 } },
            { "V12_CROSS", "", 150, { "", "", -1 } },
            { "V12_CROSS1", "", 150, { "", "", -1 } },
            { "V12_CROSS2", "", 150, { "", "", -1 } },
            { "V12_CROSS3", "", 150, { "", "", -1 } },
            { "V12_CROSS4", "", 150, { "", "", -1 } },
            { "V12_CROSS5", "", 150, { "", "", -1 } },
            { "V12_CROSS6", "", 150, { "", "", -1 } },
            { "V12_CROSS7", "", 150, { "", "", -1 } },
            { "V12_CROSS8", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Cap_blk", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_surfer", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 150, { "", "", -1 } },
            { "H_Hat_blue", "", 150, { "", "", -1 } },
            { "H_Hat_checker", "", 150, { "", "", -1 } },
            { "H_Hat_grey", "", 150, { "", "", -1 } },
            { "H_Hat_tan", "", 150, { "", "", -1 } },
            { "H_Hat_brown", "", 150, { "", "", -1 } },
            { "H_Cap_bluH_Booniehat_khk", "", 150, { "", "", -1 } },
            { "H_Booniehat_khk", "", 150, { "", "", -1 } },
            { "H_Booniehat_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Booniehat_tan", "", 150, { "", "", -1 } },
            { "H_Booniehat_tna_F", "", 150, { "", "", -1 } },
            { "H_StrawHat", "", 150, { "", "", -1 } },
            { "H_StrawHat_dark", "", 150, { "", "", -1 } },
            { "H_Hat_Safari_olive_F", "", 150, { "", "", -1 } },
            { "H_Hat_Safari_sand_F", "", 150, { "", "", -1 } },
            { "EF_HOOD_KA_B", "", 150, { "", "", -1 } },
            { "EF_HOOD_KA_B2", "", 150, { "", "", -1 } },
            { "EF_BNE_BK", "", 150, { "", "", -1 } },
            { "EF_BNE_BL", "", 150, { "", "", -1 } },
            { "EF_BNE_BR", "", 150, { "", "", -1 } },
            { "EF_BNE_R", "", 150, { "", "", -1 } },
            { "EF_BNE_V", "", 150, { "", "", -1 } },
            { "EF_BNE_W", "", 150, { "", "", -1 } },
            { "EF_HAT_BK", "", 150, { "", "", -1 } },
            { "EF_HAT_BW", "", 150, { "", "", -1 } },
            { "EF_HAT_CL", "", 150, { "", "", -1 } },
            { "EF_HAT_PI", "", 150, { "", "", -1 } },
            { "EF_HAT_SG", "", 150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            //      ______________CIVIL______________
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
            { "EF_MSG_T", "", 20, { "", "", -1 } },
            { "EF_MSG_BK", "", 20, { "", "", -1 } },
            { "EF_MSG_BL", "", 20, { "", "", -1 } },
            { "EF_MSG_BW", "", 20, { "", "", -1 } },
            { "EF_MSG_C", "", 25, { "", "", -1 } },
            { "EF_MSG_G", "", 25, { "", "", -1 } },
            { "EF_MSG_O", "", 25, { "", "", -1 } },
            { "EF_MSG_P", "", 25, { "", "", -1 } },
            { "EF_MSG_R", "", 25, { "", "", -1 } },
            { "EF_MSG_V", "", 25, { "", "", -1 } },
            { "EF_MSG_W", "", 30, { "", "", -1 } },
            { "EF_MSG_Y", "", 50, { "", "", -1 } },
            { "EF_AC1", "", 100, { "", "", -1 } },
            { "EF_AC2", "", 125, { "", "", -1 } },
            { "EF_AC3", "", 150, { "", "", -1 } },
            { "EF_RG1", "", 150, { "", "", -1 } },
            { "EF_RG2", "", 20, { "", "", -1 } },
            { "EF_SC_C1", "", 20, { "", "", -1 } },
            { "EF_SC_CY1", "", 20, { "", "", -1 } },
            { "EF_SC_MG1", "", 20, { "", "", -1 } },
            { "EF_SC_P1", "", 25, { "", "", -1 } },
            { "EF_SC_TTB1", "", 25, { "", "", -1 } },
            { "EF_SC_TTBR1", "", 25, { "", "", -1 } },
            { "EF_SC_TTBRK1", "", 25, { "", "", -1 } },
            { "EF_SC_PP1", "", 25, { "", "", -1 } },
            { "EF_SC_W1", "", 25, { "", "", -1 } },
            { "EF_SC_C2", "", 30, { "", "", -1 } },
            { "EF_SC_CY2", "", 50, { "", "", -1 } },
            { "EF_SC_MG2", "", 100, { "", "", -1 } },
            { "EF_SC_P2", "", 125, { "", "", -1 } },
            { "EF_SC_TTB2", "", 150, { "", "", -1 } },
            { "EF_SC_TTBR2", "", 150, { "", "", -1 } },
            { "EF_SC_TTBRK2", "", 150, { "", "", -1 } },
            { "EF_SC_PP2", "", 150, { "", "", -1 } },
            { "EF_SC_W2", "", 150, { "", "", -1 } },
            { "EF_PG1", "", 150, { "", "", -1 } },
            { "EF_PG2", "", 150, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 150, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 150, { "", "", -1 } },
            { "G_Shades_Blue", "", 150, { "", "", -1 } },
            { "G_Shades_Black", "", 150, { "", "", -1 } },
            { "G_Shades_Red", "", 150, { "", "", -1 } },
            { "G_Shades_Green", "", 150, { "", "", -1 } },
            { "G_Squares_Tinted", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Sport_Red", "", 150, { "", "", -1 } },
            { "G_Sport_Checkered", "", 150, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 150, { "", "", -1 } },
            { "G_Sport_Blackred", "", 150, { "", "", -1 } },
            { "G_Squares", "", 150, { "", "", -1 } },
            { "G_Spectacles", "", 150, { "", "", -1 } },
            { "G_Aviator", "", 150, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },

            { "V_BandollierB_cbr", "", 2000, { "", "", -1 } }, //rajouté par alharis et cody
            { "V_BandollierB_khk", "", 2000, { "", "", -1 } }, //rajouté par alharis et cody
            { "V_BandollierB_oli", "", 2000, { "", "", -1 } }, //rajouté par alharis et cody
            { "V_BandollierB_rgr", "", 2000, { "", "", -1 } }, //rajouté par alharis et cody
            { "V_BandollierB_ghex_F", "", 2000, { "", "", -1 } }, //rajouté par alharis et cody
            { "V_BandollierB_blk", "", 2000, { "", "", -1 } } //rajouté par alharis et cody


        };
        backpacks[] = {
            //      ______________CIVIL______________
            //      ----------AssaultPack------------
            { "B_AssaultPack_cbr", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_Kerry", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_ocamo", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 1000, { "", "", -1 } },
            { "milgp_bp_Breacher_cb", "", 1000, { "", "", -1 } },
            { "milgp_bp_Breacher_khk", "", 1000, { "", "", -1 } },
            { "milgp_bp_hydration_cb", "", 1000, { "", "", -1 } },
            { "milgp_bp_hydration_khk", "", 1000, { "", "", -1 } },
            { "milgp_bp_Tomahawk_cb", "", 1000, { "", "", -1 } },
            { "milgp_bp_Tomahawk_khk", "", 1000, { "", "", -1 } },
            { "milgp_b_patrol_01_cb", "", 1000, { "", "", -1 } },
            { "milgp_b_patrol_01_khk", "", 1000, { "", "", -1 } },
            { "milgp_b_patrol_01_rgr", "", 1000, { "", "", -1 } },
            //      -------------FieldPack-----------
            { "B_FieldPack_cbr", "", 2000, { "", "", -1 } },
            { "B_FieldPack_ghex_F", "", 2000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 2000, { "", "", -1 } },
            { "B_FieldPack_khk", "", 2000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 2000, { "", "", -1 } },
            { "B_FieldPack_blk", "", 2000, { "", "", -1 } },
            { "B_FieldPack_oli", "", 2000, { "", "", -1 } },
            //      -------------TacticalPack--------------
            { "B_TacticalPack_ocamo", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_mcamo", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_blk", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_rgr", "", 3000, { "", "", -1 } },
            { "B_HuntingBackpack", "", 3000, { "", "", -1 } },
            //      -------------Viper leger--------------
            { "B_ViperLightHarness_hex_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_khk_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_oli_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_ghex_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_blk_F", "", 4000, { "", "", -1 } },
            //      -------------Kitbag--------------
            { "B_Kitbag_cbr", "", 5000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 5000, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 5000, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 5000, { "", "", -1 } },
            { "rhssaf_kitbag_smb", "", 5000, { "", "", -1 } },
            //      -----------------Viper---------------------
            { "B_ViperHarness_hex_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_oli_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 6000, { "", "", -1 } },
            //      -------------Carryall---------------
            { "B_Carryall_ghex_F", "", 7000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7000, { "", "", -1 } },
            { "B_Carryall_oli", "", 7000, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7000, { "", "", -1 } },
            { "B_Carryall_khk", "", 7000, { "", "", -1 } },
            { "B_Parachute", "", 500, { "", "", -1 } }
         };
      };

      class clothing_ent_farm {
        title = "STR_Shops_clothing_ent_farm";
        license = "";
        side = "civ";
        legal = 1;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            //      ______________CIVIL______________
            { "milgp_u_fleece_grey_g3_field_pants_atacsau", "", 40000, { "", "", -1 } },
        };
        headgear[] = {};
        goggles[] = {};
        vests[] = {};
        backpacks[] = {
            { "EF_SQBAG_GRAY", "", 200000, { "", "", -1 } }
         };
      };

      class mafia_clothing {
        title = "STR_Shops_Bruce";
        license = "mafia";
        side = "civ";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 500, { "", "", -1 } },
            { "U_NikosAgedBody", "", 1000, { "", "", -1 } }, // chemise cravate rose
            { "U_NikosBody", "", 2000, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BG_WH", "", 2000, { "", "", -1 } },
            { "TRYK_U_B_Denim_T_BG_BK", "", 2000, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BG_BK", "", 2000, { "", "", -1 } },
            { "TRYK_U_B_BLK_T_BK", "", 2000, { "", "", -1 } },
            { "TRYK_U_B_RED_T_BG_BR", "", 2000, { "", "", -1 } },
            { "TRYK_SUITS_BR_F", "", 5000, { "", "", -1 } },
            { "TRYK_SUITS_BLK_F", "", 5000, { "", "", -1 } },
            { "U_B_Wetsuit", "", 5000, { "", "", -1 } },
            { "U_I_Wetsuit", "", 5000, { "", "", -1 } },  
            { "TRYK_U_B_PCUHsW8", "", 5000, { "", "", -1 } }, // rajout alharis cody 
            { "TRYK_U_B_PCUHsW3", "", 5000, { "", "", -1 } },// rajout alharis cody 
            { "TRYK_U_B_BLKBLK_CombatUniform", "", 5000, { "", "", -1 } },// rajout alharis cody 
            { "TRYK_U_B_BLKBLK_CombatUniform", "", 5000, { "", "", -1 } },// rajout alharis cody 
            { "TRYK_U_B_BLKBLK_R_CombatUniform", "", 5000, { "", "", -1 } },// rajout alharis cody 
            { "TRYK_U_B_BLKTAN_CombatUniform", "", 5000, { "", "", -1 } },// rajout alharis cody 
            { "TRYK_U_B_BLTAN_T", "", 5000, { "", "", -1 } },// rajout alharis cody 
            { "TRYK_U_B_BLK", "", 5000, { "", "", -1 } },// rajout alharis cody  
            { "TRYK_OVERALL_SAGE_BLKboots_nk_blk", "", 5000, { "", "", -1 } },// rajout alharis cody  
            { "TRYK_U_B_PCUGs_BLK_R", "", 5000, { "", "", -1 } },// rajout alharis cody  
            { "TRYK_U_B_wh_blk_Rollup_CombatUniform", "", 5000, { "", "", -1 } },// rajout alharis cody  
            { "TRYK_U_pad_hood_odBK", "", 5000, { "", "", -1 } },// rajout alharis cody  
            { "TRYK_U_hood_mc", "", 5000, { "", "", -1 } }, // rajout alharis cody  
            { "U_O_Wetsuit", "", 5000, { "", "", -1 } }
        };
        headgear[] = {
            //      ______________CIVIL______________
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            //      -------------Bandanna---------------
            { "Masque_archNemesis", "", 150, { "", "", -1 } },
            { "Masque_Arnold", "", 150, { "", "", -1 } },
            { "Masque_Aubrey", "", 150, { "", "", -1 } },
            { "Masque_Chains", "", 150, { "", "", -1 } },
            { "Masque_Clover", "", 150, { "", "", -1 } },
            { "V12_CORVO", "", 150, { "", "", -1 } },
            { "Masque_Fish", "", 150, { "", "", -1 } },
            { "Masque_Macrilleuse", "", 150, { "", "", -1 } },
            { "Masque_Orc", "", 150, { "", "", -1 } },
            { "Masque_speedRunner", "", 150, { "", "", -1 } },
            { "TAC_SF10", "", 150, { "", "", -1 } },
            { "H_Bandanna_blu", "", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 150, { "", "", -1 } },
            { "H_Bandanna_khk", "", 150, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "", 150, { "", "", -1 } },
            { "H_Bandanna_sand", "", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "", 150, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 150, { "", "", -1 } },
            { "H_Bandanna_surfer_blk", "", 150, { "", "", -1 } },
            { "H_Bandanna_surfer_grn", "", 150, { "", "", -1 } },
            { "H_Bandanna_camo", "", 150, { "", "", -1 } },
            { "H_Bandanna_khk_hs", "", 150, { "", "", -1 } },
            { "H_BandMask_blk", "", 150, { "", "", -1 } },
            //      -------------Casquettes--------------
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "", 150, { "", "", -1 } },
            { "H_Cap_blk_ION", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Cap_tan_specops_US", "", 150, { "", "", -1 } },
            { "H_Cap_usblack", "", 150, { "", "", -1 } },
            { "H_Cap_blk", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_oli_hs", "", 150, { "", "", -1 } },
            { "H_Cap_press", "", 150, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "", 150, { "", "", -1 } },
            { "H_Cap_surfer", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 150, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 150, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            //      ------Casquettes et Headphones-------
            { "H_Cap_marshal", "", 150, { "", "", -1 } },
            { "H_Cap_headphones", "", 150, { "", "", -1 } },
            { "V12_CASQUETTE_CAMO", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "V12_CASQUETTE_GUCCI2", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "V12_CASQUETTE_NOIR", "", 150, { "", "", -1 } }, // rajout alharis cody  
            //      -------------Chapeaux--------------
            { "H_Hat_blue", "", 150, { "", "", -1 } },
            { "H_Hat_camo", "", 150, { "", "", -1 } },
            { "H_Hat_checker", "", 150, { "", "", -1 } },
            { "H_Hat_grey", "", 150, { "", "", -1 } },
            { "H_Hat_tan", "", 150, { "", "", -1 } },
            { "H_Hat_brown", "", 150, { "", "", -1 } },
            { "H_TurbanO_blk", "", 150, { "", "", -1 } },
            { "H_StrawHat", "", 150, { "", "", -1 } },
            { "H_StrawHat_dark", "", 150, { "", "", -1 } }, 
            { "VSM_Beanie_Black", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "VSM_Beanie_OD", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "VSM_Beanie_tan", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "VSM_BackwardsHat_Peltor_US", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "V12_BONNET_CAMO", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "V12_BONNET_CAMO1", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "V12_BONNET_CAMO2", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "V12_CASQUETTE_CAMO", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "V12_BONNET_CAMO1", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "V12_ANONY", "", 150, { "", "", -1 } }, // rajout alharis cody  
            { "V12_CORVO", "", 150, { "", "", -1 } }, // rajout alharis cody  

            //      -------------Bonniehat--------------
            { "H_Booniehat_mcamo", "", 500, { "", "", -1 } },
            { "H_Booniehat_oli", "", 500, { "", "", -1 } },
            { "H_Booniehat_tan", "", 500, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 500, { "", "", -1 } },
            { "H_Booniehat_tna_F", "", 500, { "", "", -1 } },
            { "H_Booniehat_khk", "", 500, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 500, { "", "", -1 } },
            //      -------------Watchcap--------------
            { "H_Watchcap_blk", "", 500, { "", "", -1 } },
            { "H_Watchcap_camo", "", 500, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 500, { "", "", -1 } },
            { "H_Watchcap_khk", "", 500, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 500, { "", "", -1 } },
            //      ----------------------------------
            { "H_Helmet_Skate", "", 500, { "", "", -1 } },
            //      ----------Casques Racing---------------
            { "H_RacingHelmet_1_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_orange_F", "", 5000, { "", "", -1 } }
        };
        goggles[] = {
            //      ______________CIVIL______________
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            //      --------------Shades--------------
            { "G_Shades_Black", "", 300, { "", "", -1 } },
            { "G_Shades_Blue", "", 300, { "", "", -1 } },
            { "G_Shades_Green", "", 300, { "", "", -1 } },
            { "G_Shades_Red", "", 300, { "", "", -1 } },
            { "G_Lady_Blue", "", 500, { "", "", -1 } },
            //      --------------Sport--------------
            { "G_Sport_Red", "", 300, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 300, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 300, { "", "", -1 } },
            { "G_Sport_Checkered", "", 300, { "", "", -1 } },
            { "G_Sport_Blackred", "", 300, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 300, { "", "", -1 } },
            //      -------------Spectacles--------------
            { "G_Spectacles", "", 300, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 300, { "", "", -1 } },
            //      -------------Squares--------------
            { "G_Squares", "", 300, { "", "", -1 } },
            { "G_Squares_Tinted", "", 300, { "", "", -1 } },
            { "G_Lowprofile", "", 300, { "", "", -1 } },
            { "G_Aviator", "", 3500, { "", "", -1 } },
            //      ______________DIVING______________
            { "G_Diving", "", 500, { "", "", -1 } },
            { "G_I_Diving", "", 500, { "", "", -1 } },
            { "G_O_Diving", "", 500, { "", "", -1 } },
            { "G_B_Diving", "", 500, { "", "", -1 } },
            //      ______________MAFIA______________
            //      -------------Tactical----------------
            { "G_Tactical_Clear", "", 500, { "", "", -1 } },
            { "G_Tactical_Black", "", 500, { "", "", -1 } },
            //      -------------Combat----------------
            { "G_Combat", "", 500, { "", "", -1 } },
            { "G_Combat_Goggles_tna_F", "", 500, { "", "", -1 } },
            //      -------------Bandanna----------------
            { "G_Bandanna_blk", "", 2000, { "", "", -1 } },
            { "G_Bandanna_khk", "", 2000, { "", "", -1 } },
            { "G_Bandanna_oli", "", 2000, { "", "", -1 } },
            { "G_Bandanna_tan", "", 2000, { "", "", -1 } },
            { "G_Bandanna_shades", "", 2000, { "", "", -1 } },
            { "G_Bandanna_sport", "", 2000, { "", "", -1 } },
            { "G_Bandanna_beast", "", 2000, { "", "", -1 }},
            { "G_Bandanna_aviator", "", 2000, { "", "", -1 } },
            //      --------------Balaclava------------------
            { "G_Balaclava_oli", "", 2000, { "", "", -1 } },
            { "G_Balaclava_blk", "", 2000, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 2000, { "", "", -1 } },
            { "G_Balaclava_combat", "", 2000, { "", "", -1 } }
        };
        vests[] = {
            //      ______________CIVIL______________
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            //      ------------Ceinture--------------
            { "V_Rangemaster_belt", "", 1000, { "", "", -1 } },
            //      -----------Bandouliere--------------
            { "V_BandollierB_cbr", "", 2000, { "", "", -1 } },
            { "V_BandollierB_khk", "", 2000, { "", "", -1 } },
            { "V_BandollierB_oli", "", 2000, { "", "", -1 } },
            { "V_BandollierB_rgr", "", 2000, { "", "", -1 } },
            { "V_BandollierB_ghex_F", "", 2000, { "", "", -1 } },
            { "V_BandollierB_blk", "", 2000, { "", "", -1 } },
            { "V_TacChestrig_cbr_F", "", 3000, { "", "", -1 } },
            { "V_TacChestrig_oli_F", "", 3000, { "", "", -1 } },
            { "V_TacChestrig_grn_F", "", 3000, { "", "", -1 } },
            { "V_Chestrig_khk", "", 4000, { "", "", -1 } },
            { "V_Chestrig_oli", "", 4000, { "", "", -1 } },
            { "V_Chestrig_rgr", "", 4000, { "", "", -1 } },
            { "V_Chestrig_blk", "", 4000, { "", "", -1 } },
            //      -----------Grenadier--------------
            { "V_HarnessOGL_brn", "", 5000, { "", "", -1 } },
            { "V_HarnessOGL_gry", "", 5000, { "", "", -1 } },
            //{ "V_HarnessOGL_ghex_F", "", 5000, { "", "", -1 } },
            //      -----------------------------------
            { "V_HarnessO_brn", "", 6000, { "", "", -1 } },
            { "V_HarnessO_gry", "", 6000, { "", "", -1 } },
            { "V_TacVest_blk", "", 30000, { "", "", -1 } },
            { "rhssaf_vest_md98_digital", "", 40000, { "", "", -1 } },
            { "rhssaf_vest_md98_md2camo", "", 40000, { "", "", -1 } },
            { "rhssaf_vest_md98_woodland", "", 40000, { "", "", -1 } },
            { "rhssaf_vest_md98_rifleman", "", 40000, { "", "", -1 } },
            { "TRYK_V_Bulletproof_BLK", "", 50000, { "", "", -1 } },
            { "V_HarnessO_ghex_F", "", 6000, { "", "", -1 } },
            //      ---------------Petit---------------
            { "V_TacVest_brn", "", 20000, { "", "", -1 } },
            { "V_TacVest_khk", "", 20000, { "", "", -1 } },
            { "V_TacVest_camo", "", 20000, { "", "", -1 } },
            { "V_TacVest_oli", "", 20000, { "", "", -1 } },
            { "V_I_G_resistanceLeader_F", "", 20000, { "", "", -1 } },
            //      ----------------Press--------------
            { "V_Press_F", "", 100000, { "", "", -1 } },
            //      ______________DIVING______________
            //      ----------Respirateurs--------------
            { "V_RebreatherB", "", 10000, { "", "", -1 } },
            { "V_RebreatherIA", "", 10000, { "", "", -1 } },
            { "V_RebreatherIR", "", 10000, { "", "", -1 } }
        };
        backpacks[] = {
            //      ______________CIVIL______________
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            //      -------------AssaultPack--------------
            { "B_AssaultPack_cbr", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_Kerry", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_ocamo", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 1000, { "", "", -1 } },
            //      -------------FieldPack--------------
            { "B_FieldPack_cbr", "", 2000, { "", "", -1 } },
            { "B_FieldPack_ghex_F", "", 2000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 2000, { "", "", -1 } },
            { "B_FieldPack_khk", "", 2000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 2000, { "", "", -1 } },
            { "B_FieldPack_blk", "", 2000, { "", "", -1 } },
            { "B_FieldPack_oli", "", 2000, { "", "", -1 } },
            //      -------------TacticalPack--------------
            { "B_TacticalPack_ocamo", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_mcamo", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_blk", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_rgr", "", 3000, { "", "", -1 } },
            { "B_HuntingBackpack", "", 3000, { "", "", -1 } },
            //      -------------Viper leger--------------
            { "B_ViperLightHarness_hex_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_khk_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_oli_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_ghex_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_blk_F", "", 4000, { "", "", -1 } },
            //      -------------Kitbag--------------
            { "B_Kitbag_cbr", "", 5000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 5000, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 5000, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 5000, { "", "", -1 } },
            //      -----------------Viper---------------------
            { "B_ViperHarness_hex_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_oli_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 6000, { "", "", -1 } },
            //      -------------Carryall---------------
            { "B_Carryall_ghex_F", "", 7000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7000, { "", "", -1 } },
            { "B_Carryall_oli", "", 7000, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7000, { "", "", -1 } },
            { "B_Carryall_khk", "", 7000, { "", "", -1 } },
            //      --------------------------------------
            { "B_Parachute", "", 500, { "", "", -1 } }
         };
      };

      class gun_clothing {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 1;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "EF_SHF_BK", "", 7000, { "", "", -1 } },
            { "EF_SHF_BW", "", 7000, { "", "", -1 } },
            { "EF_SHF_PK", "", 7000, { "", "", -1 } },
            { "EF_SH_BK", "", 7000, { "", "", -1 } },
            { "EF_SH_BW", "", 7000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "ace_gunbag", "", 10000, { "", "", -1 } },
            { "ace_gunbag_Tan", "", 10000, { "", "", -1 } }
        };
      };

class shop_casino {
        title = "STR_Shops_casino";
        license = "";
        side = "civ";
        legal = 1;
          uniforms[] = {
             { "NONE", "Remove Uniform", 0, { "", "", -1 } },
             { "EF_FEM_3_9_BK", "", 4000, { "", "", -1 } }, // tenue femme
             { "EF_FEM_3_9_BW", "", 4000, { "", "", -1 } }, // tenue femme
             { "EF_FEM_3_9_GR", "", 4000, { "", "", -1 } }, // tenue femme
             { "EF_FEM_3_9_BL", "", 4000, { "", "", -1 } } // tenue femme
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
               
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } }

        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
            
        
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
             { "EF_FBAG_SL_BK", "", 10000, { "", "", -1 } }
        };
      };

class shop_press {
        title = "STR_Item_press";
        license = "";
        side = "civ";
        legal = 1;
          uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
          
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
               { "H_Cap_press", "", 2000, { "", "", -1 } },
                 { "H_PASGT_basic_blue_press_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } }
           

        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Press_F", "", 7000, { "", "", -1 } }
        
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
            
        };
      };

        class gun_brinks {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 1;
          uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "TRYK_U_B_wh_blk_Rollup_CombatUniform", "", 5000, { "", "", -1 } },
            { "U_Marshal", "", 5000, { "", "", -1 } },
            { "U_C_FormalSuit_01_gray_F", "", 5000, { "", "", -1 } }
           
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "milgp_f_face_shield_goggles_shemagh_BLK", "", 7000, { "", "", -1 } },
              { "milgp_f_face_shield_shemagh_BLK", "", 7000, { "", "", -1 } }

        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "RYK_V_Bulletproof_BL", "", 7000, { "", "", -1 } },
            { "TRYK_V_Bulletproof", "", 7000, { "", "", -1 } },
            { "TRYK_V_Bulletproof_BLK", "", 7000, { "", "", -1 } },
            { "TRYK_V_IOTV_BLK", "", 7000, { "", "", -1 } }
        
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Messenger_Gray_F", "", 10000, { "", "", -1 } },
            { "TAC_BP_KAR_B", "", 10000, { "", "", -1 } },
            { "B_LegStrapBag_black_F", "", 10000, { "", "", -1 } },
            { "TAC_MTAP_BK2", "", 10000, { "", "", -1 } }

        };
      };

       class damocles {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 1;
          uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "JB_Treillis", "", 5000, { "", "", -1 } },
            { "JB_Treillis_TShirt", "", 5000, { "", "", -1 } },
            { "JB_Treillis_TShirt_Dive", "", 5000, { "", "", -1 } }
           
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "JB_SHEMAGH_BLACK", "", 150, { "", "", -1 } },
            { "JB_SHEMAGH_OD", "", 150, { "", "", -1 } }

        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "JB_SHEMAGH_BLACK_GLASSES", "", 7000, { "", "", -1 } },
             { "JB_SHEMAGH_OD_GLASSES", "", 7000, { "", "", -1 } },
             { "JB_ESS_HEAR_BLACK", "", 7000, { "", "", -1 } }
              

        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "JB_Vest", "", 7000, { "", "", -1 } }
          
        
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "JB_Bag", "", 10000, { "", "", -1 } }
         

        };
      };

    class psylium {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 1;
          uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_SLT_T_RS_1", "", 7500, { "", "", -1 } }
           

        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "SLT_B_RS_1", "", 10000, { "", "", -1 } },
             { "SLT_B_RS_2", "", 10000, { "", "", -1 } },
              { "SLT_B_RS_3", "", 10000, { "", "", -1 } }

        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "TRYK_kio_balaclava_BLK_ear", "", 7000, { "", "", -1 } }


        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_SLT_RS_1_P4", "", 7000, { "", "", -1 } }


        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "SLT_S_RS_2", "", 7000, { "", "", -1 } }

        };
    };

    class bratva {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 1;
          uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "milgp_u_fleece_rgr_g3_field_pants_rgr", "", 5000, { "", "", -1 } },
            { "EF_FEM_4_2B2", "", 5000, { "", "", -1 } }

        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "UBM_Mask_Black_01", "", 10000, { "", "", -1 } },  
            { "TAC_K6", "", 10000, { "", "", -1 } }


        };
        goggles[] = {
             { "GM_boneface_woodland", "", 10000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "TAC_V_Sheriff_BA_TB", "", 7000, { "", "", -1 } },
            { "TRYK_V_ArmorVest_green", "", 10000, { "", "", -1 } }


        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "TRYK_B_Carryall_blk", "", 7000, { "", "", -1 } }

        };
    };

    /** ********************************************************************************************
        START : SHOP COP (Avant la demande de refonte proposition de KarmaThomas)
    ********************************************************************************************* */   
   class cop {
        title = "STR_Shops_Bruce";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "PI_TENUE_NIGHT", "", 150, { "life_coplevel", "SCALAR", 1 } },
            { "PI_TENUE_POLO", "", 150, { "life_coplevel", "SCALAR", 1 } },
            { "PI_TENUE_PULL", "", 150, { "life_coplevel", "SCALAR", 1 } },
            //{ "jack_tshirt_uniform_3", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "jack_plongeur_uniform_1", "", 150, { "", "", -1 } } //tenue plongée        
           
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "PI_Beret", "", 100, { "life_coplevel", "SCALAR", 1 } }, //bertet standard
            //{ "SH_Beret_Brigadier", "", 100, { "life_coplevel", "SCALAR", 2 } },
            //{ "SH_Beret_BrigadierC", "", 100, { "life_coplevel", "SCALAR", 3 } },
            //{ "SH_Beret_Marechal", "", 100, { "life_coplevel", "SCALAR", 4 } },
            //{ "SH_Beret_Gendarme", "", 100, { "life_coplevel", "SCALAR", 5 } },
            { "PI_Beret_off", "", 100, { "life_coplevel", "SCALAR", 6 } }, //beret officier
            //{ "SH_Beret_Adjudant", "", 100, { "life_coplevel", "SCALAR", 7 } },
            //{ "SH_Beret_AdjudantC", "", 100, { "life_coplevel", "SCALAR", 8 } },
            //{ "SH_Beret_Major", "", 100, { "life_coplevel", "SCALAR", 9 } },
            //{ "SH_Beret_SLieutenant", "", 100, { "life_coplevel", "SCALAR", 10 } },
            //{ "SH_Beret_Lieutenant", "", 100, { "life_coplevel", "SCALAR", 11 } },
            //{ "SH_Beret_Capitaine", "", 100, { "life_coplevel", "SCALAR", 12 } },
            //{ "SH_Beret_Commandant", "", 100, { "life_coplevel", "SCALAR", 13 } },
            //{ "SH_Beret_LieutenantC", "", 100, { "life_coplevel", "SCALAR", 14 } },
            //{ "SH_Beret_Colonel", "", 100, { "life_coplevel", "SCALAR", 15 } },
            { "casquette_police_1", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "casque_crs", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "jack_casque_helico_gend_2", "", 100, { "life_coplevel", "SCALAR", 1 } }
           
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "TRYK_kio_balaclava_BLK", "", 150, { "", "", -1 } },
            { "G_B_Diving", "", 150, { "", "", -1 } },
            { "V12_POLICE", "", 25, { "life_coplevel", "SCALAR", 1 } }, //brassard police
			{ "G_Squares", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes carre
			{ "G_Squares_Tinted", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes carre de soleil
			{ "G_Aviator", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes aviateur
			{ "V12_LUNETTE_BLANCHE", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes soleil blanche
			{ "EF_RG2", "", 25, { "life_coplevel", "SCALAR", 1 } } //lunettes ronde soleil
            
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "PI_GILET_GDLP", "", 150, { "life_coplevel", "SCALAR", 1 } },
            { "PI_GILET_SBrigadier", "", 150, { "life_coplevel", "SCALAR", 2} },
            { "PI_GILET_Brigadier", "", 150, { "life_coplevel", "SCALAR", 3 } },
            { "PI_GILET_BrigadierChef", "", 150, { "life_coplevel", "SCALAR", 4 } },
            { "PI_GILET_Major", "", 150, { "life_coplevel", "SCALAR", 5 } },
            { "PI_GILET_ELieutenant", "", 150, { "life_coplevel", "SCALAR", 6} },
            { "PI_GILET_Lieutenant", "", 150, { "life_coplevel", "SCALAR", 7 } },
            { "PI_GILET_Capitaine", "", 150, { "life_coplevel", "SCALAR", 8 } },
            { "PI_GILET_Commandant", "", 150, { "life_coplevel", "SCALAR", 9 } },
            { "PI_GILET_Commissaire", "", 150, { "life_coplevel", "SCALAR", 10} },
            //{ "SH_Gilet_Lieutenant", "", 150, { "life_coplevel", "SCALAR", 11 } },
            //{ "SH_Gilet_Capitaine", "", 150, { "life_coplevel", "SCALAR", 12 } },
            //{ "SH_Gilet_Commandant", "", 150, { "life_coplevel", "SCALAR", 13 } },
            //{ "SH_Gilet_LieutenantC", "", 150, { "life_coplevel", "SCALAR", 14} },
            //{ "SH_Gilet_Colonel", "", 150, { "life_coplevel", "SCALAR", 15 } },
            //{ "jack_gilet_lourd_gend_1", "", 150, { "life_coplevel", "SCALAR", 1} },
            { "jack_recycleur_gend", "", 150, { "life_coplevel", "SCALAR", 1 } },
            { "jack_ceinturon_gend_1", "", 150, { "life_coplevel", "SCALAR", 1 } }
            
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "jack_sac_invi", "PNT", 500 , { "life_coplevel", "SCALAR", 1 } },
            { "chien", "PNT", 500 , { "life_coplevel", "SCALAR", 10 } }
        };
      };

class cop_gign {
        title = "GIGN";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            //{ "jack_4s_uniform_2", "", 150, { "life_coplevel", "SCALAR", 2 } },
            //{ "jack_4s_uniform_6", "", 150, { "life_coplevel", "SCALAR", 2 } }

        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "gnd_casque_leger_noir", "", 100, { "life_coplevel", "SCALAR", 2 } }
           
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "TRYK_kio_balaclava_BLK", "", 100, { "life_coplevel", "SCALAR", 2 } }

          
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "PI_GILET_GIP", "", 150, { "life_coplevel", "SCALAR", 2 } }

        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },          
            { "jack_sac_invi", "PNT", 5000 , { "life_coplevel", "SCALAR", 1 } }
        };
      };


class cop_Tireur_Heliporte {
        title = "Tireur_Heliporte";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            //{ "uniforme_COMBAT_Cam", "", 150, { "life_coplevel", "SCALAR", 2 } }
          
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "jack_casque_helico_gend_2", "", 100, { "life_coplevel", "SCALAR", 1 } }
            
           
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } }
          
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
         
           
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },          
            { "jack_sac_invi", "PNT", 500 , { "life_coplevel", "SCALAR", 1 } }
        };
      };


class cop_EDSR {
        title = "EDSR";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            //{ "jack_bmo_uniform_1", "", 100, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "jack_casque_bmo_gend_1", "", 100, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },          
            { "jack_sac_invi", "PNT", 500 , { "life_coplevel", "SCALAR", 1 } }
        };
};


class cop_Tireur_Precision {
        title = "Tireur_Precision";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_O_T_FullGhillie_tna_F", "", 100, { "life_coplevel", "SCALAR", 1 } } 
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },          
            { "jack_sac_invi", "PNT", 500 , { "life_coplevel", "SCALAR", 1 } }
        };
};

class cop_BR {
        title = "BR";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "TRYK_U_B_BLTAN_T", "", 150, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_shirts_DENIM_RED2", "", 150, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_U_denim_hood_blk", "", 150, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_U_taki_wh", "", 150, { "life_coplevel", "SCALAR", 1 } },
            { "U_C_FormalSuit_01_tshirt_gray_F", "", 150, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_U_B_PCUHsW3", "", 150, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "division_woolhat_01", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "TRYK_R_CAP_BLK", "", 100, { "life_coplevel", "SCALAR", 1 } }

        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "TRYK_V_Bulletproof_BLK", "", 150, { "life_coplevel", "SCALAR", 2 } }

        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "jack_sac_invi", "", 150 , { "life_coplevel", "SCALAR", 1 } }

        };
      };


class cop_PSIG {
        title = "PSIG";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            //{ "jack_4s_uniform_5", "", 150, { "life_coplevel", "SCALAR", 1 } }

        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "gnd_casque_leger_noir", "", 100, { "life_coplevel", "SCALAR", 1 } }

        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "TRYK_kio_balaclava_BLK", "", 100, { "life_coplevel", "SCALAR", 1 } }

        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "PI_GILET_GIP", "", 150, { "life_coplevel", "SCALAR", 2 } }

        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "jack_sac_invi", "", 150 , { "life_coplevel", "SCALAR", 1 } }

        };
      };

    class cop_MOBILE {
        title = "MOBILE";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            //{ "jack_4s_uniform_3", "", 150, { "life_coplevel", "SCALAR", 1 } }

        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "casque_gn", "", 100, { "life_coplevel", "SCALAR", 1 } }

        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } }

        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            //{ "jack_gilet_lourd_gend_3", "", 150, { "life_coplevel", "SCALAR", 2 } }

        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "jack_sac_invi", "", 150 , { "life_coplevel", "SCALAR", 1 } }

        };
      };

      class cop_BRI {
        title = "BRI";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tee-shirt rayé
			{ "U_C_Poloshirt_tricolour", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tee-shirt tricouleur
			{ "U_C_Poor_1", "", 100, { "life_coplevel", "SCALAR", 1 } }, //vieu vetement
			{ "U_I_C_Soldier_Bandit_2_F", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tee-shirt tete de mort
			{ "EF_M_jkt3", "", 100, { "life_coplevel", "SCALAR", 1 } }, //manteau noir
			{ "EF_suit_Y3", "", 100, { "life_coplevel", "SCALAR", 1 } }, //costume gris
			{ "CR_TargetShirt", "", 100, { "life_coplevel", "SCALAR", 1 } } //tee-shirt cible
        };

        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_gry", "", 100, { "life_coplevel", "SCALAR", 1 } }, //bandana gris
			{ "H_Hat_grey", "", 100, { "life_coplevel", "SCALAR", 1 } }, //chapeau gris
			{ "H_StrawHat", "", 100, { "life_coplevel", "SCALAR", 1 } }, //chapeau de paille
			{ "V12_CASQUETTE_GUCCI2", "", 100, { "life_coplevel", "SCALAR", 1 } }, //casquette gucci
			{ "EF_HAT_BW", "", 100, { "life_coplevel", "SCALAR", 1 } }, //chapeau large
			{ "H_Cap_tan_specops_US", "", 100, { "life_coplevel", "SCALAR", 1 } } //casquette usa
        };

        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "V12_POLICE", "", 25, { "life_coplevel", "SCALAR", 1 } }, //brassard police
			{ "G_Squares", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes carre
			{ "G_Squares_Tinted", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes carre de soleil
			{ "G_Aviator", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes aviateur
			{ "V12_LUNETTE_BLANCHE", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes soleil blanche
			{ "EF_RG2", "", 25, { "life_coplevel", "SCALAR", 1 } } //lunettes ronde soleil
        };

        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "EF_SH_BK", "", 150, { "life_coplevel", "SCALAR", 1 } }, //Holster noir
			{ "jack_ceinturon_gend_1", "", 150, { "life_coplevel", "SCALAR", 1 } }, //ceinturon gn
			{ "V_BandollierB_blk", "", 150, { "life_coplevel", "SCALAR", 1 } } //bandouliere noir
        };

        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "jack_sac_invi", "", 500 , { "life_coplevel", "SCALAR", 1 } } //sac invisible GN
        };
    };
    

    /** ********************************************************************************************
        START : SHOP COP
    ********************************************************************************************* */
    /*
    class cop {
        title = "STR_Shops_Bruce";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tenue plongée
			{ "jack_pilote_hel_uniform_1", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tenue pilote
			{ "jack_tshirt_uniform_1", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tenue teeshirt
			{ "jack_tshirt_uniform_3", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tenue teeshirt instructeur
			{ "60", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tenue polo bleu
			{ "80", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tenue polo noir
			{ "30", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tenue GAV,Brigadier,Brigadier-chef
			{ "31", "", 100, { "life_coplevel", "SCALAR", 4 } }, //tenue marechal des logis
			{ "32", "", 100, { "life_coplevel", "SCALAR", 5 } }, //tenue gendarme
			{ "33", "", 100, { "life_coplevel", "SCALAR", 6 } }, //tenue marechal des logis chef
			{ "34", "", 100, { "life_coplevel", "SCALAR", 7 } }, //tenue adjudant
			{ "35", "", 100, { "life_coplevel", "SCALAR", 8 } }, //tenue adjudant chef
			{ "36", "", 100, { "life_coplevel", "SCALAR", 9 } }, //tenue marjor
			{ "37", "", 100, { "life_coplevel", "SCALAR", 10 } }, //tenue sous-lieutenant
			{ "38", "", 100, { "life_coplevel", "SCALAR", 11 } }, //tenue lieutenant
			{ "39", "", 100, { "life_coplevel", "SCALAR", 12 } }, //tenue capitaine
			{ "40", "", 100, { "life_coplevel", "SCALAR", 13 } }, //tenue commandant
			{ "41", "", 100, { "life_coplevel", "SCALAR", 14 } }, //tenue lieutant-colonel
			{ "42", "", 100, { "life_coplevel", "SCALAR", 15 } } //tenue  colonel  
        };

        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "901", "", 100, { "life_coplevel", "SCALAR", 1 } }, //casquette
			{ "casque", "", 100, { "life_coplevel", "SCALAR", 1 } }, // casque moto
			{ "jack_casque_helico_gend_2", "", 100, { "life_coplevel", "SCALAR", 1 } }, //casque pilote
			{ "gnd_casque_leger_noir", "", 100, { "life_coplevel", "SCALAR", 1 } }, // casque intervention
			{ "SH_Beret_2cl", "", 100, { "life_coplevel", "SCALAR", 1 } }, // beret GAV
            { "SH_Beret_Brigadier", "", 100, { "life_coplevel", "SCALAR", 2 } }, // beret brigadier
            { "SH_Beret_BrigadierC", "", 100, { "life_coplevel", "SCALAR", 3 } }, // beret brigadier chef
			{ "501", "", 100, { "life_coplevel", "SCALAR", 4 } }, // beret marechal des logis
			{ "502", "", 100, { "life_coplevel", "SCALAR", 5 } }, // beret gendarme
			{ "503", "", 100, { "life_coplevel", "SCALAR", 6 } }, // beret marechal des logis chef
			{ "504", "", 100, { "life_coplevel", "SCALAR", 7 } }, // beret adjudant
			{ "505", "", 100, { "life_coplevel", "SCALAR", 8 } }, // beret adjudant chef
			{ "506", "", 100, { "life_coplevel", "SCALAR", 9 } }, // beret marjor
			{ "507", "", 100, { "life_coplevel", "SCALAR", 10 } }, // beret sous-lieutenant
			{ "508", "", 100, { "life_coplevel", "SCALAR", 11 } }, // beret lieutenant
			{ "509", "", 100, { "life_coplevel", "SCALAR", 12 } }, // beret capitaine
			{ "510", "", 100, { "life_coplevel", "SCALAR", 13 } }, // beret commandant
			{ "511", "", 100, { "life_coplevel", "SCALAR", 14 } },// beret lieutant-colonel
			{ "512", "", 100, { "life_coplevel", "SCALAR", 15 } }// beret colonel  
        };

        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
			{ "G_Squares", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes carre
			{ "G_Squares_Tinted", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes carre de soleil
			{ "G_Aviator", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes aviateur
			{ "V12_LUNETTE_BLANCHE", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes soleil blanche
			{ "EF_RG2", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes ronde soleil
			{ "milgp_f_tactical_khk", "", 25, { "life_coplevel", "SCALAR", 1 } } //lunettes tctiques noir
        };

        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 150, { "life_coplevel", "SCALAR", 1 } }, //gilet recycleur
			{ "080", "", 150, { "life_coplevel", "SCALAR", 1 } }, //gilet GAV,Brigadier,Brigadier-chef
			{ "081", "", 150, { "life_coplevel", "SCALAR", 4 } }, //gilet marechal des logis
			{ "082", "", 150, { "life_coplevel", "SCALAR", 5 } }, //gilet gendarme
            { "083", "", 150, { "life_coplevel", "SCALAR", 6 } }, //gilet marechal des logis chef
			{ "084", "", 150, { "life_coplevel", "SCALAR", 7 } }, //gilet adjudant
			{ "085", "", 150, { "life_coplevel", "SCALAR", 8 } }, //gilet adjudant chef
			{ "086", "", 150, { "life_coplevel", "SCALAR", 9 } }, //gilet marjor
			{ "087", "", 150, { "life_coplevel", "SCALAR", 10 } }, //gilet sous-lieutenant
			{ "088", "", 150, { "life_coplevel", "SCALAR", 11 } }, //gilet lieutenant
			{ "089", "", 150, { "life_coplevel", "SCALAR", 12 } }, //gilet capitaine
			{ "090", "", 150, { "life_coplevel", "SCALAR", 13 } }, //gilet commandant
			{ "091", "", 150, { "life_coplevel", "SCALAR", 14 } }, //gilet lieutant-colonel
			{ "092", "", 150, { "life_coplevel", "SCALAR", 15 } } //gilet colonel	
        };

        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "jack_sac_invi", "PNT", 500 , { "life_coplevel", "SCALAR", 1 } }, //sac invisible GN
            { "chien", "PNT", 500 , { "life_coplevel", "SCALAR", 9 } }, //chien baton
			{ "B_Parachute", "PNT", 500 , { "life_coplevel", "SCALAR", 9 } } //parachute manoevrable	
        };
    };
	  
    class cop_EDSR {
        title = "EDSR";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "edsr1", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tenue EDSR GAV,Brigadier,Brigadier-chef
			{ "edsr2", "", 100, { "life_coplevel", "SCALAR", 4 } }, //tenue EDSR marechal des logis
			{ "edsr3", "", 100, { "life_coplevel", "SCALAR", 5 } }, //tenue EDSR gendarme
			{ "edsr4", "", 100, { "life_coplevel", "SCALAR", 6 } }, //tenue EDSR marechal des logis chef
			{ "edsr5", "", 100, { "life_coplevel", "SCALAR", 7 } }, //tenue EDSR adjudant
			{ "edsr6", "", 100, { "life_coplevel", "SCALAR", 8 } }, //tenue EDSR adjudant chef
			{ "edsr7", "", 100, { "life_coplevel", "SCALAR", 9 } }, //tenue EDSR marjor
			{ "edsr8", "", 100, { "life_coplevel", "SCALAR", 10 } }, //tenue EDSR sous-lieutenant
			{ "edsr9", "", 100, { "life_coplevel", "SCALAR", 11 } }, //tenue EDSR lieutenant
			{ "edsr10", "", 100, { "life_coplevel", "SCALAR", 12 } }, //tenue EDSR capitaine
			{ "edsr11", "", 100, { "life_coplevel", "SCALAR", 13 } }, //tenue EDSR commandant
			{ "edsr12", "", 100, { "life_coplevel", "SCALAR", 14 } }, //tenue EDSR lieutant-colonel
			{ "edsr13", "", 100, { "life_coplevel", "SCALAR", 15 } } //tenue EDSR colonel
        };

        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "casque", "", 100, { "life_coplevel", "SCALAR", 1 } } // casque moto
        };

        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } }
        };

        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };

        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },          
            { "jack_sac_invi", "PNT", 500 , { "life_coplevel", "SCALAR", 1 } } //sac invisible GN
        };
    };

    class cop_BRI {
        title = "BRI";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tee-shirt rayé
			{ "U_C_Poloshirt_tricolour", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tee-shirt tricouleur
			{ "U_C_Poor_1", "", 100, { "life_coplevel", "SCALAR", 1 } }, //vieu vetement
			{ "U_I_C_Soldier_Bandit_2_F", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tee-shirt tete de mort
			{ "EF_M_jkt3", "", 100, { "life_coplevel", "SCALAR", 1 } }, //manteau noir
			{ "EF_suit_Y3", "", 100, { "life_coplevel", "SCALAR", 1 } }, //costume gris
			{ "CR_TargetShirt", "", 100, { "life_coplevel", "SCALAR", 1 } } //tee-shirt cible
        };

        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_gry", "", 100, { "life_coplevel", "SCALAR", 1 } }, //bandana gris
			{ "H_Hat_grey", "", 100, { "life_coplevel", "SCALAR", 1 } }, //chapeau gris
			{ "H_StrawHat", "", 100, { "life_coplevel", "SCALAR", 1 } }, //chapeau de paille
			{ "V12_CASQUETTE_GUCCI2", "", 100, { "life_coplevel", "SCALAR", 1 } }, //casquette gucci
			{ "EF_HAT_BW", "", 100, { "life_coplevel", "SCALAR", 1 } }, //chapeau large
			{ "H_Cap_tan_specops_US", "", 100, { "life_coplevel", "SCALAR", 1 } } //casquette usa
        };

        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "V12_POLICE", "", 25, { "life_coplevel", "SCALAR", 1 } }, //brassard police
			{ "G_Squares", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes carre
			{ "G_Squares_Tinted", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes carre de soleil
			{ "G_Aviator", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes aviateur
			{ "V12_LUNETTE_BLANCHE", "", 25, { "life_coplevel", "SCALAR", 1 } }, //lunettes soleil blanche
			{ "EF_RG2", "", 25, { "life_coplevel", "SCALAR", 1 } } //lunettes ronde soleil
        };

        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "EF_SH_BK", "", 150, { "life_coplevel", "SCALAR", 1 } }, //Holster noir
			{ "jack_ceinturon_gend_1", "", 150, { "life_coplevel", "SCALAR", 1 } }, //ceinturon gn
			{ "V_BandollierB_blk", "", 150, { "life_coplevel", "SCALAR", 1 } } //bandouliere noir
        };

        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "jack_sac_invi", "", 500 , { "life_coplevel", "SCALAR", 1 } } //sac invisible GN
        };
    };

    class cop_PSIG {
        title = "PSIG";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "201", "", 100, { "life_coplevel", "SCALAR", 1 } } //tenue PSIG
        };

        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "800", "", 100, { "life_coplevel", "SCALAR", 1 } } //casque PSIG
        };

        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "G_Balaclava_TI_blk_F", "", 25, { "life_coplevel", "SCALAR", 1 } } //cagoule noir
        };

        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "1000", "", 150, { "life_coplevel", "SCALAR", 1 } } //gilet PSIG
        };

        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "jack_sac_invi", "", 500 , { "life_coplevel", "SCALAR", 1 } } //sac invisible GN
        };
    };

    class cop_GIGN {
        title = "GIGN";
        license = "";
        side = "cop";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "tenuegign", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tenue GIGN
            { "U_B_T_FullGhillie_tna_F", "", 100, { "life_coplevel", "SCALAR", 1 } }, //tenue gili semi complete
            { "U_B_T_Sniper_F", "", 100, { "life_coplevel", "SCALAR", 1 } } //tenue guili complet
        };

        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "800", "", 100, { "life_coplevel", "SCALAR", 1 } } //casque GIGN
        };

        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "G_Balaclava_TI_blk_F", "", 25, { "life_coplevel", "SCALAR", 1 } } //cagoule noir
        };

        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "101", "", 150, { "life_coplevel", "SCALAR", 1 } }, //gilet Leger GIGN
			{ "400", "", 150, { "life_coplevel", "SCALAR", 1 } } //gilet Lourd GIGN
        };

        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "jack_sac_invi", "", 500 , { "life_coplevel", "SCALAR", 1 } } //sac invisible GN
        };
    };
    */
    /** ********************************************************************************************
        END : SHOP COP
    ********************************************************************************************* */

      class chimie {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_white", "Combinaison de Chimiste", 10000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
           // { "G_RegulatorMask_F", "Masque Chimiste", 1000, { "", "", -1 } },
            { "TAC_SF10H", "Masque Chimiste", 1000, { "", "", -1 } },//test
          //  { "V12_MASQUE_GAZ", "Masque Chimiste", 1000, { "", "", -1 } },//test
          //  { "avon_ct12", "Masque Chimiste", 1000, { "", "", -1 } },//test
          //  { "avon_fm12", "Masque Chimiste", 1000, { "", "", -1 } },//test
          //  { "avon_SF12", "Masque Chimiste", 1000, { "", "", -1 } }//test
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "Respirateur Chimiste", 2500, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
      };
      class dive {
        title = "STR_Shops_Bruce";
        license = "dive";
        side = "civ";
        legal = 1;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 10000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
      };
      class depan {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 1;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_ConstructionCoverall_Red_F", "", 500, { "", "", -1 } },
            { "B_tenue_dir_1", "", 500, { "", "", -1 } },
            { "B_tenue_dir_2", "", 500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
                { "H_Cap_red", "", 100, { "", "", -1 } },
            { "casquette_dir_2", "", 100, { "", "", -1 } },
            { "casquette_dir_1", "", 100, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "EF_MSG_T", "", 200, { "", "", -1 } },
            { "EF_MSG_BK", "", 200, { "", "", -1 } },
            { "EF_MSG_BL", "", 200, { "", "", -1 } },
            { "EF_MSG_BW", "", 200, { "", "", -1 } },
            { "EF_MSG_C", "", 250, { "", "", -1 } },
            { "EF_MSG_G", "", 250, { "", "", -1 } },
            { "EF_MSG_O", "", 250, { "", "", -1 } },
            { "EF_MSG_P", "", 250, { "", "", -1 } },
            { "EF_MSG_R", "", 250, { "", "", -1 } },
            { "EF_MSG_V", "", 250, { "", "", -1 } },
            { "EF_MSG_W", "", 300, { "", "", -1 } },
            { "EF_MSG_Y", "", 500, { "", "", -1 } },
            { "EF_AC1", "", 100, { "", "", -1 } },
            { "EF_AC2", "", 125, { "", "", -1 } },
            { "EF_AC3", "", 150, { "", "", -1 } },
            { "EF_RG1", "", 150, { "", "", -1 } },
            { "EF_RG2", "", 200, { "", "", -1 } },
            { "EF_SC_C1", "", 200, { "", "", -1 } },
            { "EF_SC_CY1", "", 200, { "", "", -1 } },
            { "EF_SC_MG1", "", 200, { "", "", -1 } },
            { "EF_SC_P1", "", 250, { "", "", -1 } },
            { "EF_SC_TTB1", "", 250, { "", "", -1 } },
            { "EF_SC_TTBRK1", "", 250, { "", "", -1 } },
            { "EF_SC_PP1", "", 250, { "", "", -1 } },
            { "EF_SC_W1", "", 250, { "", "", -1 } },
            { "EF_SC_C2", "", 300, { "", "", -1 } },
            { "EF_SC_CY2", "", 500, { "", "", -1 } },
            { "EF_SC_MG2", "", 100, { "", "", -1 } },
            { "EF_SC_P2", "", 125, { "", "", -1 } },
            { "EF_SC_TTB2", "", 150, { "", "", -1 } },
            { "EF_SC_TTBR2", "", 150, { "", "", -1 } },
            { "EF_SC_TTBRK2", "", 150, { "", "", -1 } },
            { "EF_SC_PP2", "", 150, { "", "", -1 } },
            { "EF_SC_W2", "", 150, { "", "", -1 } },
            { "EF_PG1", "", 150, { "", "", -1 } },
            { "EF_PG2", "", 150, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 150, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 150, { "", "", -1 } },
            { "G_Shades_Blue", "", 150, { "", "", -1 } },
            { "G_Shades_Black", "", 150, { "", "", -1 } },
            { "G_Shades_Red", "", 150, { "", "", -1 } },
            { "G_Shades_Green", "", 150, { "", "", -1 } },
            { "G_Squares_Tinted", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Sport_Red", "", 150, { "", "", -1 } },
            { "G_Sport_Checkered", "", 150, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 150, { "", "", -1 } },
            { "G_Sport_Blackred", "", 150, { "", "", -1 } },
            { "G_Squares", "", 150, { "", "", -1 } },
            { "G_Spectacles", "", 150, { "", "", -1 } },
            { "G_Aviator", "", 150, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Safety_orange_F", "", 100, { "", "", -1 } },
            { "gilet_dir_1", "", 100, { "", "", -1 } },
            { "gilet_dir_2", "", 100, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            //{ "TRYK_B_Coyotebackpack_BLK", "", 1000, { "", "", -1 } },
            { "sac_dir_1", "", 1000, { "", "", -1 } },
            { "sac_dir_2", "", 1000, { "", "", -1 } }
        };
      };
     /* class medic {
        title = "STR_Shops_Bruce";
        license = "";
        side = "med";
        legal = 1;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "ASN_coveralls_FD_black_uniform", "", 150, { "", "", -1 } },
            { "U_B_Wetsuit", "", 150, { "", "", -1 } },
            { "jack_sp_grade_uniform_1", "", 150, { "", "", -1 } },
            { "jack_sp_v1_mc_polaire_uniform_2", "", 150, { "", "", -1 } },
            { "jack_sp_polo_uniform_1", "", 150, { "", "", -1 } },
            { "Pompier_B", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDSAPEURND_SP", "", 150, { "", "", -1 } },
            { "jack_tshirt_sp_uniform_2", "", 150, { "", "", -1 } },
            { "jack_tshirt_sp_uniform_3", "", 150, { "", "", -1 } },
            { "jack_sp_v2_polaire_uniform_1", "", 150, { "", "", -1 } },
            { "jack_sp_v2_mc_polaire_uniform_2", "", 150, { "", "", -1 } },
            { "jack_sp_grade_uniform_2", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDSAPEUR_SP", "", 150, { "", "", -1 } },
            { "jack_f1_sp_uniform_1", "", 150, { "", "", -1 } },
            { "PomMmE_FEU_SP", "", 150, { "", "", -1 } },
            { "PomMmE_SAPEUR_SP", "", 150, { "", "", -1 } },
            { "jack_tshirt_sp_uniform_1", "", 150, { "", "", -1 } },
            { "jack_sp_grade_uniform_3", "", 150, { "", "", -1 } },
            { "jack_sp_pullover_uniform_1", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDCAPORAL_SP", "", 150, { "", "", -1 } },
            { "PomMmE_CAPORAL_SP", "", 150, { "", "", -1 } },
            { "jack_sp_grade_uniform_4", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDCAPORALCHEF_SP", "", 150, { "", "", -1 } },
            { "PomMmE_CAPORALC_SP", "", 150, { "", "", -1 } },
            { "jack_sp_grade_uniform_5", "", 150, { "", "", -1 } },
            { "jack_f1_sp_uniform_3", "", 150, { "", "", -1 } },
            { "PomMmE_SERGENT_SP", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDSERGENT_SP", "", 150, { "", "", -1 } },
            { "jack_f1_sp_uniform_2", "", 150, { "", "", -1 } },
            { "PomMmE_SERGENTC_SP", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDSERGENTC_SP", "", 150, { "", "", -1 } },
            { "jack_sp_grade_uniform_6", "", 150, { "", "", -1 } },
            { "jack_sp_grade_uniform_7", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDADJUDANT_SP", "", 150, { "", "", -1 } },
            { "PomMmE_ADJUDANT_SP", "", 150, { "", "", -1 } },
            { "jack_sp_grade_uniform_8", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDADJUDANTC_SP", "", 150, { "", "", -1 } },
            { "PomMmE_ADJUDANTC_SP", "", 150, { "", "", -1 } },
            { "jack_sp_grade_uniform_9", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDLIEUTENANT_SP", "", 150, { "", "", -1 } },
            { "PomMmE_LIEUTENANT_SP", "", 150, { "", "", -1 } },
            { "jack_sp_grade_uniform_10", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDCAPITAINE_SP", "", 150, { "", "", -1 } },
            { "PomMmE_CAPITAINE_SP", "", 150, { "", "", -1 } },  
            { "jack_sp_grade_uniform_11", "", 150, { "", "", -1 } },
            { "PomMmE_COMMANDANT_SP", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDCOMMANDANT_SP", "", 150, { "", "", -1 } },
            { "jack_sp_grade_uniform_12", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDLTNCOLONEL_SP", "", 150, { "", "", -1 } },
            { "PomMmE_FROIDCOLONEL_SP", "", 150, { "", "", -1 } },
            { "PomMmE_COLONEL_SP", "", 150, { "", "", -1 } },
            { "PomMmE_LTNCOLONEL_SP", "", 150, { "", "", -1 } }                    
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "SP_Uniformes_Casque_F1_B2PH", "", 150, { "", "", -1 } },
            { "jack_casque_f2_orange", "", 150, { "", "", -1 } },
            { "jack_casque_f2_rouge", "", 150, { "", "", -1 } },
            { "jack_casquette_sp_1", "", 150, { "", "", -1 } },
            { "jack_casquette_sp_2", "", 150, { "", "", -1 } },
            { "H_HeadBandage_bloody_F", "", 150, { "", "", -1 } },
            { "collier_cv", "", 150, { "", "", -1 } },
            { "PomMmE_SAPEUR_BERETSP", "", 150, { "", "", -1 } },
            { "SP_Uniformes_Casque_F1_B", "", 150, { "", "", -1 } },
            { "PomMmE_SERGENT_BERETSP", "", 150, { "", "", -1 } },
            { "PomMmE_ADJUDANT_BERETSP", "", 150, { "", "", -1 } },
            { "PomMmE_ADJUDANTC_BERETSP", "", 150, { "", "", -1 } },
            { "PomMmE_LIEUTENANT_BERETSP", "", 150, { "", "", -1 } },
            { "PomMmE_CAPITAINE_BERETSP", "", 150, { "", "", -1 } },
            { "PomMmE_COMMANDANT_BERETSP", "", 150, { "", "", -1 } },
            { "PomMmE_LTNCOLONEL_BERETSP", "", 150, { "", "", -1 } },
            { "PomMmE_COLONEL_BERETSP", "", 150, { "", "", -1 } },
            { "kepi_sp", "", 150, { "", "", -1 } },
            { "PomMmE_SERGENTC_BERETSP", "", 150, { "", "", -1 } },
            { "jack_casque_helico_grimp_sp", "", 150, { "", "", -1 } },
            { "H_HeadBandage_clean_F", "", 150, { "", "", -1 } },
            { "SP_Uniformes_Casque_F1_B2PH", "", 150, { "", "", -1 } },
            { "SP_Uniformes_Casque_F1_J", "", 150, { "", "", -1 } },
            { "H_PilotHelmetHeli_B", "", 150, { "", "", -1 } },
            { "H_Beret_blk", "", 150, { "", "", -1 } }
            
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "ASN_firemask", "", 150, { "", "", -1 } },
            { "G_Diving", "", 150, { "", "", -1 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "", "", -1 } },
            { "Dirty_Respirator_white_F", "", 150, { "", "", -1 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "", "", -1 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "", "", -1 } },
            { "milgp_f_goggles_khk", "", 150, { "", "", -1 } },
            { "milgp_f_tactical_khk", "", 150, { "", "", -1 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "", "", -1 } },
            { "TRYK_kio_balaclava_BLK", "", 150, { "", "", -1 } },
            { "TRYK_kio_balaclava_ESS", "", 150, { "", "", -1 } },
            { "G_Aviator", "", 150, { "", "", -1 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "", "", -1 } },
            { "G_RegulatorMask_F", "", 150, { "", "", -1 } },
            { "G_Shades_Blue", "", 150, { "", "", -1 } },
            { "G_Squares_Tinted", "", 150, { "", "", -1 } },
            { "G_Sport_Red", "", 150, { "", "", -1 } },
            { "G_Sport_Checkered", "", 150, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 150, { "", "", -1 } },
            { "G_Sport_Blackred", "", 150, { "", "", -1 } },
            { "G_Spectacles", "", 150, { "", "", -1 } },
            { "Masque_Chirurgical", "", 150, { "", "", -1 } },//max
            { "G_AirPurifyingRespirator_01_F", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "ASN_tankpipe", "", 150, { "", "", -1 } },
            { "V_Safety_blue_F", "", 150, { "", "", -1 } },
            { "jack_gilet_sp_1", "", 150, { "", "", -1 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "", "", -1 } },
            { "V_Safety_orange_F", "", 150, { "", "", -1 } },
            { "SP_Uniformes_Veste_Haute_Visibilite", "", 150, { "", "", -1 } },
            { "jack_veste_sp_infirmier", "", 150, { "", "", -1 } },
            { "jack_veste_sp_med", "", 150, { "", "", -1 } },
            { "V_Safety_yellow_F", "", 150, { "", "", -1 } },
            { "jack_recycleur_sp", "", 150, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "ASN_oxygentank", "", 150, { "", "", -1 } },
            { "jack_sac_inter_sp", "", 150, { "", "", -1 } },
            { "jack_sac_invi_sp", "", 150, { "", "", -1 } },
            { "SAC_SP", "", 150, { "", "", -1 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "", "", -1 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "", "", -1 } },
            { "B_SCBA_01_F", "", 150, { "", "", -1 } }
        };
      };

*/
class medic {
        title = "STR_Shops_Bruce";
        license = "";
        side = "med";
        legal = 1;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "jack_sp_grade_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_sp_v1_polaire_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_sp_v1_mc_polaire_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_sp_v2_polaire_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_sp_v2_mc_polaire_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 1 } },
            { "PomMmE_FROIDSAPEURND_SP", "", 50, { "life_mediclevel", "SCALAR", 1 } },
            { "PomMmE_SAPEURND_SP", "", 50, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_f1_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 1 } },
            { "Pompier_B", "", 50, { "life_mediclevel", "SCALAR", 1 } },
               { "jack_sp_grade_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 2 } },
            { "jack_sp_v1_mc_polaire_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 2 } },
            { "jack_sp_polo_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 2 } },
            { "Pompier_B", "", 50, { "life_mediclevel", "SCALAR", 2 } },
            { "PomMmE_FROIDSAPEURND_SP", "", 50, { "life_mediclevel", "SCALAR", 2 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 2 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 2 } },
            { "jack_sp_v2_polaire_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 2 } },
            { "jack_sp_v2_mc_polaire_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 2 } },
               { "jack_sp_grade_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 3 } },
            { "PomMmE_FROIDSAPEUR_SP", "", 50, { "life_mediclevel", "SCALAR", 3 } },
            { "Pompier_B", "", 50, { "life_mediclevel", "SCALAR", 3 } },
            { "jack_f1_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 3 } },
            { "PomMmE_FEU_SP", "", 50, { "life_mediclevel", "SCALAR", 3 } },
            { "PomMmE_SAPEUR_SP", "", 50, { "life_mediclevel", "SCALAR", 3 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 3 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 3 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 3 } },
            { "jack_sp_v2_polaire_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 3 } },
            { "jack_sp_v2_mc_polaire_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 3 } },
             { "jack_sp_grade_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_sp_pullover_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 4 } },
            { "Pompier_B", "", 50, { "life_mediclevel", "SCALAR", 4 } },
            { "PomMmE_FEU_SP", "", 50, { "life_mediclevel", "SCALAR", 4 } },
            { "PomMmE_FROIDCAPORAL_SP", "", 50, { "life_mediclevel", "SCALAR", 4 } },
            { "PomMmE_CAPORAL_SP", "", 50, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_sp_v2_polaire_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_sp_v2_mc_polaire_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 4 } },
             { "jack_casque_f2_rouge", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "collier_cv", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "SP_Uniformes_Casque_F1_B", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "PomMmE_CAPORAL_BERETSP", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_casque_moto_sp", "", 150, { "life_mediclevel", "SCALAR", 4 } },
             { "jack_sp_grade_uniform_4", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_sp_pullover_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "Pompier_B", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "PomMmE_FEU_SP", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_f1_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "PomMmE_FROIDCAPORALCHEF_SP", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "PomMmE_CAPORALC_SP", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_sp_v2_polaire_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_sp_v2_mc_polaire_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_sp_grade_uniform_5", "", 50, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_sp_pullover_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_f1_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 6 } },
            { "PomMmE_SERGENT_SP", "", 50, { "life_mediclevel", "SCALAR", 6 } },
            { "PomMmE_FROIDSERGENT_SP", "", 50, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_f1_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 6 } },
             { "jack_sp_pullover_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_f1_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 7 } },
            { "PomMmE_SERGENTC_SP", "", 50, { "life_mediclevel", "SCALAR", 7 } },
            { "PomMmE_FROIDSERGENTC_SP", "", 50, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_sp_grade_uniform_6", "", 50, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_f1_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 7 } },
              { "jack_sp_pullover_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_f1_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_f1_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_sp_grade_uniform_7", "", 50, { "life_mediclevel", "SCALAR", 8 } },
            { "PomMmE_FROIDADJUDANT_SP", "", 50, { "life_mediclevel", "SCALAR", 8 } },
            { "PomMmE_ADJUDANT_SP", "", 50, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_sp_pullover_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 9 } },
            { "jack_f1_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 9 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 9 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 9 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 9 } },
            { "jack_f1_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 9 } },
            { "jack_sp_grade_uniform_8", "", 50, { "life_mediclevel", "SCALAR", 9 } },
            { "PomMmE_FROIDADJUDANTC_SP", "", 50, { "life_mediclevel", "SCALAR", 9 } },
            { "PomMmE_ADJUDANTC_SP", "", 50, { "life_mediclevel", "SCALAR", 9 } },
              { "jack_sp_pullover_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_f1_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_f1_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_sp_grade_uniform_9", "", 50, { "life_mediclevel", "SCALAR", 10 } },
            { "PomMmE_FROIDLIEUTENANT_SP", "", 50, { "life_mediclevel", "SCALAR", 10 } },
            { "PomMmE_LIEUTENANT_SP", "", 50, { "life_mediclevel", "SCALAR", 10 } },
              { "jack_sp_pullover_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_f1_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_f1_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_sp_grade_uniform_10", "", 50, { "life_mediclevel", "SCALAR", 11 } },
            { "PomMmE_FROIDCAPITAINE_SP", "", 50, { "life_mediclevel", "SCALAR", 11 } },
            { "PomMmE_CAPITAINE_SP", "", 50, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_sp_pullover_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_f1_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_f1_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_sp_grade_uniform_11", "", 50, { "life_mediclevel", "SCALAR", 12 } },
            { "PomMmE_FROIDCOMMANDANT_SP", "", 50, { "life_mediclevel", "SCALAR", 12 } },
            { "PomMmE_COMMANDANT_SP", "", 50, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_sp_pullover_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 13 } },
            { "jack_f1_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 13 } },
            { "jack_f1_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 13 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 13 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 13 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 13 } },
            { "jack_sp_grade_uniform_12", "", 50, { "life_mediclevel", "SCALAR", 13 } },
            { "PomMmE_FROIDLTNCOLONEL_SP", "", 50, { "life_mediclevel", "SCALAR", 13 } },
            { "PomMmE_LTNCOLONEL_SP", "", 50, { "life_mediclevel", "SCALAR", 13 } },
             { "jack_sp_pullover_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_f1_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_f1_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_tshirt_sp_uniform_1", "", 50, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_tshirt_sp_uniform_2", "", 50, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_tshirt_sp_uniform_3", "", 50, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_sp_grade_uniform_12", "", 50, { "life_mediclevel", "SCALAR", 14 } },
            { "PomMmE_FROIDCOLONEL_SP", "", 50, { "life_mediclevel", "SCALAR", 14 } },
            { "PomMmE_COLONEL_SP", "", 50, { "life_mediclevel", "SCALAR", 14 } }


        };
        headgear[] = {
            { "NONE", "Remove headgear", 0, { "", "", -1 } },
            { "jack_casque_f2_rouge", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "collier_cv", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "SP_Uniformes_Casque_F1_B", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_casque_f2_rouge", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "collier_cv", "", 150, { "life_mediclevel", "SCALAR", 2 } },
             { "jack_casque_f2_rouge", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "collier_cv", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "PomMmE_SAPEUR_BERETSP", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "SP_Uniformes_Casque_F1_B", "", 150, { "life_mediclevel", "SCALAR", 3 } },
               { "jack_casque_f2_rouge", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "collier_cv", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "PomMmE_CAPORALC_BERETSP", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "SP_Uniformes_Casque_F1_B", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_casque_moto_sp", "", 150, { "life_mediclevel", "SCALAR", 5 } },
               { "SP_Uniformes_Casque_F1_B", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_casque_f2_orange", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "collier_cv", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_casque_moto_sp", "", 150, { "life_mediclevel", "SCALAR", 6 } },
                  { "SP_Uniformes_Casque_F1_B", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_casque_f2_orange", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "collier_cv", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "PomMmE_SERGENTC_BERETSP", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_casque_moto_sp", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "SP_Uniformes_Casque_F1_B", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_casque_f2_orange", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "collier_cv", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "PomMmE_ADJUDANT_BERETSP", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_casque_moto_sp", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "SP_Uniformes_Casque_F1_J2PH", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "SP_Uniformes_Casque_F1_B", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "SP_Uniformes_Casque_F1_J2PH", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_casque_f2_orange", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "kepi_sp", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "PomMmE_LIEUTENANT_BERETSP", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_casque_moto_sp", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "SP_Uniformes_Casque_F1_B", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "SP_Uniformes_Casque_F1_J2PH", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_casque_f2_orange", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "kepi_sp", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "PomMmE_CAPITAINE_BERETSP", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_casque_moto_sp", "", 150, { "life_mediclevel", "SCALAR", 11 } },
                  { "SP_Uniformes_Casque_F1_B", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "SP_Uniformes_Casque_F1_J2PH", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_casque_f2_orange", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "kepi_sp", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "PomMmE_COMMANDANT_BERETSP", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_casque_moto_sp", "", 150, { "life_mediclevel", "SCALAR", 12 } },
               { "SP_Uniformes_Casque_F1_B", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "SP_Uniformes_Casque_F1_J2PH", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_casque_f2_orange", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_casquette_sp_2", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_casquette_sp_1", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "H_HeadBandage_bloody_F", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "kepi_sp", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "PomMmE_COLONEL_BERETSP", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_casque_moto_sp", "", 150, { "life_mediclevel", "SCALAR", 14 } }

        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 1 } },
              { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 2 } },
             { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 4 } },
               { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 5 } },
             { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 8 } },
               { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 9 } },
              { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 10 } },
             { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 12 } },
              { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 13 } },
              { "Dirty_Respirator_white_F", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "Dirty_Respirator_Blue_F", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "Dirty_Respirator_yellow_F", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "milgp_f_goggles_khk", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "G_Combat", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "G_Shades_Blue", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "G_Shades_Black", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "G_Shades_Red", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "G_Aviator", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "Masque_Chirurgical", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "milgp_f_tactical_khk", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "SP_Uniformes_ARI_Drager_Mask", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "G_Balaclava_TI_blk_F", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "G_Balaclava_TI_G_blk_F", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "G_RegulatorMask_F", "", 150, { "life_mediclevel", "SCALAR", 14 } }

        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "V_Safety_blue_F", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "SP_Uniformes_Veste_Haute_Visibilite", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 3 } },
              { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 5 } },
             { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 10 } },
             { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 13 } },
             { "V_Safety_orange_F", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "SP_Uniformes_Veste_Haute_VisibiliteAstrid", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_gilet_sp_1", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "V_TacVestIR_blk", "", 150, { "life_mediclevel", "SCALAR", 14 } }

        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 1 } },
            { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 2 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 2 } },
             { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 3 } },
            { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 4 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 4 } },
             { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 5 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 5 } },
             { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 6 } },
            { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 7 } },
            { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 8 } },
            { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 9 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 9 } },
               { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 10 } },
            { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 11 } },
            { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 12 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 12 } },
                { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 13 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 13 } },
              { "B_SCBA_01_F", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "PomMmE_SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_sac_invi_sp", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "SP_Uniformes_ARI_Drager", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "jack_sac_inter_sp", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "SAC_SP", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "ACE_TacticalLadder_Pack", "", 150, { "life_mediclevel", "SCALAR", 14 } },
            { "SP_Uniformes_SAC_AMU", "", 150, { "life_mediclevel", "SCALAR", 14 } }

        };
      };

//spécialisation SP 31.03.2021

class gno { 
    title = "STR_Shops_gno";
            license = "gno";
            side = "med";
            legal = 1;
            uniforms[] = {
                { "NONE", "Remove Uniform", 0, { "", "", -1 } },
                { "U_C_CBRN_Suit_01_Blue_F", "", 150, { "", "", -1 } }
            };
            headgear[] = {
                { "NONE", "Remove Hat", 0, { "", "", -1 } },
                { "G_Tactical_Black", "", 150, { "", "", -1 } }
            };
            goggles[] = {
                { "NONE", "Remove Goggles", 0, { "", "", -1 } },
                { "TRYK_kio_balaclava_ESS", "", 150, { "", "", -1 } },
                { "avon_ct12", "", 150, { "", "", -1 } },
                { "avon_ct12_strapless", "", 150, { "", "", -1 } }
            };
            vests[] = {
                { "NONE", "Remove Vest", 0, { "", "", -1 } },
                { "TAC_V_Sheriff_BA_TB4", "", 150, { "", "", -1 } },
                { "TAC_EI_RRV27_B", "", 150, { "", "", -1 } },
                { "TAC_PBDFG2C_B_1", "", 150, { "", "", -1 } },
                { "PomMmE_GILET_SP", "", 150, { "", "", -1 } }
            };
            backpacks[] = {
                { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            
                { "TAC_BP_Butt_B2M", "", 150, { "", "", -1 } },
                { "TAC_BP_Butt2RGM", "", 150, { "", "", -1 } },
                { "TRYK_B_Medbag_BK", "", 150, { "", "", -1 } },
                { "I_UGV_02_Science_backpack_F", "", 150, { "", "", -1 } },
                { "C_UAV_06_medical_backpack_F", "", 150, { "", "", -1 } },
                { "C_IDAP_UAV_06_medical_backpack_F", "", 150, { "", "", -1 } }
            };
        };

    class sssm {
    title = "STR_Shops_sssm";
        license = "sssm";
        side = "med";
        legal = 1;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
         };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "HG_EMS_Beret", "", 150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "jack_veste_sp_med", "", 150, { "", "", -1 } },
            { "jack_veste_sp_infirmier", "", 150, { "", "", -1 } },
            { "jack_gilet_sp_2", "", 150, { "", "", -1 } },
            { "jack_gilet_sp_3", "", 150, { "", "", -1 } },
            { "V_DeckCrew_blue_F", "", 150, { "", "", -1 } },
            { "V_Safety_blue_F", "", 150, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
      };


      

// test spécialité SP

 class gap {
        title = "STR_Shops_gap";
        license = "gap";
        side = "med";
        legal = 1;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "jack_hel_grimp_sp_uniform_1", "", 150, { "", "", -1 } },
            { "jack_sp_grimp_polaire_uniform_1", "", 150, { "", "", -1 } },
            { "jack_sp_grimp_polaire_uniform_2", "", 150, { "", "", -1 } },
            { "jack_plongeur_sp_uniform_1", "", 150, { "", "", -1 } }                    
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
          
            { "jack_casque_helico_grimp_sp", "", 150, { "", "", -1 } },
            { "TRYK_H_DELTAHELM_NV", "", 150, { "", "", -1 } },
            { "VSM_OPS_2", "", 150, { "", "", -1 } },
            { "H_Watchcap_blk", "", 150, { "", "", -1 } },
            { "TRYK_H_headset2", "", 150, { "", "", -1 } },
            { "SP_Uniformes_Casque_F1_B2PH", "", 150, { "", "", -1 } }
            
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
           
            { "G_Diving", "", 150, { "", "", -1 } },
            { "milgp_f_face_shield_tactical_BLK", "", 150, { "", "", -1 } },
            { "TRYK_US_ESS_Glasses_TAN_BLK", "", 150, { "", "", -1 } },
            { "TRYK_US_ESS_Glasses", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
           
            { "TAC_BP_LBT_HB_B", "", 150, { "", "", -1 } },
            { "TAC_LBT_H3_B", "", 150, { "", "", -1 } },
            { "jack_recycleur_sp", "", 150, { "", "", -1 } }
             
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
           
            { "B_ViperLightHarness_blk_F", "", 150, { "", "", -1 } },
            { "EF_SQBAG_BK", "", 150, { "", "", -1 } },
            { "division_megan_B", "", 150, { "", "", -1 } },
            { "division_predator_B", "", 150, { "", "", -1 } },
            { "PomMmE_SAC_SP", "", 150, { "", "", -1 } }
        };
      };
      class alphonse {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_BG_Guerrilla_6_1", "", 5000, { "", "", -1 } },
            { "EF_FEM_3_9_2B2", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_AOR2_BLK_CombatUniform", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_BLK_Tshirt", "", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            {"TAC_SF10H", "" , 5000, {"","",-1 } }
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "milgp_f_face_shield_shades_shemagh_BLK", "", 5000, { "", "", -1 } },
            { "avon_SF12", "", 5000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "EF_SH_BK", "", 5000, { "", "", -1 } },
            { "TRYK_V_IOTV_BLK", "", 5000, { "", "", -1 } },
            { "EF_SHF_BK", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
           { "NONE", "Remove Backpack", 0, { "", "", -1 } },
           { "EF_SQBAG_VL", "", 10000, { "", "", -1 } },
           { "TRYK_B_Medbag_BK", "", 10000, { "", "", -1 } },
           { "EF_SQBAG_BK", "", 10000, { "", "", -1 } }
        };
      };



      class onu {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "R3F_uniform_apso", "", 5000, { "", "", -1 } },
            { "R3F_uniform_f1", "", 5000, { "", "", -1 } },
            { "R3F_uniform_f1_medic", "", 5000, { "", "", -1 } },
            { "R3F_uniform_off", "", 5000, { "", "", -1 } },
            { "R3F_uniform_urr", "", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "rhs_6b27_onu", "", 10, { "", "", -1 } },
            { "rhs_6b27_onu_ess", "", 10, { "", "", -1 } },
            { "rhssaf_helmet_m97_nostrap_blue", "", 10, { "", "", -1 } },
            { "rhssaf_helmet_m97_nostrap_blue_tan_ess", "", 10, { "", "", -1 } },
            { "rhssaf_helmet_m97_nostrap_blue_tan_ess_bare", "", 10, { "", "", -1 } },
            { "rhsgref_un_beret", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "rhs_googles_clear", "", 10, { "", "", -1 } },
            { "rhs_googles_orange", "", 10, { "", "", -1 } },
            { "rhs_googles_yellow", "", 10, { "", "", -1 } },
            { "rhs_googles_black", "", 10, { "", "", -1 } },
            { "milgp_f_goggles_khk", "", 10, { "", "", -1 } },
            { "R3F_lunettes_X800", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } },
            { "Mask_M40", "", 10, { "", "", -1 } },
            { "milgp_f_tactical_khk", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "rhs_6b13_ONU", "", 5000, { "", "", -1 } },
            { "rhs_6b5_onu", "", 5000, { "", "", -1 } },
            { "R3F_veste_aspirant_ce600", "", 5000, { "life_euLevel", "EQUAL", 1 } },
            { "R3F_veste_sergent_ce600", "", 5000, { "life_euLevel", "EQUAL", 2 } },
            { "R3F_veste_caporal_ce600", "", 5000, { "life_euLevel", "EQUAL", 3 } },
            { "R3F_veste_lieutenant_ce600", "", 5000, { "life_euLevel", "EQUAL", 4 } },
            { "R3F_veste_capitaine_ce600", "", 5000, { "life_euLevel", "EQUAL", 5 } },
            { "R3F_veste_commandant_ce600", "", 5000, { "life_euLevel", "EQUAL", 6 } },
            { "R3F_veste_colonel_ce600", "", 5000, { "life_euLevel", "EQUAL", 7 } },
            { "R3F_veste_general_ce600", "", 5000, { "life_euLevel", "EQUAL", 8 } }
        };
        backpacks[] = {
           { "NONE", "Remove Backpack", 0, { "", "", -1 } },
           { "R3F_sac_moyen_CE", "", 10000, { "", "", -1 } },
           { "R3F_sac_radio_TFR_Lourd_CE", "", 10000, { "", "", -1 } },
           { "R3F_sac_moyen_ONU", "", 10000, { "", "", -1 } }
        };
      };
      class reb {
        title = "STR_Shops_Bruce";
        license = "insurge";
        side = "civ";
        legal = 0;
        uniforms[] = {
            //      ______________REBEL______________
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            //      -------------Mixte---------------
            { "U_BG_Guerilla1_1", "", 5000, { "", "", -1 } },
             { "jack_plongeur_sp_uniform_1", "", 150, { "", "", -1 } }, //tenue plongée
            { "U_BG_leader", "", 5000, { "", "", -1 } },
            { "U_BG_Guerilla1_kabeiroi", "", 5000, { "", "", -1 } },
            //      -------------Para---------------
            { "U_I_C_Soldier_Camo_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_1_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_4_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_5_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_3_F", "", 5000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_2_F", "", 5000, { "", "", -1 } },
            //      -------------INDEP---------------
            { "U_I_CombatUniform_shortsleeve", "", 5000, { "", "", -1 } },
            { "U_I_CombatUniform", "", 5000, { "", "", -1 } },
            //      --------------Officer---------------
            { "U_O_T_Officer_F", "", 5000, { "", "", -1 } },
            //      ------------Pilote helicoptaire---------------
            { "U_I_HeliPilotCoveralls", "", 5000, { "", "", -1 } },
            { "U_B_HeliPilotCoveralls", "", 5000, { "", "", -1 } },
            { "milgp_u_fleece_grey_g3_field_pants_aor2", "", 5000, { "", "", -1 } },
            { "milgp_u_fleece_grey_g3_field_pants_atacsfg", "", 5000, { "", "", -1 } },
            { "milgp_u_fleece_grey_g3_field_pants_mctropic", "", 5000, { "", "", -1 } },
            { "milgp_u_fleece_grey_g3_field_pants_M81", "", 5000, { "", "", -1 } },
            { "milgp_u_fleece_rgr_g3_field_pants_rgr", "", 5000, { "", "", -1 } },
            { "milgp_u_fleece_rgr_g3_field_pants_atacsfg", "", 5000, { "", "", -1 } },
            { "milgp_u_fleece_rgr_g3_field_pants_mctropic", "", 5000, { "", "", -1 } },
            { "milgp_u_fleece_rgr_g3_field_pants_M81", "", 5000, { "", "", -1 } },
            { "milgp_u_g3_field_set_atacsfg", "", 5000, { "", "", -1 } },
            { "milgp_u_g3_field_set_mctropic", "", 5000, { "", "", -1 } },
            { "milgp_u_g3_field_set_rolled_atacsfg", "", 5000, { "", "", -1 } },
            { "milgp_u_pcu_g3_field_pants_aor2", "", 5000, { "", "", -1 } },
            { "milgp_u_pcu_g3_field_pants_atacsfg", "", 5000, { "", "", -1 } },
            { "milgp_u_pcu_g3_field_pants_mctropic", "", 5000, { "", "", -1 } },
            { "milgp_u_tshirt_g3_field_pants_atacsau", "", 5000, { "", "", -1 } },
            { "milgp_u_tshirt_g3_field_pants_atacsfg", "", 5000, { "", "", -1 } },
            //      ----------------Pilote avion---------------
            { "U_B_PilotCoveralls", "", 5000, { "", "", -1 } },
            { "U_I_pilotCoveralls", "", 5000, { "", "", -1 } },
            { "U_O_PilotCoveralls", "", 150000, { "", "", -1 }, {"life_playerlevel >= 50 && ['nocraft'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: La flemme"} },
             //      -------------RHS---------------
            { "rhs_uniform_emr_patchless", "", 5000, { "", "", -1 } },
            { "rhs_uniform_flora_patchless", "", 5000, { "", "", -1 } },
            { "rhs_uniform_flora_patchless_alt", "", 5000, { "", "", -1 } },
            { "rhsgref_uniform_ERDL", "", 5000, { "", "", -1 } },
            { "rhs_uniform_mvd_izlom", "", 5000, { "", "", -1 } },
            { "rhs_uniform_m88_patchless", "", 5000, { "", "", -1 } },
            { "rhs_uniform_mflora_patchless", "", 5000, { "", "", -1 } },
            //      ______________DIVING______________
            //      -------------Tenues---------------
            { "U_B_Wetsuit", "", 5000, { "", "", -1 } },
            { "U_I_Wetsuit", "", 5000, { "", "", -1 } },
            { "TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "milgp_u_tshirt_g3_field_pants_M81", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "milgp_u_tshirt_g3_field_pants_M81", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "U_B_wood_CombatUniform", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "ZARATAKI3", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "ZARATAKI2", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "U_taki_BL", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "U_taki_BLK", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "U_taki_G_WH", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "U_B_OD_OD_R_CombatUniform", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "U_B_MARPAT_Wood_Tshirt", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "C_AOR2_T", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "U_B_T_Soldier_SL_F", "", 5000, { "", "", -1 } }, //rajout alharis cody
            { "U_O_Wetsuit", "", 5000, { "", "", -1 } }
        };
        headgear[] = {
            //      ______________CIVIL______________
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            //      -------------Bandanna---------------
            { "Masque_archNemesis", "", 150, { "", "", -1 } },
            { "Masque_Arnold", "", 150, { "", "", -1 } },
            { "Masque_Aubrey", "", 150, { "", "", -1 } },
            { "Masque_Chains", "", 150, { "", "", -1 } },
            { "Masque_Clover", "", 150, { "", "", -1 } },
            { "V12_CORVO", "", 150, { "", "", -1 } },
            { "Masque_Fish", "", 150, { "", "", -1 } },
            { "Masque_Macrilleuse", "", 150, { "", "", -1 } },
            { "Masque_Orc", "", 150, { "", "", -1 } },
            { "Masque_speedRunner", "", 150, { "", "", -1 } },
            { "TAC_SF10", "", 150, { "", "", -1 } },//max
            { "H_Bandanna_blu", "", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 150, { "", "", -1 } },
            { "H_Bandanna_khk", "", 150, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "", 150, { "", "", -1 } },
            { "H_Bandanna_sand", "", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "", 150, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 150, { "", "", -1 } },
            { "H_Bandanna_surfer_blk", "", 150, { "", "", -1 } },
            { "H_Bandanna_surfer_grn", "", 150, { "", "", -1 } },
            { "H_Bandanna_camo", "", 150, { "", "", -1 } },
            { "H_Bandanna_khk_hs", "", 150, { "", "", -1 } },
            { "H_BandMask_blk", "", 150, { "", "", -1 } },
            //      -------------Casquettes--------------
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_blk_CMMG", "", 150, { "", "", -1 } },
            { "H_Cap_blk_ION", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Cap_tan_specops_US", "", 150, { "", "", -1 } },
            { "H_Cap_usblack", "", 150, { "", "", -1 } },
            { "H_Cap_blk", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_oli_hs", "", 150, { "", "", -1 } },
            { "H_Cap_press", "", 150, { "", "", -1 } },
            { "H_Cap_khaki_specops_UK", "", 150, { "", "", -1 } },
            { "H_Cap_surfer", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 150, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 150, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "milgp_h_cap_02_CB", "", 200, { "", "", -1 } },
            { "milgp_h_cap_02_khk", "", 200, { "", "", -1 } },
            { "milgp_h_cap_02_MC", "", 200, { "", "", -1 } },
            { "milgp_h_cap_02_RGR", "", 200, { "", "", -1 } },
            { "milgp_h_cap_backwards_02_khk", "", 200, { "", "", -1 } },
            { "milgp_h_cap_backwards_02_MC", "", 200, { "", "", -1 } },
            { "milgp_h_cap_backwards_02_RGR", "", 200, { "", "", -1 } },
            //      ------Casquettes et Headphones-------
            { "H_Cap_marshal", "", 200, { "", "", -1 } },
            { "H_Cap_headphones", "", 200, { "", "", -1 } },
            { "rhsusf_bowman_cap", "", 300, { "", "", -1 } },
            //      -------------Casquettes + lunettes--------------
            { "TRYK_ESS_CAP", "", 400, { "", "", -1 } },
            { "TRYK_ESS_CAP_OD", "", 400, { "", "", -1 } },
            { "TRYK_ESS_CAP_tan", "", 400, { "", "", -1 } },
            //      -------------Chapeaux--------------
            { "H_Hat_blue", "", 150, { "", "", -1 } },
            { "H_Hat_camo", "", 150, { "", "", -1 } },
            { "H_Hat_checker", "", 150, { "", "", -1 } },
            { "H_Hat_grey", "", 150, { "", "", -1 } },
            { "H_Hat_tan", "", 150, { "", "", -1 } },
            { "H_Hat_brown", "", 150, { "", "", -1 } },
            { "H_StrawHat", "", 150, { "", "", -1 } },
             { "Kio_Balaclava", "", 150, { "", "", -1 } },  //rajout alharis cody
            { "H_StrawHat_dark", "", 150, { "", "", -1 } }, 
            //      -------------Bonniehat--------------
            { "H_Booniehat_mcamo", "", 500, { "", "", -1 } },
            { "H_Booniehat_oli", "", 500, { "", "", -1 } },
            { "H_Booniehat_tan", "", 500, { "", "", -1 } },
            { "H_Booniehat_dgtl", "", 500, { "", "", -1 } },
            { "H_Booniehat_tna_F", "", 500, { "", "", -1 } },
            { "H_Booniehat_khk", "", 500, { "", "", -1 } },
            { "H_Booniehat_khk_hs", "", 500, { "", "", -1 } },
            { "rhs_Booniehat_digi", "", 500, { "", "", -1 } },
            { "rhs_Booniehat_flora", "", 500, { "", "", -1 } },
            { "rhs_Booniehat_m81", "", 500, { "", "", -1 } },
            //      -------------Watchcap--------------
            { "H_Watchcap_blk", "", 500, { "", "", -1 } },
            { "H_Watchcap_camo", "", 500, { "", "", -1 } },
            { "H_Watchcap_cbr", "", 500, { "", "", -1 } },
            { "H_Watchcap_khk", "", 500, { "", "", -1 } },
            { "H_Watchcap_sgg", "", 500, { "", "", -1 } },
            { "H_Helmet_Skate", "", 500, { "", "", -1 } },
            //      ----------Casques Racing---------------
            { "H_RacingHelmet_1_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 5000, { "", "", -1 } },
            { "H_RacingHelmet_1_orange_F", "", 5000, { "", "", -1 } },
            //      ______________REBEL______________
            //      ------------Military Cap--------------
            { "H_MilCap_blue", "", 500, { "", "", -1 } },
            { "H_MilCap_gry", "", 500, { "", "", -1 } },
            { "H_MilCap_mcamo", "", 500, { "", "", -1 } },
            { "H_MilCap_ocamo", "", 500, { "", "", -1 } },
            { "H_MilCap_ghex_F", "", 500, { "", "", -1 } },
            { "H_MilCap_dgtl", "", 500, { "", "", -1 } },
            { "H_MilCap_tna_F", "", 500, { "", "", -1 } },
            { "H_MilCap_OUcamo", "", 500, { "", "", -1 } },
            //      ----------------------------------
            { "H_ShemagOpen_khk", "", 2000, { "", "", -1 } },
            { "H_Shemag_olive_hs", "", 2000, { "", "", -1 } },
            { "H_Shemag_olive", "", 2000, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 2000, { "", "", -1 } },
            //      ------------Casque Indep---------------
            { "H_HelmetIA", "", 1000, { "", "", -1 } },
            { "rhs_6b26_green", "", 1000, { "", "", -1 } },
            { "rhs_6b27m_green", "", 1000, { "", "", -1 } },
            { "rhs_6b27m_digi", "", 1000, { "", "", -1 } },
            { "rhs_6b27m_digi", "", 1000, { "", "", -1 } },
            { "rhs_6b27m", "", 1000, { "", "", -1 } },
            { "rhs_6b28_green", "", 1000, { "", "", -1 } },
            { "rhs_6b28", "", 1000, { "", "", -1 } },
            { "rhs_6b28_flora", "", 1000, { "", "", -1 } },
            { "rhs_6b47", "", 1000, { "", "", -1 } },
            { "rhs_6b7_1m", "", 1000, { "", "", -1 } },
            { "rhs_6b7_1m_emr", "", 1000, { "", "", -1 } },
            { "rhs_6b7_1m_flora", "", 1000, { "", "", -1 } },
            { "rhs_6b7_1m_olive", "", 1000, { "", "", -1 } },
            { "rhsgref_helmet_M1_bare", "", 1000, { "", "", -1 } },
            { "rhsgref_helmet_M1_bare_alt01", "", 1000, { "", "", -1 } },
            { "rhsgref_helmet_M1_painted", "", 1000, { "", "", -1 } },
            { "rhsgref_helmet_M1_painted_alt01", "", 1000, { "", "", -1 } },
            // BALA
            { "rhs_6b26_ess_green", "", 2000, { "", "", -1 } },
            { "rhs_6b27m_green_ess", "", 2000, { "", "", -1 } },
            { "rhs_6b27m_digi_ess", "", 2000, { "", "", -1 } },
            { "rhs_6b27m_ess", "", 2000, { "", "", -1 } },
            { "rhs_6b28_green_ess", "", 2000, { "", "", -1 } },
            { "rhs_6b28_ess", "", 2000, { "", "", -1 } },
            { "rhs_6b28_flora_ess", "", 2000, { "", "", -1 } },
            { "rhs_6b47_ess", "", 1000, { "", "", -1 } },
            { "rhs_6b7_1m_emr_ess", "", 1000, { "", "", -1 } },
            { "rhs_6b7_1m_ess", "", 1000, { "", "", -1 } },
            { "rhsusf_cvc_green_ess", "", 1000, { "", "", -1 } },
            { "rhs_altyn_novisor_ess", "", 1000, { "", "", -1 } },
            { "rhs_6b26_bala_green", "", 5000, { "", "", -1 } },
            { "rhs_6b27m_green_bala", "", 5000, { "", "", -1 } },
            { "rhs_6b27m_digi_bala", "", 5000, { "", "", -1 } },
            { "rhs_6b27m_bala", "", 5000, { "", "", -1 } },
            { "rhs_6b28_green_bala", "", 5000, { "", "", -1 } },
            { "rhs_6b28_bala", "", 5000, { "", "", -1 } },
            { "rhs_6b28_flora_bala", "", 5000, { "", "", -1 } },
            { "rhs_6b47_bala", "", 5000, { "", "", -1 } },
            { "rhs_6b7_1m_bala1", "", 5000, { "", "", -1 } },
            { "rhs_6b7_1m_bala2", "", 5000, { "", "", -1 } },
            { "rhs_6b7_1m_bala2_emr", "", 5000, { "", "", -1 } },
            { "rhs_6b7_1m_bala1_emr", "", 5000, { "", "", -1 } },
            { "rhs_6b7_1m_bala1_flora", "", 5000, { "", "", -1 } },
            { "rhs_6b7_1m_bala2_flora", "", 5000, { "", "", -1 } },
            { "rhs_6b7_1m_bala1_olive", "", 5000, { "", "", -1 } },
            { "rhs_6b7_1m_bala2_olive", "", 5000, { "", "", -1 } },
            { "rhs_altyn_novisor_bala", "", 5000, { "", "", -1 } },
            { "rhs_6b26_ess_bala_green", "", 8000, { "", "", -1 } },
            { "rhs_6b27m_green_ess_bala", "", 8000, { "", "", -1 } },
            { "rhs_6b27m_digi_ess_bala", "", 8000, { "", "", -1 } },
            { "rhs_6b27m_ess_bala", "", 8000, { "", "", -1 } },
            { "rhs_6b28_green_ess_bala", "", 8000, { "", "", -1 } },
            { "rhs_6b28_ess_bala", "", 8000, { "", "", -1 } },
            { "rhs_6b28_flora_ess_bala", "", 8000, { "", "", -1 } },
            { "rhs_6b47_ess_bala", "", 8000, { "", "", -1 } },
            { "rhs_6b7_1m_emr_ess_bala", "", 8000, { "", "", -1 } },
            { "rhs_6b7_1m_ess_bala", "", 8000, { "", "", -1 } },
            { "rhs_altyn_novisor_ess_bala", "", 8000, { "", "", -1 } },
            //      -----------Casques equiage---------------
            { "H_HelmetCrew_I", "", 2000, { "", "", -1 } },
            { "H_HelmetCrew_B", "", 2000, { "", "", -1 } },
            { "H_HelmetCrew_O", "", 2000, { "", "", -1 } },
            { "H_HelmetCrew_O_ghex_F", "", 2000, { "", "", -1 } },
            { "H_CrewHelmetHeli_O", "", 5000, { "", "", -1 } },
            { "H_CrewHelmetHeli_B", "", 5000, { "", "", -1 } },
            { "H_CrewHelmetHeli_I", "", 5000, { "", "", -1 } }
        };
        goggles[] = {
            //      ______________CIVIL______________
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            //      --------------Shades--------------
            { "G_Shades_Black", "", 300, { "", "", -1 } },
            { "G_Shades_Blue", "", 300, { "", "", -1 } },
            { "G_Shades_Green", "", 300, { "", "", -1 } },
            { "G_Shades_Red", "", 300, { "", "", -1 } },
            { "G_Lady_Blue", "", 500, { "", "", -1 } },
            //      --------------Sport--------------
            { "G_Sport_Red", "", 300, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 300, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 300, { "", "", -1 } },
            { "G_Sport_Checkered", "", 300, { "", "", -1 } },
            { "G_Sport_Blackred", "", 300, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 300, { "", "", -1 } },
            //      -------------Spectacles--------------
            { "G_Spectacles", "", 300, { "", "", -1 } },
            { "G_Spectacles_Tinted", "", 300, { "", "", -1 } },
            //      -------------Squares--------------
            { "G_Squares", "", 300, { "", "", -1 } },
            { "G_Squares_Tinted", "", 300, { "", "", -1 } },
            { "G_Lowprofile", "", 300, { "", "", -1 } },
            { "G_Aviator", "", 3500, { "", "", -1 } },
            //      ______________MAFIA______________
            //      -------------Tactical----------------
            { "G_Tactical_Clear", "", 500, { "", "", -1 } },
            { "G_Tactical_Black", "", 500, { "", "", -1 } },
            //      -------------Combat----------------
            { "G_Combat", "", 500, { "", "", -1 } },
            { "G_Combat_Goggles_tna_F", "", 500, { "", "", -1 } },
            //      -------------Bandanna----------------
            { "G_Bandanna_blk", "", 2000, { "", "", -1 } },
            { "G_Bandanna_khk", "", 2000, { "", "", -1 } },
            { "G_Bandanna_oli", "", 2000, { "", "", -1 } },
            { "G_Bandanna_tan", "", 2000, { "", "", -1 } },
            { "G_Bandanna_shades", "", 2000, { "", "", -1 } },
            { "G_Bandanna_sport", "", 2000, { "", "", -1 } },
            { "G_Bandanna_beast", "", 2000, { "", "", -1 }},
            { "G_Bandanna_aviator", "", 2000, { "", "", -1 } },
            //      --------------Balaclava------------------
            { "G_Balaclava_oli", "", 2000, { "", "", -1 } },
            { "G_Balaclava_blk", "", 2000, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 2000, { "", "", -1 } },
            { "G_Balaclava_combat", "", 2000, { "", "", -1 } },
            { "rhs_balaclava", "", 2000, { "", "", -1 } },
            { "rhs_balaclava1_olive", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_goggles_BLK", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_goggles_CB", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_goggles_khk", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_goggles_RGR", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_goggles_shemagh_BLK", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_goggles_shemagh_CB", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_goggles_shemagh_khk", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_goggles_shemagh_RGR", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_tactical_BLK", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_tactical_CB", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_tactical_khk", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_tactical_RGR", "", 2000, { "", "", -1 } },
            { "milgp_f_face_shield_tactical_shemagh_BLK", "", 2500, { "", "", -1 } },
            { "milgp_f_face_shield_tactical_shemagh_CB", "", 2500, { "", "", -1 } },
            { "milgp_f_face_shield_tactical_shemagh_khk", "", 2500, { "", "", -1 } },
            { "milgp_f_face_shield_tactical_shemagh_RGR", "", 2500, { "", "", -1 } },
            { "TRYK_US_ESS_Glasses", "", 2500, { "", "", -1 } },
            { "TRYK_US_ESS_Glasses_TAN_BLK", "", 2500, { "", "", -1 } },
            { "TRYK_US_ESS_Glasses_BLK", "", 2500, { "", "", -1 } },
            { "TRYK_US_ESS_Glasses_TAN", "", 2500, { "", "", -1 } },
            //      ______________REBEL______________
            //      -----------Stealth Balaclava--------------
            { "G_Balaclava_TI_blk_F", "", 2000, { "", "", -1 }},
            { "G_Balaclava_TI_G_blk_F", "", 2000, { "", "", -1 }},
            { "G_Balaclava_TI_tna_F", "", 2000, { "", "", -1 }},
            { "G_Balaclava_TI_G_tna_F", "", 2000, { "", "", -1 }},
            //      ______________DIVING______________
            { "G_Diving", "", 500, { "", "", -1 } },
            { "G_I_Diving", "", 500, { "", "", -1 } },
            { "G_O_Diving", "", 500, { "", "", -1 } },
            { "G_B_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            //      ______________REBEL______________
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            //      ------------Ceinture--------------
            { "V_Rangemaster_belt", "", 1000, { "", "", -1 } },
            //      -----------Bandouliere--------------
            { "V_BandollierB_cbr", "", 2000, { "", "", -1 } },
            { "V_BandollierB_khk", "", 2000, { "", "", -1 } },
            { "V_BandollierB_oli", "", 2000, { "", "", -1 } },
            { "V_BandollierB_rgr", "", 2000, { "", "", -1 } },
            { "V_BandollierB_ghex_F", "", 2000, { "", "", -1 } },
            { "V_BandollierB_blk", "", 2000, { "", "", -1 } },
            //      -----------------------------------
            { "V_TacChestrig_cbr_F", "", 3000, { "", "", -1 } },
            { "V_TacChestrig_oli_F", "", 3000, { "", "", -1 } },
            { "V_TacChestrig_grn_F", "", 3000, { "", "", -1 } },
            //      -----------------------------------
            { "V_Chestrig_khk", "", 4000, { "", "", -1 } },
            { "V_Chestrig_oli", "", 4000, { "", "", -1 } },
            { "V_Chestrig_rgr", "", 4000, { "", "", -1 } },
            { "V_Chestrig_blk", "", 4000, { "", "", -1 } },
            { "rhs_6sh92", "", 4000, { "", "", -1 } },
            { "rhs_6sh92_headset", "", 4000, { "", "", -1 } },
            { "rhs_6sh92_radio", "", 4000, { "", "", -1 } },
            { "rhs_6sh92_vog", "", 4000, { "", "", -1 } },
            { "rhs_6sh92_digi", "", 4000, { "", "", -1 } },
            { "rhs_6sh92_digi_headset", "", 4000, { "", "", -1 } },
            { "rhs_6sh92_digi_radio", "", 4000, { "", "", -1 } },
            { "rhs_6sh92_digi_vog_headset", "", 4000, { "", "", -1 } },
            { "rhs_6sh92_digi_vog", "", 4000, { "", "", -1 } },
            { "rhs_6sh92_digi_vog", "", 4000, { "", "", -1 } },
            { "rhs_6sh92_digi_vog", "", 4000, { "", "", -1 } },
            { "rhsgref_TacVest_ERDL", "", 4000, { "", "", -1 } },
            { "rhs_vydra_3m", "", 4000, { "", "", -1 } },
            //      -----------Grenadier--------------
            { "V_HarnessOGL_brn", "", 5000, { "", "", -1 } },
            { "V_HarnessOGL_gry", "", 5000, { "", "", -1 } },
            { "V_HarnessOGL_ghex_F", "", 5000, { "", "", -1 } },
            //      -----------------------------------
            { "V_HarnessO_brn", "", 6000, { "", "", -1 } },
            { "V_HarnessO_gry", "", 6000, { "", "", -1 } },
            { "V_HarnessO_ghex_F", "", 6000, { "", "", -1 } },
            //      ---------------Petit---------------
            { "V_TacVest_brn", "", 50000, { "", "", -1 } },
            { "V_TacVest_khk", "", 50000, { "", "", -1 } },
            { "V_TacVest_camo", "", 50000, { "", "", -1 } },
            { "V_TacVest_oli", "", 50000, { "", "", -1 } },
            { "V_I_G_resistanceLeader_F", "", 50000, { "", "", -1 } },
            // RHS:
            { "rhs_6b23", "", 100000, { "", "", -1 }},
            { "rhs_6b23_engineer", "", 100000, { "", "", -1 }},
            { "rhs_6b23_rifleman", "", 100000, { "", "", -1 }},
            { "rhs_6b23_sniper", "", 100000, { "", "", -1 }},
            { "rhs_6b23_digi", "", 100000, { "", "", -1 }},
            { "rhs_6b23_digi_engineer", "", 100000, { "", "", -1 }},
            { "rhs_6b23_digi_rifleman", "", 100000, { "", "", -1 }},
            { "rhs_6b23_digi_sniper", "", 100000, { "", "", -1 }},
            { "rhsgref_6b23_ttsko_digi_sniper", "", 100000, { "", "", -1 }},
            { "rhsgref_6b23_ttsko_digi", "", 100000, { "", "", -1 }},
            { "rhs_6b23_6sh116_od", "", 150000, { "", "", -1 } },
            { "rhs_6b23_6sh116_vog_od", "", 150000, { "", "", -1 } },
            { "rhs_6b23_6sh92", "", 150000, { "", "", -1 } },
            { "rhs_6b23_6sh92_headset", "", 150000, { "", "", -1 } },
            { "rhs_6b23_6sh92_radio", "", 150000, { "", "", -1 } },
            { "rhs_6b23_6sh92_vog", "", 150000, { "", "", -1 } },
            { "rhs_6b23_6sh92_vog_headset", "", 150000, { "", "", -1 } },
            { "rhs_6b23_6sh116", "", 150000, { "", "", -1 } },
            { "rhs_6b23_6sh116_vog", "", 150000, { "", "", -1 } },
            { "rhs_6b23_digi_6sh92", "", 150000, { "", "", -1 } },
            { "rhs_6b23_digi_6sh92_headset", "", 150000, { "", "", -1 } },
            { "rhs_6b23_digi_6sh92_headset_spetsnaz", "", 150000, { "", "", -1 } },
            { "rhs_6b23_digi_6sh92_radio", "", 150000, { "", "", -1 } },
            { "rhs_6b23_digi_6sh92_Spetsnaz", "", 150000, { "", "", -1 } },
            { "rhs_6b23_digi_6sh92_vog", "", 150000, { "", "", -1 } },
            { "rhs_6b23_digi_6sh92_vog_headset", "", 150000, { "", "", -1 } },
            { "rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz", "", 150000, { "", "", -1 } },
            { "rhs_6b23_digi_vydra_3m", "", 150000, { "", "", -1 } },
            { "rhs_6b23_6sh116_flora", "", 150000, { "", "", -1 } },
            { "rhs_6b23_6sh116_vog_flora", "", 150000, { "", "", -1 } },
           // { "rhsgref_6b23_khaki_rifleman", "", 150000, { "", "", -1 } }, bug!
            //{ "V_TacVest_blk", "", 30000, { "", "", -1 } },
            //      ----------------Press--------------
            //{ "V_Press_F", "", 100000, { "", "", -1 } },
            //      ______________CRAFT______________
            { "V_PlateCarrierIA1_dgtl", "", 70000, { "", "", -1 }, {"life_playerlevel >= 50 && ['nocraft'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: La flemme"}},
            { "V_PlateCarrierIA2_dgtl", "", 80000, { "", "", -1 }, {"life_playerlevel >= 50 && ['nocraft'] call life_fnc_hasPerk", "Niveau: 50<br/>Compétence: La flemme"}},
           
            //      ______________DIVING______________
            //      ----------Respirateurs--------------
            { "V_RebreatherB", "", 10000, { "", "", -1 } },
            { "V_RebreatherIA", "", 10000, { "", "", -1 } },
            { "V_RebreatherIR", "", 10000, { "", "", -1 } }
        };
        backpacks[] = {
            //      ______________CIVIL______________
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            //      -------------AssaultPack--------------
            { "B_AssaultPack_cbr", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_Kerry", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_ocamo", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_tna_F", "", 1000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 1000, { "", "", -1 } },
            //      -------------FieldPack--------------
            { "B_FieldPack_cbr", "", 2000, { "", "", -1 } },
            { "B_FieldPack_ghex_F", "", 2000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 2000, { "", "", -1 } },
            { "B_FieldPack_khk", "", 2000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 2000, { "", "", -1 } },
            { "B_FieldPack_blk", "", 2000, { "", "", -1 } },
            { "B_FieldPack_oli", "", 2000, { "", "", -1 } },
            //      -------------TacticalPack--------------
            { "B_TacticalPack_ocamo", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_mcamo", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_blk", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_rgr", "", 3000, { "", "", -1 } },
            { "B_HuntingBackpack", "", 3000, { "", "", -1 } },
            //      -------------Viper leger--------------
            { "B_ViperLightHarness_hex_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_khk_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_oli_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_ghex_F", "", 4000, { "", "", -1 } },
            { "B_ViperLightHarness_blk_F", "", 4000, { "", "", -1 } },
            //      -------------Kitbag--------------
            { "B_Kitbag_cbr", "", 5000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 5000, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 5000, { "", "", -1 } },
            { "B_Kitbag_rgr", "", 5000, { "", "", -1 } },
            { "rhssaf_kitbag_smb", "", 5000, { "", "", -1 } },

            { "rhs_assault_umbts", "", 5000, { "", "", -1 } },
            { "milgp_bp_Breacher_cb", "", 5000, { "", "", -1 } },
            { "milgp_bp_Breacher_khk", "", 5000, { "", "", -1 } },
            { "milgp_bp_hydration_cb", "", 5000, { "", "", -1 } },
            { "milgp_bp_hydration_khk", "", 5000, { "", "", -1 } },
            { "milgp_bp_Tomahawk_cb", "", 5000, { "", "", -1 } },
            { "milgp_bp_Tomahawk_khk", "", 5000, { "", "", -1 } },
            //      -----------------Viper---------------------
            { "B_ViperHarness_hex_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_khk_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_oli_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_ghex_F", "", 6000, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 6000, { "", "", -1 } },
            //      -------------Carryall---------------
            { "B_Carryall_ghex_F", "", 7000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7000, { "", "", -1 } },
            { "B_Carryall_oli", "", 7000, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7000, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7000, { "", "", -1 } },
            { "B_Carryall_khk", "", 7000, { "", "", -1 } },
            { "milgp_b_patrol_01_cb", "", 10000, { "", "", -1 } },
            { "milgp_b_patrol_01_khk", "", 10000, { "", "", -1 } },
            { "milgp_b_patrol_01_rgr", "", 10000, { "", "", -1 } },
            //      --------------------------------------
            { "B_Parachute", "", 500, { "", "", -1 } }
        };
      };
      class security {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "TRYK_U_B_TANOCP_CombatUniform", "", 5000, { "", "", -1 }},
            { "TRYK_U_B_ODTAN", "", 5000, { "", "", -1 }}
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_HelmetB_light_sand", "", 5000, { "", "", -1 }},
            { "milgp_h_airframe_03_goggles_RGR_hexagon", "", 5000, { "", "", -1 }}
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "H_HelmetB_light_black", "", 5000, { "", "", -1 }},
            { "TRYK_kio_balaclava_ear", "", 5000, { "", "", -1 }}
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "TAC_V_Sheriff_BA_TB2", "", 100000, { "", "", -1 } },
            { "milgp_v_mmac_teamleader_belt_MC", "", 100000, { "", "", -1 } }
        };
        backpacks[] = {
           { "NONE", "Remove Backpack", 0, { "", "", -1 } },
           { "TRYK_B_Kitbag_blk", "", 10000, { "", "", -1 } },
           { "milgp_b_patrol_01_khk", "", 10000, { "", "", -1 } }
        };
      };
      class sud {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "Clan1", "", 5000, { "", "", -1 }},
            { "Clan2", "", 5000, { "", "", -1 }},
            { "Clan3", "", 5000, { "", "", -1 }}
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "Beret_clan", "", 5000, { "", "", -1 }},
            { "H_MilCap_gry", "", 5000, { "", "", -1 }},
            { "chapeaubrousse_clan", "", 5000, { "", "", -1 }},
            { "rhssaf_helmet_m97_black_nocamo", "", 5000, { "", "", -1 }}
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "Mask_M40", "", 5000, { "", "", -1 }},
            { "Mask_M50", "", 5000, { "", "", -1 }},
            { "rhs_googles_clear", "", 5000, { "", "", -1 }},
            { "milgp_f_face_shield_tactical_shemagh_BLK", "", 5000, { "", "", -1 }},
            { "milgp_f_face_shield_shemagh_BLK", "", 5000, { "", "", -1 }},
            { "R3F_cagoule_noire", "", 5000, { "", "", -1 }},
            { "R3F_cagoule_punisher", "", 5000, { "", "", -1 }},
            { "Foulard_clan", "", 5000, { "", "", -1 }}
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "Gillet_clan", "", 100000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_ViperHarness_blk_F", "", 10000, { "", "", -1 } },
            { "R3F_sac_lourd_noir", "", 10000, { "", "", -1 } },
            { "rhs_assault_umbts_noir", "", 10000, { "", "", -1 } }
        };
      };

      class gouv {
        title = "STR_Shops_Bruce";
        license = "";
        side = "civ";
        legal = 0;
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "EF_suit_Y4", "", 1000, { "", "", -1 }},
            { "U_C_Uniform_Scientist_01_F", "", 1000, { "", "", -1 }}
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "sab_sikorskys38_cap", "", 500, { "", "", -1 }},
            { "milgp_f_tactical_khk", "", 500, { "", "", -1 }}
        };
        goggles[] = {
            { "NONE", "Remove Goggles", 0, { "", "", -1 } },
            { "milgp_f_tactical_khk", "", 500, { "", "", -1 }}
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_DeckCrew_white_F", "", 25000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Messenger_Black_F", "", 1000, { "", "", -1 } }
        };
      };
};
