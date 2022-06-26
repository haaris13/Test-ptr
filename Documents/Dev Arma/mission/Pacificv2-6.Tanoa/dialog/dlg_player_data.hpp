class dlg_player_data {

	idd = 25000;
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
			idc = 25010;
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.45375 * safezoneW;
			h = 0.506 * safezoneH;
			colorBackground[] = {0,0,0,0};
			
			class controls {
								
				class HeaderTileText: Life_RscStructuredText
				{
					idc = 25002;

					text = "Moi";
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
				class ButtonPlayerAtouts: Life_RscButtonMenu
				{
					idc = 25005;
					onButtonClick = "[] spawn life_fnc_atoutsOpen;";
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_wanted.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Effets</t>";
					x = 0.304062 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Vos effets en cours"; //--- ToDo: Localize;
				};

				class ButtonPlayerSkills: Life_RscButtonMenu
				{
					idc = 25003;
					onButtonClick = "[] call life_fnc_perkDialogOpen;";
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_skills.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Compétences</t>";
					x = 0.412344 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Vos compétences"; //--- ToDo: Localize;
				};
				class ButtonPlayerProfs: Life_RscButtonMenu
				{
					idc = 25004;
					onButtonClick = "[] spawn life_fnc_professionMenuOpen;";
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_profs.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Professions </t>";
					x = 0.520625 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Vos niveaux de professions"; //--- ToDo: Localize;
				};
				class ButtonMyGang: Life_RscButtonMenu
				{
					idc = 25006;
					onButtonClick = "if(isNil 'life_action_clanInUse') then {if(isNil {(group player) getVariable 'clan_id'}) then {createDialog 'Dialog_Clan_Create';} else {[] spawn life_fnc_clanMenu;};};";
					fade = 0;
					style = 2;
					text = "<br/><img image='dialog\data\ico_gang.paa' align='center' size='3.5' /> <br/> <t align = 'center'>Clan </t>";
					x = 0.628906 * safezoneW + safezoneX;
					y = 0.412 * safezoneH + safezoneY;
					w = 0.103125 * safezoneW;
					h = 0.154 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.2,0.2,0.2,0.7};
					tooltip = "Votre clan"; //--- ToDo: Localize;
				};
			};
		};
	};	
};
	
	
