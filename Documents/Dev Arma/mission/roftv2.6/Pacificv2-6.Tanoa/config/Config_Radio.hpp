/*
	Config for Freq Radio, need Task Force mod to work

	Autor: IronBlade
*/

class CfgRadio {
	class Category {
		class urgence {
			displayName = "d'urgence";

			class freqs {
				class gendarme {
					displayName = "Gendarmerie";
					freq = "117";
				};

				class medecin {
					displayName = "Médecins";
					freq = "118";
				};

				class depannage {
					displayName = "Dépannage";
					freq = "120";
				};
			};
		};

		class vehicle {
			displayName = "Véhicules";

			class freqs {
				class gendarme {
					displayName = "Aérienne";
					freq = "80";
				};

				class medecin {
					displayName = "Maritime";
					freq = "70";
				};
			};
		};
	};

	class Securized {
		class Gen {
			idRadios[] = {"117", "117.0", "117.00"};
			side = "WEST";
			sideDetect = "CIV";
		};
	};
};