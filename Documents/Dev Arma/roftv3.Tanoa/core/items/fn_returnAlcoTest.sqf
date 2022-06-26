/*
	File:fn_returnAlcoTest.sqf

	Autor:IronBlade
*/
_confs = [_this,0,[],[[]]] call BIS_fnc_param;
_civil = [_this,1,objNull,[objNull]] call BIS_fnc_param;

if (isNull _civil) exitWith {};
if (!(alive _civil)) exitWith {};

_effects = "";

if (count _confs > 0) then {
	{
		_conf = _x;
		_effects = _effects + format["%1 <br/>", getText(missionConfigFile >> "Atouts" >> _conf >> "title")];
	} forEach _confs;
} else {
	_effects = "Aucune substance illicite";
};

hint parseText format["<t color='#FF0000'><t size='2'>%1</t></t><br/><t color='#FFD700'><t size='1.5'><br/>Résultat:</t></t><br/>%2<br/>",name _civil,_effects];
