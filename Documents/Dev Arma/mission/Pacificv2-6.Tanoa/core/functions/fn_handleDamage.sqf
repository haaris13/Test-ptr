	#include "..\..\script_macros.hpp"
/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep", "_hitPartIndex"];
_unit = SEL(_this,0);
_part = SEL(_this,1);
_damage = SEL(_this,2);	 //resulting level of damage 
_source = SEL(_this,3);
_projectile = SEL(_this,4);


//Handle the tazer first (Top-Priority).
if(!isNull _source) then {
	if(_source != _unit) then {
		_curWep = currentWeapon _source;
		if(_curWep in ["DDOPP_X26_b"] && vehicle _source == _source) then {

			if(playerSide != west) then {
				private["_distance","_isVehicle","_isQuad"];
				_distance = 20;
				_isVehicle = if(vehicle player != player) then {true} else {false};
				_isQuad = if(_isVehicle) then {if(typeOf (vehicle player) in ["B_Quadbike_01_F", "C_Kart_01_Blu_F", "C_Kart_01_Fuel_F", "C_Kart_01_Red_F", "C_Kart_01_Vrana_F"]) then {true} else {false}} else {false};
				
				_damage = false;
				if(_unit distance _source < _distance) then {
					if(!life_istazed && !(_unit GVAR ["restrained",false])) then {
						if(_isVehicle && _isQuad) then {
							player action ["Eject",vehicle player];
							[_unit,_source] spawn life_fnc_tazed;
						} else {
							[_unit,_source] spawn life_fnc_tazed;
						};
					};
				};
			};
			//Temp fix for super tasers on cops.
			if(playerSide == west) then {
				_damage = 0.10;
			};
		} else {
			if(_curWep in ["MMG_01_tan_F"]) then {
				_damage = false;
				if(!life_istazed && !(_unit GVAR ["restrained",false])) then {
					_isVehicle = if(vehicle player != player) then {true} else {false};
					if (_isVehicle) then {
						player action ["Eject",vehicle player];
						[_unit,_source] spawn life_fnc_tazedAdmin;
					} else {
						[_unit,_source] spawn life_fnc_tazedAdmin;
					};
				};
			};

			if(_curWep in ["rhs_weapon_M590_8RD_Flash"] && vehicle _source == _source) then {
				_damage = false;
				if(!life_istazed && !(_unit GVAR ["restrained",false])) then {
					_isVehicle = if(vehicle player != player) then {true} else {false};
					if (_isVehicle) then {
						player action ["Eject",vehicle player];
						[_unit,_source] spawn life_fnc_tazedPump;
					} else {
						[_unit,_source] spawn life_fnc_tazedPump;
					};
				};
			};
		};
	};
};

/*
if (vehicle _unit == _unit && _projectile == "" && !(_damage isEqualTo false)) then
{   
	 if (_source isKindOf "Car" OR _source isKindOf "Boat" ) then { 
		_damage = 0.25;     
		
		  } else {       
		  _vehicle = vehicle _source;       
			if (driver _vehicle == _source) then {         
				if (_vehicle isKindOf "Car" OR _vehicle isKindOf "Boat") then {             
				_damage = 0.25;
			 };       
		 };    
	 };
 };
 */

[_unit, _part, _damage, _source, _projectile] spawn life_fnc_medicDamage;

_damage;