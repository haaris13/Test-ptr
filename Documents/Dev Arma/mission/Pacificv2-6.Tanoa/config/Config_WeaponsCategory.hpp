/*
	Config for Weapons category

	Autor: IronBlade
*/

class CfgWeaponsCategories {

	showStats[] = {"HandGun", "Smg", "AssaultRifle", "SniperRifle"};

	class Categories {

		class HandGun {
			displayName = "Pistolet";
			armaName = "hgun";
			img = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";

			minCustomAimCoef = 1;
			maxCustomAimCoef = 22;

			minRecoilCoefficient = 1;
			maxRecoilCoefficient = 5.5;
		};

		class Smg {
			displayName = "Pistolet-mitrailleur";
			armaName = "smg";
			img = "\a3\ui_f\data\gui\cfg\hints\Rifles_ca.paa";

			minCustomAimCoef = 1;
			maxCustomAimCoef = 22;

			minRecoilCoefficient = 1;
			maxRecoilCoefficient = 5.5;
		};

		class AssaultRifle {
			displayName = "Fusil d'assault";
			armaName = "arifle";
			img = "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";

			minCustomAimCoef = 1;
			maxCustomAimCoef = 22;

			minRecoilCoefficient = 1;
			maxRecoilCoefficient = 5.5;
		};

		class SniperRifle {
			displayName = "Fusil de précision";
			armaName = "srifle";
			img = "\a3\ui_f\data\gui\cfg\hints\Ranged_ca.paa";

			minCustomAimCoef = 1;
			maxCustomAimCoef = 2;

			minRecoilCoefficient = 1;
			maxRecoilCoefficient = 2;
		};

		class Mg {
			displayName = "Fusil-mitrailleur";
			armaName = "mg";
			img = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
		};

		class Rocket {
			displayName = "Lance-roquette";
			armaName = "rocket";
			img = "\a3\ui_f\data\gui\cfg\hints\Launcher_CA.paa";
		};

		class Missile {
			displayName = "Lance-missile";
			armaName = "missile";
			img = "\a3\ui_f\data\gui\cfg\hints\Launcher_CA.paa";
		};

		class ShotGun {
			displayName = "ShotGun";
			armaName = "sgun";
			img = "\a3\ui_f\data\gui\cfg\hints\Shotguns_ca.paa";
		};
	};

	class Weapons {
		// rocket:

		class launch_NLAW_F {
			category = "Rocket";
			displayName = "PCML";
			dlc = "";
		};

		class launch_RPG32_F {
			category = "Rocket";
			displayName = "RPG-42 Alamut";
			dlc = "";
		};

		class launch_RPG32_ghex_F {
			category = "Rocket";
			displayName = "RPG-42 Alamut (hex vert)";
			dlc = "";
		};

		class launch_RPG7_F {
			category = "Rocket";
			displayName = "RPG-7";
			dlc = "";
		};

		class launch_MRAWS_olive_F {
			category = "Rocket";
			displayName = "MAAWS Mk4 Mod 1 (olive)";
			dlc = "";
		};

		class launch_MRAWS_olive_rail_F {
			category = "Rocket";
			displayName = "MAAWS Mk4 Mod 0 (olive)";
			dlc = "";
		};

		class launch_MRAWS_green_F {
			category = "Rocket";
			displayName = "MAAWS Mk4 Mod 1 (vert)";
			dlc = "";
		};

		class launch_MRAWS_green_rail_F {
			category = "Rocket";
			displayName = "MAAWS Mk4 Mod 0 (vert)";
			dlc = "";
		};

		class launch_MRAWS_sand_F {
			category = "Rocket";
			displayName = "MAAWS Mk4 Mod 1 (sable)";
			dlc = "";
		};

		class launch_MRAWS_sand_rail_F {
			category = "Rocket";
			displayName = "MAAWS Mk4 Mod 0 (sable)";
			dlc = "";
		};

		class launch_RPG32_green_F {
			category = "Rocket";
			displayName = "RPG-42 (vert)";
			dlc = "";
		};

		// missile:

		class launch_B_Titan_F {
			category = "Missile";
			displayName = "Titan MPRL (sable)";
			dlc = "";
		};

		class launch_I_Titan_F {
			category = "Missile";
			displayName = "Titan MPRL (numérique)";
			dlc = "";
		};

		class launch_O_Titan_F {
			category = "Missile";
			displayName = "Titan MPRL (hex)";
			dlc = "";
		};

		class launch_B_Titan_short_F {
			category = "Missile";
			displayName = "Titan MPRL compact (sable)";
			dlc = "";
		};

		class launch_I_Titan_short_F {
			category = "Missile";
			displayName = "Titan MPRL compact (olive)";
			dlc = "";
		};

		class launch_O_Titan_short_F {
			category = "Missile";
			displayName = "Titan MPRL compact (coyote)";
			dlc = "";
		};

