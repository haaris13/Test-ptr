/*
	Config for Targets

	Autor: IronBlade
*/

class CfgTargets {

	class Targets {
		class TargetP_Inf_F {
			goDownAnimate[] = {
				{"terc", 1}
			};

			goUpAnimate[] = {
				{"terc", 0}
			};

			soundUp = "FD_Target_PopUp_Large_F";
			soundDown = "FD_Target_PopDown_Large_F";

			hitAreas[] = {"target"};

			class Bones {
				class Head {
					position[] = {0.0166016,0.196289,0.68516};
					radius = 0.17;
				};

				class Torso {
					position[] = {0.0234375,0.191406,0.283508};
					radius = 0.379;
				};
			};
		};
	};

	class Difficulties {
		class Simple {
			displayName = "Facile";

			timeBetweenStep = 1.5;

			class FirstStep { closeTargets = 0; nbTargets = 1; closeTargetsMultiple = 1;};

			class Steps {
				class Step2 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step3 { closeTargets = 1; nbTargets = 2; closeTargetsMultiple = 1;};
				class Step4 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step5 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step6 { closeTargets = 0; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step7 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step8 { closeTargets = 1; nbTargets = 2; closeTargetsMultiple = 1;};
				class Step9 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step10 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
			};
		};

		class Medium {
			displayName = "Intermediaire";

			timeBetweenStep = 1;

			class FirstStep { closeTargets = 0; nbTargets = 1; closeTargetsMultiple = 1;};

			class Steps {
				class Step2 { closeTargets = 0; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step3 { closeTargets = 0; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step4 { closeTargets = 1; nbTargets = 3; closeTargetsMultiple = 1;};
				class Step5 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step6 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step7 { closeTargets = 1; nbTargets = 2; closeTargetsMultiple = 0;};
				class Step8 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step9 { closeTargets = 0; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step10 { closeTargets = 1; nbTargets = 3; closeTargetsMultiple = 1;};
			};
		};

		class Difficult {
			displayName = "Difficile";

			timeBetweenStep = 0.5;

			class FirstStep { closeTargets = 0; nbTargets = 1; closeTargetsMultiple = 1;};

			class Steps {
				class Step2 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step3 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step4 { closeTargets = 0; nbTargets = 4; closeTargetsMultiple = 1;};
				class Step5 { closeTargets = 0; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step6 { closeTargets = 0; nbTargets = 5; closeTargetsMultiple = 1;};
				class Step7 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step8 { closeTargets = 0; nbTargets = 3; closeTargetsMultiple = 0;};
				class Step9 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step10 { closeTargets = 0; nbTargets = 2; closeTargetsMultiple = 0;};
			};
		};

		class Expert {
			displayName = "Expert";

			timeBetweenStep = 0;

			class FirstStep { closeTargets = 0; nbTargets = 3; closeTargetsMultiple = 0;};

			class Steps {
				class Step2 { closeTargets = 0; nbTargets = 3; closeTargetsMultiple = 1;};
				class Step3 { closeTargets = 0; nbTargets = 2; closeTargetsMultiple = 1;};
				class Step4 { closeTargets = 0; nbTargets = 4; closeTargetsMultiple = 0;};
				class Step5 { closeTargets = 0; nbTargets = 2; closeTargetsMultiple = 1;};
				class Step6 { closeTargets = 0; nbTargets = 3; closeTargetsMultiple = 0;};
				class Step7 { closeTargets = 1; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step8 { closeTargets = 1; nbTargets = 5; closeTargetsMultiple = 0;};
				class Step9 { closeTargets = 0; nbTargets = 1; closeTargetsMultiple = 1;};
				class Step10 { closeTargets = 0; nbTargets = 6; closeTargetsMultiple = 1;};
			};
		};
	};

	class Trainings {

		class CivHandGunSmall {
			type = "random";

