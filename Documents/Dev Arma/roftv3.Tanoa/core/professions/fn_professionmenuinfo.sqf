#include "..\..\script_macros.hpp"
/*
	File: fn_professionmenuinfo.sqf
		
	Author: IronBlade
	    
	Description:
		- Shows information window for professions
	    
	Parameter(s):

	Usage: 

*/
private ["_type","_profession","_description","_profTypeInfo","_profDescription"];
_type = SEL(_this,0);
switch (_type) do {
	case 0 : {_profession = "prof_craft"};
	case 1 : {_profession = "prof_gathering"};
	case 2 : {_profession = "prof_mining"};
	case 3 : {_profession = "prof_treasure"};
	case 4 : {_profession = "prof_chimie"};
	case 5 : {_profession = "prof_livraison"};
	case 6 : {_profession = "prof_agricole"};
	case 7 : {_profession = "prof_interim"};
	default {_profession = ["",""]};
};
if (_profession isEqualTo "") exitWith {};
disableSerialization;
createDialog "professionInfoDialog";

["Prof",_profession,true] spawn life_fnc_showHelp;

//-- Get professions data
_profDisplay 	 = M_CONFIG(getText,"Professions",_profession,"displayName");
_profDescription = M_CONFIG(getText,"Professions",_profession,"profDescription");
_profType		 = M_CONFIG(getText,"Professions",_profession,"type");
_profTypeInfo 	 = M_CONFIG(getText,"Professions",_profession,"description");
_profUnlock 	 = M_CONFIG(getArray,"Professions",_profession,"unlocks");

_unlockNumber = count _profUnlock;

_description = format ["
<br/>
<t color='#316dff'>Profession:</t><t size = '1'> %1</t><br/>
<t size = '0.9'>%2</t><br/>
<br/>
<t color='#316dff'>Type de Profession:</t><t size = '1'> %3 </t><br/>
<t size = '0.9'>%4</t><br/>
<br/>
<t color='#316dff'>Débloque:</t><t size = '1'> %5 Eléments</t><br/>
",
_profDisplay,
_profDescription,
_profType,
_profTypeInfo,
_unlockNumber
];

{
	_description = _description + format ["<t color='#b2ec00'>Niveau: %1 - %2</t><br/>",(_x select 0),(_x select 1)];
}forEach _profUnlock;

CONTROL(12800,12801) ctrlSetStructuredText parsetext _description;
