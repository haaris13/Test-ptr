#include "..\..\script_macros.hpp"
/*
	File: fn_trademenureceivedata.sqf
		

	Description:
		- Recieve either an offer from the target or an accept request
	    
	Parameter(s):

	Usage: 
		
*/

private ["_recievedMoneyOffer","_recievedItemOffer","_type","_recievedOfferWeight","_currentWeight","_reset"];

disableSerialization;
_type = [_this,0,0,[0]] call BIS_fnc_param;
_recievedMoneyOffer = [_this,1,0,[0]] call BIS_fnc_param;
_recievedItemOffer = [_this,2,[],[]] call BIS_fnc_param;
_firstOffer = [_this,3,false,[false]] call BIS_fnc_param;
_currentWeight = life_carryWeight;

_reset = false;
switch (_type) do {
	
	case 0: {	
		//Recived a trade offer
		life_trade_recievedItemOffer = _recievedItemOffer;
		life_trade_recievedMoneyOffer = _recievedMoneyOffer;
		

		//First check if offered items exceed carry weight
		{
			_itemCfg = _x select 0;
			_itemAmount = _x select 1;

			_weight = M_CONFIG(getNumber,"VirtualItems",_itemCfg,"_weight");
			_weight = _weight * _itemAmount;
			_currentWeight = _currentWeight + _weight;
			if (_currentWeight > life_maxWeight ) exitWith {_reset = true};

		} foreach _recievedItemOffer;

		//You dont have space for the offered items, reset their trade and exit
		if (_reset) exitWith {
			life_trade_recievedItemOffer = [];
			life_trade_recievedMoneyOffer = 0;
			[1] remoteExec ["life_fnc_tradeMenuReset",life_trade_target];
		};

		//Target status
		CONTROL(13000,13012) ctrlSetStructuredText parseText format["THEIR STATUS:<t color = '#E2CA00'> OFFER MADE </t>"];

		//Money Offer
		if (_recievedMoneyOffer isEqualTo 0) then {
			CONTROL(13000,13010) ctrlSetText format["Nothing!"]} else {CONTROL(13000,13010) ctrlSetText format["$%1",[_recievedMoneyOffer] call life_fnc_numberText];
		};

		//Items
		_targetItemOfferCTRL = CONTROL(13000,13013);
		{
			_itemCfg = _x select 0;
			_itemAmount = _x select 1;
			_displayName = M_CONFIG(getText,"VirtualItems",_itemCfg,"displayName");
			_targetItemOfferCTRL lbAdd format["%2 [x%1]",_itemAmount,localize _displayName];
			_targetItemOfferCTRL lbSetData [(lbSize _targetItemOfferCTRL)-1,_itemCfg];
			_targetItemOfferCTRL lbSetValue [(lbSize _targetItemOfferCTRL)-1,_itemAmount];
			_icon = M_CONFIG(getText,"VirtualItems",_itemCfg,"icon");
			if(!(EQUAL(_icon,""))) then {
				_targetItemOfferCTRL lbSetPicture [(lbSize _targetItemOfferCTRL)-1,_icon];
			};
		} foreach _recievedItemOffer;

		life_trade_offerRecieved = true;

		//You already sent your offer, so move onto accept phase
		if (!_firstOffer) then {
			CONTROL(13000,13030) ctrlEnable true;	//Accept
			CONTROL(13000,13031) ctrlEnable true;	//Decline
		};
	};
			
	case 1: {			
		//Target accepted
		 CONTROL(13000,13012) ctrlSetStructuredText parseText format["THEIR STATUS:<t color = '#b2ec00'> ACCEPTED</t>"];
		//Recieved accept
		life_trade_acceptRecieved = true;

	};
};	