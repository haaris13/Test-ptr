
/*
	File: fn_eventFeed.sqf
		
	Author: IronBlade
	    
	Description:
		- 

	Usage:  
	["PROFESSION","Gathering",422,[1.11, 0.97, 0.4, 0.1]] spawn life_fnc_eventFeed;
*/

private ["_message","_messageValue","_text","_type","_ctrl","_newCtrlPos","_queue"];
_type = [_this,0,"",[""]] call BIS_fnc_param;
_message = [_this,1,"",[""]] call BIS_fnc_param;
_messageValue = [_this,2,0,[0]] call BIS_fnc_param;
_sound = [_this,3,true,[true]] call BIS_fnc_param;
_newCtrlPos = [_this,4,[1.11, 0.97, 0.4, 0.1],[[]],4] call BIS_fnc_param;

//Queue it
_queue = life_eventFeedQueue;
life_eventFeedQueue = life_eventFeedQueue + 1;

if (life_eventFeedQueue > 1) then {
	waitUntil {life_eventFeedQueue isEqualTo _queue};
};

switch (_type) do {
	case "PROFESSION":{_text = parseText format["<t align = 'right'>Votre niveau de %1 est passé à <t color = '#7300e6'>%2</t>",_message, _messageValue]};
	case "XP":{_text = parseText format["<t align = 'right'>Votre XP a augmenté de <t color = '#7300e6'>%2</t>",_message, _messageValue]};	
	case "XPCLAN":{_text = parseText format["<t align = 'right'><t color = '#7300e6'>%2</t> XP pour la Taxe de Gang.",_message, _messageValue]};
	case "LEVEL":{_text = parseText format["<t align = 'right'>Vous venez de débloquer le niveau <t color = '#8D33A2'>%2</t>",_message, _messageValue]};
	case "REPUTATIONGAIN":{_text = parseText format["<t align = 'right'>Votre réputation a augmentée de <t color = '#ff3300'>%2</t>",_message, _messageValue]};
	case "REPUTATIONLOSS":{_text = parseText format["<t align = 'right'>Votre réputation a diminuée de <t color = '#ff3300'>%2</t>",_message, _messageValue]};
	case "PURCHASE":{_text = parseText format["<t align = 'right'>Vous avez acheté %1 pour <t color = '#88cc00'>$%2</t>",_message, _messageValue]};
	case "SALE":{_text = parseText format["<t align = 'right'>Vous avez vendu %1 pour <t color = '#88cc00'>$%2</t>",_message, _messageValue]};
	case "CRAFTED":{_text = parseText format["<t align = 'right'>Vous avez fabriqué %2 %1(s)",_message, _messageValue]};
	case "PERK":{_text = parseText format["<t align = 'right'>Vous avez appris la compétence <t color = '#7300e6'>'%1'</t>",_message]};
	case "PERKSLOTUNLOCK":{_text = parseText format["<t align = 'right'>Vous avez déverrouillé un nouveau Tier de compétence!"]};

	case "TRAINING_SCORE":{_text = parseText format["<t align = 'right'>%1<t color = '#7300e6'>%2</t>",_message, _messageValue]};

	// SUB

	case "LEVELSUB":{_text = parseText format["<t align = 'right'>Votre niveau a diminué !",_message]};
	case "XPSUB":{_text = parseText format["<t align = 'right'>Votre XP a diminué de <t color = '#8D33A2'>%2XP</t>",_message, _messageValue]};

	// Cops:

	case "OP":{_text = parseText format["<t align = 'right'>Vous avez gagné %1XP pour %2",_message, _messageValue]};

	case "OTHER":{_text = parseText format["<t align = 'right' color ='#FFFFFF'>%1</t> <t color = '#7300e6'>%2</t>",_message, _messageValue]};
	default {_text = parseText format["<t align = 'right' color ='#FFFFFF'>%1</t>",_message]}
};

disableSerialization;

//Move down active controls if there are any
{
	_ctrl = (findDisplay 46) displayCtrl _x;
	_pos = ctrlPosition _ctrl;
	_pos set [1, (_pos select 1) + 0.025];
	_ctrl ctrlSetPosition _pos;
	_ctrl ctrlCommit 0.25;
} forEach life_activeEventFeedControls;
UISleep (0.25);

_ctrl = (findDisplay 46) ctrlCreate ["RscStructuredText", life_eventControl];
_ctrl ctrlSetPosition _newCtrlPos;
_ctrl ctrlSetStructuredText _text; 
_ctrl ctrlCommit 0;

_ctrl ctrlSetFade 1;
_ctrl ctrlCommit 7;

//Runs for the newly created control
[life_eventControl] spawn
{
	disableSerialization;
	_idc = _this select 0;
	_ctrl = (findDisplay 46) displayCtrl _idc;
	UISleep 7;
	ctrlDelete _ctrl;
	life_activeEventFeedControls = life_activeEventFeedControls - [_idc];

	if (count life_activeEventFeedControls isEqualTo 0) then {
		life_eventControl = 20000;
	};
};

//Add new control
life_activeEventFeedControls pushBack life_eventControl;
life_eventControl = life_eventControl + 1;

if (Life_UISounds_enabled && _sound) then {
	//Dont want the noise spamming
	if (count life_activeEventFeedControls <= 2) then {
		if (_type isEqualTo "LEVEL") then {
			playSound "FD_Finish_F";
		} else {
			playSound "FD_Timer_F";
		};
	};
};

//Queue thing
UISleep (0.25);
life_eventFeedQueue = life_eventFeedQueue - 1;