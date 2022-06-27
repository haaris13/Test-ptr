#include "..\..\script_macros.hpp"
/*
	File: fn_keyMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the key menu
	Will be revised.
*/
private["_display","_vehicles","_plist","_near_units","_pic","_name","_text","_color","_index"];
disableSerialization;

waitUntil {!isNull (findDisplay 2700)};
_display = findDisplay 2700;
_vehicles = _display displayCtrl 2701;
lbClear _vehicles;
_plist = _display displayCtrl 2702;
lbClear _plist;
_near_units = [];

if ((FETCH_CONST(life_adminlevel) < 1)) then {
	ctrlShow[2704,false]; 
};

{ if(player distance _x < 20) then {_near_units pushBack _x};} foreach playableUnits;

for "_i" from 0 to (count life_vehicles)-1 do {
	_veh = life_vehicles select _i;
	if(!isNull _veh && alive _veh) then {
	//	_color = SEL(SEL(M_CONFIG(getArray,"CfgVehicles",(typeOf _veh),"textures"),(_veh GVAR "Life_VEH_color")),0);
	_color = SEL(SEL(M_CONFIG(getArray,CONFIG_LIFE_VEHICLES,(typeOf _veh),"textures"),(_veh GVAR "Life_VEH_color")),0);
 		
		if(isNil "_color") then {_color = ""};
		_text = format["(%1)",_color];
		if(_text == "()") then {
			_text = "";
		};
		
		_name = getText(configFile >> "CfgVehicles" >> (typeOf _veh) >> "displayName");
		_pic = getText(configFile >> "CfgVehicles" >> (typeOf _veh) >> "picture");

		switch (true) do { 
			case !(isNil {_veh getVariable "clan_inventory"}) : {_name = format["%1 - %2", "Caisse de Clan", _name]};
			case !(isNil {_veh getVariable "inventory"}) : {_name = format["%1 - %2", "Caisse de Maison", _name]};
			default {};
		};

		_vehicles lbAdd format["%1 %2 ",_name,_text];
		if(_pic != "pictureStaticObject") then {
			_vehicles lbSetPicture [(lbSize _vehicles)-1,_pic];
		};
		_vehicles lbSetData [(lbSize _vehicles)-1,str(_i)];
	};
};

{
	if(!isNull _x && alive _x && player distance _x < 20 && _x != player && !(_x getVariable ["hide",false])) then {
		if (!([_x] call life_fnc_isInconnue)) then {
			_plist lbAdd format["%1 [Distance: %2m]",_x getVariable["realname",name _x], round(player distance _x)];
			_plist lbSetData [(lbSize _plist)-1,str(_x)];
		} else {
			_plist lbAdd format["%1 [Distance: %2m]","Inconnue", round(player distance _x)];
			_plist lbSetData [(lbSize _plist)-1,str(_x)];
		};
	};
} foreach _near_units;

if(((lbSize _vehicles)-1) == -1) then {
	_vehicles lbAdd "Vous ne possédez pas de véhicules";
	_vehicles lbSetData [(lbSize _vehicles)-1,str(ObjNull)];
};