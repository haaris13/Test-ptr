class tradingDialog {

	idd = 13000;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "";

	class controlsBackground {



	};

		
	class controls {

		class tradingWithHeader : Life_RscText
		{
			idc = -1;

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.011 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};

		class tradingWith: Life_RscStructuredText
		{
			idc = 13050;
			text = ""; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};


		class AcceptButton: Life_RscButtonMenuBasic
		{
			onButtonClick = "[] call life_fnc_tradeMenuAccept";

			idc = 13030;
			text = "ACCEPTER"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class declineButton: Life_RscButtonMenuBasic
		{
			onButtonClick = "closeDialog 0;";

			idc = 13031;
			text = "REFUSER"; //--- ToDo: Localize;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class MakeOfferButton: Life_RscButtonMenuBasic
		{
			onButtonClick = "[] call life_fnc_tradeMenuMakeOffer;";

			idc = 13032;
			text = "FAIRE OFFRE"; //--- ToDo: Localize;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;			
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		
		};

		class RESETBUTTON: Life_RscButtonMenuBasic
		{
			onButtonClick = "[] call life_fnc_tradeMenuReset;";
			idc = 13035;

			text = "RESET"; //--- ToDo: Localize;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		
		
		class ButtonClose: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa"; 
			x = 0.665 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "Fermer"; 
		};
		
	
		class StatusLeft : Life_RscStructuredText
		{
			idc = 13001;

			text = "VOTRE STATUT: "; 
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		

		class MoveItemButton: Life_RscButtonMenuBasic
		{
			onButtonClick = "[] call life_fnc_tradeMenuMoveItem";

			idc = 13034;
			text = ">>"; //--- ToDo: Localize;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		
			class OfferingLeft : Life_RscText
		{
			idc = 13003;
			text = "Cash :"; 
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};	
		
		class CashOfferLeft : Life_RscText
		{
			idc = 13002;
			text = "0"; 
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		
	
		
		class itemOfferLeft: Life_RscListBox
		{
			idc = 13004;
			sizeEx = 0.036;

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.33 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class ItemHeaderLeft : Life_RscText
		{
			idc = -1;

			text = "Items:"; 
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		
		
		

		
		class OfferingRight : Life_RscText
		{
			idc = 13010;
			rowHeight = 0.1;
			text = "Décider..."; 
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		
		class CashOfferRight : Life_RscText
		{
			idc = 13011;
			rowHeight = 0.1;

			text = ""; 
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class StatusRight: Life_RscStructuredText
		{
			idc = 13012;

			text = "LEUR STATUT:"; 
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class itemOfferRight : Life_RscListBox
		{
			idc = 13013;
			sizeEx = 0.036;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.33 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
	
		class ItemHeaderRight : Life_RscText
		{
			idc = -1;

			text = "Items:"; 
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};

		
		class YourInventoryHeader : Life_RscText
		{
			idc = -1;

			text = "Your Inventory:"; 
			x = 0.200937 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		
			class YourInvBackground1 : Life_RscText
		{
			idc = -1;
			rowHeight = 0.1;

			x = 0.200937 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.077 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};

		class yourInvItemList: Life_RscListBox
		{
			idc = 13020;
			sizeEx = 0.036;
			x = 0.200937 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.242 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
			

		class YourInventoryMoneyText: Life_RscText
		{
			idc = -1;
			rowHeight = 0.1;

			text = "Cash : "; //--- ToDo: Localize;
			x = 0.208177 * safezoneW + safezoneX;
			y = 0.33037 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class YourInventoryMoneyValue: Life_RscText
		{
			idc = 13021;
			rowHeight = 0.1;

			text = "0"; //--- ToDo: Localize;
			x = 0.235937 * safezoneW + safezoneX;
			y = 0.335926 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};
	
		class moneyEdit: Life_RscEdit
		{
			idc = 13022;

			text = "1"; 
			x = 0.206094 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		
		class itemInvEdit: Life_RscEdit
		{
			idc = 13023;

			text = "1"; //--- ToDo: Localize;
			x = 0.200937 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
	
		class YourInvItemsHeader: Life_RscText
		{
			idc = -1;

			text = "Items:"; 
			x = 0.200937 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};

		class MoneyMoveButton: Life_RscButtonMenuBasic
		{
			onButtonClick = "[] call life_fnc_tradeMenuMoveMoney;";

			idc = 13033;
			text = ">>"; 
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
			sizeEx = 0.03;
		};
		

	};
};	

	
