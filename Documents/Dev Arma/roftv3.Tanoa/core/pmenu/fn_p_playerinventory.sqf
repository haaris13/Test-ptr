#include "..\..\script_macros.hpp"
/*
	
	Description:
	Opens the user information from the user button on the tablet
	Dont get confused, this was the old default y menu display
	
*/
createDialog "playerInventory";

disableSerialization;

//Update ivnentory
[] call life_fnc_p_updateMenu;