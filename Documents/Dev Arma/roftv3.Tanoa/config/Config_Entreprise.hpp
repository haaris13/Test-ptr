/*
	Class Entreprise

	Autor:IronBlade
*/

class CfgEntreprise {

	class geek { 
		id = 1;
        variable = "geek";
        displayName = "IT Composant";
        owners[] = {"76561198059757685", "76561198125496488"};
        buildings[] = {
        				{"Land_SM_01_Shed_F",{9148.016,10154.053,0.294}},
        				{"Land_SM_01_Shed_F",{9125.651,10162.482,0.463}}
        			 };

        doors[] = {
        				{"Land_ConcreteWall_01_l_gate_F",{9128.154,10135.361,0}},
        				{"Land_ConcreteWall_01_l_gate_F",{9172.004,10119.399,0}}
        			 };

       	spawnMark = "ent_spawn_geek";
       	mapMarkVar = "geek_composant_mark";
       	mapMarkText[] = {"IT Composant (Ouvert)","IT Composant (Fermé)"};
        nbChest = 4;

        class Processing {

        	class compo1 {
	        	Required[] = {{"copper_refined",1}};
		        Given[] = {{"cable",1}};
		        Text = "Montage des Composants";
		    };

		    class compo2 {
	        	Required[] = {{"iron_refined",1}};
		        Given[] = {{"ssd",1}};
		        Text = "Montage des Composants";
		    };

		    class compo3 {
	        	Required[] = {{"tin_bar",1}};
		        Given[] = {{"ventirad",1}};
		        Text = "Montage des Composants";
		    };

		    class compo4 {
	        	Required[] = {{"silver_bar",1}};
		        Given[] = {{"alimentation",1}};
		        Text = "Montage des Composants";
		    };

		    class compo5 {
	        	Required[] = {{"rhodium_bar",1}};
		        Given[] = {{"carteMere",1}};
		        Text = "Montage des Composants";
		    };

		    class compo6 {
	        	Required[] = {{"platinum_bar",1}};
		        Given[] = {{"processeur",1}};
		        Text = "Montage des Composants";
		    };

		    class compo7 {
	        	Required[] = {{"gold_bar",1}};
		        Given[] = {{"carteGraphique",1}};
		        Text = "Montage des Composants";
		    };

		    class compo8 {
	        	Required[] = {{"silver_bar",1},{"iridium_bar",1}};
		        Given[] = {{"rambar",1}};
		        Text = "Montage des Composants";
		    };

		    class compo9 {
	        	Required[] = {{"silver_bar",5},{"graphite_bar",5}};
		        Given[] = {{"boitier",1}};
		        Text = "Montage des Composants";
		    };

		    class compo10 {
	        	Required[] = {{"cable",10},{"ssd",4},{"ventirad",1},{"alimentation",1},{"carteMere",1},{"processeur",1},{"carteGraphique",2},{"rambar",8},{"boitier",1}};
		        Given[] = {{"pcgamer",1}};
		        Text = "Montage des Composants";
		    };

		    class compo11 {
	        	Required[] = {{"carteMere",2},{"alimentation",2},{"carteGraphique",2},{"ventirad",2}};
		        Given[] = {{"brouilleur",1}};
		        Text = "Montage des Composants";
		    };

		    class compo12 {
	        	Required[] = {{"carteMere",2},{"processeur",2},{"carteGraphique",2}};
		        Given[] = {{"detecteur",1}};
		        Text = "Montage des Composants";
		    };
        };
    };

	// Geek Composant Plus  

	class geekcomposantplus {
		id = 5;
        variable = "geekcomposantplus";
        displayName = "Geek Composant +";
        owners[] = {"76561198059757685"};

        buildings[] = {
        				{"Land_i_Shed_Ind_F",{9402.16,7566.87,0.250175}}
        			 };

        doors[] = {
        				{"Land_ConcreteWall_01_l_gate_F",{9462.82,7562.01,-0.0109787}},
        				{"Land_ConcreteWall_01_l_gate_F",{9478.13,7563.3,-0.0089798}}
        			 };

       	spawnMark = "ent_spawn_geekcomposantplus";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 8;

        class Processing {};
    };

	// POLLOS Palace

    class polloPalace {
		id = 2;
        variable = "polloPalace";
        displayName = "Pollo Palace";
        owners[] = {"76561198059757685", "76561197993064702"};

        buildings[] = {
        				{"Land_Warehouse_03_F",{11303.2,3856.05,-0.0111847}}
        			  };

        doors[] = {
					{"Land_ConcreteWall_01_l_gate_F",{15082.451,33.893,0}}
				};

       	spawnMark = "ent_spawn_polloPalace_1";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 8;

        class Processing {

        	class compo1 {
	        	Required[] = {{"marijuana",5}};
		        Given[] = {{"glaceFolle",1}};
		        Text = "Transformation";
		    };