		class launch_B_Titan_tna_F {
			category = "Missile";
			displayName = "Titan MPRL (tropiques)";
			dlc = "";
		};

		class launch_B_Titan_short_tna_F {
			category = "Missile";
			displayName = "Titan MPRL compact (tropiques)";
			dlc = "";
		};

		class launch_O_Titan_ghex_F {
			category = "Missile";
			displayName = "Titan MPRL (hex vert)";
			dlc = "";
		};

		class launch_O_Titan_short_ghex_F {
			category = "Missile";
			displayName = "Titan MPRL compact (hex vert)";
			dlc = "";
		};

		class launch_O_Vorona_brown_F {
			category = "Missile";
			displayName = "9M135 Vorona (marron)";
			dlc = "";
		};

		class launch_O_Vorona_green_F {
			category = "Missile";
			displayName = "9M135 Vorona (vert)";
			dlc = "";
		};

		class launch_I_Titan_eaf_F {
			category = "Missile";
			displayName = "Titan MPRL (géométrique)";
			dlc = "";
		};

		class launch_B_Titan_olive_F {
			category = "Missile";
			displayName = "Titan MPRL (olive)";
			dlc = "";
		};

		// srifle:

		class srifle_DMR_01_F {
			category = "SniperRifle";
			displayName = "Rahim 7,62 mm";
			dlc = "";
		};

		class srifle_EBR_F {
			category = "SniperRifle";
			displayName = "Mk18 ABR 7,62 mm";
			dlc = "";

			maxRecoilCoefficient = 1.30;
		};

		class srifle_GM6_F {
			category = "SniperRifle";
			displayName = "GM6 Lynx 12,7 mm";
			dlc = "";
		};

		class srifle_GM6_camo_F {
			category = "SniperRifle";
			displayName = "GM6 Lynx 12,7 mm (camouflage)";
			dlc = "";
		};

		class srifle_LRR_F {
			category = "SniperRifle";
			displayName = "M320 LRR .408";
			dlc = "";
		};

		class srifle_LRR_camo_F {
			category = "SniperRifle";
			displayName = "M320 LRR .408 (camouflage)";
			dlc = "";
		};

		class srifle_DMR_02_F {
			category = "SniperRifle";
			displayName = "MAR-10 .338 (Noir)";
			dlc = "Mark";
		};

		class srifle_DMR_02_camo_F {
			category = "SniperRifle";
			displayName = "MAR-10 .338 (Camo)";
			dlc = "Mark";
		};

		class srifle_DMR_02_sniper_F {
			category = "SniperRifle";
			displayName = "MAR-10 .338 (Sable)";
			dlc = "Mark";
		};

		class srifle_DMR_03_F {
			category = "SniperRifle";
			displayName = "Mk-I EMR 7.62 mm (Noir)";
			dlc = "Mark";

			maxRecoilCoefficient = 3;
		};

		class srifle_DMR_03_khaki_F {
			category = "SniperRifle";
			displayName = "Mk-I EMR 7.62 mm (Khaki)";
			dlc = "Mark";

			maxRecoilCoefficient = 3;
		};

		class srifle_DMR_03_tan_F {
			category = "SniperRifle";
			displayName = "Mk-I EMR 7.62 mm (Sable)";
			dlc = "Mark";

			maxRecoilCoefficient = 3;
		};

		class srifle_DMR_03_multicam_F {
			category = "SniperRifle";
			displayName = "Mk-I EMR 7.62 mm (Camo)";
			dlc = "Mark";

			maxRecoilCoefficient = 3;
		};

		class srifle_DMR_03_woodland_F {
			category = "SniperRifle";
			displayName = "Mk-I EMR 7.62 mm (Boisé)";
			dlc = "Mark";

			maxRecoilCoefficient = 3;
		};

		class srifle_DMR_04_F {
			category = "SniperRifle";
			displayName = "ASP-1 Kir 12.7 mm (Noir)";
			dlc = "Mark";
		};

		class srifle_DMR_04_Tan_F {
			category = "SniperRifle";
			displayName = "ASP-1 Kir 12.7 mm (Brun roux)";
			dlc = "Mark";
		};

		class srifle_DMR_05_blk_F {
			category = "SniperRifle";
			displayName = "Cyrus 9.3 mm (Noir)";
			dlc = "Mark";
		};

		class srifle_DMR_05_hex_F {
			category = "SniperRifle";
			displayName = "Cyrus 9.3 mm (Hex)";
			dlc = "Mark";
		};

		class srifle_DMR_05_tan_f {
			category = "SniperRifle";
			displayName = "Cyrus 9.3 mm (Brun roux)";
			dlc = "Mark";
		};

		class srifle_DMR_06_camo_F {
			category = "SniperRifle";
			displayName = "Mk14 7.62 mm (Camo)";
			dlc = "Mark";

