/*
    Author: Frank Carter
    Teamspeak 3: ts3.werksfabrik.de
	Website: www.werksfabrik.de
	
    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.
*/
#define false 0
#define true 1

class FC_Settings_SpeedCam {
    default_lang = "fr"; // fr / en / de / es

    textures_base_path = "The-Programmer\SpeedCam\textures";

	license_plate_script_enable = false;
	governement_system_script_enable = false;
	points_driving_script_enable = true;

	permis_class_in_points_driving_config = "driver"; // Only if points_driving_license_script_enable = true;
	points_lost_per_infraction = 2; // Only if points_driving_script_enable = true. Default : 2

	pay_on_flashed = false; // Money directly debited from bank account if the driver is in excess speed. Default : true
	money_lost_per_infraction = 1000; // Only if pay_on_flashed = true. Amount of money debited. Default : 75

	show_veh_speed = true; // Displays the speed of the vehicle in the overview. (1=True, 0=false). Default : true

	radar_radius = 30; // Radius of the speed camera. Default : 15
	radar_3D_model = "SpeedRadar";

	speed_tolerance = 7; // Tolerance in addition to indicated speed. Default : 7
	max_speedcam_officer = 2; // Number of cameras that a police officer can build. Default : 2

	can_flash_cops = true; // If set to false, all the players in west side will not be flashed even in excess speed. Default : true
	can_flash_medics = true; // If set to false, all the players in independent side will not be flashed even in excess speed. Default : true

	flash_effect = true; // If set to false, the driver of the vehicle will not have a flash effect if he/she is caught in excess of speed next to a speed camera. Default : true

	show_owner_info = 1; 
	/* 1,2, 3 or 4 
	1 = Displays the name of the owner in the overview,
	2 = Displays the player ID of the owner in the overview, 
	3 = Displays the name and player ID of the owner in the overview "Name (Player-ID)", 
	4 = Do not displays name and player ID
	Default : 1
	*/
};