			weaponCategories[] = {"HandGun"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {2214.3,5431.26,-0.00899887};

			condition[] = {"license_civ_gun", "Il vous faut le permis de port d'arme."};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {2198.97,5427.48,-0.15099};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {2191.26,5428.65,-0.0416489};
				};
				
				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {2185.5,5430.57,-0.15472};
				};
				
				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {2194.39,5430.1,-0.0880165};
				};
				
				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {2193.94,5431.54,-0.0951004};
				};
				
				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {2191.7,5433.53,-0.125008};
				};
				
				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {2192.54,5435.63,-0.0353737};
				};
				
				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {2193.46,5437.93,-0.0636482};
				};
				
				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {2194.19,5439.22,-0.0267944};
				};
				
				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {2201.69,5438.5,-0.0214005};
				};
			};
		};

		class CivHandGunMoy {
			type = "random";

			weaponCategories[] = {"HandGun"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {7858.46,7689.84,0.102921};
						 

			//condition[] = {"license_civ_gun", "Il vous faut le permis de port d'arme."};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {7852.68,7703.26,0.208195};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {7853.02,7705.24,0.244685};
				};
				
				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {7854.56,7703.79,0.235932};
				};
				
				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {7854.86,7705.79,0.281384};
				};
				
				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {7856.04,7703.72,0.243361};
				};
				
				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {7856.41,7705.92,0.293185};
				};
				
				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {7857.68,7704.23,0.270587};
				};
				
				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {7858.47,7706.48,0.309381};
				};
				
				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {7859.02,7704.25,0.276058};
				};
				
		
			};
		};

		class CivHandGunBig {
			type = "random";

			weaponCategories[] = {"HandGun"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {3544.69,12853,0.0013442};

			condition[] = {"license_civ_gun", "Il vous faut le permis de port d'arme."};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {3546.09,12864.3,0.0517349};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {3545.14,12869.8,-0.00571871};
				};
				
				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {3539.96,12873,0.00656223};
				};
				
				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {3538.38,12872.8,0.00656223};
				};
				
				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {3541.89,12884,0.0121813};
				};
				
				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {3540.54,12884.1,0.0268593};
				};
				
				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {3531.87,12876.2,0};
				};
				
				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {3530.67,12875.5,-0.00225592};
				};
				
				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {3529,12868.8,-0.00989151};
				};
				
				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {3531.11,12861.9,-0.0093255};
				};
				
				class Target11 {
					className = "TargetP_Inf_F";
					position[] = {3522.15,12881.9,0.00113678};
				};
				
				class Target12 {
					className = "TargetP_Inf_F";
					position[] = {3523.36,12882.6,0.000818253};
				};
			};
		};

		class CivPmSmall {
			type = "random";

			weaponCategories[] = {"HandGun"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {3434.46,12842.1,0.00143909};

			condition[] = {"license_civ_gun", "Il vous faut le permis de port d'arme."};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {3421.65,12836.3,0};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {3418.81,12835,0.00224113};
				};
				
				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {3413.71,12835.9,0.00439167};
				};
				
				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {3413.24,12840.9,0.00266743};
				};
				
				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {3416.16,12847.3,-0.00566673};
				};
				
				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {3413.15,12846.5,0.00658226};
				};
				
				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {3405.53,12837.5,0.0175991};
				};
				
				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {3401.78,12844.3,0.014348};
				};
				
				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {3402.22,12845.4,0.0137405};
				};
			};
		};

		class CivPmBig {
			type = "random";

			weaponCategories[] = {"HandGun"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {3436.72,12863.2,0.00144577};

			condition[] = {"license_civ_gun", "Il vous faut le permis de port d'arme."};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {3418.67,12870.3,0.00409412};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {3418.23,12868.4,0.00217724};
				};
				
				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {3409.22,12861.8,-0.00776958};
				};
				
				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {3409.03,12859.9,-0.00826931};
				};
				
				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {3404.01,12871.8,-0.00441074};
				};
				
				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {3401.37,12872.1,-0.00232792};
				};
				
				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {3404.03,12880,0.00748539};
				};
				
				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {3391.92,12882.3,0.0110111};
				};
				
				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {3388,12871.7,0.000187874};
				};
				
				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {3391.61,12861.2,-0.0693941};
				};
				
				class Target11 {
					className = "TargetP_Inf_F";
					position[] = {3392.16,12859.4,-0.114215};
				};
				
				class Target12 {
					className = "TargetP_Inf_F";
					position[] = {3386.81,12861.1,-0.00169086};
				};
				
				class Target13 {
					className = "TargetP_Inf_F";
					position[] = {3380.31,12863.3,0.00343609};
				};
				
				class Target14 {
					className = "TargetP_Inf_F";
					position[] = {3370.1,12866.6,0.0211554};
				};
				
				class Target15 {
					className = "TargetP_Inf_F";
					position[] = {3370.27,12868.4,0.0334654};
				};
			};
		};

		class MaffiaPmSmall {
			type = "random";

			weaponCategories[] = {"Smg"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {8208.83,12016,0.00154114};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {8211.01,12002.9,0.00166321};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {8192.77,12000.8,-0.00294495};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {8187.47,11997.2,-0.00297546};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {8194.11,11988.7,-0.000244141};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {8196.28,11990.3,0.00305176};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {8203.34,11993,-0.000778198};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {8207.23,11992,0.00616455};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {8209.5,11992.1,0.00648499};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {8203.42,11981.9,-0.0680237};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {8204.79,11981.5,-0.112442};
				};
			};
		};

