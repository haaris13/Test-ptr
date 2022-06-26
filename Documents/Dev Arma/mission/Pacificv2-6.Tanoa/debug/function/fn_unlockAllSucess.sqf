/*
	File:fn_unlockAllSucess.sqf

	Autor:IronBlade
*/

_cfgSucess = (missionConfigFile >> "CfgAchievement");


{
	uiSleep 0.1;

	_class = configName(_x);
	[_class] spawn life_fnc_achievementLearn;
	
} forEach ("true" configClasses (_cfgSucess));