			maxRecoilCoefficient = 1.5;
		};

		class srifle_DMR_06_olive_F {
			category = "SniperRifle";
			displayName = "Mk14 7.62 mm (Olive)";
			dlc = "Mark";

			maxRecoilCoefficient = 1.5;
		};

		class srifle_DMR_06_hunter_F {
			category = "SniperRifle";
			displayName = "Mk14 7,62 mm (classique)";
			dlc = "Enoch";

			maxRecoilCoefficient = 1.5;
		};

		class srifle_LRR_tna_F {
			category = "SniperRifle";
			displayName = "M320 LRR .408 (tropiques)";
			dlc = "";
		};

		class srifle_GM6_ghex_F {
			category = "SniperRifle";
			displayName = "GM6 Lynx 12,7 mm (hex vert)";
			dlc = "";
		};

		class srifle_DMR_07_blk_F {
			category = "SniperRifle";
			displayName = "CMR-76 6,5 mm (noir)";
			dlc = "Expansion";

			maxRecoilCoefficient = 1.35;
		};

		class srifle_DMR_07_hex_F {
			category = "SniperRifle";
			displayName = "CMR-76 6,5 mm (hex)";
			dlc = "Expansion";

			maxRecoilCoefficient = 1.35;
		};

		class srifle_DMR_07_ghex_F {
			category = "SniperRifle";
			displayName = "CMR-76 6,5 mm (hex vert)";
			dlc = "Expansion";

			maxRecoilCoefficient = 1.35;
		};

		class arifle_SPAR_03_blk_F {
			category = "SniperRifle";
			displayName = "SPAR-17 7,62 mm (noir)";
			dlc = "";

			maxRecoilCoefficient = 2;
		};

		class arifle_SPAR_03_khk_F {
			category = "SniperRifle";
			displayName = "SPAR-17 7,62 mm (kaki)";
			dlc = "";

			maxRecoilCoefficient = 2;
		};

		class arifle_SPAR_03_snd_F {
			category = "SniperRifle";
			displayName = "SPAR-17 7,62 mm (sable)";
			dlc = "";

			maxRecoilCoefficient = 2;
		};

		// mg:

		class LMG_Mk200_F {
			category = "Mg";
			displayName = "Mk200 6,5 mm";
			dlc = "";
		};

		class LMG_Zafir_F {
			category = "Mg";
			displayName = "Zafir 7,62 mm";
			dlc = "";
		};

		class arifle_MX_SW_F {
			category = "Mg";
			displayName = "MX SW 6,5 mm";
			dlc = "";
		};

		class arifle_MX_SW_Black_F {
			category = "Mg";
			displayName = "MX SW 6,5 mm (noir)";
			dlc = "";
		};

		class MMG_01_hex_F {
			category = "Mg";
			displayName = "Navid 9.3 mm (Hex)";
			dlc = "Mark";
		};

		class MMG_01_tan_F {
			category = "Mg";
			displayName = "Navid 9.3 mm (Tan)";
			dlc = "Mark";
		};

		class MMG_02_camo_F {
			category = "Mg";
			displayName = "SPMG .338 (MTP)";
			dlc = "Mark";
		};

		class MMG_02_black_F {
			category = "Mg";
			displayName = "SPMG .338 (Noir)";
			dlc = "Mark";
		};

		class MMG_02_sand_F {
			category = "Mg";
			displayName = "SPMG .338 (Sable)";
			dlc = "Mark";
		};

		class arifle_MX_SW_khk_F {
			category = "Mg";
			displayName = "MX SW 6,5 mm (kaki)";
			dlc = "";
		};

		class LMG_03_F {
			category = "Mg";
			displayName = "LIM-85 5,56 mm";
			dlc = "";
		};

		class arifle_SPAR_02_blk_F {
			category = "Mg";
			displayName = "SPAR-16S 5,56 mm (noir)";
			dlc = "Expansion";
			
			maxRecoilCoefficient = 3.2;
		};

		class arifle_SPAR_02_khk_F {
			category = "Mg";
			displayName = "SPAR-16S 5,56 mm (kaki)";
			dlc = "Expansion";
			
			maxRecoilCoefficient = 3.2;
		};

		class arifle_SPAR_02_snd_F {
			category = "Mg";
			displayName = "SPAR-16S 5,56 mm (sable)";
			dlc = "Expansion";
			
			maxRecoilCoefficient = 3.2;
		};

		class LMG_Mk200_black_F {
			category = "Mg";
			displayName = "Mk200 6,5 mm (noir)";
			dlc = "";
		};

		class arifle_RPK12_F {
			category = "Mg";
			displayName = "RPK-12 7,62 mm";
			dlc = "Enoch";
		};

		class arifle_RPK12_lush_F {
			category = "Mg";
			displayName = "RPK-12 7,62 mm (luxuriant)";
			dlc = "Enoch";
		};