//good 
		class InsurgAssaultRifleSmall2 {
			type = "random";

			weaponCategories[] = {"Smg", "AssaultRifle"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {7029.21,1558.51,-0.023};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {7041.57,1541.22,-0.150857};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {7040.9,1535.2,-0.155449};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {7052.32,1524.78,-0.10352};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {7043.6,1513.64,-0.123455};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {7044.03,1508.26,0.0303721};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {7055.69,1509.7,-0.102922};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {7057.07,1511.48,-0.119117};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {7067.45,1494.27,-0.0106481};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {7065.35,1493.46,0.0649882};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {7051.56,1480.46,0.074182};
				};

				class Target11 {
					className = "TargetP_Inf_F";
					position[] = {7069.99,1470.1,-0.0120014};
				};

				class Target12 {
					className = "TargetP_Inf_F";
					position[] = {7076.7,1464.37,-0.108554};
				};

				class Target13 {
					className = "TargetP_Inf_F";
					position[] = {7079.34,1467.49,-0.0874147};
				};

				class Target14 {
					className = "TargetP_Inf_F";
					position[] = {7084.29,1466.72,-0.221397};
				};

				class Target15 {
					className = "TargetP_Inf_F";
					position[] = {7073.14,1463.78,0.000155449};
				};

				class Target16 {
					className = "TargetP_Inf_F";
					position[] = {7069.54,1464.85,-1.66893e-005};
				};
			};
		};

