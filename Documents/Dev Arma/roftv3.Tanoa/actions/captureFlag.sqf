this allowDamage false;
this addAction ["Revendiquer la zone",life_fnc_captureZoneGang,"",0,false,false,"",' playerSide == civilian && !isNil {(group player) getVariable "gang_owner"}'];
this setVariable ["zone_name","Nicolet"];