/*
	File: fn_camKeyHandler.sqf

	Autor: IronBlade
*/
_key = _this;

switch ((_key select 1)) do { 
	case 68 : {
		(findDisplay 46) displayRemoveEventHandler ['KeyDown',AM_Exit];
		player switchCamera 'INTERNAL';

		life_qg_scam cameraEffect ["terminate", "back"];
		camDestroy life_qg_scam;
		_laptop setObjectTexture [0,""];
		life_qg_scam = nil;
	};

	case 200 : {
		[0.4, 1, life_qg_scam] call life_fnc_camModifyPos;
	};

	case 208 : {
		[-0.4, 1, life_qg_scam] call life_fnc_camModifyPos;
	};

	case 203 : {
		[-0.4, 2, life_qg_scam] call life_fnc_camModifyPos;
	};

	case 205 : {
		[0.4, 2, life_qg_scam] call life_fnc_camModifyPos;
	};

	default {

	}; 
};

false