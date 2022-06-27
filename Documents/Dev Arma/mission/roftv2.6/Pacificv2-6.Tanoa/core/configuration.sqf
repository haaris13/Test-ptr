#include "..\script_macros.hpp"
/*
	Master Life Configuration File
	This file is to setup variables for the client, there are still other configuration files in the system

*****************************
****** Backend Variables *****
*****************************
*/

// Admin
life_log_admin = false;
life_mode_admin = false;
life_uniform_gear = [];
life_markers_zone_no_cond = [];
life_hide = false;
life_showNameTag = false;
life_bulletsPlayer = [];
life_bulletsPlayerZone = [];
life_admin_stopAction = [];
life_serviceGhost = false;
life_isFed = false;
life_alertAdmin = true;
life_hasSpawn = false;

life_bank_can_depose = 0;
life_illegal_profit = 0;
life_money_laundering = 0;

smart_marker_ready = false;

life_trans_on = false;

life_training_target_profile = [];
life_training_target_stats = [];

life_atouts_actif = [];
life_player_unLocks = [];

life_achievement = [];

life_serviceUn = false;
life_front_allPlayers = [];

life_fourriere_on_payout = false;

life_query_time = time;
life_reportPlayerUids = [];
life_action_delay = time;
life_action_iem = time;
life_save_delay = time;
life_action_scanner = time;
life_action_rob = time;
life_trunk_vehicle = Objnull;
life_session_completed = false;
life_garage_store = false;
life_session_tries = 0;
life_siren_active = false;
life_clothing_filter = 0;
life_clothing_uniform = -1;
life_redgull_effect = time;
life_is_processing = false;
life_bail_paid = false;
life_impound_inuse = false;
life_action_inUse = false;
life_spikestrip = ObjNull;
life_respawn_timer = 0.1; //Scaled in minutes
life_knockout = false;
life_interrupted = false;
life_respawned = false;
life_removeWanted = false;
life_action_gathering = false;
life_vdFoot = viewDistance;
life_vdCar = viewDistance;
life_vdAir = viewDistance;
tawvd_addon_disable = true;
life_god = false;
life_frozen = false;
life_markers = false;
life_fed_break = 0;
life_save_gear = [];
life_container_active = false;
life_container_activeObj = ObjNull;
life_disable_getIn = false;
life_disable_getOut = false;
life_reliq_charge = 0;
life_campfires = 0;
life_debug = 0;
life_newMoney = 0;
life_nametags = [];
life_vehtags = [];
life_revive = false;
life_dead = false;
life_send_jail = false;
life_iem_state = 0;
life_nb_supress = 0;
life_action_immatriculationInUse = false;
life_earthquake = false;
life_delete_time = time;
life_balise_depan_active = false;

// ENT
life_ent_contrat_jewel = false;

life_level_gendarme = -1;
life_depanlevel = 0;
life_ocasLevel = 0;
life_presslevel = 0;
life_barLevel = 0;

life_eat = false;
life_iseffectCagoule = false;
life_vote_action = false;
life_fuel_use = false;
life_entreprises = [];
life_knowPlayers = [];

life_pos_start = [];
life_atouts_actif = [];
life_markers_zone_share = [];
life_markers_zone_visible = [];
life_markers_zone_visible_cfg = [];

life_chimieSound_time = time;

//Furnace
life_furnace_config = [];
life_furnace_temp = -1;

//BANK:
life_time_littlebank = 10;
life_time_littleBankSimple = 8;

//Notif:
life_eventNotifQueue = 0;
life_activeNotifControl = [];
life_eventNotifMessages = [];

life_notifControlText = 30000;
life_notifControlStrip = 30001;

life_curWep_h = "";

life_use_radar = false;
life_furnace_on = false;

//Playtime
life_join_time = serverTime;
life_play_time = 0;
//Request medic related
life_bledout_time = time;
life_bledout = false;
Life_medic_requested = false; 
life_mode_medic = false;
life_medic_canRevive = -1;
life_mode_medic_civ = objNull;
life_respawn_timer = 30; //Actual time in seconds
life_respawn_timer_med = 60;
life_parts = [0,[]];

//Earplugs 
life_fadeSound = false;
//Placeable items
life_object = objNull;
//Backpacks
life_backpack_hidden = false;
life_backpack_textures = [];

life_group_west = grpNull;
life_group = grpNull;
life_serviceSos = false;

life_farms = [];

//Settings
Life_UISounds_enabled = true;
life_help_active = true;
life_list_help = [];

//Uniform price (0),Hat Price (1),Glasses Price (2),Vest Price (3),Backpack Price (4)
life_clothing_purchase = [-1,-1,-1,-1,-1];

