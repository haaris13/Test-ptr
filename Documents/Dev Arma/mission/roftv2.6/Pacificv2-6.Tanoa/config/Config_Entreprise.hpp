/*
	Class Entreprise
	
	Autor:IronBlade
*/

class CfgEntreprise {

	class narvalo {
		id = 1;
        variable = "narvalo";
        displayName = "Dépannage";
        owners[] = {"ccc"};
		buildings[] = {
        				{"DepanneurPayOrDieFusioH",{9127.64,10160.5,0.855656}}
        			 };

        doors[] = {
        	//{"Land_ConcreteWall_01_l_gate_F",{9020.159,11245.372,0.141}}
        };

       	spawnMark = "spawn_erp_1";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 2;
		
		class Processing {};
    };

    class press {
    	id = 2;
        variable = "press";
        displayName = "Press";
        owners[] = {"ccc"};
		buildings[] = {
        				{"Land_Shop_Town_03_F",{3045.44,11146.1,0.213549}}
        			 };

        doors[] = {
        	//{"Land_ConcreteWall_01_l_gate_F",{9020.159,11245.372,0.141}}
        };

       	spawnMark = "spawn_press";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 1;
		
		class Processing {};
    };

    class ocas {
    	id = 3;
        variable = "ocas";
        displayName = "Occassion Dépot";
        owners[] = {"ccc"};
		buildings[] = {};

        doors[] = {
        	//{"Land_ConcreteWall_01_l_gate_F",{9020.159,11245.372,0.141}}
        };

       	spawnMark = "ocas_spawn";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 1;
		
		class Processing {};
    };

    class pomme {
    	id = 4;
        variable = "pomme";
        displayName = "La Pomme dorée";
        owners[] = {"ccc"};
		buildings[] = {
			{"Land_Bar_01_F",{5086.82,8695.67,-0.882404}}
		};

        doors[] = {
        	//{"Land_ConcreteWall_01_l_gate_F",{9020.159,11245.372,0.141}}
        };

       	spawnMark = "pomme_spawn";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 1;
		
		class Processing {};
    };

    class drug {
    	id = 5;
        variable = "drug";
        displayName = "Drug";
        owners[] = {"76561198059757685", "76561198118138558", "76561198204777776"};
		buildings[] = {
			{"Land_i_Shed_Ind_F",{10907.5,7850.18,0.0963211}}
		};

        doors[] = {
        	//{"Land_ConcreteWall_01_l_gate_F",{9020.159,11245.372,0.141}}
        };

       	spawnMark = "drug_spawn";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 1;
		
		class Processing {

		    class joint1 {
		        marker = "";
		        Required[] = {{"marijuana",15}};
		        Given[] = {{"joint1",1}};
		        Text = "Joint d'el olvido";
		    };

		    class joint2 {
		        marker = "";
		        Required[] = {{"marijuana",5}};
		        Given[] = {{"joint2",1}};
		        Text = "Joint d'el concentración";
		    };

		    class joint3 {
		        marker = "";
		        Required[] = {{"mauiwaui_processed",3}};
		        Given[] = {{"joint3",1}};
		        Text = "Joint d'el locura";
		    };

		    class blunt1 {
		        marker = "";
		        Required[] = {{"purple_processed",2}};
		        Given[] = {{"blunt1",1}};
		        Text = "Blunt d'el sucio";
		    };

		    class blunt2 {
		        marker = "";
		        Required[] = {{"strawberry_processed",1}};
		        Given[] = {{"blunt2",1}};
		        Text = "Blunt d'el velocidad";
		    };
		};
    };

    class johnson {
    	id = 6;
        variable = "johnson";
        displayName = "Johnson & co";
        owners[] = {"ccc"};
		buildings[] = {
			{"Land_Shop_Town_01_F",{7908.59,7730.58,0}},
			{"Land_Shop_Town_03_F",{7895.27,7716.99,0.279415}}			
		};

        doors[] = {
        	//{"Land_ConcreteWall_01_l_gate_F",{9020.159,11245.372,0.141}}
        };

       	spawnMark = "johnson_spawn";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 1;
		
		class Processing {};
    };

