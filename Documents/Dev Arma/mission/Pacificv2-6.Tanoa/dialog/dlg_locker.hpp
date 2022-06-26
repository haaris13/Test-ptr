class lockerDialog {

	idd = 14000;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "";

	class controlsBackground {
	
		class background: Life_RscText
		{
			idc = -1;

			x = 0.324688 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.451 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};


	};

		
	class controls {

				
		class ButtonClose: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa"; 
			x = 0.67427 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.0154689 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "$STR_Global_Close";
		};

		class StatusRight: Life_RscStructuredText
		{
			idc = -1;

			text = "Votre Coffre:"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class InventoryText: Life_RscText
		{
			idc = -1;

			text = "Inventaire:"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,0};
			sizeEx = 0.06;
		};
		class StoredText: Life_RscText
		{
			idc = -1;

			text = "Stocké:"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,0};
			sizeEx = 0.06;
		};
		class equipmentButton: Life_RscButtonMenuIcon
		{
			idc = -1;
			onButtonClick = "[2] call life_fnc_lockerFilter";
			x = 0.674791 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryweapon_ca.paa";
		};
		class itemButton: Life_RscButtonMenuIcon
		{
			idc = -1;
			onButtonClick = "[1] call life_fnc_lockerFilter";
			x = 0.674791 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa"; 
		};
		class storeButton: Life_RscButtonMenu
		{
			idc = -1;
			onButtonClick = "[] call life_fnc_lockerStore";
			text = "Store"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.2,0.2,0.2,0.4};
		};
		class withdrawButton: Life_RscButtonMenu
		{
			idc = -1;
			onButtonClick = "[] call life_fnc_lockerTake";
			text = "Take"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.2,0.2,0.2,0.4};
		};
		class inventoryList: Life_RscListBox
		{
			idc = 14001;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.363 * safezoneH;
			sizeEx = 0.036;
			colorBackground[] = {0.3,0.3,0.3,0.5};
		};
		class storedItemList: Life_RscListBox
		{
			idc = 14002;

			x = 0.335 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.363 * safezoneH;
			sizeEx = 0.036;
			colorBackground[] = {0.3,0.3,0.3,0.5};
		};
		class inventoryEdit : Life_RscEdit
		{
			idc = 14003;
			text = "1"; 
			x = 0.587656 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
		class storageEdit : Life_RscEdit
		{
			idc = 14004;
			text = "1";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
		class slots: Life_RscStructuredText
		{
			idc = 14010;

			text = "Slots : "; //--- ToDo: Localize;
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,0};
		};

	};
};	

	
