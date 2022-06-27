class Life_Arrest_Action {
	idd = 9930;
	name= "Life_Arrest_Action_selection";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
		class Life_RscTitleBackground:Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.5;
			h = (1 / 25);
		};
		
		class MainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.5;
			h = 0.3 - (22 / 250);
		};
	};
	
	class controls {
	
		class InfoMsg : Life_RscStructuredText
		{
			idc = 9931;
			sizeEx = 0.020;
			text = "";
			x = 0.1;
			y = 0.25;
			w = 0.5; h = 0.11;
		};
		
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Choix des années de Prison";
			x = 0.1;
			y = 0.2;
			w = 0.5;
			h = (1 / 25);
		};
		
		class ArrestAction : Life_RscButtonMenu {
			idc = -1;
			text = "Incarcérer";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "life_send_jail = true;";
			x = 0.27;
			y = 0.40;
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class ArrestList : Life_RscCombo
		{
			idc = 9932;
			x = 0.04 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.35;
			w = (13 / 40);
			h = (1 / 25);
			colorBackground[] = {0,0,0,0.5};
		};
	};
};