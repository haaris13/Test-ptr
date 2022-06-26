class Life_atm_management {
	idd = 2700;
	name= "life_atm_menu";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
		
		class MainBackground: Life_RscText
		{
			idc = -1;

			x = 0.350469 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.396 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		
		class Title: Life_RscTitle
		{
			idc = -1;

			text = "Gestion de compte bancaire"; //--- ToDo: Localize;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		
		class RscText_1021: Life_RscText
		{
			idc = -1;

			text = "Autres services"; //--- ToDo: Localize;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};

	};
	
	class controls {
		
		class bankBalance: Life_RscStructuredText
		{
			idc = 2701;

			text = "0"; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1.5;
		};
		
		class playerCash: Life_RscStructuredText
		{
			idc = 2702;

			text = "0"; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1.5;
		};
	
		class moneyWithdraw: Life_RscEdit
		{
			idc = 2703;

			text = "0"; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		
		class moneyDeposit: Life_RscEdit
		{
			idc = 2704;

			text = "0"; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		
		class PlayerList: Life_RscCombo
		{
			idc = 2705;

			text = "Joueurs"; //--- ToDo: Localize;
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		
		class gangDeposit: Life_RscEdit
		{
			idc = 2706;

			text = "0"; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		
			
		class WithdrawButton: Life_RscButtonMenuFixLater
		{
			onButtonClick = "[] call life_fnc_bankWithdraw";
			type = 1;
			style = 2;
			idc = -1;
			text = ">";
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};

		};
		class DepositButton: Life_RscButtonMenuFixLater
		{
			onButtonClick = "[] call life_fnc_bankDeposit";
			type = 1;
			style = 2;
			text = "<";
			idc = -1;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};

		};
		
		class TransferButton: Life_RscButtonMenuBasic
		{
			onButtonClick = "[] call life_fnc_bankTransfer";

			idc = -1;
			text = "Virement"; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
	

		class GangDepositButton: Life_RscButtonMenuBasic
		{
			idc = 2708;
			onButtonClick = "[0, (ctrlText 2706)] spawn life_fnc_clanBankAction;";

			text = "Dépôt Clan"; //--- ToDo: Localize;
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		
		
		class RscText_1011: Life_RscText
		{
			idc = -1;
			text = "Solde bancaire : "; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.069875 * safezoneW;
			h = 0.022 * safezoneH;
		};
	
		class RscText_1013: Life_RscText
		{
			idc = -1;
			text = "Liquide : "; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RscText_1014: Life_RscText
		{
			idc = -1;
			text = "Retirer : "; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.04;
		};
	
		class RscText_1016: Life_RscText
		{
			idc = -1;
			text = "Déposer : "; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.04;
		};
		class RscText_1017: Life_RscText
		{
			idc = -1;
			text = "Virement"; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.04;
		};
		class moneyTransfer: Life_RscEdit
		{
			idc = 2707;

			text = "0"; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class RscText_1020: Life_RscText
		{
			idc = -1;
			text = "Dépôt Clan"; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.04;
		};
		class CloseButtonKey: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "Fermer"; //--- ToDo: Localize;
		};
	};
};