//rajout deuxième stand insurgé

	class InsurgAssaultRifleSmall3 {
			type = "random";

			weaponCategories[] = {"Smg", "AssaultRifle"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {7014.88,1611.95,0.076};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {7023.15,1631.86,-0.139858};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {7028.63,1634.46,-0.122957};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {7031.47,1649.4,-0.143873};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {7039.41,1653.01,-0.0760623};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {7032.92,1659.46,-0.188566};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {7040.28,1660.7,-0.188679};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {7042.51,1660.46,-0.105773};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {7049.45,1678.58,-0.158823};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {7052.26,1676.75,-0.155954};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {7059.26,1673.44,-0.169525};
				};

				class Target11 {
					className = "TargetP_Inf_F";
					position[] = {7064.46,1693.27,-0.113858};
				};

				class Target12 {
					className = "TargetP_Inf_F";
					position[] = {7065.99,1690.66,-0.157151};
				};

				class Target13 {
					className = "TargetP_Inf_F";
					position[] = {7069.24,1691.15,-0.157305};
				};

				class Target14 {
					className = "TargetP_Inf_F";
					position[] = {7072.37,1699.47,-0.140161};
				};

				class Target15 {
					className = "TargetP_Inf_F";
					position[] = {7073.35,1695.85,-0.108004};
				};

				class Target16 {
					className = "TargetP_Inf_F";
					position[] = {7077.45,1691.29,-0.145702};
				};
			};
		};

		class RebHandGunSmall {
			type = "random";

			weaponCategories[] = {"HandGun"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {1936.89,3412.09,0.00143909};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {1927.05,3414.63,0};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {1928.8,3411.51,-0.000422478};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {1929.86,3405.6,0};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {1924.83,3408.17,0.000430107};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {1923.33,3413.64,0};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {1919.21,3408.46,0.000405312};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {1921.29,3404.09,-0.000473976};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {1924.24,3402.84,0.000963211};
				};
			};
		};

		class InsurgAssaultRifleSmall {
			type = "random";

			weaponCategories[] = {"HandGun", "Smg"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			position[] = {7020.42,1576.06,0.0127869};

			refuseIfWeaponDeployed = 1;

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {7013.38,1573.13,-0.019315};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {7013.56,1570.77,-0.0163326};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {7012.52,1567.76,-0.0797982};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {7013.47,1564.93,-0.119227};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {7017.24,1567.32,-0.0572453};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {7016.13,1562.45,-0.153213};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {7008.92,1558.45,-0.0730031};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {7004.27,1559.72,-0.0131269};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {7003.03,1563.12,-0.0436866};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {7003.44,1554.05,0.0713143};
				};
			};
		};

		class RebAssaultRifleSmall {
			type = "random";

			weaponCategories[] = {"AssaultRifle"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			position[] = {2125.06,3432.56,0.00144482};

			refuseIfWeaponDeployed = 1;

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {2132.41,3426.59,0};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {2126.97,3420.93,-0.00269032};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {2131.83,3418.56,-0.000250816};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {2139.62,3421.5,0};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {2138.62,3416.47,-0.00476646};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {2138.23,3409.94,0};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {2142.37,3405.51,0};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {2147.5,3408.83,0};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {2148.28,3411.4,0};
				};
			};
		};

		class RebAssaultRifleSmall2 {
			type = "random";

			weaponCategories[] = {"AssaultRifle"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {2145.76,3448.21,0.00144672};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {2148.56,3436.83,0};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {2153.78,3442.74,-0.000673294};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {2153.54,3434.68,-0.000274658};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {2161.2,3437.97,0};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {2160.45,3432.88,-0.000272751};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {2160.29,3426.34,0};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {2164.61,3422.09,0};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {2163.2,3431.66,0};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {2170.28,3428.22,0};
				};
			};
		};

		class RebSnipe {
			type = "random";

			weaponCategories[] = {"SniperRifle"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"PRONE"};
			
			refuseIfWeaponDeployed = 0;

			position[] = {7021.15,1603.84,2.38995};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {7314.04,1754.74,24.2};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {7316.23,1754.22,24.3597};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {7315.46,1750.98,24.5658};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {7318.27,1751.11,24.5204};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {7317.67,1748.51,24.6431};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {7320.43,1747.77,24.7885};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {7319.76,1744.78,24.6792};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {7321.88,1743.42,24.6998};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {7321.34,1741.26,24.6856};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {7323.84,1738.08,24.6322};
				};
			};
		};

			class CopHandGun {
			type = "random";

			weaponCategories[] = {"HandGun"};

			sides[] = {"cop"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {2473.91,13403.9,0.0014782};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {2481.6,13402.3,-0.00322628};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {2481.56,13403.9,-0.00326347};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {2484.21,13396.7,0};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {2487.07,13402.5,0};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {2483.21,13410.7,0.000953674};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {2482.44,13411.7,-0.00660419};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {2486.36,13410.2,-0.00207233};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {2490.49,13407,0};
				};
			};
		};

		class CopPm {
			type = "random";

			weaponCategories[] = {"Smg"};

			sides[] = {"cop"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};
			
			refuseIfWeaponDeployed = 1;

			position[] = {2471.71,13428.6,0.00143909};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {2480.56,13425.3,-0.000425339};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {2487.81,13428.8,-0.00701332};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {2489.43,13437.8,-0.0190506};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {2491.3,13433.7,-0.00571346};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {2491.34,13432.5,-0.00947666};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {2494.37,13425.4,-0.000252724};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {2494.63,13437.4,0.00165272};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {2498.89,13432.9,0.00431156};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {2506.29,13428.7,0.0200138};
				};
			};
		};