	/*

	class geek {
		id = 1;
        variable = "geek";
        displayName = "Geek Composant";
        owners[] = {"76561198091079051","76561198000457743"};
        buildings[] = {
        				{"Land_i_Shed_Ind_F",{9123.81,10165.6,0.13975}},
        				{"Land_i_Shed_Ind_F",{9147.23,10156.7,0.0750713}}
        			 };

        doors[] = {
        				{"Land_ConcreteWall_01_l_gate_F",{9128.154,10135.361,0}},
        				{"Land_ConcreteWall_01_l_gate_F",{9172.004,10119.399,0}}
        			 };

       	spawnMark = "ent_spawn_geek";
       	mapMarkVar = "geek_composant_mark";
       	mapMarkText[] = {"Geek Composant (Ouvert)","Geek Composant (Fermé)"};
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
        owners[] = {"76561198091079051","76561198000457743"};
		
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

    */
	
	// POLLOS Palace

	/*

    class polloPalace {
		id = 2;
        variable = "polloPalace";
        displayName = "Pollo Palace";
        owners[] = {""};

        buildings[] = {
        				{"Land_Warehouse_03_F",{11303.2,3856.05,-0.0111847}}
        			  };

        doors[] = {};

       	spawnMark = "ent_spawn_polloPalace_1";
       	mapMarkVar = "";
       	mapMarkText[] = {""};
        nbChest = 8;

        class Processing {

        	class compo1 {
	        	Required[] = {{"marijuana",5}};
		        Given[] = {{"glaceFolle",1}};
		        Text = "Transformation";
		    };

		    class compo2 {
	        	Required[] = {{"purple_processed",5}};
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

    */

	//Pollos Palace Plus

	/*
	
    class polloPalacePlus {
		id = 4;
        variable = "polloPalacePlus";
        displayName = "Pollo Palace +";
        owners[] = {""};

        buildings[] = {
        				{"Land_i_Shed_Ind_F",{2408.24,7230.64,0.395943}}
        			  };

        doors[] = {{"Land_ConcreteWall_01_l_gate_F",{2409.72,7187.37,0.0198326}}};

       	spawnMark = "ent_spawn_polloPalaceplus";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 8;

        // this addAction["Fabrication",life_fnc_transformOpenDiag,[["compo1","compo2","compo3","compo4","compo5","compo6","compo7","compo8","compo9"],"polloPalacePlus"],0,false,false,"""",'playerSide == civilian'];
        

        class Processing {

        	class compo1 {
	        	Required[] = {{"marijuana",5}};
		        Given[] = {{"glaceFolle",1}};
		        Text = "Transformation";
		    };

		    class compo2 {
	        	Required[] = {{"purple_processed",5}};
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

    class kaelevra
    {
    	id = 3;
        variable = "kaelevra";
        displayName = "Restaurant Le Kaelevra";
        owners[] = {""};

        buildings[] = {
        				{"Land_Slum_03_F",{8996.505,3570.234, 1.218}},
        				{"Land_Addon_04_F",{12851.8,7309.46,-0.100979}},
        				{"Land_Pub_A",{12844.798,7271.559,3.4}}
        			  };

        doors[] = {};

       	spawnMark = "ent_spawn_kaelevra";
       	mapMarkVar = "ent_spawn_kaelevra";
       	mapMarkText[] = {"Restaurant Le Kaelevra (Ouvert)","Restaurant Le Kaelevra (Fermé)"};
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
	        	Required[] = {{"paper",1}};
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
	
	// Jewels of Tanoa Inc.
	
	class jewelsoftanoinc {
		id = 6;
        variable = "jewelsoftanoinc";
        displayName = "Jewels of Tanoa Inc";
        owners[] = {""};
		buildings[] = {
        				{"Land_i_Shed_Ind_F",{5515.55,12005.1,0.0912395}},
        				{"Land_i_Shed_Ind_F",{5504.94,11952,0.102838}}
        			 };

        doors[] = {
        				{"Land_ConcreteWall_01_l_gate_F",{5498.52,12006.9,0}}
        			 };

       	spawnMark = "ent_spawn_JOTI";
       	mapMarkVar = "JOTI_mark";
       	mapMarkText[] = {"Jewels Of Tanoa.Inc (Ouvert)","Jewels Of Tanoa.Inc (Fermé)"};
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
*/
    

    /*

    class security {
		id = 9;
        variable = "security";
        displayName = "Securité";
        owners[] = {""};
		buildings[] = {
			{"Land_Addon_04_F", {5893.41,10253.1,-0.687263}}
		};

        doors[] = {
        	{"Land_ConcreteWall_01_l_gate_F",{5888.368,10293.919,0}}
        };

       	spawnMark = "spawn_security_1";
       	mapMarkVar = "";
       	mapMarkText[] = {"",""};
        nbChest = 4;
		
		class Processing {};
    };

    */
};