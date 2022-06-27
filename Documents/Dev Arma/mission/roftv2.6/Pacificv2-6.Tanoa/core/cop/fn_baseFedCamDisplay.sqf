#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Turns on and displays a security cam like feed via PiP to the laptop display.

	this enableSimulation false;
	this allowDamage false;
	this addAction["",life_fnc_qgCamDisplay,"intern"];
	this addAction["Ecran",life_fnc_qgCamDisplay,"global"];
*/
_laptop = SEL(_this,0);
_mode = SEL(_this,3);

if(!isPiPEnabled) exitWith {["Error", localize "STR_Cop_EnablePiP"] spawn life_fnc_showPredefinedNotification;};
if(isNil "life_qg_scam") then {
	life_qg_scam = "camera" camCreate [0,0,0];
	life_qg_scam camSetFov 0.5;
	life_qg_scam camCommit 0;
	"rendertarget0" setPiPEffect [0];
	life_qg_scam cameraEffect ["INTERNAL", "BACK", "rendertarget0"];
	_laptop setObjectTexture [0,"#(argb,256,256,1)r2t(rendertarget0,1.0)"];

	if (_mode == "global") then {
		_mode = "side";
	};
};

switch (_mode) do {
	case "bureaucolonel": {
		life_qg_scam camSetPos [5646.821,11057.033,15.137];
		life_qg_scam camSetTarget [5640.754,11058.96,12.096];
		life_qg_scam camCommit 0;
	};

	case "off" :{
		life_qg_scam cameraEffect ["terminate", "back"];
		camDestroy life_qg_scam;
		_laptop setObjectTexture [0,""];
		life_qg_scam = nil;
	};

	case "global":{
		showCinemaBorder false;
		life_qg_scam cameraEffect ["Internal", "Back"];
		life_qg_scam camCommit 0;

		AM_Exit = (findDisplay 46) displayAddEventHandler ["KeyDown","_this call life_fnc_camKeyHandler;"];
	};
};