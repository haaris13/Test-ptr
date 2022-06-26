/*
	File:fn_initfatigue.sqf

	Autor:IronBlade

*/
/*if (playerSide in [civilian,west]) then {
	life_fatigue = 0.7;
} else {
	life_fatigue = 0.3;
};
*/

[] spawn {
    while {true} do {
        if (getFatigue player < 0.3) then {
           // player setFatigue life_fatigue;

            ["Action","Fatigue",true] spawn life_fnc_showHelp;
        };

        uiSleep 1.5;
    };
};