class Processing {

    class sushic {
        Required[] = {{"riz",1}};
        Given[] = {{"sushic",1}};
        Text = "Transformation";
        Cost = 0;
    };

    class polenta {
        Required[] = {{"mais",1}};
        Given[] = {{"polenta",1}};
        Text = "Transformation";
        Cost = 0;
    };

    class frite {
        Required[] = {{"pomdeterre",1}};
        Given[] = {{"frite",1}};
        Text = "Transformation";
        Cost = 0;
    };

    class sucre {
        Required[] = {{"sucrecanne",1}};
        Given[] = {{"sucre",1}};
        Text = "Transformation";
        Cost = 0;
    };

    // Mining (Myroslav)
    class compo1 {
        Required[] = {{"salema",1},{"riz",1}};
        Given[] = {{"sushi",1}};
        Text = "Cuisine";
        Cost = 0;
    };

    class compo2 {
        Required[] = {{"mouton",1},{"mais",1}};
        Given[] = {{"grec",1}};
        Text = "Cuisine";
        Cost = 0;
    };

    class compo3 {
        Required[] = {{"poulet",1},{"riz",1},{"salema",1}};
        Given[] = {{"paela",1}};
        Text = "Cuisine";
        Cost = 0;
    };

    class compo4 {
        Required[] = {{"mais",1},{"riz",1},{"tbacon",1}};
        Given[] = {{"rizCantonais",1}};
        Text = "Cuisine";
        Cost = 0;
    };

    class compo5 {
        Required[] = {{"mouton",1},{"riz",1},{"raisin",1},{"poulet",1}};
        Given[] = {{"tajin",1}};
        Text = "Cuisine";
        Cost = 0;
    };

    class compo6 {
        Required[] = {{"mouton",1},{"poulet",1},{"riz",1},{"sake",1}};
        Given[] = {{"platJour",1}};
        Text = "Cuisine";
        Cost = 0;
    };

    class compo7 {
        Required[] = {{"riz",1}};
        Given[] = {{"sake",1}};
        Text = "Cuisine";
        Cost = 0;
    };

    class compo8 {
        Required[] = {{"raisin",1}};
        Given[] = {{"vinsRouge",1}};
        Text = "Cuisine";
        Cost = 0;
    };

    class compo9 {
         Required[] = {{"pomdeterre",1},{"tbacon",4}};
         Given[] = {{"tartiflette",1}};
         Text = "Cuisine";
        Cost = 0;
     };

     class compo10 {
          Required[] = {{"salema_raw",1}};
          Given[] = {{"salema",1}};
          Text = "Cuisine";
        Cost = 0;
     };

      class compo11 {
        Required[] = {{"paper",1}};
        Given[] = {{"ticket",1}};
        Text = "Ticket";
        Cost = 0;
    };

    class compo12 {
        Required[] = {{"paper",1}};
        Given[] = {{"bons",1}};
        Text = "Ticket";
        Cost = 0;
    };

    class compo13 {
        Required[] = {{"riz",1},{"poulet",1},{"kat",1}};
        Given[] = {{"tacos",1}};
        Text = "C'est Parti Chef !";
        Cost = 0;
    };

    class compo14 {
        Required[] = {{"sucrecanne",1}};
        Given[] = {{"boutrhum",1}};
        Text = "boutrhum";
        Cost = 0;
    };

    class compo15 {
        Required[] = {{"mais",1}};
        Given[] = {{"biere",1}};
        Text = "biere";
        Cost = 0;
    };

    class compo16 {
        Required[] = {{"pomdeterre",1}};
        Given[] = {{"bvodka",1}};
        Text = "bvodka";
        Cost = 0;
    };

    class compo17 {
        Required[] = {{"raisin",1}};
        Given[] = {{"bchamp",1}};
        Text = "bchamp";
        Cost = 0;
    };
    class pepite {
        Required[] = {{"pepite",1}};
        Given[] = {{"pepite_or",1}};
        Text = "Raffinage";
        Cost = 0;
       // Profession = "prof_gathering";
    };
    class serpent {
        Required[] = {{"serpent",1}};
        Given[] = {{"peauSerpent",1}};
        Text = "Dépeçage des Serpent";
        Cost = 0;
    };

     class mancini {
        Required[] = {{"rock",1}};
        Given[] = {{"ciment",1}};
        Text = "Taillage des Pierres";
        Cost = 0;
        Profession = "prof_mining";
    };

