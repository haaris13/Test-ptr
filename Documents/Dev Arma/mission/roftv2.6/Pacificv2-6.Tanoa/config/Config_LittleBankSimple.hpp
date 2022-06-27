/*
	List all little banks simple

	Autor: IronBlade
*/

class CfgLittleBankSimple
{

	//  Config
	class Config {
		class Door {
			class Land_BackAlley_01_l_gate_F {
				class Explosive {

					objs[] = {
						{"DemoCharge_Remote_Ammo", {0.45, 0.01, 0.2}},
						{"DemoCharge_Remote_Ammo", {-0.48, 0.01, 0.2}},
						{"DemoCharge_Remote_Ammo", {-0.48, 0.01, -0.9}},
						{"DemoCharge_Remote_Ammo", {0.45, 0.01, -0.9}}
					};

					objsDir[] = {
						{1, 0, 0}, 
						{-0.5, 0.5, 0}
					};
				};

				class Grinder {
					className = "Land_Grinder_F";

					position[] = {-0.515, 0.25, -0.5};

					dir[] = {
						{0,1,0}, 
						{-1,0,0}
					};

					effects[] = {
						{"AirFireSparks", {0,-0.3,0}},
						{"IEDFlameS", {0,-0.3,0}}
					};
				};
			};
		};

		class Chest {

			class Land_MetalCase_01_large_F {
				class Grinder {
					className = "Land_Grinder_F";

					position[] = {-0.5, 0, 0.4};

					dir[] = {-1,0,0};

					effects[] = {
						{"AirFireSparks", {0,-0.3,0}},
						{"IEDFlameS", {0,-0.3,0}}
					};
				};
			}
		}

		class Build {
			class Land_Hotel_01_F {

			};
		};
	};	

	// List of all banks
	class Banks {
		class Lifou {

			id = 0;
			displayName = "Lifou";

			building[] = {"Land_Hotel_01_F", {7271.01, 7873.72, -0.0693369}};

			doors[] = {
				{"Land_BackAlley_01_l_gate_F", {7267.86, 7871.72, -0.000382423}},
				{"Land_BackAlley_01_l_gate_F", {7274.95, 7871.36, 0.000312805}}
			};

			chest[] = {"Land_MetalCase_01_large_F", {7277.1, 7874.15, -0.00100136}};

			coffre = "goldBar";
		};
	};
};