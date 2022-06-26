class dlg_phone_v2 {

	idd = 24000;
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
			idc = 24010;
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.45375 * safezoneW;
			h = 0.506 * safezoneH;
			colorBackground[] = {0,0,0,0};
			
		class controls {
								
				class HeaderTileText: Life_RscStructuredText
				{
					idc = 24002;

					text = "Téléphone";
					x = 0.309219 * safezoneW + safezoneX;
					y = 0.247 * safezoneH + safezoneY;
					w = 0.417656 * safezoneW;
					h = 0.154 * safezoneH;
				};
				
				class header_tile: Life_RscPicture
				{
					idc = -1;
					fade = 0;
	
					x = 0.304062 * safezoneW + safezoneX;
					y = 0.247 * safezoneH + safezoneY;
					w = 0.427969 * safezoneW;
					h = 0.154 * safezoneH;
				
			
					text = "textures\tabletHeaderImage.jpg";
					colorText[] = {1,1,1,0.3};
				};

				class ButtonPhones: Life_RscButtonMenu
				{
					fade = 0;
					idc = -1;
					style = 2;
					onButtonClick = "[] call life_fnc_phoneOpenList;";
					text = "<br/><img image='dialog\data\ico_sim.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Mes Cartes Sim</t>";
					x = 0.304062 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Mes Cartes Sim";
				};

				class ButtonContacts: Life_RscButtonMenu
				{
					idc = 24003;
					onButtonClick = "[] call life_fnc_phoneContactOpenList;";
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_gang.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Contacts</t>";
					x = 0.412344 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Contacts";
				};
				
				class ButtonMessages: Life_RscButtonMenu
				{	
					idc = 24004;
					fade = 0;
					style = 2;
					onButtonClick = "[] call life_fnc_phoneMessageOpenAction;";
					text = "<br/><img image='dialog\data\ico_phone.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Messages</t>";
					x = 0.520625 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Messages";
				};

				class ButtonSettings: Life_RscButtonMenu
				{
					idc = 24005;
					onButtonClick = "[] call life_fnc_phoneSettingsOpenMenu;";
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_settings.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Paramètres</t>";
					x = 0.628906 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;	
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Paramètres";
				};
			};
		};
	};	
};
	
	
