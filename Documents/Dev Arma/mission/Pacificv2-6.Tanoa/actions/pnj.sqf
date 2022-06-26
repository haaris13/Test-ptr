
// Chimie
removeAllWeapons this;
this allowDamage false;
this enableSimulation false;
this addAction["Commercer",life_fnc_virt_menu,"chimie",0,false,false,"",' vehicle player == player && player distance _target < 5 && playerSide == civilian '];


// Process

this enableSimulation false;    
this allowDamage false;  
this addAction["Travail",life_fnc_iceOpenDiag,"pos1",0,false,false,"",'playerSide == civilian'];  
this addAction["Coffre",life_fnc_iceContainerOpen,"pos1",0,false,false,"",' playerSide == civilian '];