		class arifle_RPK12_arid_F {
			category = "Mg";
			displayName = "RPK-12 7,62 mm (aride)";
			dlc = "Enoch";
		};

		// hgun:

		class hgun_ACPC2_F {
			category = "HandGun";
			displayName = "ACP-C2 .45 ACP";
			dlc = "";
		};

		class hgun_P07_F {
			category = "HandGun";
			displayName = "P07 9 mm";
			dlc = "";
		};

		class hgun_Pistol_heavy_01_F {
			category = "HandGun";
			displayName = "4-five .45 ACP";
			dlc = "";
		};

		class hgun_Pistol_heavy_02_F {
			category = "HandGun";
			displayName = "Zubr .45 ACP";
			dlc = "";
		};

		class hgun_Rook40_F {
			category = "HandGun";
			displayName = "Rook-40 9 mm";
			dlc = "";
		};

		class hgun_Pistol_Signal_F {
			category = "HandGun";
			displayName = "Pistolet d’alarme";
			dlc = "Kart";
		};

		class hgun_P07_khk_F {
			category = "HandGun";
			displayName = "P07 9 mm (kaki)";
			dlc = "";
		};

		class hgun_Pistol_01_F {
			category = "HandGun";
			displayName = "PM 9 mm";
			dlc = "";
		};

		class hgun_Pistol_heavy_01_green_F {
			category = "HandGun";
			displayName = "4-five .45 ACP (vert)";
			dlc = "";
		};

		class RH_m9 {
			category = "HandGun";
			displayName = "Beretta M9";
			dlc = "";
		};

		class RH_m9c {
			category = "HandGun";
			displayName = "Beretta M9";
			dlc = "";
		};

		class RH_python {
			category = "HandGun";
			displayName = "Python";
			dlc = "";
		};

		class RH_cz75 {
			category = "HandGun";
			displayName = "CZ 75";
			dlc = "";
		};

		class RH_deagle {
			category = "HandGun";
			displayName = "Desert Eagle";
			dlc = "";
		};

		class RH_Deagleg {
			category = "HandGun";
			displayName = "Desert Eagle Gold";
			dlc = "";
		};

		class RH_Deaglem {
			category = "HandGun";
			displayName = "Desert Eagle Modern";
			dlc = "";
		};

		class RH_Deagles {
			category = "HandGun";
			displayName = "Desert Eagle Silver";
			dlc = "";
		};

		class RH_fn57 {
			category = "HandGun";
			displayName = "FN Five-seven";
			dlc = "";
		};

		class RH_fn57_t {
			category = "HandGun";
			displayName = "FN Five-seven FDE";
			dlc = "";
		};

		class RH_fn57_g {
			category = "HandGun";
			displayName = "FN Five-seven ODG";
			dlc = "";
		};

		class RH_fnp45 {
			category = "HandGun";
			displayName = "FNP45 Tactical";
			dlc = "";
		};

		class RH_fnp45t {
			category = "HandGun";
			displayName = "FNP45 Tactical Tan";
			dlc = "";
		};

		class RH_g17 {
			category = "HandGun";
			displayName = "Glock 17";
			dlc = "";
		};

		class RH_g18 {
			category = "HandGun";
			displayName = "Glock 18";
			dlc = "";
		};

		class RH_g19 {
			category = "HandGun";
			displayName = "Glock 19";
			dlc = "";
		};

		class RH_g19t {
			category = "HandGun";
			displayName = "Glock 19 Tan";
			dlc = "";
		};

		class RH_gsh18 {
			category = "HandGun";
			displayName = "GSH-18";
			dlc = "";
		};

		class RH_tec9 {
			category = "HandGun";
			displayName = "Intratec TEC-9";
			dlc = "";
		};

		class RH_kimber {
			category = "HandGun";
			displayName = "Kimber Desert Warrior";
			dlc = "";
		};

		class RH_kimber_nw {
			category = "HandGun";
			displayName = "Kimber Night Warrior";
			dlc = "";
		};

		class RH_m1911 {
			category = "HandGun";
			displayName = "M1911A1";
			dlc = "";
		};

		class RH_mak {
			category = "HandGun";
			displayName = "Malarov PM";
			dlc = "";
		};

		class RH_mateba {
			category = "HandGun";
			displayName = "Mateba Model 6";
			dlc = "";
		};

		class RH_muzi {
			category = "HandGun";
			displayName = "Micro Uzi";
			dlc = "";
		};

		class RH_mp412 {
			category = "HandGun";
			displayName = "MP 412 REX";
			dlc = "";
		};

		class RH_mk2 {
			category = "HandGun";
			displayName = "Ruger Mk2";
			dlc = "";
		};

		class RH_p226 {
			category = "HandGun";
			displayName = "Sig P226";
			dlc = "";
		};

