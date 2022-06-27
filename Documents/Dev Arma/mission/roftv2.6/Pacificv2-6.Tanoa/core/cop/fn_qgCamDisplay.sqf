#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine,IronBlade
	
	Description:
	Turns on and displays a security cam like feed via PiP to the laptop display.


	this allowDamage false; 
    this addAction["Bureau Colonel",life_fnc_qgCamDisplay,"bureaucolonel",0,false,false,"",'life_isFed']; 
    this addAction["Bureau 1",life_fnc_qgCamDisplay,"bureau1",0,false,false,"",'life_isFed']; 
    this addAction["Bureau 2",life_fnc_qgCamDisplay,"bureau2",0,false,false,"",'life_isFed']; 
    this addAction["Bureau 3",life_fnc_qgCamDisplay,"bureau3",0,false,false,"",'life_isFed']; 
    this addAction["Dispatch",life_fnc_qgCamDisplay,"dispatch",0,false,false,"",'life_isFed']; 
    this addAction["Ext 1",life_fnc_qgCamDisplay,"ext1",0,false,false,"",'life_isFed']; 
    this addAction["Ext 2",life_fnc_qgCamDisplay,"ext2",0,false,false,"",'life_isFed']; 
    this addAction["Ext 3",life_fnc_qgCamDisplay,"ext3",0,false,false,"",'life_isFed']; 
    this addAction["Ext 4",life_fnc_qgCamDisplay,"ext4",0,false,false,"",'life_isFed']; 
    this addAction["Ext 5",life_fnc_qgCamDisplay,"ext5",0,false,false,"",'life_isFed'];
	this addAction["Tribunal Lifou 1",life_fnc_qgCamDisplay,"t_1_couloirH",0,false,false,"",'life_isFed'];
	this addAction["Tribunal Lifou 2",life_fnc_qgCamDisplay,"t_1_couloirB",0,false,false,"",'life_isFed'];
	this addAction["Tribunal Lifou 3",life_fnc_qgCamDisplay,"t_1_ext",0,false,false,"",'life_isFed'];
	this addAction["Tribunal Lifou 4",life_fnc_qgCamDisplay,"t_1_bloc",0,false,false,"",'life_isFed'];
	this addAction["Tribunal Harcourt 1",life_fnc_qgCamDisplay,"t_1_couloirH",0,false,false,"",'life_isFed'];
	this addAction["Tribunal Harcourt 2",life_fnc_qgCamDisplay,"t_1_couloirB",0,false,false,"",'life_isFed'];
	this addAction["Tribunal Harcourt 3",life_fnc_qgCamDisplay,"t_1_ext",0,false,false,"",'life_isFed'];
	this addAction["Tribunal Harcourt 4",life_fnc_qgCamDisplay,"t_1_bloc",0,false,false,"",'life_isFed'];
	this addAction["Int",life_fnc_qgCamDisplay,"int",0,false,false,"",'life_isFed'];
	this addAction["Off",life_fnc_qgCamDisplay,"off",0,false,false,"",'life_isFed'];

	this allowDamage false;  " \n "    this addAction[""Bureau Colonel"",life_fnc_qgCamDisplay,""bureaucolonel"",0,false,false,"""",'life_isFed'];  " \n "    this addAction[""Bureau 1"",life_fnc_qgCamDisplay,""bureau1"",0,false,false,"""",'life_isFed'];  " \n "    this addAction[""Bureau 2"",life_fnc_qgCamDisplay,""bureau2"",0,false,false,"""",'life_isFed'];  " \n "    this addAction[""Bureau 3"",life_fnc_qgCamDisplay,""bureau3"",0,false,false,"""",'life_isFed'];  " \n "    this addAction[""Dispatch"",life_fnc_qgCamDisplay,""dispatch"",0,false,false,"""",'life_isFed'];  " \n "    this addAction[""Ext 1"",life_fnc_qgCamDisplay,""ext1"",0,false,false,"""",'life_isFed'];  " \n "    this addAction[""Ext 2"",life_fnc_qgCamDisplay,""ext2"",0,false,false,"""",'life_isFed'];  " \n "    this addAction[""Ext 3"",life_fnc_qgCamDisplay,""ext3"",0,false,false,"""",'life_isFed'];  " \n "    this addAction[""Ext 4"",life_fnc_qgCamDisplay,""ext4"",0,false,false,"""",'life_isFed'];  " \n "    this addAction[""Ext 5"",life_fnc_qgCamDisplay,""ext5"",0,false,false,"""",'life_isFed']; " \n " this addAction[""Tribunal Lifou 1"",life_fnc_qgCamDisplay,""t_1_couloirH"",0,false,false,"""",'life_isFed']; " \n " this addAction[""Tribunal Lifou 2"",life_fnc_qgCamDisplay,""t_1_couloirB"",0,false,false,"""",'life_isFed']; " \n " this addAction[""Tribunal Lifou 3"",life_fnc_qgCamDisplay,""t_1_ext"",0,false,false,"""",'life_isFed']; " \n " this addAction[""Tribunal Lifou 4"",life_fnc_qgCamDisplay,""t_1_bloc"",0,false,false,"""",'life_isFed']; " \n " this addAction[""Tribunal Harcourt 1"",life_fnc_qgCamDisplay,""t_1_couloirH"",0,false,false,"""",'life_isFed']; " \n " this addAction[""Tribunal Harcourt 2"",life_fnc_qgCamDisplay,""t_1_couloirB"",0,false,false,"""",'life_isFed']; " \n " this addAction[""Tribunal Harcourt 3"",life_fnc_qgCamDisplay,""t_1_ext"",0,false,false,"""",'life_isFed']; " \n " this addAction[""Tribunal Harcourt 4"",life_fnc_qgCamDisplay,""t_1_bloc"",0,false,false,"""",'life_isFed']; " \n " this addAction[""Int"",life_fnc_qgCamDisplay,""int"",0,false,false,"""",'life_isFed']; " \n " this addAction[""Off"",life_fnc_qgCamDisplay,""off"",0,false,false,"""",'life_isFed']; " \n " this addAction[""Global"",life_fnc_qgCamDisplay,""global"",0,false,false,"""",'life_isFed'];

*/
_laptop = SEL(_this,0);
_mode = SEL(_this,3);

if(!isPiPEnabled) exitWith {["Error", localize "STR_Cop_EnablePiP"] spawn life_fnc_showPredefinedNotification;};
if(isNil "life_qg_scam") then {
	life_qg_scam = "camera" camCreate [0,0,0];
	life_qg_scam camSetFov 0.5;
	life_qg_scam camCommit 0;
	"rendertarget1" setPiPEffect [0];
	life_qg_scam cameraEffect ["INTERNAL", "BACK", "rendertarget1"];
	_laptop setObjectTexture [0,"#(argb,256,256,1)r2t(rendertarget1,1.0)"];

	if (_mode == "global") then {
		_mode = "side";
	};
};

switch (_mode) do {
	case "bureaucolonel": {
		life_qg_scam camSetPos [5646.821,11057.033,15.137];
		life_qg_scam camCommit 0;
	};
	
	case "bureau1": {
		life_qg_scam camSetPos [5669.252,11070.797,2.658];
		life_qg_scam camCommit 0;
	};
	
	case "bureau2": {
		life_qg_scam camSetPos [5658.865,11091.647,3.421];
		life_qg_scam camCommit 0;
	};
	
	case "bureau3": {
		life_qg_scam camSetPos [5651.686,11083.519,3.421];
		life_qg_scam camCommit 0;
	};

	case "dispatch": {
		life_qg_scam camSetPos [5681.885,11066.688,2.995];
		life_qg_scam camCommit 0;
	};

	case "ext1": {
		life_qg_scam camSetPos [5569.728,11010.262,13.092];
		life_qg_scam camCommit 0;
	};

	case "ext2": {
		life_qg_scam camSetPos [5569.728,11010.262,13.092];
		life_qg_scam camCommit 0;
	};

	case "ext3": {
		life_qg_scam camSetPos [5503.977,10892.628,15.198];
		life_qg_scam camCommit 0;
	};

	case "ext4": {
		life_qg_scam camSetPos [5647.561,11016.731,13.194];
		life_qg_scam camCommit 0;
	};

	case "ext5": {
		life_qg_scam camSetPos [5670.013,11037.449,13.309];
		life_qg_scam camCommit 0;
	};

	case "int": {
		life_qg_scam camSetPos [5632.965,11063.657,3.445];
		life_qg_scam camCommit 0;
	};

	case "t_1_couloirH": {
		life_qg_scam camSetPos [7424.651,8151.856,7.597];
		life_qg_scam camCommit 0;
	};

	case "t_1_couloirB": {
		life_qg_scam camSetPos [7424.651,8151.856,3.890];
		life_qg_scam camCommit 0;
	};

	case "t_1_ext": {
		life_qg_scam camSetPos [7416.129,8137.154,12.976];
		life_qg_scam camCommit 0;
	};

	case "t_1_bloc": {
		life_qg_scam camSetPos [7397.463,8137.891,2.417];
		life_qg_scam camCommit 0;
	};

	case "t_2_couloirH": {
		life_qg_scam camSetPos [11638.482,5246.962,6.428];
		life_qg_scam camCommit 0;
	};

	case "t_2_couloirB": {
		life_qg_scam camSetPos [11638.494,5246.97,6.576];
		life_qg_scam camCommit 0;
	};

	case "t_2_ext": {
		life_qg_scam camSetPos [11612.627,5281.158,13.151];
		life_qg_scam camCommit 0;
	};

	case "t_2_bloc": {
		life_qg_scam camSetPos [11615.077,5275.302,2.473];
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