class Brinks {
			type = "random";

			weaponCategories[] = {"Smg","HandGun"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};
			
			refuseIfWeaponDeployed = 1;

			position[] = {2210.8,5392.98,0.0690002};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {2200.36,5392.74,-0.134178};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {2194.43,5387.27,0.350769};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {2193.83,5382.18,-0.0876617};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {2195.55,5378.29,-0.0480309};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {2190.48,5377.14,0.0375481};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {2186.53,5383.37,-0.0275612};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {2181.67,5376.01,-0.00660324};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {2177,5381.93,0.308418};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {2181.44,5386.47,-0.186871};
				};
			};
		};

		class MaffiaPmBig {
			type = "random";

			weaponCategories[] = {"Smg"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {8226.64,12012.7,0};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {8225.86,12001.8,0};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {8220.42,11999.6,0};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {8225.2,11996.6,0};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {8229.08,11993.5,0};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {8224.67,11989.8,0};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {8226.75,11984.7,0};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {8225.36,11981.3,0};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {8221.73,11981.1,0};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {8219.83,11986.7,0};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {8214.79,11982.9,0]};
				};
			};
		};

	

// stand de tir police fusil d'assault n1 (gauche)

		class CopAssaultRifle {
			type = "random";

			weaponCategories[] = {"AssaultRifle"};

			sides[] = {"cop"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};
			
			refuseIfWeaponDeployed = 1;

			position[] = {2353.33,13440.5,0.0586653};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {2352.34,13450.3,-0.00209522};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {2330.69,13459.3,0};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {2331.26,13461.1,0};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {2344.86,13472,0};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {2343.05,13475.3,0};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {2328.88,13475.6,0};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {2327.08,13477.3,0};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {2324.49,13483.9,0.0323381};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {2327,13486.8,-0.0145531};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {2341.11,13488.9,-0.0287161};
				};

				class Target11 {
					className = "TargetP_Inf_F";
					position[] = {2342.28,13488.7,-0.0612564};
				};

				class Target12 {
					className = "TargetP_Inf_F";
					position[] = {2351.96,13489.1,0.00846863};
				};

				class Target13 {
					className = "TargetP_Inf_F";
					position[] = {2347.85,13494.1,0.00465298};
				};

				class Target14 {
					className = "TargetP_Inf_F";
					position[] = {2323.07,13496.5,0.00529671};
				};

				class Target15 {
					className = "TargetP_Inf_F";
					position[] = {2317.84,13506,0.00495529};
				};

				class Target16 {
					className = "TargetP_Inf_F";
					position[] = {2306.24,13533.8,0.00116634};
				};

				class Target17 {
					className = "TargetP_Inf_F";
					position[] = {2315.69,13543.3,0.00821972};
				};

				class Target18 {
					className = "TargetP_Inf_F";
					position[] = {2321.16,13544.6,0.00885296};
				};
			};
		};
		class CopAssaultRifleLifouDroite {
			type = "random";

			weaponCategories[] = {"AssaultRifle","Smg","HandGun"};

			sides[] = {"cop"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};
			
			refuseIfWeaponDeployed = 1;

			position[] = {7488.47,7689.32,-0.0109253};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {7484.84,7680.33,0};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {7492.51,7668.92,0};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {7484.99,7666.58,0};
					
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {7479.5,7666.7,0}; 
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {7487.74,7655.34,0}; 
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {7482.08,7651.85,0};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {7475.69,7649.21,0};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {7485.97,7641.28,0};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {7483.4,7633.5,0};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {7476.86,7640.04,0};
				};
			};
		};

	class CopAssaultRifleLifouCentre {
			type = "random";

			weaponCategories[] = {"AssaultRifle","Smg","HandGun"};

			sides[] = {"cop"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};
			
			refuseIfWeaponDeployed = 1;

			position[] = {7499.9,7690.83,0};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {7499.85,7681.27,0};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {7509.38,7673.83,0};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {7500.94,7666.38,0};
					
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {7512.76,7658.71,0}; 
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {7505.09,7654.52,0}; 
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {7501.4,7650.37,0};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {7517.11,7645.54,0};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {7510.83,7642.89,0};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {7506.63,7636.16,0};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {7501.44,7634.95,0};
				};
			};
		};


		class CopAssaultRifleLifouGauche {
			type = "random";

			weaponCategories[] = {"AssaultRifle","Smg","HandGun"};

			sides[] = {"cop"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};
			
			refuseIfWeaponDeployed = 1;

			position[] = {7511.43,7695.03,0};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {7515.37,7686.24,0};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {7526.84,7683.66,0};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {7526.49,7674.98,0};
					
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {7535.65,7671.18,0}; 
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {7532.84,7664.85,0}; 
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {7530.23,7658.88,0};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {7544.16,7661.37,0};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {7539.11,7655.33,0};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {7547.35,7654.94,0};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {7537.23,7650,0};
				};
			};
		};

