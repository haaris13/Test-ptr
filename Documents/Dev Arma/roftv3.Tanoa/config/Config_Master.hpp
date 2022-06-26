#define true 1
#define false 0

/*
    Master settings for various features and functionality
*/
class Life_Settings {
    /* Persistent Settings */
   
    save_civ_weapons = true; //Allow civilians to save weapons on them?
    save_virtualItems = true; //Save Virtual items (all sides)?
    save_playerStats = false; //Save food & water (all sides)?
    save_civilian_position = false; //Save civilian location?
    save_civilian_position_restart = false;
    save_civilian_positionStrict = false;
    save_veh_virtualItems = false; //Save Virtual items for vehicles (all sides)?
    save_veh_gear = true; //Save Gear for vehicles (all sides)?
    
    /* Clothing related settings */
    clothing_box = true; //true = preview inside a black box.  false = preview on map.

    /* Cop related settings */
    cops_online_min = 5; //minimum cops online for robbing a bank (origine 5)

    cops_online_min_littleBank = 3; //minimum cops online for robbing a bank (origine 3)

    /* Medic related settings*/
    allow_medic_weapons = true; // true allows medics to hold/use weapons - false disallows

    /* Revive system settings */
    revive_cops = true; //true to enable cops the ability to revive everyone or false for only medics/ems.
    revive_fee = 2500; //Revive fee that players have to pay and medics / EMS are rewarded

    /* House related settings */
    house_limit = 5; //Maximum amount of houses a player can own.

    /* Gang related settings */
    gang_price = 73000; //Price for creating a gang, remember they are persistent so keep it reasonable to avoid millions of gangs.
    gang_upgradeBase = 10000; //The base cost for upgrading slots in a gang
    gang_upgradeMultiplier = 2.5; //Not sure if in use?

    /* Player-related systems */
    enable_fatigue = true; //Set to false to disable the ARMA 3 false system.
    total_maxWeight = 24; //Static variable for the maximum weight allowed without having a backpack
    paycheck_period = 5; //Scaled in minutes

    /* Impound Variables */
    impound_car = 1350; //Price for impounding cars (origin 350)
    impound_boat = 1250; //Price for impounding boats(250)
    impound_air = 1850; //Price for impounding helicopters / planes (850)

    /* Initial Bank Amount */
    bank_cop = 30000; //Amount of cash on bank for new cops
    bank_civ = 140000; //Amount of cash on bank for new civillians
    bank_med = 30000; //Amount of cash on bank for new medics

    /* Paycheck Amount */
    paycheck_cop = 1000; //Payment for cops (origine 1000)
    paycheck_civ = 400; //Payment for civillians origin 400
    paycheck_med = 1000; //Payment for medics orogin 1000

    /* Taxi */
    taxi_price_fast = 20000;
    taxi_price_normal = 8500;

    /* Federal Reserve settings */
    noatm_timer = 10; //Time in minutes that players won't be able to deposit his money after selling stolen gold

    /* ATM settings */
    global_ATM = true; //Allow users to access any ATM on the map.

    /* Pump settings */
    Pump_service = true; //Allow users to use pump service on the map. Default = false

    /* Skins settings */
    civ_skins = false; //Enable or disable civilian skins. Before enabling, you must add all the SEVEN files to textures folder. (It must be named as: civilian_uniform_1.jpg, civilian_uniform_2.jpg...civilian_uniform_6.jpg, civilian_uniform_7.jpg)

    /* Car-shop Settings */
    vehicleShop_rentalOnly[] = {};

    uniformERP[] = {"U_I_C_Soldier_Para_1_F","U_I_C_Soldier_Para_2_F","U_I_C_Soldier_Para_3_F","U_I_C_Soldier_Para_4_F","U_I_C_Soldier_Camo_F"};

    /* Job-related stuff */
    delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10" };

    // Gangs
    gang_flags[] = {"gang_zone_1", "gang_zone_2", "gang_zone_3","gang_zone_4","gang_zone_5","gang_zone_6", "gang_zone_7", "gang_zone_8", "gang_zone_9"};
    gang_check_time = 10; // Minutes
    gang_check_distance = 300;

    addonsList[] = {"A3_Functions_F","A3_Data_F","A3_Data_F_ParticleEffects","A3_Dubbing_Radio_F","A3_Editor_F","A3_Functions_F_Curator","A3_Language_F","A3_Modules_F_DynO","A3_Modules_F_Beta_FiringDrills","A3_Music_F","A3_Structures_F","A3_Structures_F_Mil_Flags","A3_Animals_F","A3_Animals_F_Fishes","A3_Animals_F_Rabbit","A3_Animals_F_Snakes","A3_Animals_F_Turtle","A3_Animals_F_Beta_Chicken","A3_Animals_F_Beta_Dog","A3_Animals_F_Beta_Goat","A3_Animals_F_Beta_Sheep","A3_Anims_F_Config_Sdr","A3_Map_Stratis","A3_Ui_F","A3_Ui_F_Curator","A3_Weapons_F","A3_Characters_F","A3_Characters_F_Heads","A3_Data_F_Curator","A3_Data_F_Kart_ParticleEffects","A3_Map_Altis","A3_Missions_F","A3_Modules_F_Kart_TimeTrials","A3_Sounds_F","A3_Static_F","A3_Ui_F_Kart","A3_Weapons_F_Acc","A3_Data_F_Bootcamp","A3_Data_F_Mark","A3_Functions_F_MP_Mark","A3_Missions_F_EPA","A3_Modules_F_MP_Mark_Objectives","A3_Ui_F_MP_Mark","A3_Weapons_F_Mark","A3_Anims_F_Mark_Deployment","A3_Data_F_Exp_B","A3_Ui_F_Exp_A","A3_3DEN","A3_Data_F_Exp_ParticleEffects","A3_Dubbing_Radio_F_EXP","A3_Missions_F_Bootcamp","A3_Missions_F_Heli","A3_Weapons_F_Exp","A3_Map_Tanoabuka"};

