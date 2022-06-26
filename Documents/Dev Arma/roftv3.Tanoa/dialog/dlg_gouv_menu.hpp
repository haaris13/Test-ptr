class Dialog_Gouv_Menu {

	idd = 9100;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "";
	class controlsBackground {
	
	
		class TabletBackground: life_RscPicture
		{
			idc = -1;

			text = "textures\tabletbg.paa"; //--- ToDo: Localize;
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.858 * safezoneH;
		};

	};
	
	class controls {
				
		class MasterButtonGroup: Life_RscControlsGroup
		{
			idc = 9110;
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.45375 * safezoneW;
			h = 0.506 * safezoneH;
			colorBackground[] = {0,0,0,0};
			
		class controls {
								
				class HeaderTileText: Life_RscStructuredText
				{
					idc = -1;

					text = "Gouvernement"; //--- ToDo: Localize;
					x = 0.309219 * safezoneW + safezoneX;
					y = 0.225 * safezoneH + safezoneY;
					w = 0.417656 * safezoneW;
					h = 0.02 * safezoneH;
				};

				class ButtonPlayerInv: Life_RscButtonMenu
				{
					fade = 0;
					idc = -1;
					style = 2;
					onButtonClick = "[] spawn life_fnc_gouvOpenTaxesCiv;";
					text = "<br/><img image='dialog\data\ico_wanted.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Taxes</t>";
					x = 0.304062 * safezoneW + safezoneX;
					y = 0.250 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Voir la liste des Taxes"; //--- ToDo: Localize;
				};
				


				class ButtonKeys: Life_RscButtonMenu
				{
					idc = -1;
					onButtonClick = "[] spawn life_fnc_gouvOpenLoisCiv;";
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_wanted.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Lois</t>";
					x = 0.412344 * safezoneW + safezoneX;
					y = 0.250 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Voir la liste des Lois"; //--- ToDo: Localize;
				};
				class ButtonCell: Life_RscButtonMenu
				{
					idc = 9101;
					onButtonClick = "[] spawn life_fnc_gouvOpenLogs;";
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_wanted.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Historique Comptes</t>";
					x = 0.628906 * safezoneW + safezoneX;
					y = 0.250 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;					
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Voir l'Historique des comptes du gouvernement"; //--- ToDo: Localize;
				};
				class ButtonPlayerLicenses: Life_RscButtonMenu
				{	
					idc = 9102;
					fade = 0;
					style = 2;
					onButtonClick = "[] spawn life_fnc_gouvOpenGestion;";
					text = "<br/><img image='dialog\data\ico_wanted.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Gestion Comptes</t>";
					x = 0.520625 * safezoneW + safezoneX;
					y = 0.250 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Gérer les comptes en banques du gouvernement"; //--- ToDo: Localize;
				};
			};
		};
	};	
};