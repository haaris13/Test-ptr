/*
	List all all little banks

	Autor:IronBlade
*/


class CfgLittleBank
{
	class Build {
		class Land_CommonwealthBank {

			door1 = "Vault_Interact";
			door2 = "Interact5";

			obj1[] = {
				{"DemoCharge_Remote_Ammo", {0.894131, 2.65088, 4.56334}},
				{"DemoCharge_Remote_Ammo", {0.894131, 2.65088, 5.56334}},
				{"DemoCharge_Remote_Ammo", {0.894131, 1.95088, 5.56334}},
				{"DemoCharge_Remote_Ammo", {0.894131, 1.95088, 4.56334}}
			};

			obj1Dir[] = {{0, 0.5, 0}, {-0.5, 0.5, 0}};

			obj2[] = {
				"Land_Grinder_F",
				{4.34097,0.28873,4.9},
				{
					{"AirFireSparks", {0,-0.2,0.1}},
					{"IEDFlameS", {0,-0.2,0.1}}
				}
			};

			/*
				AirFireSparks 
				FireSparksSmall
				FireSparks

				IEDFlameS

				AmmoBulletCore
				AmmoExplosionParticles
			*/
		};
	};

	class Banks {
		class George {

			id = 1;
			displayName = "GeorgeTown";

			building[] = {"Land_CommonwealthBank",{5943.1,10636.5,-0.9}};

			chest[] = {"Land_MetalCase_01_large_F",{5939.97,10636.7,-0.0646811}};

			coffre = "goldBar";
		};

		class Lifou {

			id = 1;
			displayName = "Lifou";

			building[] = {"Land_CommonwealthBank",{7302.7,7888.21,-0.9}};

			chest[] = {"Land_MetalCase_01_large_F",{7298.23,7892.05,-0.000249863}};

			coffre = "goldBar";
		};

		class LaRochelle {

			id = 1;
			displayName = "La Rochelle";

			building[] = {"Land_CommonwealthBank",{9598.79,13581,-0.8}};

			chest[] = {"Land_MetalCase_01_large_F",{9598.94,13584.1,-0.000249863}};

			coffre = "goldBar";
		};


		class Linjaven {

			id = 1;
			displayName = "La Rochelle";

			building[] = {"Land_CommonwealthBank",{11593.261,2631.681,-0.8}};

			chest[] = {"Land_MetalCase_01_large_F",{11595.49, 2629.687, 2.985}};

			coffre = "goldBar";
		};
	};
};