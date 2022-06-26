/*
	Config for Freq Radio

	Autor: IronBlade
*/

class CfgRadio {
	class Category {
		class urgence {
			displayName = "Appel d'Urgence";

			class freqs {
				class gendarme {
					displayName = "Police";
					freq = "117";
				};

				class medecin {
					displayName = "Secours";
					freq = "118";
				};

				class depannage {
					displayName = "TCS Dépannage";
					freq = "114";
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

				class depannage {
					displayName = "Terrestre";
					freq = "60";
				};
			};
		};
	};
};