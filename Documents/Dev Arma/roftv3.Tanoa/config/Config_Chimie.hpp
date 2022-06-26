/*
	All Config for Chimie

	Autor:IronBlade
*/

class CfgChimie {

	class Map {

		class pos1 {

			fumi1[] = {
						{"Land_Warehouse_03_F",{2287.68,8593.29,-0.00565243}},
						"fumi1_ice_pos1"
					  };

			fumi2[] = {
						{"Land_Warehouse_03_F",{2287.68,8593.29,-0.00565243}},
						"fumi2_ice_pos1"
					  };
		};

		class pos2 {

			fumi1[] = {
						{"Land_i_Shed_Ind_F",{11558.6,2641.21,0.0796108}},
						"fumi1_ice_pos2"
					  };

			fumi2[] = {
						{"Land_i_Shed_Ind_F",{11558.6,2641.21,0.0796108}},
						"fumi2_ice_pos2"
					  };
		};
	};

	class Fluids {

		class empty {
			color[] = {0,0,0,1};
			displayName = "Vide";
			temp = 20;
		};

		// Base
		class acetone {
			color[] = {0.129,0.271,0.337,1};
			displayName = "C3H6O";
			temp = 20;
		};

		class ammoniac {
			color[] = {0.682,0.698,0.647,1};
			displayName = "NH3";
			temp = 22;
		};

		class acide_hydrochloric {
			color[] = {0.737,0.702,0.4,1};
			displayName = "HCl";
			temp = 21;
		};

		class lithium {
			color[] = {0.592,0.529,0.451,1};
			displayName = "Li";
			temp = 25;
		};

		class phosphoreRouge {
			color[] = {0.686,0.216,0.161,1};
			displayName = "P";
			temp = 22;
		};

		class sodiumhydroxide {
			color[] = {0.8,0.824,0.788,1};
			displayName = "NaOH";
			temp = 22;
		};

		class acidesulfuric {
			color[] = {0.137,0.145,0.173,1};
			displayName = "H2SO4";
			temp = 22;
		};

		class toluene {
			color[] = {0.204,0.227,0.2,1};
			displayName = "C7H8";
			temp = 23;
		};

		class pseudoephedrine {
			color[] = {0.765,0.675,0.463,1};
			displayName = "C10H15NO";
			temp = 24;
		};

		class mercure {
			color[] = {0.537,0.537,0.537,1};
			displayName = "Hg";
			temp = 26;
		};

		class javel {
			color[] = {1,1,1,1};
			displayName = "NaClO";
			temp = 20;
		};

		class azote {
			color[] = {0,0.953,1,1};
			displayName = "N";
			temp = -198;
		};

		class waterBottle {
			color[] = {0.537,0.812,0.898,1};
			displayName = "H2O";
			temp = 20;
		};
		class heroin_processed {
			color[] = {0.537,0.812,0.898,1};
			displayName = "Opium";
			temp = 20;
		};

