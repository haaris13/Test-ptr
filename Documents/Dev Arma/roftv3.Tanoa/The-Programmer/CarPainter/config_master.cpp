/*
    Author: 3rk
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

*/
class The_Programmer_CarPainter_Config {
    default_lang 				= "fr"; // fr / en / es / de
	debug_mode					= false; // /!\ false by default. Active logs for error and warning in rpt files

	who_can_use_repaint			= 1; // 0 = No one can use CarPainter, 1 = everyone can use CarPainter.

	paint_mode_license_own		= "license_civ_custom"; // The condition to repaint his own vehicles (exemple : "license_civ_painter", only players who has this license can repaint his vehicles). Leave blank for no condition.
	paint_mode_license_any		= "license_civ_custom"; // The condition to repaint any vehicles (exemple : "license_civ_painter", only players who has this license can repaint any vehicles). Leave blank for no condition.

	allow_rvmats_onAllVeh		= true; // /!\ false by default. I advise not to touch this. By turning this to true, this will allow players to change the rvmats for free for the vehicles that doesn't have a rvmat texture by default. The CarPainter system reset the texture and the rvmat texture when the player leave the dialog without paying. But if the vehicle doesn't have a rvmat texture by default, I can't reset it, so the rvmat texture will stay until the player store his vehicle in a garage. Waiting for an update from Bohemia.
	blacklisted_vehicles[]  	= {"AlessioC63Black", "AlessioMustangGofast", "AlessioM5Gofast", "AlessioRS5Gofast", "AlessioRS4Gofast","WRX_Gofast","C63S_Gofast","M5_Gofast","RS6_Gofast"}; // Classname of vehicles you want to blacklist like this : {"C_Offroad_01_F", "O_MRAP_02_F"}
    global_preview 				= true; // Broadcast the preview of the color to all players when changes are made ? If set to false, only the player who's in the CarPainter dialog will see the colors. If true, everyone will see the preview.
	means_of_payment 			= 2; // 1 = cash only, 2 = cash or bank
	display_owner_name			= true; // Display the owner's name vehicle in the Car Painter Dialog.
	repaint_animation 			= "AinvPknlMstpSnonWnonDnon_medic_1"; // The animation the player is doing while repainting
	repaint_price 				= 0.01; // This is the multiplication factor of the vehicle price's in config_vehicle.hpp (price of the vehicle * repaint_price)
};
