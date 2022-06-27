class tabletHome {

	idd = 2001;
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
			idc = 2010;
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.45375 * safezoneW;
			h = 0.506 * safezoneH;
			colorBackground[] = {0,0,0,0};
			
			class controls {
								
				class HeaderTileText: Life_RscStructuredText
				{
					idc = 2002;

					text = "Bienvenue"; //--- ToDo: Localize;
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
					//colorBackground[] = {0.2,0.2,0.2,0.7};
				};


				class ButtonSettings: Life_RscButtonMenu
				{
					idc = -1;
					onButtonClick = "[] call life_fnc_settingsMenu;";
					style = 2;
					fade = 0;

					text = "<br/><img image='dialog\data\ico_settings.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Paramètres</t>";
					x = 0.520625 * safezoneW + safezoneX;
					y = 0.577 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {0.7,0.7,0.7,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Vos paramètres de jeu"; //--- ToDo: Localize;
				};

				/*class WantedList: Life_RscButtonMenu
				{
					onButtonClick = "[] call life_fnc_wantedMenu";
					idc = 2012;
					style = 2;
					text = "<br/><img image='dialog\data\ico_wanted.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Interpol</t>";
					x = 0.304062 * safezoneW + safezoneX;
					y = 0.577 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Interpol V1"; //--- ToDo: Localize;
				};*/

				class ButtonMyPerso: Life_RscButtonMenu
				{
					idc = 2011;
					onButtonClick = "[] spawn life_fnc_p_openPlayerData;";
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_skills.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Mon Perso</t>";
					x = 0.304062 * safezoneW + safezoneX;
					y = 0.577 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Les informations sur moi."; //--- ToDo: Localize;
				};

				class ButtonKeys: Life_RscButtonMenu
				{
					idc = -1;
					onButtonClick = "createDialog 'Life_key_management';";
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_keys.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Porte Clés </t>";
					x = 0.412344 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Votre porte clés"; //--- ToDo: Localize;
				};
				class ButtonCell: Life_RscButtonMenu
				{
					idc = -1;
					onButtonClick = "[] spawn life_fnc_phoneOpenMenu;";
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_phone.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Téléphone</t>";
					x = 0.628906 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;					
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Votre téléphone"; //--- ToDo: Localize;
				};
				class ButtonSyncData: Life_RscButtonMenu
				{
					onButtonClick = "[] call SOCK_fnc_syncData;";
					idc = -1;
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_sync.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Sync Data</t>";
					x = 0.628906 * safezoneW + safezoneX;
					y = 0.577 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Forcer la synchronisation de vos données"; //--- ToDo: Localize;
				};
				class ButtonMarket: Life_RscButtonMenu
				{
					onButtonClick = "[] call life_fnc_resourceInfoOpen;";
					fade = 0;
					idc = -1;
					style = 2;
					text = "<br/><img image='dialog\data\ico_economy.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Bourse</t>";
					x = 0.412344 * safezoneW + safezoneX;
					y = 0.577 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Voir la bourse"; //--- ToDo: Localize;
				};
				class ButtonPlayerInv: Life_RscButtonMenu
				{
					fade = 0;
					idc = -1;
					style = 2;
					onButtonClick = "[] call life_fnc_p_playerInventory;";
					text = "<br/><img image='dialog\data\ico_inv.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Inventaire</t>";
					x = 0.304062 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Votre inventaire"; //--- ToDo: Localize;
				};
				class ButtonPlayerLicenses: Life_RscButtonMenu
				{	
					fade = 0;
					idc = -1;
					style = 2;
					onButtonClick = "[] call life_fnc_player_licenses;";
					text = "<br/><img image='dialog\data\ico_licenses.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Licences</t>";
					x = 0.520625 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Vos licences"; //--- ToDo: Localize;
				};

				class ButtonSucces: Life_RscButtonMenu
				{
					onButtonClick = "[] spawn life_fnc_achievementOpenDiag;";
					idc = -1;
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_succes.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Succès</t>";
					x = 0.304062 * safezoneW + safezoneX;
					y = 0.742 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Vos succès"; //--- ToDo: Localize;
				};

				class ButtonRadio: Life_RscButtonMenu
				{
					onButtonClick = "[] spawn life_fnc_radioGlobalOpenDiag;";
					idc = -1;
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_radio.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Gestion Radio</t>";
					x = 0.412344 * safezoneW + safezoneX;
					y = 0.742 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Gestion de vos canaux Radios"; //--- ToDo: Localize;
				};

				class ButtonPapierMenu: Life_RscButtonMenu
				{
					onButtonClick = "[] spawn life_fnc_papierMenuListOpen;";
					idc = -1;
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_carnet.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Carnet</t>";
					x = 0.520625 * safezoneW + safezoneX;
					y = 0.742 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Voir vos Papiers"; //--- ToDo: Localize;
				};

				class ButtonGouvMenu: Life_RscButtonMenu
				{
					onButtonClick = "[] spawn life_fnc_gouvOpenMenu";
					idc = -1;
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_gouvernement.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Gouvernement</t>";

					x = 0.628906 * safezoneW + safezoneX;
					y = 0.742 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;

					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Gouvernement"; //--- ToDo: Localize;
				};

				class ButtonDepanMenu: Life_RscButtonMenu
				{
					onButtonClick = "[] spawn life_fnc_depanMenuOpen";
					idc = 2016;
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_radio.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Dépanneur</t>";

					x = 0.304062 * safezoneW + safezoneX;
					y = 0.907 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;

					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Dépanneur"; //--- ToDo: Localize;
				};

				class ButtonAdminMenu: Life_RscButtonMenu
				{
					onButtonClick = "createDialog 'life_admin_menu';";
					idc = 2013;
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_admin.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Admin</t>";

					x = 0.628906 * safezoneW + safezoneX;
					y = 0.907 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Menu Admin"; //--- ToDo: Localize;
				};
			};
		};
	};	
};
	
	