		class CNH3H6O {	displayName = "CNH3H6O"; };
		class H2NaCl { displayName = "H2NaCl"; };
		class COOLi { displayName = "COOLi"; };
		class C3P { displayName = "C3P";
				result[] = {
				{"C3P", 100}
			};
		 };
		class C3SO2 { displayName = "C3SO2"; };
		class C4H3 { displayName = "C4H3"; };
		class C2Hg2 { displayName = "C2Hg2"; };
		class CH2CHNa { displayName = "CH2CHNa"; };
		class COO2CH3 { displayName = "COO2CH3"; };
		class CH3SO2 { displayName = "CH3SO2"; };
		class H3CNa { displayName = "H3CNa"; };
		class CHNaClOH { displayName = "CHNaClOH"; };
		class C4CHN { displayName = "C4CHN"; };
		class NaClO2H { displayName = "NaClO2H"; };
		class C3H2O { displayName = "C3H2O"; };
		class C12H2N { displayName = "C12H2N"; };
		class CHNaCl6 { displayName = "CHNaCl6"; };
		class COOCHN { displayName = "COOCHN"; };
		class NaClCH3 { displayName = "NaClCH3"; };
		class CHPNaCl { displayName = "CHPNaCl"; };
		class NH2HCL { displayName = "NH2HCL"; };
		class LiNH2 { displayName = "LiNH2"; };
		class P3NHC { displayName = "P3NHC"; };
		class NHNAO2 { displayName = "NHNAO2"; };
		class SOH2NH { displayName = "SOH2NH"; };
		class NH4C11H2 { displayName = "NH4C11H2"; };
		class Hg2NH4 { displayName = "Hg2NH4"; };
		class NaClNH3 { displayName = "NaClNH3"; };
		class NHCH2O { displayName = "NHCH2O"; };
		class NHC8NO { displayName = "NHC8NO"; };
		class COONH { displayName = "COONH"; };
		class COO4H12 {
			displayName = "Crack";
			result[] = {
				{"crack60", 60},
				{"crack70", 70},
				{"crack80", 80},
				{"crack90", 90},
				{"crack100", 100}
			};
		};
		class NH12C { displayName = "NH12C"; };
		class H2SO8NH { displayName = "H2SO8NH"; };
		class H3SONH { displayName = "H3SONH"; };
		class SONaClNH { displayName = "SONaClNH"; };
		class C2NH12 { displayName = "C2NH12"; };
		class NaClNH8 { displayName = "NaClNH8"; };
		class HCLHSO { displayName = "HCLHSO"; };
		class HCLC2H4 { displayName = "HCLC2H4"; };
		class HCLC12H8 { displayName = "HCLC12H8"; };
		class HCLHg4 { displayName = "HCLHg4"; };
		class HCLNaCl2 { displayName = "HCLNaCl2"; };
		class HCLH2O { displayName = "HCLH2O"; };
		class HCLC8NO { displayName = "HCLC8NO"; };
		class CN2NH { displayName = "CN2NH"; };
		class NaHCl4 { displayName = "NaHCl4"; };
		class PNA2NH { displayName = "PNA2NH"; };
		class LiHCL { displayName = "LiHCL"; };
		class HCLP2 { displayName = "HCLP2"; };
		class COOHCL2 { displayName = "COOHCL2"; };
		class HCLH13N { displayName = "HCLH13N"; };
		class HCLSO6 { displayName = "HCLSO6"; };
		class HCLH4SO4 { displayName = "HCLH4SO4"; };
		class HCLSONaCl { displayName = "HCLSONaCl"; };
		class HCLC2H8N { displayName = "HCLC2H8N"; };
		class HCLNaCl8 { displayName = "HCLNaCl8"; };
		class HCLH12COO { displayName = "HCLH12COO"; };
		class HCLNaHCl { displayName = "HCLNaHCl"; };
		class HCLPnaH12 { displayName = "HCLPnaH12"; };
		class LiP2 { displayName = "LiP2"; };
		class LiNaOH { displayName = "LiNaOH"; };
		class LiC6H { displayName = "LiC6H"; };
		class LiC10H { displayName = "LiC10H"; };
		class LiCNa { displayName = "LiCNa"; };
		class LiCOO4H { displayName = "LiCOO4H"; };
		class LiH2S { displayName = "LiH2S"; };
		class LiH3S0 { displayName = "LiH3S0"; };
		class LiSONaCl { displayName = "LiSONaCl"; };
		class LiC2H4 { displayName = "LiC2H4"; };
		class LiNaCl { displayName = "LiNaCl"; };
		class LiCOOH2 { displayName = "LiCOOH2"; };
		class LiHg2 { displayName = "LiHg2"; };
		class LiNaCl3 { displayName = "LiNaCl3"; };
		class LiH20 { displayName = "LiH20"; };
		class LiC8H2N { displayName = "LiC8H2N"; };
		class SONaClOH2 { displayName = "SONaClOH2"; };
		class LiNaHCl2 { displayName = "LiNaHCl2"; };
		class LiNaH4 { displayName = "LiNaH4"; };
		class PNaOH2 { displayName = "PNaOH2"; };
		class PH2SO4 { displayName = "PH2SO4"; };
		class PC6H3 { displayName = "PC6H3"; };
		class PC18H { displayName = "PC18H"; };
		class C8H12NO {	displayName = "C8H12NO"; };
		class NaHClCOO { displayName = "NaHClCOO"; };
		class PHgC { displayName = "PHgC"; };
		class NaClP2 { displayName = "NaClP2"; };
		class NaClH8 { displayName = "NaClH8"; };
		class H2OP { displayName = "H2OP"; };
		class PC4NO2 { displayName = "PC4NO2"; };
		class PCOONa2 { displayName = "PCOONa2"; };
		class PCH4N { displayName = "PCH4N"; };
		class H2SOC3 { displayName = "H2SOC3"; };
		class PSO7C { displayName = "PSO7C"; };
		class NaC8HO { displayName = "NaC8HO"; };
		class COONaCl { displayName = "COONaCl"; };
		class C8NaCH2 { displayName = "C8NaCH2"; };
		class COOH15NO { displayName = "COOH15NO"; };
		class NaSO5 { displayName = "NaSO5"; };
		class H3NaSo { displayName = "H3NaSo"; };
		class H2SO5 { displayName = "H2SO5"; };
		class NaSO12 { displayName = "NaSO12"; };
		class NaC8H { displayName = "NaC8H"; };
		class Na2Cl5 { displayName = "Na2Cl5"; };
		class NaHClN { displayName = "NaHClN"; };
		class Na2Cl2 { displayName = "Na2Cl2"; };
		class NaHP { displayName = "NaHP"; };
		class H2CL4 { displayName = "H2CL4"; };
		class H3SO7CO4 { displayName = "H3SO7CO4"; };
		class C2H4NH2 {	displayName = "C2H4NH2"; };
		class C12H2SO { displayName = "C12H2SO"; };
		class HgNH2 { displayName = "HgNH2"; };
		class H2NaCl8 { displayName = "H2NaCl8"; };
		class coona { displayName = "COONA"; };
		class H2OC3 { displayName = "H2OC3"; };
		class PSONaCl { displayName = "PSONaCl"; };
		class C2H4P2 { displayName = "C2H4P2"; };
		class PNaCl { displayName = "PNaCl"; };
		class PCOOH12 { displayName = "PCOOH12"; };
		class P2NaH3 { displayName = "P2NaH3"; };
		class NaOH8 { displayName = "NaOH8"; };
		class H2CH15 { displayName = "H2CH15"; };
		class CPNaCl2 { displayName = "CPNaCl2"; };
		class HgC12 { displayName = "HgC12"; };
		class C24Na { displayName = "C24Na"; };
		class NaOC9 { displayName = "NaOC9"; };
		class NaC10H9 { displayName = "NaC10H9"; };
		class NaHg4 { displayName = "NaHg4"; };
		class H2NaHCl { displayName = "H2NaHCl"; };
		class NaClH3 { displayName = "NaClH3"; };
		class C7H2C8 { displayName = "C7H2C8"; };
		class C6Hg2 { displayName = "C6Hg2"; };
		class NaClC3 { displayName = "NaClC3"; };
		class C4H2O { displayName = "C4H2O"; };
		class NaC2Cl { displayName = "NaC2Cl"; };
		class COOC5 { displayName = "COOC5"; };
		class CNaHCl2 { displayName = "CNaHCl2"; };
		class Na2Cl3 { displayName = "Na2Cl3"; };
		class H2NaCO { displayName = "H2NaCO"; };
		class H12N3 { displayName = "H12N3"; };
		class H2COONa { displayName = "H2COONa"; };
		class H2CH9 { displayName = "H2CH9"; };
		class H4SO6 { displayName = "H4SO6"; };
		class H3SO8 { displayName = "H3SO8"; };
		class H2NaClO { displayName = "H2NaClO"; };
		class H2C2H { displayName = "H2C2H"; };
		class H2NaCl4 { displayName = "H2NaCl4"; };
		class C3H2O2 { displayName = "C3H2O2"; };
		class C12H23 { displayName = "C12H23"; };
		class C12HCO { displayName = "C12HCO"; };
		class C12H2CO { displayName = "C12H2CO"; };
		class CH3SO7 { displayName = "CH3SO7"; };
		class C4H2O3 { displayName = "C4H2O3"; };
		class C8COOH2 { displayName = "C8COOH2"; };
		class C4H2SO { displayName = "C4H2SO"; };
		class C6H3SO { displayName = "C6H3SO"; };
		class C8SONaCl { displayName = "C8SONaCl"; };
		class C8NH2 { displayName = "C8NH2"; };
		class SNaClC3 { displayName = "SNaClC3"; };
		class C12H2 { displayName = "C12H2"; };
		class C4NaCl2 { displayName = "C4NaCl2"; };
		class C3COOH3 { displayName = "C3COOH3"; };
		class NaHC5 { displayName = "NaHC5"; };
		class C8H8N { displayName = "C8H8N"; };
		class NaClC8H { displayName = "NaClC8H"; };
		class C8H1NO8 { displayName = "C8H1NO8"; };
		class CNaClC2 { displayName = "CNaClC2"; };
		class PNaHC8 { displayName = "PNaHC8"; };
		class C12HSO { displayName = "C12HSO"; };
		class COO8H { displayName = "COO8H"; };
		class COOH2S4 { displayName = "COOH2S4"; };
		class C4PNaCl { displayName = "C4PNaCl"; };
		class HgNaC3 { displayName = "HgNaC3"; };
		class HgH2O2 { displayName = "HgH2O2"; };
		class NaCOOH { displayName = "NaCOOH"; };
		class NaClCH2 { displayName = "NaClCH2"; };
		class NaClH3S { displayName = "NaClH3S"; };
		class NaClSO { displayName = "NaClSO"; };
		class NaClNH { displayName = "NaClNH"; };
		class NaCl3H3 { displayName = "NaCl3H3"; };
		class NaClH2N { displayName = "NaClH2N"; };
		class NaClH12 { displayName = "NaClH12"; };
		class NaCl2P { displayName = "NaCl2P"; };
		class COO9CH { displayName = "COO9CH"; };
		class C12H2C { displayName = "C12H2C"; };
		class C8HSO3 { displayName = "C8HSO3"; };
		class C8HNaCl { displayName = "C8HNaCl"; };
		class COOSONa { displayName = "COOSONa"; };
		class COOC2H { displayName = "COOC2H"; };
		class CNaNCl { displayName = "CNaNCl"; };
		class COH15N { displayName = "COH15N"; };
		class CONaHCl { displayName = "CONaHCl"; };
		class PNaHCO { displayName = "PNaHCO"; };
		class HgC9Na { displayName = "HgC9Na"; };
		class HgCOONa { displayName = "HgCOONa"; };
		class HgH12N { displayName = "HgH12N"; };
		class HgSO2 { displayName = "HgSO2"; };
		class HgH3SO { displayName = "HgH3SO"; };
		class HgNaSO2 { displayName = "HgNaSO2"; };
		class C2H3Hg { displayName = "C2H3Hg"; };
		class NaHgCl2 { displayName = "NaHgCl2"; };
		class HgCOO { displayName = "HgCOO"; };
		class HgNaHCl { displayName = "HgNaHCl"; };
		class HgPNa2 { displayName = "HgPNa2"; };
		class NaCl8H { displayName = "NaCl8H"; };
		class COH3SO3 { displayName = "COH3SO3"; };
		class CHSO3 { displayName = "CHSO3"; };
		class CSONaC { displayName = "CSONaC"; };
		class COOC2H4 { displayName = "COOC2H4"; };
		class NaClHC { displayName = "NaClHC"; };
		class COOH23N { displayName = "COOH23N"; };
		class CNaHCl { displayName = "CNaHCl"; };
		class COPNaHCl { displayName = "COPNaHCl"; };
		class COH3SO2 { displayName = "COH3SO2"; };
		class H2SO3 { displayName = "H2SO3"; };
		class H2SOC2 { displayName = "H2SOC2"; };
		class H2NaCl2 { displayName = "H2NaCl2"; };
		class H2SOCO2 { displayName = "H2SOCO2"; };
		class H2SNaCl { displayName = "H2SNaCl"; };
		class H2PNaHCl { displayName = "H2PNaHCl"; };
		class H4SO2 { displayName = "H4SO2"; };
		class SONaCl { displayName = "SONaCl"; };
		class SONaClH { displayName = "SONaClH"; };
		class SONaClO { displayName = "SONaClO"; };
		class SONaHCl { displayName = "SONaHCl"; };
		class SONaCl3 { displayName = "SONaCl3"; };
		class SONaClS { displayName = "SONaClS"; };
		class C17H19NO3 {
			displayName = "C17H19NO3";
			result[] = {
				{"morphine50", 50},
				{"morphine70", 70},
				{"morphine90", 90},
				{"morphine95", 95},
				{"morphineill", 100}
			};
		};
		class C18H21NO3 {
            displayName = "C18H21NO3";
            result[] = {
                {"krokodil50", 50},
                {"krokodil65", 65},
                {"krokodil80", 80},
                {"krokodil95", 95},
                {"krokodilpur", 100}
            };
        };
		class PNaHClC2 {
			displayName = "Ice";
			result[] = {
				{"ice50", 50},
				{"ice55", 55},
				{"ice60", 60},
				{"ice65", 65},
				{"ice70", 70},
				{"ice75", 75},
				{"ice80", 80},
				{"ice85", 85},
				{"ice90", 90},
				{"ice91", 91},
				{"ice92", 92},
				{"ice93", 93},
				{"ice94", 94},
				{"ice95", 95},
				{"ice96", 96},
				{"ice97", 97},
				{"ice98", 98},
				{"ice100", 99},
				{"iceBlue", 100}
			};
		};
		class x {
			color[] = {0,0,0,1};
			displayName = "X";
		};
	};
	class Ingredients {