        class grenat {
        Required[] = {{"grenat_uncuts",1}};
        Given[] = {{"grenat_cuts",1}};
        Text = "Taillage des Grenats";
        Cost = 0;
        Profession = "prof_mining";
    };

   /* class pierre {
        Required[] = {{"bismuthP",1}};
        Given[] = {{"bismuthT",1}};
        Text = "Polissage du bismuth";
        Cost = 0;
        Profession = "prof_mining";
    }; */

     class exportsarl {
       
        Required[] = {{"diamond_cuts",1},{"palette",1},{"grenat_cuts",1}};
        Given[] = {{"baguePprecieuse",1}};
        Text = "Taillage des bagues";
        Cost = 0;
        Profession = "prof_mining";
    };  


    class diamondd {
        Required[] = {{"diamond_uncuts",1}};
        Given[] = {{"diamond_cuts",1}};
        Text = "Taillage des Diamants";
        Cost = 0;
        Profession = "prof_mining";
    };

    class anatoly {
        Required[] = {{"raisin",2},{"Empty_Glass_Bottle",1}};
        Given[] = {{"wine_process_bottle",1}};
        Text = "Pressage Mise en Bouteille";
        Action = "[cursorTarget] execVM 'c33\machines\fruitjuicemachine\start.sqf';";
        Cost = 0;
        Profession = "prof_mining";
    };

     class compteMers1 {
        Required[] = {{"ornate_raw",10}};
        Given[] = {{"ornate_raw_pal",1}};
        Text = "Ornate en palette";
        Cost = 0;
        Profession = "";
    };

      class compteMers2 {
        Required[] = {{"tuna_raw",10}};
        Given[] = {{"tuna_raw_pal",1}};
        Text = "Thon en palette";
        Cost = 0;
        Profession = "";
    };

      class compteMers3 {
        Required[] = {{"mullet_raw",10}};
        Given[] = {{"mullet_raw_pal",1}};
        Text = "Mulet en palette";
        Cost = 0;
        Profession = "";
    };

       class compteMers4 {
        Required[] = {{"catshark_raw",10}};
        Given[] = {{"catshark_raw_pal",1}};
        Text = "Poisson chat en palette";
        Cost = 0;
        Profession = "";
    };

    class palettes {
        Required[] = {{"res_sciage",1}};
        Given[] = {{"palette",1}};
        Text = "Assemblage de palettes";
        Cost = 0;
        Profession = "prof_mining";
    };

    // Bois
    class tropicalCharpente {
        Required[] = {{"tropical",1}};
        Given[] = {{"tropicalCharpente",1}};
        Text = "Sciage du bois";
        Cost = 250;
        Profession = "prof_mining";
    };

    class tropicalTonnerie {
        Required[] = {{"tropical",1}};
        Given[] = {{"tropicalTonnerie",1}};
        Text = "Sciage du bois";
        Cost = 250;
        Profession = "prof_mining";
    };

    class parcCharpente {
        Required[] = {{"parc",1}};
        Given[] = {{"parcCharpente",1}};
        Text = "Sciage du bois";
        Cost = 250;
        Profession = "prof_mining";
    };

    class parcTonnerie {
        Required[] = {{"parc",1}};
        Given[] = {{"parcTonnerie",1}};
        Text = "Sciage du bois";
        Cost = 250;
        Profession = "prof_mining";
    };