// stand de tir police fusil d'assault n2 (centre)

		class CopAssaultRiflecentre {
			type = "random";

			weaponCategories[] = {"AssaultRifle"};

			sides[] = {"cop"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};
			
			refuseIfWeaponDeployed = 1;

			position[] = {774.843,3886.47,0.00559998};
			

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {770.261,3889.99,0.0456696}; //première
				}; 		

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {751.783,3885.98,-0.0176697};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {751.434,3896,-0.162155};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {748.796,3899.86,-0.32402}; //quatrième
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {735.205,3891.18,-0.0109711};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {736.176,3895.82,-0.0149689}; //sixième
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {735.242,3902.1,-0.0059967};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {735.655,3903.22,-0.0753174}; //huitième
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {734.626,3910.57,-0.193542};
					
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {741.131,3911.25,-0.156265}; //dixième
				};

				class Target11 {
					className = "TargetP_Inf_F";
					position[] = {731.056,3895.21,-0.117416};
				}; 

				class Target12 {
					className = "TargetP_Inf_F";
					position[] = {727.651,3892.84,-0.0929718}; // ok 
				};

				class Target13 {
					className = "TargetP_Inf_F";
					position[] = {724.155,3896.48,-0.0578003}; //ok
				};

				class Target14 {
					className = "TargetP_Inf_F";
					position[] = {719.376,3895.97,0.00418091}; //ok batard
				};

				class Target15 {
					className = "TargetP_Inf_F";
					position[] = {710.66,3894.61,-0.0017395};
				};

				class Target16 {
					className = "TargetP_Inf_F";
					position[] = {699.16,3907.05,-0.0127563};
				};

				class Target17 {
					className = "TargetP_Inf_F";
					position[] = {692.286,3912.91,-0.121246};
				};

				class Target18 {
					className = "TargetP_Inf_F";
					position[] = {687.633,3919.59,-0.0794067};
				};
			};
		};