//Dialog stuff
life_activeEventFeedControls = [];
life_eventControl = 20000;
life_eventFeedQueue = 0;
life_activeItemReceivedControls = [];
life_itemControl = 40000;
//PPFX
life_activePPEffects = [];
//Trading
life_trade_target = objNull;
life_trade_yourItemOffer = [];
life_trade_yourMoneyOffer = 0;
life_trade_recievedItemOffer = [];
life_trade_recievedMoneyOffer = 0;
life_trade_bothAccepted = false;
life_trade_offerRecieved = false;
life_trade_acceptRecieved = false;
life_trade_forceClose = true;
life_tradesDisabled = true;
//Processing 
life_vendortarget = objNull;
//Storage
life_storage = [];
life_storage_cap = 500;
//Messaging
life_messages = [];
//Fishing
life_fishNets = 0;
life_crabPots = 0;
life_activeFishNets = 0;
life_activeCrabPots = 0;

//Perks/levelling
life_activePerks = [];
life_xpForNext = 0;
life_xpTowardsNext = 0;
life_disableXP = false;

//Shops
life_playerEquipment = [];

life_machineUse = 5;

life_isInInventory = false;

/*
*****************************
****** Weight Variables *****
*****************************
*/
life_maxWeight = LIFE_SETTINGS(getNumber,"total_maxWeight");
life_carryWeight = 0; //Represents the players current inventory weight (MUST START AT 0).

/*
*****************************
****** Life Variables *******
*****************************
*/
life_net_dropped = false;
life_use_atm = true;
life_is_arrested = false;
life_delivery_in_progress = false;
life_thirst = 100;
life_hunger = 100;
CASH = 0;

life_istazed = false;
life_isknocked = false;
life_vehicles = [];

/*
	Master Array of items?
*/
//Setup variable inv vars.
{
	SVAR_MNS [ITEM_VARNAME(configName _x),0];
} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));

/* Setup the BLAH! */
{
	_varName = getText(_x >> "variable");
	_sideFlag = getText(_x >> "side");

	SVAR_MNS [LICENSE_VARNAME(_varName,_sideFlag),false];
} foreach ("true" configClasses (missionConfigFile >> "Licenses"));

//Professions
{
	_varName = getText(_x >> "variable");

	SVAR_MNS [PROFESSION_VARNAME(_varName),0];
} foreach ("true" configClasses (missionConfigFile >> "Professions"));

uiNamespace setVariable ["life_shell_CompShell", ""];

life_chairs_sit = [
	//"Land_ChairWood_F"
];

/*
*****************************
***** Placeable Items *******
*****************************
*/
life_placeables = [
	["roadcone","cone"],
	["roadbarrier","RoadBarrier_F"],
	["tapesignsm", "RoadBarrier_small_F"],
	["tapesignwarning", "Land_PlasticBarrier_03_F"],
	["tapesign", "TapeSign_F"],
	["arrowleft", "ArrowDesk_L_F"],
	["arrowright", "ArrowDesk_R_F"],
	["portablebarrier", "Land_BarGate_F"],
	["portablelight", "Land_PortableLight_double_F"],
	["triflash", "triflash"],
	["coneflash", "coneflash"],
	["routbarr", "routbarr"],
	["genhal", "genhal"],

	["PlasticBarrier_02_grey_F", "PlasticBarrier_02_grey_F"],
	["Land_PlasticBarrier_02_F", "Land_PlasticBarrier_02_F"],
	["Land_PlasticBarrier_01_line_x4_F", "Land_PlasticBarrier_01_line_x4_F"],
	["Land_PlasticBarrier_01_line_x2_F", "Land_PlasticBarrier_01_line_x2_F"],
	["PlasticBarrier_01_white_F", "PlasticBarrier_01_white_F"],
	["Land_TyreBarrier_01_line_x4_F", "Land_TyreBarrier_01_line_x4_F"],
	["Land_TyreBarrier_01_F", "Land_TyreBarrier_01_F"],
	["Land_TyreBarrier_01_line_x6_F", "Land_TyreBarrier_01_line_x6_F"]
];

