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

			position[] = {3500.39,12843.1,0.00150204};

			condition[] = {"license_civ_gun", "Il vous faut le permis de port d'arme."};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {3504.04,12854.9,0.00597334};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {3500.11,12851.3,0.00525522};
				};
				
				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {3498.71,12851,-0.00916529};
				};
				
				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {3491.05,12849.3,-0.0104227};
				};
				
				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {3490.37,12852.8,-0.0108404};
				};
				
				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {3496.37,12857.9,-0.00768328};
				};
				
				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {3500.88,12863.1,0.0200329};
				};
				
				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {3499.42,12863.1,0.0199552};
				};
				
				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {3490.35,12860.2,-0.0147777};
				};
				
				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {3488.94,12859.4,-0.0147347};
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

			position[] = {3441.39,12892.6,0.00143909};

			condition[] = {"license_civ_gun", "Il vous faut le permis de port d'arme."};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {3430.43,12887.2,0.0620995};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {3424.13,12884.5,0};
				};
				
				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {3423.36,12885.5,-0.000123978};
				};
				
				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {3425.6,12889.3,0.0764503};
				};
				
				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {3424.98,12890.7,0.0557222};
				};
				
				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {3423.15,12894.7,0.0145874};
				};
				
				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {3423.83,12897.1,0.0597019};
				};
				
				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {3424.43,12898.5,0.09126};
				};
				
				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {3421.9,12903.5,0.0289125};
				};
				
				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {3434.11,12899.4,0.0358181};
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

		class MaffiaPmBig {
			type = "random";

			weaponCategories[] = {"Smg"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			refuseIfWeaponDeployed = 1;

			position[] = {8241.41,12004.9,0.00175476};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {8241.48,11985.6,0.0113983};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {8230.02,11982.1,0.000900269};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {8214.67,11966.6,0.00967407};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {8210.7,11963,0.0115814};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {8235.76,11960.7,-0.0697937};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {8234.83,11951.1,0.00660706};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {8232.58,11951.1,0.00660706};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {8217.56,11934.4,0.103165};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {8215.71,11935.5,-0.0218811};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {8198.86,11935.3,0.0509796};
				};

				class Target11 {
					className = "TargetP_Inf_F";
					position[] = {8198.86,11935.3,0.0509796};
				};

				class Target12 {
					className = "TargetP_Inf_F";
					position[] = {8198.86,11935.3,0.0509796};
				};

				class Target13 {
					className = "TargetP_Inf_F";
					position[] = {8195.69,11909,0.0846252};
				};

				class Target14 {
					className = "TargetP_Inf_F";
					position[] = {8199.76,11908.9,0.0821686};
				};

				class Target15 {
					className = "TargetP_Inf_F";
					position[] = {8210.74,11901.7,0.0732269};
				};

				class Target16 {
					className = "TargetP_Inf_F";
					position[] = {8225.12,11912.2,0.0819397};
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

			weaponCategories[] = {"HandGun", "AssaultRifle"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			position[] = {13205,8495.99,0.00131226};

			refuseIfWeaponDeployed = 1;

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {13197,8492.46,0.00836945};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {13197.2,8490.08,0.0104446};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {13200.8,8486.57,0.0261917};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {13196.1,8486.85,0.00949097};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {13197.1,8484.21,0.00920105};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {13199.8,8481.78,-0.00177002};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {13192.4,8477.74,0.0376816};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {13187.9,8478.89,0.0399628};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {13186.6,8482.28,0.0493317};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {13187,8473.3,0.0371552};
				};
			};
		};

		class InsurgAssaultRifleSmall2 {
			type = "random";

			weaponCategories[] = {"HandGun", "AssaultRifle"};

			sides[] = {"civ"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};

			position[] = {13196.1,8514.1,0.00125122};

			refuseIfWeaponDeployed = 1;

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {13189.7,8507.78,0.0145569};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {13188.8,8513.2,0.00762177};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {13185.8,8509.24,-0.000617981};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {13181.3,8513.63,0.00808716};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {13180.2,8505.43,0.00800323};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {13182.2,8502.06,0.00224304};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {13185.9,8500.58,0.0156403};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {13182.9,8496.36,0.0373001};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {13179.1,8497.09,0.0226364};
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

			position[] = {2240.14,3497.1,0.00033474};

			class Targets {
				class Target1 {
					className = "TargetP_Inf_F";
					position[] = {2367.67,3802.66,-0.00387192};
				};

				class Target2 {
					className = "TargetP_Inf_F";
					position[] = {2369.75,3803.73,0.0133133};
				};

				class Target3 {
					className = "TargetP_Inf_F";
					position[] = {2371.13,3800.71,-0.00365448};
				};

				class Target4 {
					className = "TargetP_Inf_F";
					position[] = {2373.24,3802.59,-0.00679779};
				};

				class Target5 {
					className = "TargetP_Inf_F";
					position[] = {2374.5,3800.23,-0.00120926};
				};

				class Target6 {
					className = "TargetP_Inf_F";
					position[] = {2377.1,3801.41,-0.00425339};
				};

				class Target7 {
					className = "TargetP_Inf_F";
					position[] = {2378.42,3798.86,0.0253792};
				};

				class Target8 {
					className = "TargetP_Inf_F";
					position[] = {2381,3798.99,-0.00753212};
				};

				class Target9 {
					className = "TargetP_Inf_F";
					position[] = {2381.91,3797.16,0.0189438};
				};

				class Target10 {
					className = "TargetP_Inf_F";
					position[] = {2385.91,3796.4,0.040657};
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

		class CopAssaultRifle {
			type = "random";

			weaponCategories[] = {"AssaultRifle"};

			sides[] = {"cop"};

			difficulties[] = {"Simple", "Medium", "Difficult", "Expert"};

			stances[] = {"STAND"};
			
			refuseIfWeaponDeployed = 1;

			position[] = {2353.02,13441.9,0.00143909};

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

			weaponCategories[] = {"HandGun"};

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

			weaponCategories[] = {"AssaultRifle"};

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

			position[] = {2377.03,13300.3,0.00143433};

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