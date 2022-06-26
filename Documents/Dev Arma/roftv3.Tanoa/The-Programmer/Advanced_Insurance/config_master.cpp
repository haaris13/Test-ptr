/*
    Author: Yuri Zoko
    Web site: www.the-programmer.com
    Discord: discord.the-programmer.com

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.
*/
#define true 1
#define false 0

class The_Programmer_AdvancedInsure {
    default_lang = "fr"; // fr / en / de / es

    textures_base_path = "The-Programmer\Advanced_Insurance\textures";
    tonic_version = 4; //5 if you are on version 5.0 or 4 if you are on version 4.X
    license_plate_script_enable = false;

    // INSURANCE VALIDITY PERIOD
    days = 30; // Choose the duration to be in days configure here.
    no_expiration = false; // If true then the insurance never expires.
    no_expiration_display = "XX/XX/XXXX"; // Display date expiration, ONLY IF NO_EXPIRATION IS TRUE.

    // CONFIG PRICE INSURANCE
    startingPrice = "500"; // Base price for insurance.
    level_1_price = 0.02; // Multiplier for insure level 1, EX : PriceOfVehicle * Multiplier (1 000 000 * 0.10 = 100 000€)
    level_2_price = 0.05; // Price for insure level 2
    level_3_price = 0.07; // Price for insure level 3
    level_4_price = 0.10; // Price for insure level 4

    // INSURANCE REFUND
    level_2_refund = 0.25; // Multiplier for insure refund level 2, EX : PriceOfVehicle * Multiplier (1 000 000 * 0.25 = 250 000€)
    level_3_refund = 0.40; // Multiplier for insure refund level 3, EX : PriceOfVehicle * Multiplier (1 000 000 * 0.50 = 500 000€)
    level_4_refund = 0.50; // Multiplier for insure refund level 4, EX : PriceOfVehicle * Multiplier (1 000 000 * 0.90 = 900 000€)

    // CHANGE OWNER VEHICLE THEFT
    newregister = true; // Enable or Disable to change the owner of a stolen vehicle
    duration_register = 20; // In seconds
    duration_plate = 15; // In seconds
    keep_insurance = false; // When a stolen vehicle is insured, the new owner keeps the vehicle's insurance
    blacklisted_vehicles[] = {"sciage_comp","diam_comp","sunrisebeach","Peterbilt379lu_b","chduster14_civ_enedis", "kangooII1_enedis", "master3p2_enedis", "Trafic3_enedis", "Trafic2pl_enedis", "chtwingoII_civ_enedis", "Caddych_enedis", "I_Truck_02_medical_F", "O_Truck_03_medical_F", "B_Truck_01_medical_F", "C_SUV_01_F", "C_Hatchback_01_sport_F", "B_MRAP_01_F", "B_MRAP_01_hmg_F"}; // Classname of vehicles you want to blacklist like this : {"C_Offroad_01_F", "O_MRAP_02_F"}

    // RESELL VEHICLE
    can_sell = true; // Enable or Disable to resell a stolen vehicle
    duration_resell = 30; // In seconds
    chance = 0.50; // Percentage chance of closing a good sale, else you will be scammed.
    scam = 0.30; // Multiplier of the price in case of scam.
    resell_price = 0.10; // This is the multiplication factor of the vehicle price's in config_vehicle.hpp (price of the vehicle * resell_price)

    // GPS TRACKER
    tracker = "gpstracker"; // Classname for GPS Tracker.
    cuttingpliers = "cuttingpliers"; // Classname for cut GPS Tracker.
    duration_GPS = 15; // Duration of installation of the GPS Tracker in seconds
    duration_verif = 15; // Check if an GPS Tracker is installed on a vehicle in seconds.
    cutTracker = 0.50; // Percent chance of cuting a GPS Tracer.

    // OWNER OF THE VEHICLE
    verif_level_1 = 0.15; // Percent chance of finding a GPS Tracer depends on the level of assurance.
    verif_level_2 = 0.30; // Percent chance of finding a GPS Tracer depends on the level of assurance.
    verif_level_3 = 0.70; // Percent chance of finding a GPS Tracer depends on the level of assurance.
    verif_level_4 = 1; // Percent chance of finding a GPS Tracer depends on the level of assurance.

    // OTHER
    verif_no_owner = 0.10; // Percent chance of finding a GPS Tracer when is not owner of the vehicle.
    price_to_theft = 0.50; //Multiplier of the vehicle price to start theft procedure.

    // CAR ALARM
    alarm_level_1 = 0.15; // Percentage of probability that an alarm will sound after a lockpick depend on the insurance level.
    alarm_level_2 = 0.40; // Percentage of probability that an alarm will sound after a lockpick depend on the insurance level.
    alarm_level_3 = 0.70; // Percentage of probability that an alarm will sound after a lockpick depend on the insurance level.
    alarm_level_4 = 1; // Percentage of probability that an alarm will sound after a lockpick depend on the insurance level.
};