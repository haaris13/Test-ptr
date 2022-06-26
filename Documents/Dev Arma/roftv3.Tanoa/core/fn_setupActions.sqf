/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
	case civilian: {
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		
        life_actions pushBack [player addAction["<t color='#00FF00'>Activer Nitro</t>",life_fnc_boostNitro,false,2,false,false,"",' (vehicle player != player) && (driver vehicle player == player) && (((vehicle player) getVariable["nitro", 0]) > 0) ']];  
		//Rob person
		life_actions = [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];

		life_actions pushBack (player addAction["<t color='#0099FF'>S'asseoir</t>",{[cursorObject,player] execVM "ROFT\Scripts\sitdown.sqf"},true,1,true,true,"""",'player distance cursorObject < 5 && {([str cursorObject,"bench"] call KRON_StrInStr || [str cursorObject,"chair"] call KRON_StrInStr || [str cursorObject,"barstool"] call KRON_StrInStr)} ']);
	};

	case west: {
		life_actions = [player addAction["Récupérer la Zone",life_fnc_captureZoneGang,"",0,false,false,"",'typeOf cursortarget in ["Flag_CSAT_F","Flag_CTRG_F"]']];
		life_actions = life_actions + [player addAction[localize "STR_ISTR_Spike_Pack",life_fnc_packupSpikes,"",0,false,false,"", ' _spikes = nearestObjects[getPos player,["wirk_spikes"],8] select 0; !isNil "_spikes" && !isNil {(_spikes getVariable "item")}']];

		life_actions pushBack (player addAction["<t color='#0099FF'>S'asseoir</t>",{[cursorObject,player] execVM "ROFT\Scripts\sitdown.sqf"},true,1,true,true,"""",'player distance cursorObject < 5 && {([str cursorObject,"bench"] call KRON_StrInStr || [str cursorObject,"chair"] call KRON_StrInStr)} ']);
	};

	case independent: {
		life_actions pushBack (player addAction["<t color='#0099FF'>S'asseoir</t>",{[cursorObject,player] execVM "ROFT\Scripts\sitdown.sqf"},true,1,true,true,"""",'player distance cursorObject < 5 && {([str cursorObject,"bench"] call KRON_StrInStr || [str cursorObject,"chair"] call KRON_StrInStr)} ']);
	};
};


// Pour tous les joueurs :
life_actions = life_actions + [player addAction["<t color='#FF0000'>Ejection d'urgence</t>", life_fnc_emergencyEject, [], -9, false, true, "", "(vehicle player) isKindOf 'Air' && ((vehicle player) getVariable ['iem', 0] != 1) && !((vehicle player) isKindOf 'ParachuteBase') && !(player getVariable ['restrained', false])"]];
