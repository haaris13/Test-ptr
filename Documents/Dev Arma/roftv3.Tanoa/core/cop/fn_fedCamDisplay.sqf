#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Turns on and displays a security cam like feed via PiP to the laptop display.
*/
_laptop = SEL(_this,0);
_mode = SEL(_this,3);

if(!isPiPEnabled) exitWith {hint localize "STR_Cop_EnablePiP";};
if(isNil "life_fed_scam") then {
	life_fed_scam = "camera" camCreate [0,0,0];
	life_fed_scam camSetFov 0.5;
	life_fed_scam camCommit 0;
	"rendertarget0" setPiPEffect [0];
	life_fed_scam cameraEffect ["INTERNAL", "BACK", "rendertarget0"];
	_laptop setObjectTexture [0,"#(argb,256,256,1)r2t(rendertarget0,1.0)"];
};

switch (_mode) do {
	case "side": {
		life_fed_scam camSetPos [2629.059,11700.256,30.575];
		life_fed_scam camSetTarget [2625.508,11681.355,0];
		life_fed_scam camCommit 0;
	};
	
	case "vault": {
		life_fed_scam camSetPos [2622.391,11721.936,38.112];
		life_fed_scam camSetTarget [2587.037,11665.04,0];
		life_fed_scam camCommit 0;
	};
	
	case "front": {
		life_fed_scam camSetPos [2581.932,11680.966,44.324] ;
		life_fed_scam camSetTarget [2634.556,11691.7,0];
		life_fed_scam camCommit 0;
	};
	
	case "back": {
		life_fed_scam camSetPos [2639.851,11771.55,60.916];
		life_fed_scam camSetTarget [2634.556,11691.7,0];
		life_fed_scam camCommit 0;
	};

	case "intern": {
		life_fed_scam camSetPos [2626.379,11680.387,2.269];
		life_fed_scam camSetTarget [2624.836,11675.899,0.159];
		life_fed_scam camCommit 0;
	};
	
	case "off" :{
		life_fed_scam cameraEffect ["terminate", "back"];
		camDestroy life_fed_scam;
		_laptop setObjectTexture [0,""];
		life_fed_scam = nil;
	};
};
