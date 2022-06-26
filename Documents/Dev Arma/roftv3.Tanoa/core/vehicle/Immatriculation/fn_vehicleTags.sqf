#include "..\..\script_macros.hpp"
/*
	File: fn_vehicleTags.sqf
	Author: IronBlade
	
	Description:
*/
private["_ui","_units"];
#define iconID 79000
#define scale 0.6
#define vehTagsCfg missionConfigFile >> "CfgImmatriculationTags"

if(visibleMap OR {!alive player} OR {dialog}) exitWith {
	501 cutText["","PLAIN"];
};

_ui = uiNamespace getVariable ["Life_HUD_vehicleTags",displayNull];
if(isNull _ui) then {
	501 cutRsc["Life_HUD_vehicleTags","PLAIN"];
	_ui = uiNamespace getVariable ["Life_HUD_vehicleTags",displayNull];
};

_vehs = nearestObjects[
	(visiblePosition player),
	getArray(vehTagsCfg >> "unitsToScan"),
	getNumber(vehTagsCfg >> "unitsToScanDist")
];

//Fix for hanging nametags on the screen
{
	_idc = _ui displayCtrl _x;
	_idc ctrlShow false;
} forEach life_vehtags;
life_vehtags = [];

if (life_debug == 0) then {
	_vehs = _vehs - [vehicle player];
};

_hideGlobal = false;
if (player getVariable ["cagoule",false]) then {_hideGlobal = true;};

{
	private["_text"];
	_idc = _ui displayCtrl (iconID + _forEachIndex);
	life_vehtags pushBack (iconID + _forEachIndex);

	_posImma = getArray(vehTagsCfg >> typeOf _x >> "posImma");

	if (!(_posImma isEqualTo [])) then {

		_posImma = [_posImma select 0, (_posImma select 1) - 0.05, _posImma select 2];

		if(!(lineIntersects [eyePos player, _x modelToWorld _posImma, (vehicle player), _x]) && {(!isNil {_x getVariable "immatriculation"})}) then {
			_dist = 15;
			_pos = [
				((_x modelToWorld _posImma) select 0), 
				((_x modelToWorld _posImma) select 1), 
				((_x modelToWorld _posImma) select 2)
			];
			_sPos = worldToScreen _pos;
			_distance = _pos distance player;

			_posPlayer = _x worldToModel (position (vehicle player));

			if (count _sPos > 1 && {_distance < _dist} && (_posPlayer select 1) < (_posImma select 1)) then {
				_imma = _x getVariable "immatriculation";

				_isIllegal = false;

				_name = _imma;

				switch (true) do {

					case (_imma isEqualTo "illegal"): {_isIllegal = true;};
					case (_imma isEqualTo "NaI"): {_name = "Na";};
					default {_isIllegal = false;}; 

				};

				if (_isIllegal) then {_name = "Aucune Plaque"};

				if(!(_hideGlobal)) then {

					_text = [];
					_text pushBack "<t align='center'>";
					_text pushBack format["<t size='1.1' color='#686766'>%1</t><br/>","Immatriculation"];
					_text pushBack format["<t size='1.5' color='#b7b5b3'>%1</t><br/>", _name];
					_text pushBack "</t>";

					_textOut = "";
					{_textOut = _textOut + _x} forEach _text;

					_idc ctrlSetStructuredText parseText _textOut;
					_smallDist = 0.6;
					_smallDist = _smallDist - (_distance * 0.05);

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
	};
} foreach _vehs;