// stand de tir police fusil d'assault n3 (droite)

		class CopAssaultRifleDroite {
			type = "random";

			weaponCategories[] = {"AssaultRifle"};

			sides[] = {"cop"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};
			
			refuseIfWeaponDeployed = 1;

			position[] = {781.442,3897.25,0.0059967};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {778.711,3906.53,-0.187469}; //première
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {769.083,3913.77,-0.0663147};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {763.432,3911.76,-0.022583}; //ok
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {758.259,3923.2,-0.110657}; //quatrième
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {758.127,3926.92,-0.239639};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {760.649,3929.57,-0.111465}; //sixième
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {761.515,3934.78,-0.0948334}; //ok
				}; 

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {762.561,3935.36,-0.148117}; //huitième
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {766.6,3941.58,-0.162476};
					
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {771.809,3937.72,-0.205978}; //dixième ok
				};

				class Target11 {
					className = "TargetP_Inf_F";
					position[] = {752.347,3931.62,0.119263}; //ok
				};

				class Target12 {
					className = "TargetP_Inf_F";
					position[] = {749.711,3932.77,0.092926}; //  yes
				};

				class Target13 {
					className = "TargetP_Inf_F";
					position[] = {749.458,3937.81,-0.101593}; //
				};

				class Target14 {
					className = "TargetP_Inf_F";
					position[] = {745.509,3940.55,-0.12056}; // ok
				};

				class Target15 {
					className = "TargetP_Inf_F";
					position[] = {738.038,3945.24,-0.119431};
				};

				class Target16 {
					className = "TargetP_Inf_F";
					position[] = {737.511,3962.17,-0.162567};
				};

				class Target17 {
					className = "TargetP_Inf_F";
					position[] = {733.526,3969.9,-0.084259};
				};

				class Target18 {
					className = "TargetP_Inf_F";
					position[] = {737.025,3979.2,-0.160629};
				};
			};
		};