		class acetone { displayName = "Acetone"; amount = 10; };
		class ammoniac { displayName = "Ammoniaque"; amount = 15; };
		class acide_hydrochloric { displayName = "Acide chlorhydrique"; amount = 25; };
		class lithium { displayName = "Lithium"; amount = 10; };
		class phosphoreRouge {displayName = "Phosphore Rouge"; amount = 5; };
		class sodiumhydroxide { displayName = "Soude"; amount = 10; };
		class acidesulfuric { displayName = "Acide Sulfurique"; amount = 10; };
		class toluene { displayName = "Toluène"; amount = 8; };
		class pseudoephedrine { displayName = "Pseudoéphédrine"; amount = 2; };
		class mercure { displayName = "Mercure"; amount = 5; };
		class javel { displayName = "Javel"; amount = 100; };
		class azote { displayName = "Azote"; amount = 10; };
		class waterBottle { displayName = "Eau"; amount = 100; };
		class heroin_processed { displayName = "Opium"; amount = 5; };
	};
	class Resultats {
		class PNaHClC2 { displayName = "Ice"; nbWant = 10; };
		class COO4H12 { displayName = "Crack"; nbWant = 10; };
		class C18H21NO3 { displayName = "Krokodil"; nbWant = 10; };
		class C17H19NO3 { displayName = "Morphine"; nbWant = 10; };
		class C3P { displayName = "C3P"; nbWant = 10; };
	};
};