        sellableweapons[] = {
            // CLASSNAME, CIVILIAN, COP
            //--Primary weapons
            //-- Cop shops
        // CLASSNAME, CIVILIAN, COP
            //--Primary weapons
            //-- Cop shops

            //--Other
            {"ItemGPS", 45,10},
            {"ToolKit", 75,10},
            {"FirstAidKit", 65,10},
            {"Medikit", 250,10},
            {"NVGoggles", 200,10},
            {"ItemMap", 35,10},
            {"ItemCompass", 25,10}
        };

      sellableclothing[] = {
        // CLASSNAME, CIVILIAN, COP
        {"ItemGPS", 45,10},
        {"ToolKit", 75,10},
        {"FirstAidKit", 65,10},
        {"Medikit", 450,10},
        {"NVGoggles", 500,10},
        {"ItemMap", 35,10},
        {"ItemCompass", 25,10}

      };


    /* Wanted System related settings */
    /* crimes[] = {String, Bounty, Code} */
    crimes[] = {
        {"STR_Crime_187V","25000","187V"}, // Good
        {"STR_Crime_187","25000","187"}, // Good
        {"STR_Crime_901","85000","901"},
        {"STR_Crime_215","25000","215"},
        {"STR_Crime_213","300000","213"},
        {"STR_Crime_211","30000","211"},
        {"STR_Crime_207","50000","207"},
        {"STR_Crime_207A","45000","207A"},
        {"STR_Crime_390","15000","390"},
        {"STR_Crime_487","90000","487"},
        {"STR_Crime_488","10000","488"},
        {"STR_Crime_480","25000","480"},
        {"STR_Crime_481","8000","481"},
        {"STR_Crime_482","500","482"},
        {"STR_Crime_483","100000","483"},
        {"STR_Crime_459","9000","459"},
        {"STR_Crime_666","8000","666"},
        {"STR_Crime_667","180000","667"},
        {"STR_Crime_668","15000","668"},
        {"STR_Crime_1","250","1"},
        {"STR_Crime_2","200","2"},
        {"STR_Crime_3","150","3"},
        {"STR_Crime_4","250","4"},
        {"STR_Crime_5","100","5"},
        {"STR_Crime_6","80","6"},
        {"STR_Crime_7","150","7"},
        {"STR_Crime_8","5000","8"},
        {"STR_Crime_9","5000","9"},
        {"STR_Crime_10","15000","10"},
        {"STR_Crime_11","10000","11"},
        {"STR_Crime_12","2500","12"},
        {"STR_Crime_13","1500","13"},
        {"STR_Crime_14","500","14"},
        {"STR_Crime_15","2500","15"},
        {"STR_Crime_16","1500","16"},
        {"STR_Crime_17","100","17"},
        {"STR_Crime_18","1500","18"},
        {"STR_Crime_19","2500","19"},
        {"STR_Crime_20","500","20"},
        {"STR_Crime_21","500","21"},
        {"STR_Crime_22","2000","22"},
        {"STR_Crime_23","5000","23"},
        {"STR_Crime_24","10000","24"},
        {"STR_Crime_25","20000","25"}
    };
};

#include "Config_Clothing.hpp"
#include "Config_ClothingShop.hpp"
#include "Config_Vehicles.hpp"
#include "Config_Weapons.hpp"
#include "Config_Professions.hpp"
#include "Config_Crafting.hpp"
#include "Config_Perks.hpp"
#include "Config_vItems.hpp"
#include "Config_Licenses.hpp"
#include "Config_Markers.hpp"
#include "Config_Processing.hpp"
#include "Config_ResourceZones.hpp"
#include "Config_Entreprise.hpp"
#include "Config_LittleBank.hpp"
#include "Config_Hint.hpp" 
#include "Config_Atouts.hpp"
#include "Config_Damage.hpp"
#include "Config_Immatriculation.hpp"
#include "Config_Locations.hpp"
#include "Config_ShopVehicle.hpp"
#include "Config_VehicleUpgrade.hpp"
#include "Config_Shell.hpp"
#include "Config_Vehicles_Caches.hpp"
#include "Config_ShopVItems.hpp"
#include "Config_Achievement.hpp"
#include "Config_Mission.hpp"
#include "Config_RoftUseObjects.hpp"

#include "Config_Bourse.hpp"
#include "Config_Chimie.hpp"

#include "Config_Radio.hpp"
#include "Config_FuelStation.hpp"
#include "Config_Houses.hpp"
#include "Config_Clan.hpp"
#include "Config_Containers.hpp"
#include "Config_Map.hpp"
#include "Config_Fourriere.hpp"
#include "Config_Fluids.hpp"
#include "Config_Gouv.hpp"
#include "Config_ONU.hpp"
#include "Nekro_Config_jobs.hpp"

#include "Config_Targets.hpp"
#include "Config_WeaponsCategory.hpp"
#include "Config_Notification.hpp"
