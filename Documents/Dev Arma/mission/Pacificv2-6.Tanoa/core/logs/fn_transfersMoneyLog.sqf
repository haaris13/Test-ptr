/*
	File:fn_TransfersMoneyLog.sqf

	Autor:IronBlade

	Use:

	Type:
		0 -> Give
		1 -> ATM Transfert Give
*/
_type = [_this,0,0,[0]] call BIS_fnc_param;
_val = [_this,1,0,[0]] call BIS_fnc_param;
_target = [_this,2,objNull,[objNull]] call BIS_fnc_param;

if (_val isEqualTo 0) exitWith {};

[getPlayerUID player, _type, _val, getPlayerUID _target, str(playerSide), str(side _target)] remoteExecCall ["TON_fnc_insertTransfersMoney",2];