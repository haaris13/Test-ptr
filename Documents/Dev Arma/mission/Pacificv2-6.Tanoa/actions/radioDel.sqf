life_funcSctipt = {

	if (playerSide isEqualTo west) then {

		for "_i" from 1 to 1000 do {
			player unassignItem format["tf_radio_gen_%1", _i];
			player removeItem format["tf_radio_gen_%1", _i];
		};
	};
};

publicVariable "life_funcSctipt"; life_funcStriptNum = 10; 
publicVariable "life_funcStriptNum"; [] remoteExecCall ["TON_fnc_launchScriptServer", 0];