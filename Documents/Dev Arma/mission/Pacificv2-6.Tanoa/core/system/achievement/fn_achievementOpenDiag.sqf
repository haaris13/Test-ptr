#include "..\..\..\script_macros.hpp"
#define DialogAchievement 2060
#define ListAchievements 2061
/*
	File:fn_achievementOpenDiag.sqf

	Autor:IronBlade
*/

_cfgAchievement = (missionConfigFile >> "CfgAchievement");

disableSerialization;

createDialog "playerAchievements";

_display = findDisplay DialogAchievement;
_group = _display displayCtrl ListAchievements;

_pos = 0;

{
  if (isClass (_cfgAchievement >> _x)) then {

    _controlStrip = _display ctrlCreate ["RscText", -1, _group];
    _controlBack = _display ctrlCreate ["RscText", -1, _group];

    _controlIcon = _display ctrlCreate ["RscStructuredText", -1, _group];
    _controlText = _display ctrlCreate ["RscStructuredText", -1, _group];

    // Pos
    _controlStrip ctrlSetPosition [0, _pos, 0.01, 0.1];
    _controlBack ctrlSetPosition [0.01, _pos, 0.99, 0.1];

    _controlIcon ctrlSetPosition [0.02, _pos, 0.11, 0.1];
    _controlText ctrlSetPosition [0.11, _pos, 0.89, 0.1];

    _displayName = getText(_cfgAchievement >> _x >> "displayname");
    _icon = ""; //getText(_cfgAchievement >> _x >> "icon");
    _description = getText(_cfgAchievement >> _x >> "description");

    if (_icon != "") then {
      _controlIcon ctrlSetStructuredText parseText format["<img image='%1' size='2.5'></img><br/>",_icon];
    };

    _controlText ctrlSetStructuredText parseText format ["<t size='0.8' font='PuristaBold'>%1</t><br/><t size='0.8' font='PuristaLight' color='#c4c4c4'>%2</t><br/>", _displayName, _description];

    _controlStrip ctrlSetBackgroundColor [0.043,0.486,0.769,1];
    _controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];

    _controlBack ctrlCommit 0;
    _controlStrip ctrlCommit 0;
    _controlIcon ctrlCommit 0;
    _controlText ctrlCommit 0;

    _pos = _pos + 0.11;

  };

} forEach life_achievement;

{

  if !((configName _x) in life_achievement) then {
    _controlStrip = _display ctrlCreate ["RscText", -1, _group];
    _controlBack = _display ctrlCreate ["RscText", -1, _group];

    _controlIcon = _display ctrlCreate ["RscStructuredText", -1, _group];
    _controlText = _display ctrlCreate ["RscStructuredText", -1, _group];

    // Pos
    _controlStrip ctrlSetPosition [0, _pos, 0.01, 0.1];
    _controlBack ctrlSetPosition [0.01, _pos, 0.99, 0.1];

    _controlIcon ctrlSetPosition [0.02, _pos, 0.11, 0.1];
    _controlText ctrlSetPosition [0.11, _pos, 0.89, 0.1];

    _displayName = getText(_x >> "displayname");
    _icon = "";
    _description = "Non Débloqué...";

    _color = [0.714,0.714,0.714,1];

    _controlText ctrlSetStructuredText parseText format ["<t size='0.8' font='PuristaBold'>%1</t><br/><t size='0.8' font='PuristaLight' color='#c4c4c4'>%2</t><br/>", _displayName, _description];

    _controlStrip ctrlSetBackgroundColor _color;
    _controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];



    _controlBack ctrlCommit 0;
    _controlStrip ctrlCommit 0;
    _controlIcon ctrlCommit 0;
    _controlText ctrlCommit 0;

    _pos = _pos + 0.11;
  };
} forEach ("true" configClasses (_cfgAchievement));
