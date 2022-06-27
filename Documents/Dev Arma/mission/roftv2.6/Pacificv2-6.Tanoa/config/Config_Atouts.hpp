/*
	Liste des Atouts

	Autor:IronBlade
*/

class AtoutsParent {
	
	class juice {
		childs[] = {"juiceStart", "juice"}; // Perte entrainement /2
	};

	class cocktail {
		childs[] = {"cocktailStart", "cocktail", "cocktailCoolDown"}; // 
	};

	class specialDonuts {
		childs[] = {"specialDonutsStart", "specialDonuts", "specialDonutsCoolDown"};
	};

	class beer {
		childs[] = {"beer", "beerCoolDown"};
	};

	class vodka {
		childs[] = {"vodkaStart", "vodka", "vodkaCoolDown"};
	};

	class joint1 {
		childs[] = {"joint1", "joint1CoolDown"};
	};

	class joint2 {
		childs[] = {"joint2", "joint2CoolDown"};
	};

	class joint3 {
		childs[] = {"joint3", "joint3CoolDown"};
	};

	class blunt1 {
		childs[] = {"blunt1", "blunt1CoolDown"};
	};

	class blunt2 {
		childs[] = {"blunt2", "blunt2CoolDown"};
	};
};

class Atouts {

	// Pollos Palace
	class glaceFolle {
		variable = "glaceFolle";

		title = "Glace Folle";

		duree = 60;

		illegal = true;

	};

	class spaceCake {

		variable = "spaceCake";

		title = "Space Cake";

		duree = 60;

		illegal = true;
	};
	

	// Heal

	class morphine {
		variable = "morphine";

		title = "Sous Morphine";

		duree = 10;

		illegal = false;
	};

	class testAtouts {
		variable = "testAtouts";
		item = "testAtouts";
		title = "Atouts Test";
		type = "drogue"; // drogue, alcohol, normal, cooldown

		duree = 120;

		illegal = false;
	};







	// Bar
	class juiceStart {
		parent = "juice";

		item = "juice";
		globalTitle = "Jus de fruit";
		title = "Dégustation du jus de fruit.";
		description = "Il faut attendre la fin de la dégustation pour que cela fasse effet.";
		type = "normal";

		duree = (5 * 60); // 2mn

		onBar = true;
		illegal = false;

		sound = "Drink";
		next = "juice";
	};

	class juice {
		parent = "juice";

		globalTitle = "Jus de fruit";
		title = "Jus de Fruit";
		description = "Vous perdez 2 fois moins vos compétences d'armes.";
		type = "normal";

		duree = 10800; // 3h

		illegal = false;

		sound = "";
	};

	class cocktailStart {
		parent = "cocktail";

		item = "cocktail";
		globalTitle = "Le Paradise";
		title = "Dégustation du Paradise.";
		description = "Il faut attendre la fin de la dégustation pour que cela fasse effet.";
		type = "alcohol";

		duree = (5 * 60); // 5mn

		onBar = true;
		illegal = true;

		sound = "Drink";
		next = "cocktail";
	};

	class cocktail {
		parent = "cocktail";

		globalTitle = "Le Paradise";
		title = "Le Paradise";
		description = "Vous gagnez 180XP toutes les 1 minutes.";
		type = "alcohol";

		duree = 1200; // 20Mn

		illegal = true;

		sound = "";
		next = "cocktailCoolDown";
	};

	class cocktailCoolDown {
		parent = "juice";
		
		globalTitle = "Le Paradise";
		title = "Digestion du Paradise";
		description = "Il faut attendre de digérer pour pouvoir consommer a nouveau.";

		duree = 7200; // 2h

		type = "cooldown";
		illegal = false;
		isCoolDown = true;

		sound = "";
	};

	class specialDonutsStart {
		parent = "specialDonuts";

		item = "specialDonuts";
		globalTitle = "Donut au caramel";
		title = "Dégustation du donut au caramel.";
		description = "Il faut attendre la fin de la dégustation pour que cela fasse effet.";
		type = "normal";

		duree = (5 * 60); // 5mn

		onBar = true;
		illegal = false;

		sound = "Eat";
		next = "specialDonuts";
	};

	class specialDonuts {
		parent = "specialDonuts";

		globalTitle = "Donut au caramel";
		title = "Donut au caramel";
		description = "Vous n'avez plus faim ni soif.";
		type = "normal";

		duree = 3600; // 1H

		illegal = false;

		sound = "";
		next = "specialDonutsCoolDown";
	};

	class specialDonutsCoolDown {
		parent = "specialDonuts";
		
		globalTitle = "Donut au caramel";
		title = "Digestion du donut au caramel";
		description = "Il faut attendre de digérer pour pouvoir consommer a nouveau.";

		duree = 3600; // 1h

		type = "cooldown";
		illegal = false;
		isCoolDown = true;

		sound = "";
	};


	// Beer
	class beer {
		parent = "beer";
		item = "beer";

		globalTitle = "Bière blanche";
		title = "Bière blanche";
		description = "Vous apprenez 50% fois plus vite vos compétences d'armes.";
		type = "alcohol";

		duree = 1200; // 20M

		illegal = true;

		sound = "Drink";
		next = "beerCoolDown";
	};

	class beerCoolDown {
		parent = "beer";
		
