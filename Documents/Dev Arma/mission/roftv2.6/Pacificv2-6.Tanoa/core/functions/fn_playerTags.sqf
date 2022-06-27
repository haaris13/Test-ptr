#include "..\script_macros.hpp"
/*
	File: fn_playerTags.sqf
	Author: Bryan "Tonic" Boardwine, IronBlade
	
	Description:
	Adds the tags above other players heads when close and have visible range.
*/
private["_ui","_units"];
#define iconID 78000
#define scale 0.7
#define nameTagCfg missionConfigFile >> "CfgNameTags"
#define getNameTagIcon(SIDETYPE,RANKNUM) getText(nameTagCfg >> SIDETYPE >> RANKNUM >> "icon");
#define getNameTagText(SIDETYPE,RANKNUM) getText(nameTagCfg >> SIDETYPE >> RANKNUM >> "text");
#define getNameTag(SIDETYPE) if (!isNil {(_x getVariable (getText(nameTagCfg >> SIDETYPE >> "rankvar")))}) then { \
					_var = getText(nameTagCfg >> SIDETYPE >> "rankvar"); \
					_checkClothe = getNumber(nameTagCfg >> SIDETYPE >> "checkClothes"); \
					_rnkVar = format["R%1",(_x getVariable _var)]; \
					_goodClothe = true; \
					if (_checkClothe == 1) then { \
						_vest = vest _x; \
						if !(isClass(nameTagCfg >> SIDETYPE >> "Clothes" >> _vest)) exitWith {_goodClothe = false;}; \
						_vl = getNumber(nameTagCfg >> SIDETYPE >> "Clothes" >> _vest >> "rank"); \
						_rnkVar = format["R%1", _vl]; \
					}; \
					if (!_goodClothe) exitWith {}; \
					_rankPath = getText(nameTagCfg >> SIDETYPE >> "imgpath"); \
					_rankText = getText(nameTagCfg >> SIDETYPE >> _rnkVar >> "text"); \
					if (getText(nameTagCfg >> SIDETYPE >> "teamTag") != "") then { \
						_teamText = getText(nameTagCfg >> SIDETYPE >> "teamTag"); \
					}; \
					if (_rankPath != "") then { \
						_rankIcon = _rankPath + "\" + getText(nameTagCfg >> SIDETYPE >> _rnkVar >> "icon"); \
					}; \
				};
#define setNameTag(ICON,ICONTEXT) _rankIcon = ICON; _rankText = ICONTEXT; _teamIcon = ""; _teamText = "";

// Team
#define teamTagCfg missionConfigFile >> "CfgTeamTags"
#define getTeamTagText(SIDETYPE,RANKNUM) getText(teamTagCfg >> SIDETYPE >> RANKNUM >> "text");
#define getTeamTag(SIDETYPE) if (!isNil {(_x getVariable (getText(teamTagCfg >> SIDETYPE >> "rankvar")))}) then { \
					_varTeam = getText(teamTagCfg >> SIDETYPE >> "rankvar"); \
					_teamText = getText(teamTagCfg >> SIDETYPE >> format["R%1",(_x getVariable _varTeam)] >> "text"); \
					_rankPathTeam = getText(teamTagCfg >> SIDETYPE >> "imgpath"); \
					if ((getText(teamTagCfg >> SIDETYPE >> format["R%1",(_x getVariable _varTeam)] >> "icon")) != "") then { \
						_teamIcon = _rankPathTeam + "\" + getText(teamTagCfg >> SIDETYPE >> format["R%1",(_x getVariable _varTeam)] >> "icon"); \
					}; \
				};

if(visibleMap OR {!alive player} OR {dialog}) exitWith {
	500 cutText["","PLAIN"];
};

_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
if(isNull _ui) then {
	500 cutRsc["Life_HUD_nameTags","PLAIN"];
	_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
};

_units = nearestObjects[
	(visiblePosition player),
	getArray(nameTagCfg >> "unitsToScan"),
	getNumber(nameTagCfg >> "unitsToScanDist")
];

//Fix for hanging nametags on the screen
{
	_idc = _ui displayCtrl _x;
	_idc ctrlShow false;
} forEach life_nametags;
life_nametags = [];

if (life_debug == 0) then {
	_units = _units - [player];
};

_hideNameGlobal = false;
if (player getVariable ["cagoule",false]) then {_hideNameGlobal = true;};

{
	private["_text"];
	_idc = _ui displayCtrl (iconID + _forEachIndex);
	life_nametags pushBack (iconID + _forEachIndex);

	if(!(lineIntersects [eyePos player, eyePos _x, player, _x]) && {(!isNil {_x getVariable "realname"})}) then {
		_dist = 8;
		_pos = [
			visiblePosition _x select 0, 
			visiblePosition _x select 1, 
			((_x modelToWorld (_x selectionPosition "head")) select 2)+.65
		];
		_sPos = worldToScreen _pos;
		_distance = _pos distance player;
		if(count _sPos > 1 && {_distance < _dist}) then {
			_rankIcon = "";
			_teamIcon = "";
			_rankText = "";
			_teamText = "";
			_name = "";
			_hideName = false;

			if (_x getVariable ["cagoule",false]) then {_hideName = true;};

			_isP = isPlayer _x;
			_isSos = false;
			_isERP = false;
			_isOnu = false;

			switch (true) do {
				case (_isP && !alive _x): {_name = _x getVariable ["name", "Cadavre"]};

				case (!(side _x in [independent]) && _isP && {(headgear _x in life_hidden_clothing) || (goggles _x in life_hidden_clothing)} && !life_showNameTag && !(_x in (units grpPlayer))): {
					_name = "Inconnu"; setNameTag("","Masqué")
				};

				case ((side _x) == west) : {
					getNameTag("POLICE");

					if (_rankText != "") then {
						getTeamTag("GENDARMERIE");
					};
				};

				case (_x in (units grpPlayer) && playerSide == civilian && !_isSos && !_isERP): {
					_name = format["<t color='#00FF00'>%1</t>",(_x getVariable ["realname",name _x])];
					_rankText = (group _x) getVariable ["gang_name",""];
				};

				case (!isNil {_x getVariable "rankText"} || !isNil {_x getVariable "rankIcon"}): {
					_rankIcon = _x getVariable["rankIcon",""];
					_rankText = _x getVariable["rankText",""];
				};
			};

			if (side _x == independent) then {
				getNameTag("MEDIC");
			};

			if(_name == "") then {_name = _x getVariable ["realname",name _x]};

			if (_isP && {(_x getVariable ["adm_sup", false])}) then {setNameTag("","<t color='#FF0000'>Support En Service</t>")};
			if (_isP && {(_x getVariable ["adm_mod", false])}) then {setNameTag("","<t color='#FF0000'>Modérateur En Service</t>")};
			if (_isP && {(_x getVariable ["adm_adm", false])}) then {setNameTag("","<t color='#FF0000'>Admin En Service</t>")};
			if (_isP && {(_x getVariable ["adm_staff", false])}) then {setNameTag("","<t color='#FF0000'>Gérant Staff En Service</t>")};

			if (_x getVariable ["hide",false]) then {
				_hideName = true;
			};

			if (!(_hideName) && !(_hideNameGlobal)) then {

				_text = [];
				_text pushBack "<t align='center'>";

				if (_teamIcon != "") then {
					_text pushBack format["<img image='%1' size='2.5'></img><br/>",_teamIcon];
				} else {
					if(_rankIcon != "") then {_text pushBack format["<img image='%1' size='2.5'></img><br/>",_rankIcon];};
				};

				switch (true) do {
					case (life_showNameTag) : {
						_isSpeak = (_x call TFAR_fnc_isSpeaking);

						_isSpeakTxt = "";

						if (_isSpeak) then {
							_isSpeakTxt = "<t size='1'>Parle</t>";
						};

						_text pushBack format["<t size='1.8'>%1</t><br/>%2",_name, _isSpeakTxt];
						if(_teamText != "") then {_text pushBack format["<t size='1.3'>%1</t><br/>",_teamText];};
					};
					case (_x in (units grpPlayer)) : {
						_text pushBack format["<t size='1.8'>%1</t><br/>",_name];
						if(_teamText != "") then {_text pushBack format["<t size='1.3'>%1</t><br/>",_teamText];};
					};
					case (_x in life_knowPlayers) : {
						_text pushBack format["<t size='1.8'>%1</t><br/>",_name];
					};
				};
				
				if (_rankText != "" && ((side _x != civilian) || _isOnu)) then {_text pushBack format["<t size='1.1'>%1</t><br/>",_rankText];};	
				if(_x getVariable ["noTask",0] == 1) then {_text pushBack "<t size='1.5' color='#bd0000'>Sans TaskForce</t><br/>"};
				_text pushBack "</t>";

				_textOut = "";
				{_textOut = _textOut + _x} forEach _text;

				_idc ctrlSetStructuredText parseText _textOut;
				_smallDist = 0.4;
				_smallDist = _smallDist + (_distance * 0.1);

				_idc ctrlSetPosition [(_sPos select 0) - 0.1, _sPos select 1, 0.4, 0.65];
				_idc ctrlSetScale scale;
				_idc ctrlSetFade 0;
				_idc ctrlCommit 0;
				_idc ctrlShow true;
			};
		} else {
			_idc ctrlShow false;
		};
	} else {
		_idc ctrlShow false;
	};
} foreach _units;