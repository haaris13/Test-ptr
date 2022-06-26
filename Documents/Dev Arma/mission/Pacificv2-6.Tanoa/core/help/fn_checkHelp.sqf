/*
	File:	fn_checkHelp.sqf

	Autor:	IronBlade
*/

uiSleep 60;
	
["Action","Commencer",true] spawn life_fnc_showHelp;
["spawn"] spawn life_fnc_achievementLearn;

uiSleep 60;

["Action","Touches",true] spawn life_fnc_showHelp;

uiSleep (2*60);

["Farm","Recolte",true] spawn life_fnc_showHelp;

uiSleep (3*60);

["LittleBank","BraquerBanque",false] spawn life_fnc_showHelp;