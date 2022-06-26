/*
	Liste des Damages avec leurs probabilités

	["face_hub","neck","head","pelvis","spine1","spine2","spine3","body","arms","hands","legs"],[0,0,0,0,0,0,0,0,0,0,0]]
	
*/

class DamagesEffects {
	
	class Calibres {

		class Default {
			displayName = "Inconnue";
			liste_calibres[] = {
				"FakeAmmo","BulletBase","ShellBase","ShotDeployBase","SubmunitionBase","SubmunitionBullet","MissileBase","Grenade","RocketBase","GrenadeBase","ShotgunBase","SmallSecondary"
			};

			isMun = 0;

			important = 1;

			canRevive = 100;
		};

		class Explosion {
			displayName = "Brulure aux 2iem degré";

			liste_calibres[] = {
				"FuelExplosion","FuelExplosionBig","HelicopterExploSmall","HelicopterExploBig","R_PG7_F"
			};

			isMun = 0;

			important = 1;

			canRevive = 100;
		};

		class C_5x56 {

			displayName = "Calibre : 5.56 mm";

			liste_calibres[] = {
					"B_556x45_Ball",
					"B_556x45_Ball_Tracer_Green",
					"B_556x45_Ball_Tracer_Red",
					"B_556x45_Ball_Tracer_Green",
					"B_556x45_Ball_Tracer_Yellow",
					"B_556x45_dual",
					"B_56x15_dual",
					"B_545x39_Ball_F",
					"B_545x39_Ball_Green_F"
			};

			isMun = 1;

			important = 0;

			canRevive = 100;
		};

		class C_6x5 {

			displayName = "Calibre : 6.5 mm";

			liste_calibres[] = {
					"B_65x39_Caseless",
					"B_65x39_Caseless_green",
					"B_65x39_Caseless_green",
					"B_556x45_Ball_Tracer_Green",
					"B_556x45_Ball_Tracer_Yellow",
					"B_65x39_Caseless_yellow",
					"B_556x45_dual",
					"B_65x39_Case",
					"B_65x39_Case_green",
					"B_65x39_Case_yellow",
					"B_65x39_Minigun_Caseless",
					"B_65x39_Minigun_Caseless_Red_splash",
					"B_65x39_Minigun_Caseless_Yellow_splash",
					"B_65x39_Minigun_Caseless_Green_splash"
			};

			isMun = 1;

			important = 0;

			canRevive = 100;
		};

		class C_7x62 {
			displayName = "Calibre : 7.62 mm";
			liste_calibres[] = {
					"B_762x51_Ball",
					"B_762x51_Tracer_Red",
					"B_762x51_Tracer_Green",
					"B_762x51_Tracer_Yellow",
					"B_762x54_Ball",
					"B_762x54_Tracer_Red",
					"B_762x54_Tracer_Green",
					"B_762x54_Tracer_Yellow",
					"B_762x51_Minigun_Tracer_Red",
					"B_762x51_Minigun_Tracer_Red_splash",
					"B_762x51_Minigun_Tracer_Yellow",
					"B_762x51_Minigun_Tracer_Yellow_splash",
					"B_762x39_Ball_F",
					"B_762x39_Ball_Green_F"
			};

			isMun = 1;

			important = 0;

			canRevive = 100;
		};

		class C_9 {
			displayName = "Calibre : 9 mm";

			liste_calibres[] = {
					"B_9x21_Ball",
					"B_9x21_Ball_Tracer_Green",
					"B_9x21_Ball_Tracer_Red",
					"B_9x21_Ball_Tracer_Yellow"
			};

			isMun = 1;

			important = 1;

			canRevive = 100;
		};

		class C_408 {
			displayName = "Calibre : .408 mm";

			liste_calibres[] = {
					"B_408_Ball"
			};

			isMun = 1;

			important = 0;

			canRevive = 100;
		};

		class C_127x33 {
			displayName = "Calibre : 12.7 mm";

			liste_calibres[] = {
					"B_127x33_Ball",
					"B_127x99_Ball",
					"B_127x99_Ball_Tracer_Red",
					"B_127x99_Ball_Tracer_Green",
					"B_127x99_Ball_Tracer_Yellow",
					"B_127x99_SLAP",
					"B_127x99_SLAP_Tracer_Red",
					"B_127x99_SLAP_Tracer_Green",
					"B_127x99_SLAP_Tracer_Yellow",
					"B_127x108_Ball",
					"B_127x108_APDS"
			};

			isMun = 1;

			important = 0;

			canRevive = 100;
		};

		class C_45ACP {
			displayName = "Calibre : 45ACP";

			liste_calibres[] = {
					"B_45ACP_Ball",
					"B_45ACP_Ball_Green",
					"B_45ACP_Ball_Yellow",
					"B_127x99_Ball_Tracer_Green",
					"B_127x99_Ball_Tracer_Yellow",
					"B_127x99_SLAP",
					"B_127x99_SLAP_Tracer_Red",
					"B_127x99_SLAP_Tracer_Green",
					"B_127x99_SLAP_Tracer_Yellow",
					"B_127x108_Ball",
					"B_127x108_APDS",
					"B_127x54_Ball"
			};

			isMun = 1;

			important = 1;

			canRevive = 100;
		};

		class C_338 {
			displayName = "Calibre : .338";

			liste_calibres[] = {
					"B_338_Ball",
					"B_338_NM_Ball"
			};

			isMun = 1;

			important = 0;

			canRevive = 90;
		};

		class C_93 {
			displayName = "Calibre : 9.3mm";

			liste_calibres[] = {
					"B_93x64_Ball"
			};

			isMun = 1;

			important = 0;

			canRevive = 90;
		};

		class C_58 {
			displayName = "Calibre : 5.8mm";

			liste_calibres[] = {
					"B_580x42_Ball_F"
			};

			isMun = 1;

			important = 0;

			canRevive = 90;
		};

		class C_50 {
			displayName = "Calibre : .50 BMG";

			liste_calibres[] = {
					"B_50BW_Ball_F"
			};

			isMun = 1;
			
			important = 0;

			canRevive = 90;
		};
	};

	class Parts {
		class face_hub {

			displayName = "Le Visage";

			canRevive = 100;
		};

		class neck {
			
			displayName = "Le Cou";

			canRevive = 100;
		};

		class head {

			displayName = "Le Crâne";

			canRevive = 100;
		};

		class pelvis {

			displayName = "Le Bassin";

			canRevive = 100;
		};

		class spine1 {

			displayName = "La Colonne vertébrale";

			canRevive = 100;
		};

		class spine2 {

			displayName = "La Colonne vertébrale";

			canRevive = 100;
		};

		class spine3 {

			displayName = "La Colonne vertébrale";

			canRevive = 100;
		};

		class body {

			displayName = "Le corps";

			canRevive = 100;
		};

		class arms {

			displayName = "Les Bras";

			canRevive = 100;
		};

		class hands {

			displayName = "Les Mains";

			canRevive = 100;
		};

		class legs {

			displayName = "Les Jambes";

			canRevive = 100;
		};
	};
};