		class RH_p226s {
			category = "HandGun";
			displayName = "Sig P226 Silver";
			dlc = "";
		};

		class RH_sw659 {
			category = "HandGun";
			displayName = "SW 659";
			dlc = "";
		};

		class RH_bull {
			category = "HandGun";
			displayName = "Taurus Raging Bull";
			dlc = "";
		};

		class RH_bullb {
			category = "HandGun";
			displayName = "Taurus Raging Bull";
			dlc = "";
		};

		class RH_ttracker {
			category = "HandGun";
			displayName = "Taurus Tracker 455";
			dlc = "";
		};

		class RH_ttracker_g {
			category = "HandGun";
			displayName = "Taurus Tracker 455";
			dlc = "";
		};

		class RH_tt33 {
			category = "HandGun";
			displayName = "TT33";
			dlc = "";
		};

		class RH_uspm {
			category = "HandGun";
			displayName = "USP40 M";
			dlc = "";
		};

		class RH_usp {
			category = "HandGun";
			displayName = "USP45 M";
			dlc = "";
		};

		class RH_vp70 {
			category = "HandGun";
			displayName = "VP 70";
			dlc = "";
		};

		// arifle:

		class wirk_acwr {
			category = "AssaultRifle";
			displayName = "ACWR";
			dlc = "";

			maxRecoilCoefficient = 2;
		};

		class arifle_Katiba_F {
			category = "AssaultRifle";
			displayName = "Katiba 6,5 mm";
			dlc = "";

			maxRecoilCoefficient = 1.35;
		};

		class arifle_Katiba_C_F {
			category = "AssaultRifle";
			displayName = "Carabine Katiba 6,5 mm";
			dlc = "";

			maxRecoilCoefficient = 1.35;
		};

		class arifle_Katiba_GL_F {
			category = "AssaultRifle";
			displayName = "Katiba GL 6.5 mm";
			dlc = "";

			maxRecoilCoefficient = 1.35;
		};

		class arifle_Mk20_F {
			category = "AssaultRifle";
			displayName = "Mk20 5,56 mm (camouflage)";
			dlc = "";

			maxRecoilCoefficient = 1.4;
		};

		class arifle_Mk20_plain_F {
			category = "AssaultRifle";
			displayName = "Mk20 5,56 mm";
			dlc = "";
			
			maxRecoilCoefficient = 1.4;
		};

		class arifle_Mk20C_F {
			category = "AssaultRifle";
			displayName = "Mk20C 5,56 mm (camouflage)";
			dlc = "";
			
			maxRecoilCoefficient = 1.4;
		};

		class arifle_Mk20C_plain_F {
			category = "AssaultRifle";
			displayName = "Mk20C 5,56 mm";
			dlc = "";
			
			maxRecoilCoefficient = 1.4;
		};

		class arifle_Mk20_GL_F {
			category = "AssaultRifle";
			displayName = "Mk20 EGLM 5,56 mm (camouflage)";
			dlc = "";
			
			maxRecoilCoefficient = 1.4;
		};

		class arifle_Mk20_GL_plain_F {
			category = "AssaultRifle";
			displayName = "Mk20 EGLM 5,56 mm";
			dlc = "";
			
			maxRecoilCoefficient = 1.4;
		};

