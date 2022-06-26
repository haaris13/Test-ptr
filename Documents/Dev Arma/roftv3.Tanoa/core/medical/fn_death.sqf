#include "..\..\defineACE.hpp"
createDialog "Hazendarckincounciousui";

sleep .1;
_disp = findDisplay 98500;
noesckey = _disp displayAddEventHandler ["KeyDown", "if ((_this select 1) == 1) then { true }"];
/*
PRIMARYWP = (primaryWeapon player);
PRIMARYWPMAG = (primaryWeaponMagazine player);
PRIMARYWPITM = (primaryWeaponItems player);
SECONDWP = (secondaryWeapon player);
SECONDWPITM =  (secondaryWeaponItems player);
SECONDWPMAG = (secondaryWeaponMagazine player);
HANDGUNWP = (handgunWeapon player);
HANDGUNWPITM = (handgunItems player);
HANDGUNWPMAG = (handgunMagazine player);

player removeWeapon (primaryWeapon player);
player removeWeapon (handgunWeapon player);
player removeWeapon (secondaryWeapon player);
*/
_medicsOnline = _disp displayCtrl 985001;
_MedicDistance = _disp displayCtrl 985002;
_RespawnTime = _disp displayCtrl 985003;
_respawnbtn = _disp displayCtrl 985005;
if (independent countSide allPlayers < 1) then
{

	// timer respawn
	TimeToWait = 90; //90
}else {
	TimeToWait =900;
};

_respawnbtn ctrlEnable false;
_RespawnTime ctrlSetText (str TimeToWait);
sleep .1;

while {IS_UNCONSCIOUS(player)} do
{

	if (TimeToWait > 0) then
	{

		//timetowait
		TimeToWait = TimeToWait -1;
		_RespawnTime ctrlSetText (str TimeToWait);
		//Count all independent side
		_inde = independent countSide allPlayers;
		_medicsOnline ctrlSetText str _inde;
		//------Distance
		dist = 99999;
		{
			if (side _x ==  independent and (! (_x isEqualTo player))) then
			{
				_dis = player distance _x;
				if (_dis < dist) then
				{
					dist = (round _dis);
				};
			};
		} forEach allPlayers;

		_MedicDistance ctrlSetText format ["%1 m",str dist];


		uisleep 1;
	} else {
		_respawnbtn ctrlEnable true;
		//timetowait
		TimeToWait = 0;
		_RespawnTime ctrlSetText "0";
		//Count all independent side
		_inde = independent countSide allPlayers;
		_medicsOnline ctrlSetText str _inde;
		//------Distance
		dist = 99999;
		{
			if (side _x ==  independent and (! (_x isEqualTo player))) then
			{
				_dis = player distance _x;
				if (_dis < dist) then
				{
					dist = (round _dis);
				};
			};
		} forEach allPlayers;

		_MedicDistance ctrlSetText format ["%1 m",str dist];
		uisleep 2;
	};
	//if (damage player == 0 ) exitWith {};
};
if (!(IS_UNCONSCIOUS(player))) exitWith{};
TimeToWait = nil;
dist = nil;