		    class compo2 {
	        	Required[] = {{"cocaine_processed",5}};
		        Given[] = {{"spaceCake",1}};
		        Text = "Transformation";
		    };

		    class compo3 {
	        	Required[] = {{"strawberry_processed",10}};
		        Given[] = {{"fioleblinded",1}};
		        Text = "Transformation";
		    };

		    class compo4 {
	        	Required[] = {{"khat_processed",1}};
		        Given[] = {{"kat",1}};
		        Text = "Transformation";
		    };
        };
    };

	//Pollos Palace Plus

    class polloPalacePlus {
		id = 4;
        variable = "polloPalacePlus";
        displayName = "Pollo Palace +";
        owners[] = {"76561198059757685", "76561197993064702"};

        buildings[] = {
        				{"Land_i_Shed_Ind_F",{2408.24,7230.64,0.395943}}
        			  };

        doors[] = {
						{"Land_ConcreteWall_01_l_gate_F",{2409.72,7187.37,0.0198326}}
						};

       	spawnMark = "ent_spawn_polloPalaceplus";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 8;

        /*
			this addAction["Fabrication",life_fnc_transformOpenDiag,[["compo1","compo2","compo3","compo4","compo5","compo6","compo7","compo8","compo9"],"polloPalacePlus"],0,false,false,"""",'playerSide == civilian'];
        */

        class Processing {

        	class compo1 {
	        	Required[] = {{"marijuana",5}};
		        Given[] = {{"glaceFolle",1}};
		        Text = "Transformation";
		    };

		    class compo2 {
	        	Required[] = {{"cocaine_processed",5}};
		        Given[] = {{"spaceCake",1}};
		        Text = "Transformation";
		    };

		    class compo3 {
	        	Required[] = {{"strawberry_processed",10}};
		        Given[] = {{"fioleblinded",1}};
		        Text = "Transformation";
		    };

		    class compo4 {
	        	Required[] = {{"iceBlue",1}};
		        Given[] = {{"yaabaa",2}};
		        Text = "Transformation";
		    };

		    class compo5 {
	        	Required[] = {{"ice100",1}};
		        Given[] = {{"yaabaa",1}};
		        Text = "Transformation";
		    };

		    class compo6 {
	        	Required[] = {{"khat_processed",1}};
		        Given[] = {{"kat",1}};
		        Text = "Transformation";
		    };
        };
    };

    class kaelevra {
	  id = 3;
      variable = "kaelevra";
      displayName = "Chez Myroslav";
      owners[] = {"76561198059757685", "76561198282496561"};

        buildings[] = {
        				{"Land_Pub_A",{12844.042,7272.962,2.814}},
								{"Land_SM_01_shed_F",{12831.381,7247.005,0}}
        			  };

        doors[] = {{"Land_ConcreteWall_01_l_gate_F",{15110.523,161.083,2.195}}};

       	spawnMark = "ent_spawn_kaelevra";
       	mapMarkVar = "ent_spawn_kaelevra";
       	mapMarkText[] = {"Myroslav (tél: 606150) : Ouvert","Myroslav (tél: 606150) : Fermé"};
        nbChest = 4;

        class Processing {
        	class compo1 {
	        	Required[] = {{"salema",1},{"riz",1}};
		        Given[] = {{"sushi",1}};
		        Text = "Cuisine";
		    };

		    class compo2 {
	        	Required[] = {{"mouton",1},{"mais",1}};
		        Given[] = {{"grec",1}};
		        Text = "Cuisine";
		    };

		    class compo3 {
	        	Required[] = {{"poulet",1},{"riz",1},{"salema",1}};
		        Given[] = {{"paela",1}};
		        Text = "Cuisine";
		    };

		    class compo4 {
	        	Required[] = {{"mais",1},{"riz",1},{"tbacon",1}};
		        Given[] = {{"rizCantonais",1}};
		        Text = "Cuisine";
		    };

		    class compo5 {
	        	Required[] = {{"mouton",1},{"riz",1},{"raisin",1},{"poulet",1}};
		        Given[] = {{"tajin",1}};
		        Text = "Cuisine";
		    };

		    class compo6 {
	        	Required[] = {{"mouton",1},{"poulet",1},{"riz",1},{"sake",1}};
		        Given[] = {{"platJour",1}};
		        Text = "Cuisine";
		    };

		    class compo7 {
	        	Required[] = {{"riz",1}};
		        Given[] = {{"sake",1}};
		        Text = "Cuisine";
		    };

		    class compo8 {
	        	Required[] = {{"raisin",1}};
		        Given[] = {{"vinsRouge",1}};
		        Text = "Cuisine";
		    };

		    class compo9 {
	        	Required[] = {{"pomdeterre",1},{"tbacon",4}};
		        Given[] = {{"tartiflette",1}};
		        Text = "Cuisine";
		    };

		    class compo10 {
	        	Required[] = {{"salema_raw",1}};
		        Given[] = {{"salema",1}};
		        Text = "Cuisine";
		    };