life_hidden_clothing = [
	"H_RacingHelmet_1_white_F",
	"H_RacingHelmet_1_blue_F",
	"H_RacingHelmet_2_F",
	"H_RacingHelmet_1_F",
	"H_RacingHelmet_1_yellow_F",
	"H_RacingHelmet_1_black_F",
	"H_RacingHelmet_1_orange_F",
	"H_RacingHelmet_3_F",
	"H_RacingHelmet_1_red_F",
	"H_RacingHelmet_1_green_F",
	"H_PilotHelmetFighter_I",
	"H_PilotHelmetFighter_O",
	"H_PilotHelmetFighter_B",
	"H_ShemagOpen_tan",
	"H_Shemag_olive",
	"H_Shemag_olive_hs",
	"H_RacingHelmet_4_F",
	"H_ShemagOpen_khk",
	"H_CrewHelmetHeli_I",
	"H_CrewHelmetHeli_O",
	"H_CrewHelmetHeli_B",

	"G_Balaclava_combat",
	"G_Balaclava_lowprofile",
	"G_Balaclava_blk",
	"G_Balaclava_oli",
	"G_Bandanna_aviator",
	"G_Bandanna_tan",
	"G_Bandanna_beast",
	"G_Bandanna_khk",
	"G_Bandanna_blk",
	"G_Bandanna_oli",
	"G_Bandanna_shades",
	"G_Bandanna_sport",
	
	"G_Balaclava_TI_blk_F",
	"G_Balaclava_TI_G_blk_F",
	"G_Balaclava_TI_tna_F",
	"G_Balaclava_TI_G_tna_F",


	//RHS,
	"rhs_6b26_bala_green",
	"rhs_6b26_ess_bala_green",
	"rhs_6b27m_green_bala",
	"rhs_6b27m_green_ess_bala",
	"rhs_6b27m_digi_bala",
	"rhs_6b27m_digi_ess_bala",
	"rhs_6b27m_bala",
	"rhs_6b27m_ess_bala",
	"rhs_6b28_green_bala",
	"rhs_6b28_green_ess_bala",
	"rhs_6b28_bala",
	"rhs_6b28_ess_bala",
	"rhs_6b28_flora_bala",
	"rhs_6b28_flora_ess_bala",
	"rhs_6b47_bala",
	"rhs_6b47_ess_bala",
	"rhs_6b7_1m_bala1",
	"rhs_6b7_1m_bala2",
	"rhs_6b7_1m_bala2_emr",
	"rhs_6b7_1m_bala1_emr",
	"rhs_6b7_1m_emr_ess_bala",
	"rhs_6b7_1m_ess_bala",
	"rhs_6b7_1m_bala1_flora",
	"rhs_6b7_1m_bala2_flora",
	"rhs_6b7_1m_bala1_olive",
	"rhs_6b7_1m_bala2_olive",
	"rhs_altyn_novisor_bala",
	"rhs_altyn_novisor_ess_bala",
	"rhs_balaclava",
	"rhs_balaclava1_olive",
	"Mask_M40",
	"Mask_M40_OD",
	"Mask_M50",
	"milgp_f_face_shield_CB",
	"milgp_f_face_shield_khk",
	"milgp_f_face_shield_RGR",
	"milgp_f_face_shield_shemagh_BLK",
	"milgp_f_face_shield_shemagh_CB",
	"milgp_f_face_shield_shemagh_khk",
	"milgp_f_face_shield_shemagh_RGR",

	"milgp_f_face_shield_goggles_BLK",
	"milgp_f_face_shield_goggles_CB",
	"milgp_f_face_shield_goggles_khk",
	"milgp_f_face_shield_goggles_RGR",
	"milgp_f_face_shield_goggles_shemagh_BLK",
	"milgp_f_face_shield_goggles_shemagh_CB",
	"milgp_f_face_shield_goggles_shemagh_khk",
	"milgp_f_face_shield_goggles_shemagh_RGR",
	"milgp_f_face_shield_tactical_BLK",
	"milgp_f_face_shield_tactical_CB",
	"milgp_f_face_shield_tactical_khk",
	"milgp_f_face_shield_tactical_RGR",
	"milgp_f_face_shield_tactical_shemagh_BLK",
	"milgp_f_face_shield_tactical_shemagh_CB",
	"milgp_f_face_shield_tactical_shemagh_khk",
	"milgp_f_face_shield_tactical_shemagh_RGR"
];

life_noname_clothing = [
	"U_I_GhillieSuit",
	"U_O_GhillieSuit",
	"U_B_FullGhillie_lsh",
	"U_B_FullGhillie_sard",
	"U_B_FullGhillie_ard",
	"U_O_FullGhillie_lsh",
	"U_O_FullGhillie_sard",
	"U_O_FullGhillie_ard",
	"U_I_FullGhillie_lsh",
	"U_I_FullGhillie_sard",
	"U_I_FullGhillie_ard",
	"U_VirtualMan_F",
	"U_B_T_Sniper_F",
	"U_O_T_Sniper_F",
	"U_B_GhillieSuit"
];

if(isNil 'life_placeables_classes') then {
	life_placeables_classes = [];
	{life_placeables_classes pushBack (_x select 1);} forEach (life_placeables);
};


/*
*****************************
******	   Housing 	  *******
*****************************
*/