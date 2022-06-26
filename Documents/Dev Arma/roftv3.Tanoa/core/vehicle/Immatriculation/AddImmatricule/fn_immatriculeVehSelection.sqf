/*
	File: fn_immatriculeVehSelection.sqf
	Author: IronBlade

*/
disableSerialization;
private["_control","_selection","_price","_priceTag"];
_control = [_this,0,controlNull,[controlNull]] call BIS_fnc_param;
_selection = [_this,1,-1,[0]] call BIS_fnc_param;

//Error checks
if(isNull _control OR _selection == -1) exitWith {};

_priceTag = ((findDisplay 71400) displayCtrl 71401);
_priceTag ctrlSetStructuredText parseText format ["<t size='1' color='#8cff9b'>Customiser</t>",[(_price)] call life_fnc_numberText];