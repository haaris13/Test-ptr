/*
	File: fn_packupSpikes.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Packs up a deployed spike strip.
*/
private["_spikes"];
_spikes = nearestObjects[getPos player,["wirk_spikes"],8] select 0;
if(isNil "_spikes") exitWith {};

if(([true,"spikeStrip",1] call life_fnc_handleInv)) then
{
	titleText[localize "STR_NOTF_SpikeStrip","PLAIN"];
	[_spikes] spawn life_fnc_deleteVehicle;
};