		globalTitle = "Bière blanche";
		title = "Digestion de la bière blanche";
		description = "Il faut attendre de digérer pour pouvoir consommer a nouveau.";

		duree = 3600; // 1h

		type = "cooldown";
		illegal = false;
		isCoolDown = true;

		sound = "";
	};

	class vodkaStart {
		parent = "vodka";

		item = "vodka";
		globalTitle = "Shooter de Vodka";
		title = "Dégustation du Shooter de Vodka.";
		description = "Il faut attendre la fin de la dégustation pour que cela fasse effet.";
		type = "alcohol";

		duree = (5 * 60); // 2mn

		onBar = true;
		illegal = true;

		sound = "Drink";
		next = "vodka";
	};

	class vodka {
		parent = "vodka";

		globalTitle = "Shooter de Vodka";
		title = "Shooter de Vodka";
		description = "Vous apprenez 30% plus vite vos niveaux de profession légal.";
		type = "alcohol";

		duree = 5400; // 1H30

		illegal = true;

		sound = "";
		next = "vodkaCoolDown";
	};

	class vodkaCoolDown {
		parent = "vodka";
		
		globalTitle = "Shooter de Vodka";
		title = "Digestion du shooter de Vodka";
		description = "Il faut attendre de digérer pour pouvoir consommer a nouveau.";

		duree = 3600; // 1h

		type = "cooldown";
		illegal = false;
		isCoolDown = true;

		sound = "";
	};

	class joint1 { // Reset Perks
		parent = "joint1";
		item = "joint1";

		globalTitle = "Joint d'el olvido";
		title = "Joint d'el olvido";
		description = "Vous pouvez retirer une perks gratuitement.";
		type = "drogue";

		duree = 1200; // 20M

		illegal = true;
		isSigs = true;

		sound = "";
		next = "joint1CoolDown";
	};

	class joint1CoolDown {
		parent = "joint1";
		
		globalTitle = "Joint d'el olvido";
		title = "Joint d'el olvido";
		description = "Il faut attendre de digérer pour pouvoir consommer a nouveau.";

		duree = 14400; // 3h

		type = "cooldown";
		illegal = false;
		isCoolDown = true;

		sound = "";
	};

	class joint2 {
		parent = "joint2";
		item = "joint2";

		globalTitle = "Joint d'el concentración";
		title = "Joint d'el concentración";
		description = "Vous apprenez 50% fois plus vite vos compétences d'armes.";
		type = "drogue";

		duree = 1200; // 20M

		illegal = true;
		isSigs = true;

		sound = "";
		next = "joint1CoolDown";
	};

	class joint2CoolDown {
		parent = "joint2";
		
		globalTitle = "Joint d'el concentración";
		title = "Joint d'el concentración";
		description = "Il faut attendre de digérer pour pouvoir consommer a nouveau.";

		duree = 3600; // 1h

		type = "cooldown";
		illegal = false;
		isCoolDown = true;

		sound = "";
	};

	class joint3 {
		parent = "joint3";
		item = "joint3";
		
		globalTitle = "Joint d'el locura";
		title = "Joint d'el locura";
		description = "Vous tenez votre arme parfaitement.";
		type = "drogue";

		duree = 1800; // 30M

		illegal = true;
		isSigs = true;

		sound = "";
		next = "joint1CoolDown";
	};

	class joint3CoolDown {
		parent = "joint3";
		
		globalTitle = "Joint d'el locura";
		title = "Joint d'el locura";
		description = "Il faut attendre de digérer pour pouvoir consommer a nouveau.";

		duree = 3600; // 1h

		type = "cooldown";
		illegal = false;
		isCoolDown = true;

		sound = "";
	};

	class blunt1 {
		parent = "blunt1";
		item = "blunt1";

		globalTitle = "Blunt d'el sucio";
		title = "Blunt d'el sucio";
		description = "Vous apprenez 30% plus vite vos niveaux de profession illégal.";
		type = "drogue";

		duree = 5400; // 1H30

		illegal = true;
		isSigs = true;

		sound = "";
		next = "joint1CoolDown";
	};

	class blunt1CoolDown {
		parent = "blunt1";
		
		globalTitle = "Blunt d'el sucio";
		title = "Blunt d'el sucio";
		description = "Il faut attendre de digérer pour pouvoir consommer a nouveau.";

		duree = 3600; // 1h

		type = "cooldown";
		illegal = false;
		isCoolDown = true;

		sound = "";
	};

	class blunt2 {
		parent = "blunt2";
		item = "blunt2";

		globalTitle = "Blunt d'el velocidad";
		title = "Blunt d'el velocidad";
		description = "Vous traitez de l'illégal plus rapidement.";
		type = "drogue";

		duree = 7200; // 2H

		illegal = true;
		isSigs = true;

		sound = "";
		next = "joint1CoolDown";
	};

	class blunt2CoolDown {
		parent = "blunt2";
		
		globalTitle = "Blunt d'el velocidad";
		title = "Blunt d'el velocidad";
		description = "Il faut attendre de digérer pour pouvoir consommer a nouveau.";

		duree = 7200; // 1h

		type = "cooldown";
		illegal = false;
		isCoolDown = true;

		sound = "";
	};

	// Reset perks 
	// Competence tir plus entrainement
	// Competence tir max 30 minutes
	// Gain profession illégal
	// Temps traitement illégal plus rapide

	// Drug
	// isGoogles


};