		class arifle_MX_F {
			category = "AssaultRifle";
			displayName = "MX 6,5 mm";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MX_GL_F {
			category = "AssaultRifle";
			displayName = "MX 3GL 6,5 mm";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MX_Black_F {
			category = "AssaultRifle";
			displayName = "MX 6,5 mm (noir)";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MX_GL_Black_F {
			category = "AssaultRifle";
			displayName = "MX 3GL 6,5 mm (noir)";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MX_khk_F {
			category = "AssaultRifle";
			displayName = "MX 6,5 mm (kaki)";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MX_GL_khk_F {
			category = "AssaultRifle";
			displayName = "MX 3GL 6,5 mm (kaki)";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MXM_F {
			category = "AssaultRifle";
			displayName = "MXM 6,5 mm";
			dlc = "";
			
			maxRecoilCoefficient = 2;
		};

		class arifle_MXM_Black_F {
			category = "AssaultRifle";
			displayName = "MXM 6,5 mm (noir)";
			dlc = "";
			
			maxRecoilCoefficient = 2;
		};

		class arifle_MXM_khk_F {
			category = "AssaultRifle";
			displayName = "MXM 6,5 mm (kaki)";
			dlc = "";
			
			maxRecoilCoefficient = 2;
		};

		class arifle_MXC_Black_F {
			category = "AssaultRifle";
			displayName = "MXC 6,5 mm (noir)";
			dlc = "";
			
			maxRecoilCoefficient = 2;
		};

		class arifle_MXC_khk_F {
			category = "AssaultRifle";
			displayName = "MXC 6,5 mm (kaki)";
			dlc = "";
			
			maxRecoilCoefficient = 2;
		};

		class arifle_MXC_F {
			category = "AssaultRifle";
			displayName = "MXC 6,5 mm";
			dlc = "";
			
			maxRecoilCoefficient = 2;
		};

		class arifle_SDAR_F {
			category = "AssaultRifle";
			displayName = "SDAR 5,56 mm";
			dlc = "";
			
			maxRecoilCoefficient = 3.2;
		};

		class arifle_TRG21_F {
			category = "AssaultRifle";
			displayName = "TRG-21 5,56 mm";
			dlc = "";
			
			maxRecoilCoefficient = 2;
		};

		class arifle_TRG20_F {
			category = "AssaultRifle";
			displayName = "TRG-20 5,56 mm";
			dlc = "";
			
			maxRecoilCoefficient = 2;
		};

		class arifle_TRG21_GL_F {
			category = "AssaultRifle";
			displayName = "TRG-21 EGLM 5,56 mm";
			dlc = "";
			
			maxRecoilCoefficient = 2;
		};

		class arifle_AK12_F {
			category = "AssaultRifle";
			displayName = "AK-12 7,62 mm";
			dlc = "";

			maxRecoilCoefficient = 2;
		};

		class arifle_AK12_GL_F {
			category = "AssaultRifle";
			displayName = "AK-12 GL 7,62 mm";
			dlc = "";

			maxRecoilCoefficient = 2;
		};

		class arifle_AK12_lush_F {
			category = "AssaultRifle";
			displayName = "AK-12 7,62 mm (luxuriant)";
			dlc = "Enoch";

			maxRecoilCoefficient = 2;
		};

		class arifle_AK12_arid_F {
			category = "AssaultRifle";
			displayName = "AK-12 7,62 mm (aride)";
			dlc = "Enoch";

			maxRecoilCoefficient = 2;
		};

		class arifle_AK12_GL_lush_F {
			category = "AssaultRifle";
			displayName = "AK-12 GL 7,62 mm (luxuriant)";
			dlc = "Enoch";

			maxRecoilCoefficient = 2;
		};

		class arifle_AK12_GL_arid_F {
			category = "AssaultRifle";
			displayName = "AK-12 GL 7,62 mm (aride)";
			dlc = "Enoch";

			maxRecoilCoefficient = 2;
		};

		class arifle_AKM_F {
			category = "AssaultRifle";
			displayName = "AKM 7,62 mm";
			dlc = "";

			maxRecoilCoefficient = 3;
		};

		class arifle_ARX_blk_F {
			category = "AssaultRifle";
			displayName = "Type 115 6,5 mm (noir)";
			dlc = "";
			
			maxRecoilCoefficient = 1.5;
		};

		class arifle_ARX_ghex_F {
			category = "AssaultRifle";
			displayName = "Type 115 6,5 mm (hex vert)";
			dlc = "";
			
			maxRecoilCoefficient = 1.5;
		};

		class arifle_ARX_hex_F {
			category = "AssaultRifle";
			displayName = "Type 115 6,5 mm (hex)";
			dlc = "";
			
			maxRecoilCoefficient = 1.5;
		};

		class arifle_CTAR_blk_F {
			category = "AssaultRifle";
			displayName = "CAR-95 5,8 mm (noir)";
			dlc = "";

			maxRecoilCoefficient = 3;
		};

		class arifle_CTAR_hex_F {
			category = "AssaultRifle";
			displayName = "CAR-95 5,8 mm (hex)";
			dlc = "";

			maxRecoilCoefficient = 3;
		};

		class arifle_CTAR_ghex_F {
			category = "AssaultRifle";
			displayName = "CAR-95 5,8 mm (hex vert)";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_CTAR_GL_blk_F {
			category = "AssaultRifle";
			displayName = "CAR-95 GL 5,8 mm (noir)";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_CTAR_GL_hex_F {
			category = "AssaultRifle";
			displayName = "CAR-95 GL 5,8 mm (hex)";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_CTAR_GL_ghex_F {
			category = "AssaultRifle";
			displayName = "CAR-95 GL 5,8 mm (hex vert)";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_CTARS_blk_F {
			category = "AssaultRifle";
			displayName = "CAR-95-1 5,8 mm (noir)";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_CTARS_hex_F {
			category = "AssaultRifle";
			displayName = "CAR-95-1 5,8 mm (hex)";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_CTARS_ghex_F {
			category = "AssaultRifle";
			displayName = "CAR-95-1 5,8 mm (hex vert)";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_SPAR_01_blk_F {
			category = "AssaultRifle";
			displayName = "SPAR-16 5,56 mm (noir)";
			dlc = "";
			
			maxRecoilCoefficient = 3.2;
		};

		class arifle_SPAR_01_khk_F {
			category = "AssaultRifle";
			displayName = "SPAR-16 5,56 mm (kaki)";
			dlc = "";
			
			maxRecoilCoefficient = 3.2;
		};

		class arifle_SPAR_01_snd_F {
			category = "AssaultRifle";
			displayName = "SPAR-16 5,56 mm (sable)";
			dlc = "";
			
			maxRecoilCoefficient = 3.2;
		};

		class arifle_SPAR_01_GL_blk_F {
			category = "AssaultRifle";
			displayName = "SPAR-16 GL 5,56 mm (noir)";
			dlc = "";
			
			maxRecoilCoefficient = 3.2;
		};

		class arifle_SPAR_01_GL_khk_F {
			category = "AssaultRifle";
			displayName = "SPAR-16 GL 5,56 mm (kaki)";
			dlc = "";
			
			maxRecoilCoefficient = 3.2;
		};

		class arifle_SPAR_01_GL_snd_F {
			category = "AssaultRifle";
			displayName = "SPAR-16 GL 5,56 mm (sable)";
			dlc = "";
			
			maxRecoilCoefficient = 3.2;
		};

		class arifle_AK12U_F {
			category = "AssaultRifle";
			displayName = "AKU-12 7,62 mm";
			dlc = "Enoch";

			maxRecoilCoefficient = 2;
		};

		class arifle_AK12U_lush_F {
			category = "AssaultRifle";
			displayName = "AKU-12 7,62 mm (luxuriant)";
			dlc = "Enoch";

			maxRecoilCoefficient = 2;
		};

		class arifle_AK12U_arid_F {
			category = "AssaultRifle";
			displayName = "AKU-12 7,62 mm (aride)";
			dlc = "Enoch";

			maxRecoilCoefficient = 2;
		};

		class arifle_MSBS65_F {
			category = "AssaultRifle";
			displayName = "Promet 6,5 mm";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_Mark_F {
			category = "AssaultRifle";
			displayName = "Promet MR 6,5 mm";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_GL_F {
			category = "AssaultRifle";
			displayName = "Promet GL 6,5 mm";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_UBS_F {
			category = "AssaultRifle";
			displayName = "Promet SG 6,5 mm";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_black_F {
			category = "AssaultRifle";
			displayName = "Promet 6,5 mm (noir)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_Mark_black_F {
			category = "AssaultRifle";
			displayName = "Promet MR 6,5 mm (noir)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_GL_black_F {
			category = "AssaultRifle";
			displayName = "Promet GL 6,5 mm (noir)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_UBS_black_F {
			category = "AssaultRifle";
			displayName = "Promet SG 6,5 mm (noir)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_sand_F {
			category = "AssaultRifle";
			displayName = "Promet 6,5 mm (sable)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_Mark_sand_F {
			category = "AssaultRifle";
			displayName = "Promet MR 6,5 mm (sable)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_GL_sand_F {
			category = "AssaultRifle";
			displayName = "Promet GL 6,5 mm (sable)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_UBS_sand_F {
			category = "AssaultRifle";
			displayName = "Promet SG 6,5 mm (sable)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_camo_F {
			category = "AssaultRifle";
			displayName = "Promet 6,5 mm (camouflage)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_Mark_camo_F {
			category = "AssaultRifle";
			displayName = "Promet MR 6,5 mm (camouflage)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_GL_camo_F {
			category = "AssaultRifle";
			displayName = "Promet GL 6,5 mm (camouflage)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class arifle_MSBS65_UBS_camo_F {
			category = "AssaultRifle";
			displayName = "Promet SG 6,5 mm (camouflage)";
			dlc = "Enoch";
			
			maxRecoilCoefficient = 3;
		};

		class KA_Model_723 {
			category = "AssaultRifle";
			displayName = "Colt Model 723";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class KA_Model_723_M203 {
			category = "AssaultRifle";
			displayName = "Colt Model 723 M320";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class KA_Model_733 {
			category = "AssaultRifle";
			displayName = "Colt Model 733";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class KA_Model_733_M203 {
			category = "AssaultRifle";
			displayName = "Colt Model 733 M320";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class KA_M16A2 {
			category = "AssaultRifle";
			displayName = "M16A2";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class KA_M16A2_M203 {
			category = "AssaultRifle";
			displayName = "M16A2 M320";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class QIN_CZ_BREN2_762_14 {
			category = "AssaultRifle";
			displayName = "CZ 807 14'";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class QIN_CZ_BREN2_762_14_GL {
			category = "AssaultRifle";
			displayName = "CZ 807 14' GL";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		class QIN_CZ_BREN2_762_8 {
			category = "AssaultRifle";
			displayName = "CZ 807 8'";
			dlc = "";
			
			maxRecoilCoefficient = 3;
		};

		// smg:

		class arifle_AKS_F {
			category = "Smg";
			displayName = "AKS-74U 5,45 mm";
			dlc = "";
			
			maxRecoilCoefficient = 4;
		};

		class hgun_PDW2000_F {
			category = "Smg";
			displayName = "PDW2000 9 mm";
			dlc = "";
			
			maxRecoilCoefficient = 1.8;
		};

		class SMG_01_F {
			category = "Smg";
			displayName = "Vermin SMG .45 ACP";
			dlc = "";
			
			maxRecoilCoefficient = 1.8;
		};

		class SMG_02_F {
			category = "Smg";
			displayName = "Sting 9 mm";
			dlc = "";
			
			maxRecoilCoefficient = 2.15;
		};

		class SMG_05_F {
			category = "Smg";
			displayName = "Protector 9 mm";
			dlc = "";

			maxRecoilCoefficient = 4.2;
		};

		class SMG_03_TR_black {
			category = "Smg";
			displayName = "ADR-97 TR 5,7 mm (noir)";
			dlc = "OfficialMod";

			maxRecoilCoefficient = 2.55;
		};

		class SMG_03_TR_camo {
			category = "Smg";
			displayName = "ADR-97 TR 5,7 mm (camouflage)";
			dlc = "OfficialMod";

			maxRecoilCoefficient = 2.55;
		};

		class SMG_03_TR_khaki {
			category = "Smg";
			displayName = "ADR-97 TR 5,7 mm (kaki)";
			dlc = "OfficialMod";

			maxRecoilCoefficient = 2.55;
		};

		class SMG_03_TR_hex {
			category = "Smg";
			displayName = "ADR-97 TR 5,7 mm (hex)";
			dlc = "OfficialMod";

			maxRecoilCoefficient = 2.55;
		};

		class SMG_03C_TR_black {
			category = "Smg";
			displayName = "ADR-97C TR 5,7 mm (noir)";
			dlc = "OfficialMod";

			maxRecoilCoefficient = 2.55;
		};

		class SMG_03C_TR_camo {
			category = "Smg";
			displayName = "ADR-97C TR 5,7 mm (camouflage)";
			dlc = "OfficialMod";

			maxRecoilCoefficient = 2.55;
		};

		class SMG_03C_TR_khaki {
			category = "Smg";
			displayName = "ADR-97C TR 5,7 mm (kaki)";
			dlc = "OfficialMod";

			maxRecoilCoefficient = 2.55;
		};

		class SMG_03C_TR_hex {
			category = "Smg";
			displayName = "ADR-97C TR 5,7 mm (hex)";
			dlc = "OfficialMod";
			
			maxRecoilCoefficient = 2.55;
		};

		class SMG_03_black {
			category = "Smg";
			displayName = "ADR-97 5,7 mm (noir)";
			dlc = "OfficialMod";
			
			maxRecoilCoefficient = 2.55;
		};

		class SMG_03_camo {
			category = "Smg";
			displayName = "ADR-97 5,7 mm (camouflage)";
			dlc = "OfficialMod";
			
			maxRecoilCoefficient = 2.55;
		};

		class SMG_03_khaki {
			category = "Smg";
			displayName = "ADR-97 5,7 mm (kaki)";
			dlc = "OfficialMod";
			
			maxRecoilCoefficient = 2.55;
		};

		class SMG_03_hex {
			category = "Smg";
			displayName = "ADR-97 5,7 mm (hex)";
			dlc = "OfficialMod";
			
			maxRecoilCoefficient = 2.55;
		};

		class SMG_03C_black {
			category = "Smg";
			displayName = "ADR-97C 5,7 mm (noir)";
			dlc = "OfficialMod";
			
			maxRecoilCoefficient = 2.55;
		};

		class SMG_03C_camo {
			category = "Smg";
			displayName = "ADR-97C 5,7 mm (camouflage)";
			dlc = "OfficialMod";
			
			maxRecoilCoefficient = 2.55;
		};

		class SMG_03C_khaki {
			category = "Smg";
			displayName = "ADR-97C 5,7 mm (kaki)";
			dlc = "OfficialMod";
			
			maxRecoilCoefficient = 2.55;
		};

		class SMG_03C_hex {
			category = "Smg";
			displayName = "ADR-97C 5,7 mm (hex)";
			dlc = "OfficialMod";
			
			maxRecoilCoefficient = 2.55;
		};

		class RH_vz61 {
			category = "Smg";
			displayName = "Vz61 Skorpion";
			dlc = "";
		};

		// sgun:

		class sgun_HunterShotgun_01_F {
			category = "ShotGun";
			displayName = "Kozlice 12G";
			dlc = "Enoch";
		};

		class sgun_HunterShotgun_01_sawedoff_F {
			category = "ShotGun";
			displayName = "Kozlice 12G (canon scié)";
			dlc = "Enoch";
		};

	};
};