//entrainement snipe police

		class CopSnipe {
			type = "random";

			weaponCategories[] = {"SniperRifle"};

			sides[] = {"cop"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"PRONE"};
			
			refuseIfWeaponDeployed = 0;

			position[] = {2398.06,13387.8,0.00143909};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {1620.79,12836.2,0.0527306};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {1622.38,12833.1,0.111618};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {1620.97,12828.6,0.0648403};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {1625.03,12826.7,0.0716858};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {1628.81,12825.4,0.0406876};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {1622.35,12821.5,0.0765953};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {1617.41,12833,0.0530758};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {1612.03,12828.5,0.040266};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {1613.5,12824.5,0.0430698};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {1615.56,12820.9,0.0458794};
				};
			};
		};

		class HidePM {
			type = "random";

			weaponCategories[] = {"HandGun","Smg"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {2326.79,1806.28,0.00149018};

			condition[] = {};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {2325.24,1797.46,0.0167973};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {2319.31,1801.25,-0.00162363};
				};
				
				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {2316.46,1797.84,0.0397561};
				};
				
				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {2317.38,1796.36,-0.00368726};
				};
				
				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {2322.22,1793.97,-0.00558317};
				};
				
				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {2322.4,1789.67,-0.00634313};
				};
				
				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {2318.45,1789.91,-0.00479615};
				};
				
				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {2313.92,1788.17,-0.0106202};
				};
				
				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {2318.34,1784.56,-0.00756168};
				};			
			};
		};

		class HideAssaultRifle {
			type = "random";

			weaponCategories[] = {"AssaultRifle","Smg"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {2351.9,1810.61,0.00132501};

			condition[] = {};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {2357.15,1816.52,0.00407863};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {2364.46,1812.78,-0.00263333};
				};
				
				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {2361.77,1823.29,0.0099864};
				};
				
				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {2364.94,1828.2,0.0333695};
				};
				
				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {2371.19,1826.75,0.0127912};
				};
				
				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {2373.29,1818.85,-0.0097568};
				};
				
				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {2381.33,1827.95,-0.000568748};
				};
				
				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {2381.3,1832.92,0.00851846};
				};
				
				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {2381.18,1837.7,0.0097599};
				};
				
				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {2374.99,1822.19,-0.00326169};
				};
				
				class Target11 {
					className = "TargetP_Inf_F";
					position[] = {2380.59,1849.86,0.00152445};
				};				
			};
		};

		class CopBuildingTraining {
			type = "line";

			weaponCategories[] = {};
			
			difficulties[] = {};

			sides[] = {"cop"};

			position[] = {2376.74,13300.3,0.0511665};

			class Line {
				class Salle1 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2377.37,13308.3,0.040205};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2379.59,13306.4,0.0437613};
						};

						class Target2 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2382.04,13307.1,0.0417767};
						};
					};
				};

				class Salle2 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2383.09,13311.2,0.0273294};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2384.3,13309.8,0.032876};
						};

						class Target2 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2382.58,13317.5,0};
						};
					};
				};

				class Salle3 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2377.09,13318.6,0.705547};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2378.1,13313.3,0.00866413};
						};

						class Target2 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2369.86,13312.4,0};
						};

						class Target3 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2371.76,13319.7,0.590454};
						};
					};
				};

				class Salle4 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2375.86,13322.3,0.609152};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2379.12,13324.1,0.60647};
						};

						class Target2 {
							waitBefore = 0;
							waitTargetBefore = 0;

							triggerOnPosition[] = {2376.15,13324.9,0.00143909};
							triggerOnPositionDistance = 2;

							className = "TargetP_Inf_F";
							position[] = {2373.11,13326.7,0.545535};
						};
					};
				};

				class Salle5 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2374.01,13329.6,0.00143909};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2371.92,13333.4,0.545535};
						};

						class Target2 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2363.5,13324.8,0.520934};
						};

						class Target3 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2362.44,13326.4,0.523309};
						};

						class Target4 {
							waitBefore = 0;
							waitTargetBefore = 0;

							triggerOnPosition[] = {2369.86,13328.5,0.00143909};
							triggerOnPositionDistance = 2;

							className = "TargetP_Inf_F";
							position[] = {2371.09,13323.9,0.538777};
						};
					};
				};

				class Salle6 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2365.75,13322,0.657907};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2367.34,13316.2,0.657907};
						};
					};
				};

				class Salle7 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2365.62,13322.8,4.24614};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2366.55,13321.7,4.2526};
						};

						class Target2 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2361.35,13325,4.24963};
						};
					};
				};

				class Salle7Bis {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2363.47,13325.1,4.29529};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2373.17,13331.3,4.26113};
						};

						class Target2 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2372.46,13332.4,4.26113};
						};
					};
				};

				class Salle8 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2360.22,13328,4.26745};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2357.23,13330.6,4.25789};
						};
					};
				};

				class Salle9 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2360.47,13332.2,4.25504};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2365.39,13335.4,4.26113};
						};
					};
				};

				class Salle10 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2365.45,13331.4,4.26091};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2373.17,13331.3,4.26113};
						};

						class Target2 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2372.46,13332.4,4.26113};
						};
					};
				};

				class Salle11 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2371.49,13326.3,4.26256};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2376.12,13328.3,4.2548};
						};

						class Target2 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2370.15,13324.3,4.25305};
						};

						class Target3 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2378.49,13323.9,4.315};
						};
					};
				};

				class Salle12 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2378.51,13321.1,4.38652};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2380.83,13318.5,4.46182};
						};
					};
				};

				class Salle13 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2377.62,13318.5, 4.4995};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2383.74,13315.5, 4.4995};
						};

						class Target2 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2383.85,13308.8, 4.4995};
						};
					};
				};

				class Salle14 {

					waitBefore = 0;
					waitAfter = 0;

					triggerOnPosition[] = {2374.25,13316.1, 4.4995};
					triggerOnPositionDistance = 2;

					class Targets {
						class Target1 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2369.05,13313.3, 4.4995};
						};
						
						class Target2 {
							waitBefore = 0;
							waitTargetBefore = 0;
							className = "TargetP_Inf_F";
							position[] = {2369.42,13317.7, 4.4995};
						};
					};
				};
			};
		};
	};
};