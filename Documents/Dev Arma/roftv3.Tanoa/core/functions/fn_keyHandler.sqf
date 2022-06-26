#include "..\..\script_macros.hpp"
/*
	File: fn_keyHandler.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Main key handler for event 'keyDown'
*/
private ["_chan","_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh","_locked","_interactionKey","_mapKey","_interruptionKeys"];
_ctrl = SEL(_this,0);
_code = SEL(_this,1);
_shift = SEL(_this,2);
_ctrlKey = SEL(_this,3);
_alt = SEL(_this,4);
_speed = speed cursorTarget;
_handled = false;

_interactionKey = if((EQUAL(count (actionKeys "User10"),0))) then {57} else {(actionKeys "User10") select 0};
_mapKey = SEL(actionKeys "ShowMap",0);
//hint str _code;
_interruptionKeys = [17,30,31,32]; //A,S,W,D

if ((time - life_save_delay) > (5 * 60)) then {
	life_save_delay = time;
	if (!life_dead && !dialog && playerSide == civilian) then {
		[8] call SOCK_fnc_updatePartial;
	};
};

//Vault handling...
if((_code in (actionKeys "GetOver") || _code in (actionKeys "salute")) && {(player GVAR ["restrained",false])}) exitWith {
	true;
};

// Tactical:
/*if (_code in (actionKeys "TacticalView")) exitWith {
	true;
};
*/
//Stop people fuckign around in restrain
if((_code in (actionKeys "GetOver") || _code in (actionKeys "salute") || _code in (actionKeys "SitDown") || _code in (actionKeys "Throw") || _code in (actionKeys "GetIn") || _code in (actionKeys "GetOut") || _code in (actionKeys "Fire") || _code in (actionKeys "Fire") || _code in (actionKeys "ReloadMagazine")) && {(player GVAR ["restrained",false])}) exitWith {
 	true;
};

if ((_code in (actionKeys "NightVision")) && (("NVGoggles" in assignedItems player) || ("NVGoggles_OPFOR" in assignedItems player) || ("NVGoggles_INDEP" in assignedItems player) || ("NVGoggles_tna_F" in assignedItems player) || ("O_NVGoggles_urb_F" in assignedItems player) || ("O_NVGoggles_hex_F" in assignedItems player) || ("O_NVGoggles_ghex_F" in assignedItems player))) then {
	if((time - life_action_delay) < 1) exitWith {};
	life_action_delay = time;
	player say3D "3DEN_visionMode";
	true;
};

if(life_action_inUse) exitWith {
	if(!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true;};
	if (_code in [21]) then {_handled = true;};
	_handled;
};

//Hotfix for Interaction key not being able to be bound on some operation systems.
if(!(EQUAL(count (actionKeys "User10"),0)) && {(inputAction "User10" > 0)}) exitWith {
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	if(!life_action_inUse) then {
		[] spawn {
			private "_handle";
			_handle = [] spawn life_fnc_actionKeyHandler;
			waitUntil {scriptDone _handle};
			life_action_inUse = false;
		};
	};
	true;
};







if (life_container_active) then {
	switch (_code) do {
		//space key
		case 57: {
			[life_container_activeObj] spawn life_fnc_placedefinestorage;
		};
	};
	true;
};