		    class compo11 {
	        	Required[] = {{"paper",10000}};
		        Given[] = {{"ticket",1}};
		        Text = "Ticket";
		    };

		    class compo12 {
	        	Required[] = {{"paper",1}};
		        Given[] = {{"bons",1}};
		        Text = "Ticket";
		    };

		    class compo13 {
	        	Required[] = {{"riz",1},{"poulet",1},{"kat",1}};
		        Given[] = {{"tacos",1}};
		        Text = "C'est Parti Chef !";
		    };
        };
    };




  class bcc {
	  id = 8;
      variable = "bcc";
      displayName = "BCC Brother Car Corporation";
      owners[] = {"76561198059757685", "76561198256318122"};

        buildings[] = {
        				
        			  };

        doors[] = {};

       	spawnMark = "ent_spawn_bcc";
       	mapMarkVar = "ent_spawn_bcc";
       	mapMarkText[] = {"BCC - Brother Car Corporation (tél: 606153) : Ouvert","BCC (tél: 606153) : Fermé"};
        nbChest = 4;

       
    };


	// Jewels of Tanoa Inc.

	class jewelsoftanoinc {
		id = 6;
        variable = "jewelsoftanoinc";
        displayName = "Or Izon";
        owners[] = {"76561198059757685", "76561197993064702","76561199052344199","76561198033240010","76561198200216274","76561198282496561"}; 
		buildings[] = {
        				{"Land_i_Shed_Ind_F",{5515.55,12005.1,0.0912395}},
        				{"Land_i_Shed_Ind_F",{5504.94,11952,0.102838}}
        			 };

        doors[] = {{"Land_ConcreteWall_01_l_gate_F",{5498.52,12006.9,0}}};

       	spawnMark = "ent_spawn_JOTI";
       	mapMarkVar = "JOTI_mark";
       	mapMarkText[] = {"Or Izon (Ouvert)","Or Izon (Fermé)"};
        nbChest = 4;

		class Processing {

        	class compo1 {
	        	Required[] = {{"iron_refined",3},{"silver_bar",5},{"emerald_cut",5}};
		        Given[] = {{"bracelet_incru",1}};
		        Text = "Fabrication Bracelet Incrusté en cours";
		    };

		    class compo2 {
	        	Required[] = {{"silver_bar",3},{"platinum_bar",5},{"ruby_cut",4}};
		        Given[] = {{"bracelet_orne",1}};
		        Text = "Fabrication Bracelet Orné en cours";
		    };

		    class compo3 {
	        	Required[] = {{"iridium_bar",3},{"gold_bar",2},{"rhodium_bar",5},{"diamond_cut",3}};
		        Given[] = {{"collier_orne",1}};
		        Text = "Fabrication Collier Orné en cours";
		    };

		    class compo4 {
	        	Required[] = {{"iridium_bar",5},{"gold_bar",3},{"diamond_cut",2},{"grandidierite_cut",2}};
		        Given[] = {{"petite_parure",1}};
		        Text = "Fabrication Petite Parure en cours";
		    };

		    class compo5 {
	        	Required[] = {{"iridium_bar",3},{"gold_bar",5},{"diamond_cut",2},{"grandidierite_cut",2},{"redruby_cut",1}};
		        Given[] = {{"grande_parure",1}};
		        Text = "Fabrication Grande Parure en cours";
		    };

		    class compo6 {
	        	Required[] = {{"amethyst_cut",4},{"gold_bar",4},{"platinum_bar",4}};
		        Given[] = {{"boucle_oreil",1}};
		        Text = "Fabrication Boucle D'oreille en cours";
		    };
      };
    };

    class narvalo {
		id = 7;
	    variable = "narvalo";
	    displayName = "TCS Dépannage";
	    owners[] = {"76561198059757685", "76561197993064702"};
			buildings[] = {
	    	{"Land_i_Shed_Ind_F",{9066.13,11235.9,0.0873337}}
	    };

	    doors[] = {{"Land_ConcreteWall_01_l_gate_F",{9020.159,11245.372,0.141}}};

       	spawnMark = "spawn_erp_1";
       	mapMarkVar = "Narvalo_Depanage";
		mapMarkText[] = {"TCS Dépannage (tél: 60) : Ouvert","TCS Dépannage (tél: 60) : Fermé"};
        nbChest = 4;

		class Processing {};
    };

    class security {
		id = 8;
        variable = "security";
        displayName = "Securité";
        owners[] = {"76561198059757685", "76561197993064702", "76561198282496561", "76561198365649140","76561198290496191"};   
		buildings[] = {
			{"Land_Addon_04_F", {5893.41,10253.1,-0.687263}}
		};

        doors[] = {{"Land_ConcreteWall_01_l_gate_F",{5888.368,10293.919,0}}};

       	spawnMark = "spawn_security_1";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 4;

		class Processing {};
    };
};
