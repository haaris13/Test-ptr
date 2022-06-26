class Dialog_gouv_gestion {
	idd = 9200;
	name= "Dialog_gouv_gestion";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
		class TabletBackground: Life_RscPicture
		{
			idc = -1;
			text = "textures\tabletbg.paa";
				x = 0.2525 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.858 * safezoneH;
		};
	};

	class controls {

		class Title: Life_RscTitle
		{
			idc = -1;

			text = "Gestion Comptes"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class RscText_back: Life_RscText
		{
			idc = -1;
			text = "";
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.299062 * safezoneW;
			h = 0.176 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
			sizeEx = 0.04;
		};

		class RscText_back2: Life_RscText
		{
			idc = -1;
			text = "";
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.165 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
			sizeEx = 0.04;
		};


		class RscText_1011: Life_RscText
		{
			idc = -1;
			text = "Solde bancaire Gouvernement: "; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class bankBalance: Life_RscStructuredText
		{
			idc = 9201;

			text = "0"; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1.5;
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

		class moneyWithdraw: Life_RscEdit
		{
			idc = 9202;

			text = "0"; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class WithdrawButton: Life_RscButtonMenuFixLater
		{
			onButtonClick = "[] call life_fnc_gouvGestionTake";
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

		class RscText_1013: Life_RscText
		{
			idc = -1;
			text = "Liquide : "; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class playerCash: Life_RscStructuredText
		{
			idc = 9203;

			text = "0"; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1.5;
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

		class moneyDeposit: Life_RscEdit
		{
			idc = 9204;

			text = "0"; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class DepositButton: Life_RscButtonMenuFixLater
		{
			onButtonClick = "[] call life_fnc_gouvGestionDeposeGouv";
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

		//

		class RscText_1017: Life_RscText
		{
			idc = -1;
			text = "Solde bancaire Gendarmerie : ";
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.04;
		};

		class GenBank: Life_RscStructuredText
		{
			idc = 9205;

			text = "0"; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0};
			sizeEx = 1.5;
		};

		class RscText_1018: Life_RscText
		{
			idc = -1;
			text = "Déposer : ";
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.04;
		};

		class genDeposit: Life_RscEdit
		{
			idc = 9206;

			text = "0"; //--- ToDo: Localize;
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class GenDepositButton: Life_RscButtonMenuFixLater
		{
			onButtonClick = "[] call life_fnc_gouvGestionDeposeGen";
			type = 1;
			style = 2;
			text = "<";
			idc = -1;
			x = 0.479375 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0154689 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};

		// ---------------------------------

		class CloseButtonKey: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";
			idc = -1;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			tooltip = "$STR_Global_Close";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
	};
};