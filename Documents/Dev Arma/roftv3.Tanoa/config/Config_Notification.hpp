/*
	Config for Notification

	Autor: IronBlade
*/

class CfgNotification {

	class Patterns {
		class Error {

			defaultTitle = "<t size='0.9' font='PuristaBold'>Erreur</t>";

			color[] = {1,0.2,0,1};

			sound = "addItemFailed";
		};

		class Successful {
			defaultTitle = "<t size='0.9' font='PuristaBold'>Félicitation !</t>";

			color[] = {0.11,0.663,0.2,1};

			sound = "EXP_m05_dramatic";
		};

		class Accepted {
			defaultTitle = "<t size='0.9' font='PuristaBold'>Réussi</t>";

			color[] = {0.11,0.663,0.2,1};

			sound = "addItemOK";
		};

		class Info {
			defaultTitle = "<t size='0.9' font='PuristaBold'>Information</t>";

			color[] = {0.129,0.482,0.698,1};

			sound = "";
		};

		class InfoWithSound {
			defaultTitle = "<t size='0.9' font='PuristaBold'>Information</t>";

			color[] = {0.129,0.482,0.698,1};

			sound = "Orange_PeriodSwitch_Notification";
		};

		class Warning {
			defaultTitle = "<t size='0.9' font='PuristaBold'>Attention</t>";

			color[] = {1,0.353,0,1};

			sound = "defaultNotification";
		};

		class Phone {
			defaultTitle = "<t size='0.9' font='PuristaBold'>Téléphone</t>";

			color[] = {0.129,0.482,0.698,1};

			sound = "";
		};

		class MedicalRequestEmerg {
			defaultTitle = "<t size='0.9' font='PuristaBold'>Médical</t>";
			color[] = {1,0.2,0,1};
			sound = "defaultNotification";
		};

		//Topic_Selection
		// "Topic_Trigger"
	};	
};