switch (_code) do {

	case 5: //4 key (not numpad)
	{
		if (vehicle player != player) then {
			if (playerSide == west || ((typeOf(vehicle player)) == "Jonzie_Tow_Truck")) then {[] spawn life_fnc_openComputerCheck;};
			_handled = true;
		} else {
			if (_ctrlKey) then {
				[false] spawn life_fnc_animMenu;
				_handled = true;
			};
		};

	};

	case 6: //5 key (not numpad)
	{
		if(FETCH_CONST(life_adminlevel) > 1 && _ctrlKey) then {
			_handled = true;
			if((time - life_action_delay) < 5) exitWith {};
			life_action_delay = time;
			[] call admin_fnc_hideGlobal;
		};
	};

	case 7: //6 key (not numpad)
	{
		if (FETCH_CONST(life_adminlevel) > 1 && _ctrlKey) then {
			life_showNameTag = !life_showNameTag;
			if (life_showNameTag) then {
				["Show NameTag     <t color='#00FF00'>[ON]</t>"] call life_fnc_dynamicText;
			} else {
				["Show NameTag     <t color='#ff0000'>[OFF]</t>"] call life_fnc_dynamicText;
			};
		};
	};

	case 8: //7 key (not numpad)
	{
		if (FETCH_CONST(life_adminlevel) > 1 && _ctrlKey) then {
			[] call admin_fnc_adminTeleport;
			_handled = true;
		};
	};

	case 9: //8 key (not numpad)
	{
		if (FETCH_CONST(life_adminlevel) > 1 && _ctrlKey) then {

			_handled = true;

			if((time - life_action_delay) < 5) exitWith {};
			life_action_delay = time;

			[] call admin_fnc_adminUniform;

			life_mode_admin = !life_mode_admin;
			if (life_mode_admin) then {
				["Mode Admin  <t color='#00FF00'>[ON]</t>"] call life_fnc_dynamicText;
				[format ["[%1] Mode Admin ON]",profileName], getPlayerUID player] remoteExecCall ["TON_fnc_logsAdmin",2];
				player setVariable ["ACE_allowDamage",false,true];
				player allowDamage false;
			} else {
				["Mode Admin  <t color='#ff0000'>[OFF]</t>"] call life_fnc_dynamicText;
				[format ["[%1] Mode Admin OFF]",profileName], getPlayerUID player] remoteExecCall ["TON_fnc_logsAdmin",2];
				player setVariable ["ACE_allowDamage",true,true];
				player allowDamage true;
			};
		};
	};

	case 10: //9 key (not numpad)
	{
		if (FETCH_CONST(life_adminlevel) > 1 && _ctrlKey) then {

			if (!life_mode_admin) exitWith {};

			if((time - life_action_delay) < 5) exitWith {};
			life_action_delay = time;

			if ((count(nearestObjects [player,["WeaponHolderSimulated","WeaponHolder","groundWeaponHolder"],3]) > 0)) then {
		        [] call life_fnc_seizeObjects;
		    };

		    _handled = true;
		};
	};

	case 11: //0 key (not numpad)
	{
		if (FETCH_CONST(life_adminlevel) > 2 && _ctrlKey) then {

			if((time - life_action_delay) < 5) exitWith {};
			life_action_delay = time;

			[] spawn admin_fnc_adminStopAction;

		    _handled = true;
		};
	};

	case 48: {
		if(_shift) then {
			if(player GVAR ["playerSurrender",false]) then {
				player SVAR ["playerSurrender",false,true];
			} else {
				[] spawn life_fnc_surrender;
			};
			_handled = true;
		};
	};
	
//admin tools new
	case 59: {
        abcdefghijklmnopqrstuvwxy = true;
		_handled = true
    };


	//Get off sidechat you obnoxious cunt
/*
	if((_code in actionKeys "PushToTalk" || _code in actionKeys "PushToTalkSide" || _code in actionKeys "PushToTalkDirect" || _code in actionKeys "VoiceOverNet")) exitWith {

		if(currentChannel > 5 || currentChannel < 3) then {

			setCurrentChannel 5;

		};

		false
	};

	if (_code in (actionKeys "PushToTalk") || _code in (actionKeys "PushToTalkSide")) exitWith
	{
		_chan = "";
		disableSerialization;
		_chan = ctrlText ((findDisplay 63) displayCtrl 101);
		if (_chan == "Side Channel") then {
		_handled = true;
		};
	_handled;
	};
*/

	//Map Key
	case _mapKey: {
		switch (playerSide) do {
			case west: {
				if(!visibleMap) then {
					{
						_marker = _x select 0;
						deleteMarkerLocal _marker;
					} forEach life_all_markers_cops;

					life_all_markers_cops = [];
				};
			};

			case civilian: {if(!visibleMap) then {
					[] spawn life_fnc_clanMarkers;

					if (vehicle player != player) then {
						_veh = vehicle player;
						if ([_veh] call life_fnc_fluidGetHasCargo) then {
							[] spawn life_fnc_fuelStatMarkers;
						};
					};
				};
			};

			case independent: {if(!visibleMap) then {[] spawn life_fnc_medicMarkers;}};

		};
	};

	//Holster / recall weapon.
	case 35: {
		if(_shift && !_ctrlKey && !(EQUAL(currentWeapon player,""))) then {
			life_curWep_h = currentWeapon player;
			player action ["SwitchWeapon", player, player, 100];
			player switchCamera cameraView;
			hint "Utilisez CTRL + H pour sortir l'arme."
		};

		if(!_shift && _ctrlKey && !isNil "life_curWep_h" && {!(EQUAL(life_curWep_h,""))}) then {
			if(life_curWep_h in [RIFLE,LAUNCHER,PISTOL]) then {
				player selectWeapon life_curWep_h;
			};
		};
	};

	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	case _interactionKey: {
		if(!life_action_inUse) then {
			[] spawn  {
				private "_handle";
				_handle = [] spawn life_fnc_actionKeyHandler;
				waitUntil {scriptDone _handle};
				life_action_inUse = false;
			};
		};

		if (_ctrlKey && (FETCH_CONST(life_adminlevel) == 5)) then {
			[] spawn admin_fnc_adminDebugCon;
		};
	};

	//Restraining (Shift + R)
	case 19: {
		if(_shift) then {_handled = true;};

		
		if(_shift && playerSide == west && {!isNull cursorTarget} && {cursorTarget isKindOf "Man"} && {(isPlayer cursorTarget)} && {(side cursorTarget in [civilian,independent])} && {alive cursorTarget} && {cursorTarget distance player < 3.5} && {!(cursorTarget GVAR "Escorting")} && {!(cursorTarget GVAR "restrained")} && {speed cursorTarget < 1}) then {
			[] call life_fnc_restrainAction;
		};

		if(_shift && ((ITEM_VALUE("zipties") >= 1)) && playerSide == civilian && {!isNull cursorTarget} && {cursorTarget isKindOf "Man"} && {(isPlayer cursorTarget)} && {alive cursorTarget} && {cursorTarget distance player < 3.5} && {!(cursorTarget GVAR "Escorting")}  && {!(cursorTarget GVAR "restrained")} && {speed cursorTarget < 1}) then {
			[] call life_fnc_restrainAction;
		};
/*
		if(_shift && ((ITEM_VALUE("zipties") >= 1)) && playerSide == civilian && {!isNull cursorTarget} && {cursorTarget isKindOf "Man"} && {(isPlayer cursorTarget)} && {alive cursorTarget} && {cursorTarget distance player < 3.5} && {!(cursorTarget GVAR "Escorting")} && {(["shiftr"] call life_fnc_hasPerk)} && {!(cursorTarget GVAR "restrained")} && {speed cursorTarget < 1}) then {
			[] call life_fnc_restrainAction;
		};*/
		/*
		if (_shift && life_mode_admin && playerSide == civilian && {!isNull cursorTarget} && {cursorTarget isKindOf "Man"} && {(isPlayer cursorTarget)} && {alive cursorTarget} && {cursorTarget distance player < 3.5} && {!(cursorTarget GVAR "Escorting")} && {!(cursorTarget GVAR "restrained")}) then {
			[] call life_fnc_restrainAction;
		};
		*/

		if (!_shift && (vehicle player != player) && ((vehicle player) isKindOf "Air") && playerSide == west) then {
			[] spawn life_fnc_copLaunchIEM;
		};
	};

	//Knock out, this is experimental and yeah...
	// G key?
	/*case 34: {
		if(_shift) then {_handled = true;};
		if(_shift && playerSide == civilian && {!isNull cursorTarget} && {cursorTarget isKindOf "Man"} && {isPlayer cursorTarget} && {alive cursorTarget} && {cursorTarget distance player < 4} && {speed cursorTarget < 1}) then {
			if(!(EQUAL(animationState cursorTarget,"Incapacitated")) && {(EQUAL(currentWeapon player,RIFLE))} OR {EQUAL(currentWeapon player,PISTOL)} && {!(EQUAL(currentWeapon player,""))} && {!life_knockout} && {!(player GVAR ["restrained",false])} && {!life_istazed}) then {
				[cursorTarget] spawn life_fnc_knockoutAction;
			};
		};
      };*/


    //Knock out, this is experimental and yeah... (Shift + G)
	case 34: {
		if(_shift) then {_handled = true;};
		if (_shift && !isNull cursorTarget && cursorTarget isKindOf "Man" && isPlayer cursorTarget && alive cursorTarget && cursorTarget distance player < 4 && speed cursorTarget < 1 && (currentWeapon cursorTarget) == "") then {
			if((animationState cursorTarget) != "Incapacitated" && (currentWeapon player == primaryWeapon player OR currentWeapon player == handgunWeapon player) && currentWeapon player != "" && !life_knockout && !(player GVAR ["restrained",false]) && !life_istazed && !life_isknocked) then {
				//[cursorTarget] spawn life_fnc_knockoutAction;
			};
		};
	};

	//T Key (Trunk) / Shift T Knockout
	case 20: {
		if(!_alt && !_ctrlKey && !dialog && {!life_action_inUse}) then {
			if(vehicle player != player && alive vehicle player) then {
				if((vehicle player) in life_vehicles) then {
					[vehicle player] call life_fnc_openInventory;
				};
			} else {
				curs = cursorTarget;
// rajouté Nekro
				private _arr = ["Land_Cargo10_military_green_F","B_Slingload_01_Cargo_F","B_Slingload_01_Fuel_F","B_Mortar_01_F","B_G_Mortar_01_F","O_Mortar_01_F","O_G_Mortar_01_F","I_Mortar_01_F","I_G_Mortar_01_F","Land_CargoBox_V1_F","Box_IND_Grenades_F","B_supplyCrate_F","CargoNet_01_box_F","Box_IND_Support_F","Box_IND_WpsLaunch_F","Box_IND_WpsSpecial_F","O_supplyCrate_F","I_CargoNet_01_ammo_F","B_CargoNet_01_ammo_F"];
				private _nrst = nearestObjects [player, _arr, 5];

				if (count _nrst > 0) then
					{
						curs = _nrst # 0;
					};

					_curs = curs;
					curs = nil;

				private _list = ["landVehicle","Ship", "Air"];

				if (( !((_curs getVariable["Trunk", -1]) isEqualTo -1) || !((_curs getVariable ["inventory", -1]) isEqualTo -1) || !((_curs getVariable ["clan_inventory", -1]) isEqualTo -1)) && !(KINDOF_ARRAY(cursorTarget,_list))) then {
					_house = (nearestObjects [getPosATL player, ["House", "Building"], 50] select 1);

					_container = _curs;


					if ((_house in life_vehicles)) then {
						switch (true) do {
							case !(isNil {_container getVariable "inventory"}) : {
								life_house_current = _house;
								[_container] call life_fnc_houseOpenInventory;
							};

							case !(isNil {_container getVariable "clan_inventory"}) : {
								[_container] call life_fnc_clanHouseOpenInv;
							};

							default {[_container] call life_fnc_openInventory; hint format ["QUATRE trovuer: %1",_container];};
						};
					} else {
						if (_container in life_vehicles) then {
							if !(isNil {_container getVariable "clan_inventory"}) then {
								[_container] call life_fnc_clanHouseOpenInv;
							};
						};
					};
				} else {
					if(KINDOF_ARRAY(cursorTarget,_list) && {player distance cursorTarget < 7} && {vehicle player == player} && {alive cursorTarget} && {!life_action_inUse}) then {
						if(cursorTarget in life_vehicles OR {!(cursorTarget GVAR ["locked",true])}) then {
							if (([cursorTarget] call life_fnc_fluidGetHasCargo)) then {
								[] spawn life_fnc_fluidVehOpenInv;
							} else {
								[cursorTarget] call life_fnc_openInventory;
							};
						};
					};
				};
			};
		};
	};

	//L Key?
	case 38: {
		//Vehicle lights
		if(_shift && playerSide in [west,independent]) then {
			if(vehicle player != player && (typeOf vehicle player) in ["B_GEN_Offroad_01_gen_F","B_LSV_01_unarmed_F","C_Offroad_01_F", "C_Van_01_transport_F", "I_Truck_02_box_F", "C_Offroad_01_repair_F", "B_MRAP_01_F", "C_SUV_01_F", "C_Hatchback_01_F", "C_Hatchback_01_sport_F", "C_Van_01_box_F", "C_Van_01_fuel_F", "I_MRAP_03_F", "B_G_Offroad_01_F", "B_G_Offroad_01_armed_F","C_Offroad_02_unarmed_F"]) then {
				if(!isNil {vehicle player GVAR "lights"}) then {
					if(playerSide == west) then {
						[vehicle player] call life_fnc_sirenLights;
					} else {
						[vehicle player] call life_fnc_medicSirenLights;
					};
					_handled = true;
				};
			};
		};

		if(!_alt && !_ctrlKey) then { [] call life_fnc_radar; };
	};

	//Numpad / - no idea
	case 181: {
		if(!_alt && !_ctrlKey) then { [] call life_fnc_radar; };
	};



	//Y Player Menu
	case 21: {
		if(!_alt && !_ctrlKey && !dialog && {!life_action_inUse}) then {
			[] call life_fnc_p_openTablet;
		};
		//[1] spawn the_programmer_iphone_fnc_phone_init;

	};

	//F Key
	case 33: {
		if((playerSide in [west,independent]) && {vehicle player != player} && {!life_siren_active} && {((driver vehicle player) == player)} && _shift) then {
			[] spawn {
				life_siren_active = true;
				sleep 4.7;
				life_siren_active = false;
			};

			_veh = vehicle player;
			if(isNil {_veh GVAR "siren"}) then {_veh SVAR ["siren",false,true];};
			if((_veh GVAR "siren")) then {
				titleText [localize "STR_MISC_SirensOFF","PLAIN"];
				_veh SVAR ["siren",false,true];
			} else {
				titleText [localize "STR_MISC_SirensON","PLAIN"];
				_veh SVAR ["siren",true,true];
				if(playerSide == west) then {
					[_veh] remoteExec ["life_fnc_copSiren",RCLIENT];
				} else {
					[_veh] remoteExec ["life_fnc_medicSiren",RCLIENT];
				};
			};
		};
	};

	//O Key
	case 24: {
		if(_shift) then {

			switch (player getVariable["Earplugs",0]) do {
				case 0: {hintSilent "Ear Plugs 90%"; ace_hearing_disableVolumeUpdate = true; 0.5 fadeSound 0.1; 0.5 fadeMusic 0.1; player setVariable ["Earplugs", 10]; };
				case 10: {hintSilent "Ear Plugs 60%"; ace_hearing_disableVolumeUpdate = true; 0.5 fadeSound 0.4; 0.5 fadeMusic 0.1; player setVariable ["Earplugs", 40]; };
				case 40: {hintSilent "Ear Plugs 30%";  ace_hearing_disableVolumeUpdate = true;0.5 fadeSound 0.7; 0.5 fadeMusic 0.1; player setVariable ["Earplugs", 70]; };
				case 70: {hintSilent "Ear Plugs retirée"; ace_hearing_disableVolumeUpdate = false;0.5 fadeSound 1; 0.5 fadeMusic 0.1; player setVariable ["Earplugs", 0]; };
		    };
		};
	};

	//U Key
	case 22: {
		if(!_alt && !_ctrlKey) then {

			if((time - life_action_delay) < 0.5) exitWith {};
			life_action_delay = time;

			if(vehicle player == player) then {
				_veh = cursorTarget;
			} else {
				_veh = vehicle player;
			};

			if (((typeOf _veh in ["Land_BackAlley_01_l_gate_F"])) && {playerSide == west}) then {
				if (player distance _veh < 3) then {
					_door = 1;
					_locked = _veh GVAR [format["bis_disabled_Door_%1",_door],0];

					if(EQUAL(_locked,0)) then {
						_veh SVAR [format["bis_disabled_Door_%1",_door],1,true];
						_veh animate [format["door_%1_rot",_door],0];
						systemChat localize "STR_House_Door_Lock";
					} else {
						_veh SVAR [format["bis_disabled_Door_%1",_door],0,true];
						_veh animate [format["door_%1_rot",_door],1];
						systemChat localize "STR_House_Door_Unlock";
					};
				};
			};

			if((_veh isKindOf "House_F" || (typeOf _veh in ["Land_ConcreteWall_01_l_gate_F","Land_NetFence_02_m_gate_v1_F"])) && {playerSide == civilian}) then {
				if(_veh in life_vehicles && player distance _veh < 35) then {

					_door = 1;

					if (!(typeOf _veh in ["Land_ConcreteWall_01_l_gate_F","Land_NetFence_02_m_gate_v1_F"])) then {
						_door = [_veh] call life_fnc_nearestDoor;
						if(EQUAL(_door,0)) exitWith {hint localize "STR_House_Door_NotNear"};
						_locked = _veh GVAR [format["bis_disabled_Door_%1",_door],0];
					};

					_locked = _veh GVAR [format["bis_disabled_Door_%1",_door],0];

					if(EQUAL(_locked,0)) then {
						_veh SVAR [format["bis_disabled_Door_%1",_door],1,true];
						_veh animate [format["door_%1_rot",_door],0];
						systemChat localize "STR_House_Door_Lock";
					} else {
						_veh SVAR [format["bis_disabled_Door_%1",_door],0,true];
						_veh animate [format["door_%1_rot",_door],1];
						systemChat localize "STR_House_Door_Unlock";
					};
				};
			} else {
				_locked = locked _veh;
				if(_veh in life_vehicles && player distance _veh < 8) then {
					if(EQUAL(_locked,2)) then {
						if(local _veh) then {
							_veh lock 0;
						} else {

							[_veh,0] remoteExecCall ["life_fnc_lockVehicle",_veh];
						};
						playSound "car_lock";
						systemChat localize "STR_MISC_VehUnlock";
					} else {
						if(local _veh) then {
							_veh lock 2;
						} else {
							[_veh,2] remoteExecCall ["life_fnc_lockVehicle",_veh];
						};
						playSound "car_lock";
						systemChat localize "STR_MISC_VehLock";
					};
				};
			};
		};
	};

	//F5 key, Barrier Menu
    case 0x3F: {
        if ((playerSide isEqualTo west) || (playerSide isEqualTo independent) || (license_civ_dep)) then 
        {
            closedialog 0;
            createdialog "ROFT_GUI_BarrierGUI";
        };
	};

};

_handled;