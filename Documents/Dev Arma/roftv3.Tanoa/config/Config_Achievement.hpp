/*
	Config for Achievement

	Autor: IronBlade
*/

class CfgAchievement {

	color[] = {1,0.2,0,1};
	sound = "FD_Finish_F";
	//Debut Actions
	class spawn { displayname = "Spawn"; description = "Bienvenue sur Republic Of Tanoa !"; xp = 0; };
	class achatdevehicule { displayname = "Vroom Vroom"; description = "vous avez acheté votre premier vehicule !"; xp = 0; icon = "icons\succes\car.paa"; };
	class achatdunearme { displayname = "Pan Pan"; icon = "Gun.paa"; description = "vous avez acheté votre Premiere arme !"; xp = 0; };
	class cueillette { displayname = "Agriculteur"; description = "vous avez ramasser votre Premiere ressourse legal !"; xp = 0; };
	class traitementdeminerai { displayname = "Ça fond !"; description = "vous avez traiter votre premier minerai !"; xp = 0; };
	class braquagedestation { displayname = "Donne moi la caisse";	icon = "money.paa"; description = "vous avez braquer votre Premiere station essence !"; xp = 0; };
	class transfertargent { displayname = "Future riche"; icon = "money.paa"; description = "vous avez mis 999.999$ sur votre compte en banque !"; xp = 0; };
	class fioleblinded_cop { displayname = "Filé entre les doigts"; description = "Le Suspect a préféré mourir devant vous !"; xp = 0; };
	class fioleblinded { displayname = "Plutôt Efficasse !"; description = "Mourir plutot que payer, ça c'est cool !"; xp = 0; };
	//Fin Actions
	//Debut Régions
	class GeorgeTown_Center { displayname = "GeorgeTown Centre"; icon = "icons\succes\City.paa"; description = "Vous avez découvert la région de GeorgeTown Centre"; xp = 100; };
	class GeorgeTown_Sud { displayname = "GeorgeTown Residentiel"; icon = "icons\succes\City.paa"; description = "Vous avez découvert la région de GeorgeTown Residentiel"; xp = 100; };
	class GeorgeTown_Nord { displayname = "GeorgeTown Business"; icon = "icons\succes\City.paa"; description = "Vous avez découvert la région de GeorgeTown Business"; xp = 100; };
	class QG_Gendarmerie { displayname = "QG de Police"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région du QG de Police"; xp = 100; };
	class Saint_Julien { displayname = "Saint Julien"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Saint Julien"; xp = 100; };
	class OuaOue { displayname = "Oua-Oué"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Oua-Oué"; xp = 100; };
	class Nicolet_Nord { displayname = "Petit Nicolet"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Petit Nicolet"; xp = 100; };
	class Nicolet_Sud { displayname = "Nicolet Plage"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Nicolet Plage"; xp = 100; };
	class Nicolet_Centre { displayname = "Nicolet Centre"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Nicolet Centre"; xp = 100; };
	class SaintPaul { displayname = "Saint Paul"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Saint Paul"; xp = 100; };
	class Savu { displayname = "Savu"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Savu"; xp = 100; };
	class La_Rochelle_Ouest { displayname = "La Rochelle Industries"; icon = "icons\succes\City.paa"; description = "Vous avez découvert la région de La Rochelle Industries"; xp = 100; };
	class La_Rochelle_Centre { displayname = "La Rochelle Centre"; icon = "icons\succes\City.paa"; description = "Vous avez découvert la région de La Rochelle Centre"; xp = 100; };
	class La_Rochelle_Port { displayname = "La Rochelle Port"; icon = "icons\succes\City.paa"; description = "Vous avez découvert la région de La Rochelle Port"; xp = 100; };
	class La_Rochelle_Sud { displayname = "La Rochelle Residentiel"; icon = "icons\succes\City.paa"; description = "Vous avez découvert la région de La Rochelle Residentiel"; xp = 100; };
	class Momea { displayname = "Momea"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Momea"; xp = 100; };
	class Penelo { displayname = "Penelo"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Penelo"; xp = 100; };
	class LaRochelle_Aerodrome { displayname = "L'Aérodrome de la Rochelle"; description = "Vous avez découvert la région de L'Aérodrome de la Rochelle"; xp = 100; };
	class Nasua { displayname = "Nasua"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Nasua"; xp = 100; };
	class Ovau { displayname = "Ovau"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Ovau"; xp = 100; };
	class Port_Industriel { displayname = "Port Industriel Blue Pearl"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région du Port Industriel Blue Pearl"; xp = 100; };
	class Ba { displayname = "Ba"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Ba"; xp = 100; };
	class Vatukoulo { displayname = "Vatukoulo"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Vatukoulo"; xp = 100; };
	class Nandai { displayname = "Nandai"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Nandai"; xp = 100; };
	class Luganville { displayname = "Luganville"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Luganville"; xp = 100; };
	class Oumere { displayname = "Ouméré"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Ouméré"; xp = 100; };
	class SawMill { displayname = "La Scierie de Sawmill"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région de La Scierie de Sawmill"; xp = 100; };
	class Harcourt { displayname = "Harcourt"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Harcourt"; xp = 100; };
	class Harcourt_CheckPoint { displayname = "CheckPoint d'Harcourt"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région du CheckPoint d'Harcourt"; xp = 100; };
	class Kotomo { displayname = "Kotomo"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Kotomo"; xp = 100; };
	class Losi { displayname = "Lösi"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Lösi"; xp = 100; };
	class Moddergat { displayname = "Moddergat"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Moddergat"; xp = 100; };
	class Tobakoro { displayname = "Tobakoro"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Tobakoro"; xp = 100; };
	class LaFoa { displayname = "La Foa"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de La Foa"; xp = 100; };
	class Blerick { displayname = "Blerick"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Blerick"; xp = 100; };
	class Lijnhaven { displayname = "Lijnhaven"; icon = "icons\succes\City.paa"; description = "Vous avez découvert la région de Lijnhaven"; xp = 100; };
	class Rereki { displayname = "Rereki"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Rereki"; xp = 100; };
	class Taga { displayname = "Taga"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Taga"; xp = 100; };
	class BuaBua { displayname = "Bua Bua"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Bua Bua"; xp = 100; };
	class PortBoise { displayname = "Port-Boisé"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région de Port-Boisé"; xp = 100; };
	class Saioko { displayname = "Saioko"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Saioko"; xp = 100; };
	class Doodstil { displayname = "Doodstil"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Doodstil"; xp = 100; };
	class IlleSaintGeorge { displayname = "L'ile Saint George"; icon = "icons\succes\Island.paa"; description = "Vous avez découvert la région de L'ile Saint George"; xp = 100; };
	class TuaDua { displayname = "L'ile de Tuadua"; icon = "icons\succes\Island.paa"; description = "Vous avez découvert la région de L'ile de Tuadua"; xp = 100; };
	class Savaka { displayname = "Savaka"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Savaka"; xp = 100; };
	class Katkoula { displayname = "Katkoula"; icon = "icons\succes\City.paa"; description = "Vous avez découvert la région de Katkoula"; xp = 100; };
	class Lailai { displayname = "Lailai"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Lailai"; xp = 100; };
	class Yannukka { displayname = "Yannukka"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Yannukka"; xp = 100; };
	class Bala { displayname = "L'Aérodrome de Bala"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région de L'Aérodrome de Bala"; xp = 100; };
	class Koumac { displayname = "Koumac"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Koumac"; xp = 100; };
	class Cerebu { displayname = "Cerebu"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Cerebu"; xp = 100; };
	class AeroportTanoa { displayname = "L'Aéroport International de Tanoa"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région de L'Aéroport International de Tanoa"; xp = 100; };
	class Namuvaka { displayname = "Namuvaka"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Namuvaka"; xp = 100; };
	class Laikoro { displayname = "Laikoro"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Laikoro"; xp = 100; };
	class Rautake { displayname = "Rautake"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Rautake"; xp = 100; };
	class Balavu { displayname = "Balavu"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Balavu"; xp = 100; };
	class Balavu_Pont { displayname = "Pont de Balavu"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région du Pont de Balavu"; xp = 100; };
	class Tavu { displayname = "Tavu"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Tavu"; xp = 100; };
	class Muaceba { displayname = "Muaceba"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Muaceba"; xp = 100; };
	class Leqa { displayname = "Leqa"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Leqa"; xp = 100; };
	class Regina { displayname = "Regina"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Regina"; xp = 100; };
	class Lobaka { displayname = "Lobaka"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Lobaka"; xp = 100; };
	class Lami { displayname = "Lami"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Lami"; xp = 100; };
	class Lakatoro { displayname = "Lakatoro"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Lakatoro"; xp = 100; };
	class Tanouka_Centre { displayname = "Tanouka Centre"; icon = "icons\succes\City.paa"; description = "Vous avez découvert la région de Tanouka Centre"; xp = 100; };
	class Tanouka_Industrie { displayname = "Tanouka Industrie"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région de Tanouka Industrie"; xp = 100; };
	class Tanouka_Geek { displayname = "Geek Composant"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région de Geek Composant"; xp = 100; };
	class Buawa { displayname = "Buawa"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Buawa"; xp = 100; };
	class Lifou { displayname = "Lifou"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Lifou"; xp = 100; };
	class Vagalala { displayname = "Vagalala"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Vagalala"; xp = 100; };
	class Imone { displayname = "Imone"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Imone"; xp = 100; };
	class Mine { displayname = "La Zone Miniére de Tanoa"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région de La Zone Miniére de Tanoa"; xp = 100; };
	class Volcan_Tele { displayname = "Volcan télécom"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région de Volcan télécom"; xp = 100; };
	class Volcan_Mont { displayname = "Mont Tanoa"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région du Mont Tanoa"; xp = 100; };
	class Prison { displayname = "La Transmision Bravo"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région de La Transmision Bravo"; xp = 100; };
	class RelaisRoutier { displayname = "Relais Routier"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région du Relais Routier"; xp = 100; };
	class Galili { displayname = "Galili"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Galili"; xp = 100; };
	class Sosovu { displayname = "L'ile de Sosovu"; icon = "icons\succes\Island.paa"; description = "Vous avez découvert la région de L'ile de Sosovu"; xp = 100; };
	class Yasa { displayname = "L'ile de Yasa"; icon = "icons\succes\Island.paa"; description = "Vous avez découvert la région de L'ile de Yasa"; xp = 100; };
	class Douen { displayname = "L'ile de Douen"; icon = "icons\succes\Island.paa"; description = "Vous avez découvert la région de L'ile de Douen"; xp = 100; };
	class Tuvanaka { displayname = "Tuvanaka"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Tuvanaka"; xp = 100; };
	class Tuvanaka_Air { displayname = "La base de Tuvanaka"; icon = "icons\succes\Region.paa"; description = "Vous avez découvert la région de La base de Tuvanaka"; xp = 100; };
	class Belfort { displayname = "Belfort"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Belfort"; xp = 100; };
	class SainteMarie { displayname = "L'ile de Sainte Marie"; icon = "icons\succes\Island.paa"; description = "Vous avez découvert la région de L'ile de Sainte Marie"; xp = 100; };
	class Ravi_ta { displayname = "L'ile de Ravi-ta"; icon = "icons\succes\Island.paa"; description = "Vous avez découvert la région de L'ile de Ravi-ta"; xp = 100; };
	class Yani { displayname = "Iles de Yani"; icon = "icons\succes\Island.paa"; description = "Vous avez découvert la région des Iles de Yani"; xp = 100; };
	class Nani { displayname = "Nani"; icon = "icons\succes\House.paa"; description = "Vous avez découvert la région de Nani"; xp = 100; };
	//Fin Region
	//Debut Actions (decouverte toute la carte origine 1300 xp) (crocehtage origne 0) (maison origine 0)
	class exploration { displayname = "Explorateur"; description = "vous avez decouvert toute la carte !"; icon = "icons\succes\stars.paa"; xp = 5000; need[] = {"GeorgeTown_Center","GeorgeTown_Sud","GeorgeTown_Nord","QG_Gendarmerie","Saint_Julien","OuaOue","Nicolet_Nord","Nicolet_Sud","Nicolet_Centre","SaintPaul","Savu","La_Rochelle_Ouest","La_Rochelle_Centre","La_Rochelle_Port","La_Rochelle_Sud","Momea","Penelo","LaRochelle_Aerodrome","Nasua","Ovau","Port_Industriel","Ba","Vatukoulo","Nandai","Luganville","Oumere","SawMill","Harcourt","Harcourt_CheckPoint","Kotomo","Losi","Moddergat","Tobakoro","LaFoa","Blerick","Lijnhaven","Rereki","Taga","BuaBua","PortBoise","Saioko","Doodstil","IlleSaintGeorge","TuaDua","Savaka","Katkoula","Lailai","Yannukka","Bala","Koumac","Cerebu","AeroportTanoa","Namuvaka","Laikoro","Rautake","Balavu","Balavu_Pont","Tavu","Muaceba","Leqa","Regina","Lobaka","Lami","Lakatoro","Tanouka_Centre","Tanouka_Industrie","Tanouka_Geek","Buawa","Lifou","Vagalala","Imone","Mine","Volcan_Tele","Volcan_Mont","Prison","RelaisRoutier","Galili","Sosovu","Yasa","Douen","Tuvanaka","Tuvanaka_Air","Belfort","SainteMarie","Ravi_ta","Yani","Nani"}; };
	class crochetagedevehicule { displayname = "Ce qui est a toi est a moi "; description = "vous avez crochetez un vehicule !"; xp = 100; };
	class ventedevehicule { displayname = "Hey mec elle est ou ma caisse"; icon = "icons\succes\car.paa"; description = "vous avez vendu un vehicule !"; xp = 0; };
	class achatdevetement { displayname = "Tu es magnifique"; description = "vous avez acheté une nouvelle tenue !"; xp = 0; };
	class achatdenouriture { displayname = "Paupiette de volaille"; description = "vous avez acheté de la nouriture au marché !"; xp = 0; };
	class tazed { displayname = "Au Courant !"; description = "Vous vous êtes fait taser !"; xp = 0; };
	class admintazed { displayname = "10.000 Volts !"; description = "Le Taser Admin ça fait mal !"; xp = 0; };
	class adminweapons { displayname = "L'arme Fatale !"; description = "Vaut mieux pas y toucher non ?"; xp = 0; };
	class jail { displayname = "Libéré !! Délivré !!"; description = "La prison c'est pas pour moi !"; xp = 0;  };
	class house { displayname = "La Fin de L'immigration !"; description = "Enfin une maison pour y vivre !";  xp = 600; };
	//Fin Actions
	//Debut Prof
	class prof_craft_750 { displayname = "Bricolo !"; description = "Vous avez le roi de la fabrication"; xp = 0; }; 
	class prof_gathering_750 { displayname = "Ching Chong !"; description = "Vous êtes un farmeur Chinois !"; xp = 0; };
	class prof_mining_750 { displayname = "He Ho !! He Ho !!"; description = "Vous êtes le 8em Nain !"; xp = 0; };
	class prof_treasure_750 { displayname = "Indiana Jones"; description = "Les caches de cette iles sont tombé !"; xp = 0; };
	//Fin Prof
	//Debut Tier
	class level5 { displayname = "Tier 1 !"; description = "Vous avez débloqué le Tier 1"; xp = 10; };
	class level10 { displayname = "Tier 2 !"; description = "Vous avez débloqué le Tier 2"; xp = 20; };
	class level15 { displayname = "Tier 3 !"; description = "Vous avez débloqué le Tier 3"; xp = 30; };
	class level20 { displayname = "Tier 4 !"; description = "Vous avez débloqué le Tier 4"; xp = 40; };
	class level25 { displayname = "Tier 5 !"; description = "Vous avez débloqué le Tier 5"; xp = 50; };
	class level30 { displayname = "Tier 6 !"; description = "Vous avez débloqué le Tier 6"; xp = 100; };
	class level35 { displayname = "Tier 7 !"; description = "Vous avez débloqué le Tier 7"; xp = 150; };
	class level40 { displayname = "Tier 8 !"; description = "Vous avez débloqué le Tier 8"; xp = 200; };
	class level45 { displayname = "Tier 9 !"; description = "Vous avez débloqué le Tier 9"; xp = 250; };
	class level50 { displayname = "Tier 10 !"; description = "Vous avez débloqué le Tier 10"; xp = 300; };
	class level55 { displayname = "Tier 11 !"; description = "Vous avez débloqué le Tier 11"; xp = 350; };
	class level60 { displayname = "Tier 12 !"; description = "Vous avez débloqué le Tier 12"; xp = 400; };
	class level65 { displayname = "Tier 13 !"; description = "Vous avez débloqué le Tier 13"; xp = 450; };
	class level70 { displayname = "Tier 14 !"; description = "Vous avez débloqué le Tier 14"; xp = 500; };
	//Fin Tier
};
