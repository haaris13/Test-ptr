/*
	Config Bank

*/

class BankCfg {

	class AllChests {
		class Chest1 {
			className = "MultiCoffreBanqueFusioH";
			position[] = {7384.64,7904.31,0};
		};
		class Chest2 {
			className = "MultiCoffreBanqueFusioH";
			position[] = {7383,7905.79,0};
		};
		class Chest3 {
			className = "CoffreFortFusioH";
			position[] = {7381.14,7905.16,0};
		};
		class Chest4 {
			className = "CoffreFortFusioH2";
			position[] = {7379.72,7904.78,0};
		};
		class Chest5 {
			className = "CoffreFortFusioH";
			position[] = {7378.16,7904.27,0};
		};
		class Chest6 {
			className = "MultiCoffreBanqueFusioH";
			position[] = {7376.31,7903.94,0};
		};
		class Chest7 {
			className = "CoffreFortFusioH";
			position[] = {7375.43,7901.41,0};
		};
		class Chest8 {
			className = "CoffreFortFusioH2";
			position[] = {7375.83,7899.93,0};
		};
		class Chest9 {
			className = "CoffreFortFusioH";
			position[] = {7376.23,7898.37,0};
		};
	};

	class Chests {
		class CoffreFortFusioH2 {

			items[] = {
				{"goldbar", 2, 70},
				{"BagBig", 2, 50},
			};

			class Grinder {
				className = "Land_Grinder_F";

				position[] = {0.682617,-0.536621,-0.0785177};

				dir[] = {-0.996961,0.000133248,0.0779019};

				effects[] = {
					{"AirFireSparks", {0,-0.3,0}},
					{"IEDFlameS", {0,-0.3,0}}
				};

				nbRestart = 3;
			};
		};

		class CoffreFortFusioH {

			items[] = {
				{"goldbar", 2, 50},
				{"BagBig", 4, 60},
			};

			class Grinder {
				className = "Land_Grinder_F";

				position[] = {0.578613,-0.502441,-0.0843372};

				dir[] = {-0.996961,0.00318205,0.077837};

				effects[] = {
					{"AirFireSparks", {0,-0.3,0}},
					{"IEDFlameS", {0,-0.3,0}}
				};

				nbRestart = 2;
			};
		};
	};

	class MultiChest {
		class MultiCoffreBanqueFusioH {

			items[] = {
				{"goldbar", 4, 70},
				{"BagBig", 2, 50},
				{"CaseBig", 1, 25}
			};

			class Chest1 {
				displayName = "Coffre N°1";

				class Grinder {
					className = "Land_Grinder_F";

					position[] = {0.598145,-0.0483398,-0.815468};

					dir[] = {-0.999989,0.000179853,-0.00458364};

					effects[] = {
						{"AirFireSparks", {0,-0.3,0}},
						{"IEDFlameS", {0,-0.3,0}}
					};
				};
			};

			class Chest2 {
				displayName = "Coffre N°2";

				class Grinder {
					className = "Land_Grinder_F";

					position[] = {0.584473,0.246582,-0.307518};

					dir[] = {-0.999989,3.61199e-005,-0.00458703};

					effects[] = {
						{"AirFireSparks", {0,-0.3,0}},
						{"IEDFlameS", {0,-0.3,0}}
					};
				};
			};

			class Chest3 {
				displayName = "Coffre N°3";

				class Grinder {
					className = "Land_Grinder_F";

					position[] = {0.584473,0.243652,0.223183};

					dir[] = {-0.999989,5.51843e-005,-0.00458684};

					effects[] = {
						{"AirFireSparks", {0,-0.3,0}},
						{"IEDFlameS", {0,-0.3,0}}
					};
				};
			};

			class Chest4 {
				displayName = "Coffre N°4";

				class Grinder {
					className = "Land_Grinder_F";

					position[] = {0.584473,0.241211,0.757172};

					dir[] = {-0.999989,0.000111436,-0.00458582};

					effects[] = {
						{"AirFireSparks", {0,-0.3,0}},
						{"IEDFlameS", {0,-0.3,0}}
					};
				};
			};

			class Chest5 {
				displayName = "Coffre N°5";

				class Grinder {
					className = "Land_Grinder_F";

					position[] = {0.588379,-0.358887,0.693443};

					dir[] = {-0.999989,-8.87092e-006,-0.00458716};

					effects[] = {
						{"AirFireSparks", {0,-0.3,0}},
						{"IEDFlameS", {0,-0.3,0}}
					};
				};
			};

			class Chest6 {
				displayName = "Coffre N°6";

				class Grinder {
					className = "Land_Grinder_F";

					position[] = {0.588379,-0.356934,0.304859};

					dir[] = {-0.999989,-3.32053e-005,-0.00458705};

					effects[] = {
						{"AirFireSparks", {0,-0.3,0}},
						{"IEDFlameS", {0,-0.3,0}}
					};
				};
			};

			class Chest7 {
				displayName = "Coffre N°7";

				class Grinder {
					className = "Land_Grinder_F";

					position[] = {0.588379,-0.353516,-0.343361};

					dir[] = {-0.999989,0.000113426,-0.00458577};

					effects[] = {
						{"AirFireSparks", {0,-0.3,0}},
						{"IEDFlameS", {0,-0.3,0}}
					};
				};
			};

			class Chest8 {
				displayName = "Coffre N°8";

				class Grinder {
					className = "Land_Grinder_F";

					position[] = {0.587891,-0.350586,-0.906406};

					dir[] = {-0.999989,7.08666e-005,-0.00458662};

					effects[] = {
						{"AirFireSparks", {0,-0.3,0}},
						{"IEDFlameS", {0,-0.3,0}}
					};
				};
			};			
		};
	};
};