    //jus de fruit
    class multifruit {
        Required[] = {{"apple",1}, {"coco",1}, {"raisin",1}, {"banane",1}};
        Given[] = {{"multifruit",1}};
        Text = "Transformation Multrifuit";
        Action = "[cursorTarget] execVM 'c33\machines\fruitjuicemachine\start.sqf';";
        Cost = 500;
    };
    class multifruit_export {
        Required[] = {{"multifruit",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette Multrifuit";
        Cost = 0;
    };

    class Jus_Pomme_Raisin {
        Required[] = {{"apple",1}, {"raisin",1}};
        Given[] = {{"Jus_Pomme_Raisin",1}};
        Text = "Transformation Jus Pommme Raisin";
        Action = "[cursorTarget] execVM 'c33\machines\fruitjuicemachine\start.sqf';";
        Cost = 500;
    };
    class Jus_Pomme_Raisin_export {
        Required[] = {{"Jus_Pomme_Raisin",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette Jus Pommme Raisin";
        Cost = 0;
    };

    class Jus_Pomme_Banane {
        Required[] = {{"apple",1}, {"banane",1}};
        Given[] = {{"Jus_Pomme_Banane",1}};
        Text = "Transformation Jus Pomme Banane";
        Action = "[cursorTarget] execVM 'c33\machines\fruitjuicemachine\start.sqf';";
        Cost = 500;
    };
    class Jus_Pomme_Banane_export {
        Required[] = {{"Jus_Pomme_Banane",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette Jus Pomme Banane";
        Cost = 0;
    };

    class Jus_Pomme_Coco {
        Required[] = {{"apple",1}, {"coco",1}};
        Given[] = {{"Jus_Pomme_Coco",1}};
        Text = "Transformation Jus Pomme Coco";
        Action = "[cursorTarget] execVM 'c33\machines\fruitjuicemachine\start.sqf';";
        Cost = 500;
    };
    class Jus_Pomme_Coco_export {
        Required[] = {{"Jus_Pomme_Coco",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette Jus Pomme Coco";
        Cost = 0;
    };

    class cigare {
        Required[] = {{"tabac",1}};
        Given[] = {{"cigare",1}};
        Text = "Transformation en Cigares";
        Cost = 500;
    };

    class cigarette {
        Required[] = {{"tabac",1}};
        Given[] = {{"cigarette",1}};
        Text = "Transformation en Cigarettes";
        Cost = 500;
    };

    //Illegal

    class strawberry {
        Required[] = {{"strawberry_unprocessed",1}};
        Given[] = {{"strawberry_processed",1}};
        Text = "Traitement de la Strawberry";
        Cost = 1200;
        Profession = "prof_gathering";
    };

    class cocaine {
        Required[] = {{"cocaine_unprocessed",1}};
        Given[] = {{"cocaine_processed",1}};
        Text = "Traitement de la Purple Kush";
        Cost = 800;
        Profession = "prof_gathering";
    };

    class datura {
        Required[] = {{"datura_unprocessed",1}};
        Given[] = {{"datura_processed",1}};
        Text = "Traitement de la Datura";
        Cost = 650;
        Profession = "prof_gathering";
    };
	
    class khat {
        Required[] = {{"khat_unprocessed",1}};
        Given[] = {{"khat_processed",1}};
        Text = "Traitement de la Khat";
        Cost = 1000;
        Profession = "prof_gathering";
    };

    class heroin {
        Required[] = {{"heroin_unprocessed",1}};
        Given[] = {{"heroin_processed",1}};
        Text = "Traitement de la Maui Waui";
        Cost = 600;
        Profession = "prof_gathering";
    };

    class marijuana {
        Required[] = {{"cannabis",1}};
        Given[] = {{"marijuana",1}};
        Text = "Traitement de la Marijuana";
        Cost = 400;
        Profession = "prof_gathering";
    };

    class uranium {
        Required[] = {{"uranium_unprocessed",1}};
        Given[] = {{"uranium",1}};
        Text = "Traitement d'Uranium";
        Cost = 400;
        Profession = "prof_gathering";
    };
    //Other

    class ivoire {
        Required[] = {{"ivoire_unprocessed",1}};
        Given[] = {{"ivoire_processed",1}};
        Text = "Taille de l'ivoire";
        Cost = 5000;
        Profession = "prof_gathering";
    };

    class medicaments {
        Required[] = {{"med_unprocessed",1}};
        Given[] = {{"med_processed",1}};
        Text = "Conditionnement";
        Cost = 100;
        Profession = "prof_livraison";
    };
    // ajout ted
    class cigares {
        Required[] = {{"cig_unprocessed",1}};
        Given[] = {{"cig_processed",1}};
        Text = "Conditionnement";
        Cost = 100;
        Profession = "prof_livraison";
    };

    class poissons {
        Required[] = {{"poi_unprocessed",1}};
        Given[] = {{"poi_processed",1}};
        Text = "Conditionnement";
        Cost = 100;
        Profession = "prof_livraison";
    };

    class munitions {
        Required[] = {{"mun_unprocessed",1}};
        Given[] = {{"mun_processed",1}};
        Text = "Conditionnement";
        Cost = 100;
        Profession = "prof_livraison";
    };

    // Minerais
    class copper_refined_export {
        Required[] = {{"copper_refined",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette cuivre";
        Cost = 0;
    };
    class tin_bar_export {
        Required[] = {{"tin_bar",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette de l'Étain";
        Cost = 0;
    };
    class iron_refined_export {
        Required[] = {{"iron_refined",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette du Fer";
        Cost = 0;
    };
    class silver_bar_export {
        Required[] = {{"silver_bar",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette de l'Argent";
        Cost = 0;
    };
    class rhodium_bar_export {
        Required[] = {{"rhodium_bar",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette du Rhodium";
        Cost = 0;
    };
    class platinum_bar_export {
        Required[] = {{"platinum_bar",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette du Platine";
        Cost = 0;
    };
    class graphite_bar_export {
        Required[] = {{"graphite_bar",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette du Graphite";
        Cost = 0;
    };
    class iridium_bar_export {
        Required[] = {{"iridium_bar",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette de l'iridium";
        Cost = 0;
    };
    class gold_bar_export {
        Required[] = {{"gold_bar",10}};
        Given[] = {{"palette_export",1}};
        Text = "Mise en palette de l'or";
        Cost = 0;
    };
    // Farm multi level Emmett 
    class Empty_Glass_Bottle {
        Required[] = {{"Farm_Sandpile",1}};
        Given[] = {{"Empty_Glass_Bottle",2}};
        Text = "Création bouteilles de verre";
        Cost = 0;
    };
    class Metal_Tin_Can {
        Required[] = {{"iron_refined",1}};
        Given[] = {{"Metal_Tin_Can",2}};
        Text = "Création boite de conserve métallique vide";
        Cost = 0;
    };
    class Wooden_Transport_Pallet {
        Required[] = {{"tropical",2},{"iron_refined",1}};
        Given[] = {{"Wooden_Transport_Pallet",1}};
        Text = "Création pallette de transport en bois";
        Cost = 0;
    };
    class Canned_Fish_salema_raw {
        Required[] = {{"salema_raw",3},{"Metal_Tin_Can",1}};
        Given[] = {{"Canned_Fish",1}};
        Text = "Conserve de Filet de Saupe";
        Cost = 0;
    };
    class Canned_Fish_ornate_raw {
        Required[] = {{"ornate_raw",3},{"Metal_Tin_Can",1}};
        Given[] = {{"Canned_Fish",1}};
        Text = "Conserve de Filet d'Ornate";
        Cost = 0;
    };
    class Canned_Fish_mackerel_raw {
        Required[] = {{"mackerel_raw",3},{"Metal_Tin_Can",1}};
        Given[] = {{"Canned_Fish",1}};
        Text = "Conserve de Filet de Maquereau";
        Cost = 0;
    };
    class Canned_Fish_tuna_raw {
        Required[] = {{"tuna_raw",3},{"Metal_Tin_Can",1}};
        Given[] = {{"Canned_Fish",1}};
        Text = "Conserve de Filet de Thon";
        Cost = 0;
    };
    class Canned_Fish_mullet_raw {
        Required[] = {{"mullet_raw",3},{"Metal_Tin_Can",1}};
        Given[] = {{"Canned_Fish",1}};
        Text = "Conserve de Filet de Mulet";
        Cost = 0;
    };
    class Canned_Fish_catshark_raw {
        Required[] = {{"catshark_raw",3},{"Metal_Tin_Can",1}};
        Given[] = {{"Canned_Fish",1}};
        Text = "Conserve de Filet de Poisson Chat";
        Cost = 0;
    };
    class Canned_Peach {
        Required[] = {{"peach",3},{"Metal_Tin_Can",1}};
        Given[] = {{"Canned_Peach",1}};
        Text = "Conserve de pêche";
        Cost = 0;
    };
    class Canned_Corn {
        Required[] = {{"mais",3},{"Metal_Tin_Can",1}};
        Given[] = {{"Canned_Corn",1}};
        Text = "Conserve de maïs";
        Cost = 0;
    };
    class Canned_Coconut {
        Required[] = {{"coco",3},{"Metal_Tin_Can",1}};
        Given[] = {{"Canned_Coconut",1}};
        Text = "Conserve de coco";
        Cost = 0;
    };
    class Canned_Cocoa {
        Required[] = {{"cacao",3},{"Metal_Tin_Can",1}};
        Given[] = {{"Canned_Cocoa",1}};
        Text = "Conserve de cacao";
        Cost = 0;
    };
    class Apple_Grape_Bottle {
        Required[] = {{"Jus_Pomme_Raisin",3},{"Empty_Glass_Bottle",1}};
        Given[] = {{"Apple_Grape_Bottle",1}};
        Text = "Bouteille verre jus de Pomme Raisin";
        Cost = 0;
    };
    class Coconut_Apple_Bottle {
        Required[] = {{"Jus_Pomme_Coco",3},{"Empty_Glass_Bottle",1}};
        Given[] = {{"Coconut_Apple_Bottle",1}};
        Text = "Bouteille verre jus de Pomme Coco";
        Cost = 0;
    };
    class Apple_Banana_Bottle {
        Required[] = {{"Jus_Pomme_Banane",3},{"Empty_Glass_Bottle",1}};
        Given[] = {{"Apple_Banana_Bottle",1}};
        Text = "Bouteille verre jus de Pomme Banane";
        Cost = 0;
    };
    class Multifruit_Bottle {
        Required[] = {{"multifruit",3},{"Empty_Glass_Bottle",1}};
        Given[] = {{"Multifruit_Bottle",1}};
        Text = "Bouteille verre jus Multifruit";
        Cost = 0;
    };
    class Canned_Fish_Palette {
        Required[] = {{"Canned_Fish",10},{"Wooden_Transport_Pallet",1}};
        Given[] = {{"Canned_Fish_Palette",1}};
        Text = "Mise en pallette concerve poisson";
        Cost = 0;
    };
    class Canned_Peach_Palette {
        Required[] = {{"Canned_Peach",10},{"Wooden_Transport_Pallet",1}};
        Given[] = {{"Canned_Peach_Palette",1}};
        Text = "Mise en pallette concerve pêche";
        Cost = 0;
    };
    class Canned_Corn_Palette {
        Required[] = {{"Canned_Corn",10},{"Wooden_Transport_Pallet",1}};
        Given[] = {{"Canned_Corn_Palette",1}};
        Text = "Mise en pallette concerve maïs";
        Cost = 0;
    };
    class Canned_Coconut_Palette {
        Required[] = {{"Canned_Coconut",10},{"Wooden_Transport_Pallet",1}};
        Given[] = {{"Canned_Coconut_Palette",1}};
        Text = "Mise en pallette concerve coco";
        Cost = 0;
    };
    class Canned_Cocoa_Palette {
        Required[] = {{"Canned_Cocoa",10},{"Wooden_Transport_Pallet",1}};
        Given[] = {{"Canned_Cocoa_Palette",1}};
        Text = "Mise en pallette concerve cacao";
        Cost = 0;
    };
    class Apple_Grape_Bottle_Palette {
        Required[] = {{"Apple_Grape_Bottle",10},{"Wooden_Transport_Pallet",1}};
        Given[] = {{"Apple_Grape_Bottle_Palette",1}};
        Text = "Mise en pallette jus Pomme Raisin en verre";
        Cost = 0;
    };
    class Coconut_Apple_Bottle_Palette {
        Required[] = {{"Coconut_Apple_Bottle",10},{"Wooden_Transport_Pallet",1}};
        Given[] = {{"Coconut_Apple_Bottle_Palette",1}};
        Text = "Mise en pallette jus Pomme Coco en verre";
        Cost = 0;
    };
    class Apple_Banana_Bottle_Palette {
        Required[] = {{"Apple_Banana_Bottle",10},{"Wooden_Transport_Pallet",1}};
        Given[] = {{"Apple_Banana_Bottle_Palette",1}};
        Text = "Mise en pallette jus Pomme Banane en verre";
        Cost = 0;
    };
    class Multifruit_Bottle_Palette {
        Required[] = {{"Multifruit_Bottle",10},{"Wooden_Transport_Pallet",1}};
        Given[] = {{"Multifruit_Bottle_Palette",1}};
        Text = "Mise en pallette jus Multifruit en verre";
        Cost = 0;
    };
    class affichePub {
        Required[] = {{"paper",1}};
        Given[] = {{"old_advertising_poster",1}};
        Text = "Collage publicité en cours";
        Cost = 0;
    };

    /** ******************************************************************************************************************************
    *                                                                                                                                *
    *  Ici refonte mission avec les items et items farms pour les nouvelles entreprises                                              *
    *       Dans le futur ci-dessous reclasser les items ensembles                                                                   *                                                                   *
    * ****************************************************************************************************************************** */

    /** ==== Processing Civil ============================================================ */
    class Process_C33_items_palmoilcontainer {
        Required[] = {{"C33_items_palmseed",20}};
        Given[] = {{"C33_items_palmoilcontainer",1}};
        Text = "Transformation huile de palme";
        Action = "";
        Cost = 0;
    };

    class Process_C33_items_alcoolcontainer {
        Required[] = {{"pomdeterre",20}};
        Given[] = {{"C33_items_alcoolcontainer",1}};
        Text = "Transformation en alcool de pomme de terre";
        Action = "";
        Cost = 0;
    };

    class Process_C33_items_melassecontainer {
        Required[] = {{"sucrecanne",20}};
        Given[] = {{"C33_items_melassecontainer",1}};
        Text = "Transformation en mélasse de canne à sucre";
        Action = "";
        Cost = 0;
    };

    class Process_C33_items_tomatocontainer {
        Required[] = {{"C33_items_tomato",20}};
        Given[] = {{"C33_items_tomatocontainer",1}};
        Text = "Transformation purée de tomate";
        Action = "";
        Cost = 0;
    };

    class Process_C33_items_petrolecontainer {
        Required[] = {{"C33_items_petrole",20}};
        Given[] = {{"C33_items_petrolecontainer",1}};
        Text = "Mise en baril";
        Action = "";
        Cost = 0;
    };


    /** *************************************************************************************************************
    *                                                                                                               *
    *  Processing des nouvelles Entreprises                                                                         *
    *                                                                                                               *
    * **************************************************************************************************************/

    /** === Entreprise Custom voiture : A DEFINIR  =============================================================== */
    class Process_Ent_C33_items_paintcans {
        Required[] = {{"Metal_Tin_Can",8}, {"C33_items_potsofpaintpigment", 2}, {"C33_items_palmoilcontainer", 1}};
        Given[] = {{"C33_items_paintcans",8}};
        Text = "Mélange et Mise en pots de peinture";
        Action = "";
        Cost = 0;
    };
    
    /** === Entreprise Bois : The Wood Pacific (TWP)  ============================================================ */
    class Process_Ent_C33_items_planche {      
        Required[] = {{"tropical", 1}};
        Given[] = {{"C33_items_planche", 4}};
        Text = "Création des planche";
        Action = "[cursorTarget] execVM 'c33\machines\scierie\start.sqf';";
        Cost = 0;
    };
    class Process_Ent_C33_items_palette {    // nouvelle palette
        Required[] = {{"C33_items_planche", 2}, {"iron_refined", 1}};
        Given[] = {{"C33_items_palette", 2}};
        Text = "Création de palette";
        Action = "[cursorTarget] execVM 'c33\machines\scierie\start.sqf';";
        Cost = 0;
    };
    class Process_Ent_Land_TableBig_01_F {  // Grande table toile siré     
        Required[] = {{"C33_items_planche", 6}, {"C33_items_plaquealu", 1}};
        Given[] = {{"Land_TableBig_01_F", 1}};
        Text = "Création de la table";
        Action = "[cursorTarget] execVM 'c33\machines\scierie\start.sqf';";
        Cost = 0;
    };
    class Process_Ent_Land_WoodenTable_large_F {  // Grande table bois     
        Required[] = {{"C33_items_planche", 6}, {"C33_items_plaquealu", 1}};
        Given[] = {{"Land_WoodenTable_large_F", 1}};
        Text = "Création de la table";
        Action = "[cursorTarget] execVM 'c33\machines\scierie\start.sqf';";
        Cost = 0;
    };
    class Process_Ent_Land_TableSmall_01_F {  // Petite table toile siré
        Required[] = {{"C33_items_planche", 4}, {"C33_items_plaquealu", 1}};
        Given[] = {{"Land_TableSmall_01_F", 1}};
        Text = "Création de la table";
        Action = "[cursorTarget] execVM 'c33\machines\scierie\start.sqf';";
        Cost = 0;
    };
    class Process_Ent_Land_WoodenTable_small_F {  // Petite table bois
        Required[] = {{"C33_items_planche", 4}, {"C33_items_plaquealu", 1}};
        Given[] = {{"Land_WoodenTable_small_F", 1}};
        Text = "Création de la table";
        Action = "[cursorTarget] execVM 'c33\machines\scierie\start.sqf';";
        Cost = 0;
    };
    class Process_Ent_Land_ChairWood_F {  // Chaise en bois
        Required[] = {{"C33_items_planche", 2}, {"iron_refined", 1}};
        Given[] = {{"Land_ChairWood_F", 1}};
        Text = "Création de la chaise";
        Action = "[cursorTarget] execVM 'c33\machines\scierie\start.sqf';";
        Cost = 0;
    };

    /** === Entreprise métalurgique : Tout Feux Tout Flammes (TFTF)  ============================================= */
    class Process_Ent_C33_items_plaquealu {      
        Required[] = {{"aluminum_unrefined", 1}};
        Given[] = {{"C33_items_plaquealu", 4}};
        Text = "Création des plaques d'aliminium";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_C33_items_conduitealu {  // conduite d'alu     
        Required[] = {{"C33_items_plaquealu", 2}, {"iron_refined", 1}};
        Given[] = {{"C33_items_conduitealu", 2}};
        Text = "Création de conduite d'aluminium";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_Land_CampingChair_V1_F {  // Chaise camping V1     
        Required[] = {{"C33_items_plaquealu", 2}, {"C33_items_granuleplastique", 1}};
        Given[] = {{"Land_CampingChair_V1_F", 1}};
        Text = "Création de la chaise";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_Land_CampingChair_V2_F {  // Chaise camping V2     
        Required[] = {{"C33_items_plaquealu", 2}, {"C33_items_granuleplastique", 1}};
        Given[] = {{"Land_CampingChair_V2_F", 1}};
        Text = "Création de la chaise";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_Land_Portable_generator_F {  // Générateur    
        Required[] = {{"C33_items_plaquealu", 4}, {"C33_items_granuleplastique", 1}};
        Given[] = {{"Land_Portable_generator_F", 1}};
        Text = "Création du générateur";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_Land_CampingTable_small_F {  // Petite table de camping     
        Required[] = {{"C33_items_plaquealu", 4}, {"C33_items_granuleplastique", 1}};
        Given[] = {{"Land_CampingTable_small_F", 1}};
        Text = "Création de la table";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_Land_Land_CampingTable_F {  // Grande table de camping     
        Required[] = {{"C33_items_plaquealu", 6}, {"C33_items_granuleplastique", 1}};
        Given[] = {{"Land_CampingTable_F", 1}};
        Text = "Création de la table";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_Land_PortableLight_single_F {  // Spot simple     
        Required[] = {{"C33_items_plaquealu", 2}, {"Farm_Sandpile", 1}};
        Given[] = {{"Land_PortableLight_single_F", 1}};
        Text = "Création du spot";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_Land_PortableLight_double_F {  // Spot double     
        Required[] = {{"C33_items_plaquealu", 2}, {"Farm_Sandpile", 1}};
        Given[] = {{"Land_PortableLight_double_F", 1}};
        Text = "Création du spot";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_GurneyTabl {  // Lit d'hospital
        Required[] = {{"C33_items_plaquealu", 2}, {"C33_items_petrolecontainer", 1}};
        Given[] = {{"GurneyTabl", 1}};
        Text = "Création du lit hospital";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_barbecue {  // Barbecue
        Required[] = {{"C33_items_plaquealu", 4}, {"C33_items_granuleplastique", 4}};
        Given[] = {{"C33_furniture_barbecue", 1}};
        Text = "Création du barbecue";
        Action = "";
        Cost = 0;
    };

    /** === Entreprise pétrole : Pacific Petrol (PP)   ======================================================== */
    class Process_Ent_C33_items_granuleplastique {      
        Required[] = {{"C33_items_petrole", 1}};
        Given[] = {{"C33_items_granuleplastique", 2}};
        Text = "Création de granules de plastique";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_C33_items_cagetteplastique {  // Cagette en plastique    
        Required[] = {{"C33_items_granuleplastique", 2}, {"Farm_Sandpile", 1}};
        Given[] = {{"C33_items_cagetteplastique", 2}};
        Text = "Création de cagette plastique";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_Land_Camping_Light_F {  // Petite lamp de camping 
        Required[] = {{"C33_items_granuleplastique", 6}, {"C33_items_plaquealu", 1}};
        Given[] = {{"Land_Camping_Light_F", 4}};
        Text = "Création de cagette plastique";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_Land_TablePlastic_01_F {  // Table plastique    
        Required[] = {{"C33_items_granuleplastique", 10}, {"C33_items_petrolecontainer", 1}};
        Given[] = {{"Land_TablePlastic_01_F", 6}};
        Text = "Création de cagette plastique";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_Land_ChairPlastic_F {  // Chaise plastique   
        Required[] = {{"C33_items_granuleplastique", 6}, {"C33_items_petrolecontainer", 1}};
        Given[] = {{"Land_ChairPlastic_F", 6}};
        Text = "Création de chaise plastique";
        Action = "";
        Cost = 0;
    };
    class Process_Ent_Land_Defibrillator_F {  // Défibrillateur    
        Required[] = {{"C33_items_granuleplastique", 10}, {"C33_items_plaquealu", 1}};
        Given[] = {{"Land_Defibrillator_F", 4}};
        Text = "Création de défibrilateur";
        Action = "";
        Cost = 0;
    };


};

class CfgFurnace {

    class aluminum {
        Required[] = {"aluminum_unrefined",1};
        Given[] = {"aluminum_refined",1};
        GivenBad[] = {"aluminum_refined_bad",1};
        Text = "Traitement de l'aluminum";
        Cost = 500;
        Profession = "prof_mining";
        Time = 28;
        Temperature = 232;
    };

    class copper {
        Required[] = {"copper_unrefined",1};
        Given[] = {"copper_refined",1};
        GivenBad[] = {"copper_refined_bad",1};
        Text = "Traitement de cuivre";
        Cost = 300;
        Profession = "prof_mining";
        Time = 24;
        Temperature = 1085;
    };

    class tin {
        Required[] = {"tin_ore",1};
        Given[] = {"tin_bar",1};
        GivenBad[] = {"tin_bar_bad",1};
        Text = "Traitement de l'Étain";
        Cost = 100;
        Profession = "prof_mining";
        Time = 22;
        Temperature = 232;
    };

    class iron {
        Required[] = {"iron_unrefined",1};
        Given[] = {"iron_refined",1};
        GivenBad[] = {"iron_refined_bad",1};
        Text = "Traitement du Fer";
        Cost = 500;
        Profession = "prof_mining";
        Time = 28;
        Temperature = 1538;
    };

    class silver {
        Required[] = {"silver_ore",1};
        Given[] = {"silver_bar",1};
        GivenBad[] = {"silver_bar_bad",1};
        Text = "Traitement de l'Argent";
        Cost = 400;
        Profession = "prof_mining";
        Time = 26;
        Temperature = 962;
    };

    class rhodium {
        Required[] = {"rhodium_ore",1};
        Given[] = {"rhodium_bar",1};
        GivenBad[] = {"rhodium_bar_bad",1};
        Text = "Traitement du Rhodium";
        Cost = 600;
        Profession = "prof_mining";
        Time = 34;
        Temperature = 1963;
    };

    class platinum {
        Required[] = {"platinum_ore",1};
        Given[] = {"platinum_bar",1};
        GivenBad[] = {"platinum_bar_bad",1};
        Text = "Traitement du Platine";
        Cost = 700;
        Profession = "prof_mining";
        Time = 36;
        Temperature = 1768;
    };
    
    class graphite {
        Required[] = {"graphite_ore",1};
        Given[] = {"graphite_bar",1};
        GivenBad[] = {"graphite_bar_bad",1};
        Text = "Traitement du Graphite";
        Cost = 200;
        Profession = "prof_mining";
        Time = 30;
        Temperature = 3825;
    };
    
    class iridium {
        Required[] = {"iridium_ore",1};
        Given[] = {"iridium_bar",1};
        GivenBad[] = {"iridium_bar_bad",1};
        Text = "Traitement de l'iridium";
        Cost = 800;
        Profession = "prof_mining";
        Time = 32;
        Temperature = 2447;
    };

    class gold {
        Required[] = {"gold_ore",1};
        Given[] = {"gold_bar",1};
        GivenBad[] = {"gold_bar_bad",1};
        Text = "Traitement de l'or";
        Cost = 900;
        Profession = "prof_mining";
        Time = 38;
        Temperature = 1064;
    };
};