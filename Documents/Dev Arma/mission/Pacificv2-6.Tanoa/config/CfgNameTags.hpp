/*
	Autor:IronBlade
*/
#define RANK(RANK,ICON,TEXT) class RANK {icon = ICON; text = TEXT;}
#define TEAM(TEAM,ICON,TEXT) class TEAM {icon = ICON; text = TEXT;}

class CfgNameTags
{
	unitsToScan[] = {"Man"};
	unitsToScanDist = 15;

	class POLICE
	{
		imgpath = "icons\ranks\cops";
		rankvar = "rank";

		teamTag = "";

		checkClothes = 1;

		RANK(R1,"1.paa","Gendarme Adjoint Volontaire");
		RANK(R2,"3.paa","Brigadier");
		RANK(R3,"4.paa","Brigadier Chef");
		RANK(R4,"5.paa","Maréchal des Logis");
		RANK(R5,"6.paa","Gendarme");
		RANK(R6,"8.paa","Maréchal des Logis Chef");
		RANK(R7,"9.paa","Adjudant");
		RANK(R8,"10.paa","Adjudant Chef");
		RANK(R9,"11.paa","Major");
		RANK(R10,"14.paa","Lieutenant");
		RANK(R11,"15.paa","Capitaine");
		RANK(R12,"16.paa","Commandant");
		RANK(R13,"18.paa","Colonel");

		class Clothes {

			class V_POD_Gen_01_GAV_A {
				rank = 1;
			};

			class V_POD_Gen_02_GAV_A {
				rank = 1;
			};

			class V_POD_Gen_01_Brigadier_A {
				rank = 2;
			};

			class V_POD_Gen_02_Brigadier_A {
				rank = 2;
			};

			class V_POD_Gen_01_BrigadierChef_A {
				rank = 3;
			};

			class V_POD_Gen_02_BrigadierChef_A {
				rank = 3;
			};

			class V_POD_Gen_01_MarechalDesLogis_A {
				rank = 4;
			};

			class V_POD_Gen_02_MarechalDesLogis_A {
				rank = 4;
			};

			class V_POD_Gen_01_Gendarme_A {
				rank = 5;
			};

			class V_POD_Gen_02_Gendarme_A {
				rank = 5;
			};

			class V_POD_Gen_01_MarechalDesLogisChef_A {
				rank = 6;
			};

			class V_POD_Gen_02_MarechalDesLogisChef_A {
				rank = 6;
			};

			class V_POD_Gen_01_Adjudant_A {
				rank = 7;
			};

			class V_POD_Gen_02_Adjudant_A {
				rank = 7;
			};

			class V_POD_Gen_01_AdjudantChef_A {
				rank = 8;
			};

			class V_POD_Gen_02_AdjudantChef_A {
				rank = 8;
			};

			class V_POD_Gen_01_Major_A {
				rank = 9;
			};

			class V_POD_Gen_02_Major_A {
				rank = 9;
			};

			class V_POD_Gen_01_Lieutenant_A {
				rank = 10;
			};

			class V_POD_Gen_02_Lieutenant_A {
				rank = 10;
			};

			class V_POD_Gen_01_Captaine_A {
				rank = 11;
			};

			class V_POD_Gen_02_Captaine_A {
				rank = 11;
			};

			class V_POD_Gen_01_Commandant_A {
				rank = 12;
			};

			class V_POD_Gen_02_Commandant_A {
				rank = 12;
			};

			class V_POD_Gen_01_Colonel_A {
				rank = 13;
			};

			class V_POD_Gen_02_Colonel_A {
				rank = 13;
			};
		};
	};

	class DEPAN
	{
		imgpath = "";
		rankvar = "rankDepan";

		teamTag = "Dépannage";

		RANK(R1,"team.paa","Employé");
		RANK(R2,"team.paa","Bras Droit");
		RANK(R3,"team.paa","Chef D'Entreprise");
	};

	class PRESS
	{
		imgpath = "";
		rankvar = "rankPress";

		teamTag = "Presse";

		RANK(R1,"team.paa","Employé");
		RANK(R2,"team.paa","Bras Droit");
		RANK(R3,"team.paa","Chef D'Entreprise");
	};

	class MEDIC
	{
		imgpath = "icons\ranks\medic";
		rankvar = "rankMedic";

		teamTag = "Médecin";

		RANK(R1,"medic.paa","Sapeur 2ième classe");
		RANK(R2,"medic.paa","Sapeur 1ere Classe");
		RANK(R3,"medic.paa","Caporal");
		RANK(R4,"medic.paa","Caporal-Chef");
		RANK(R5,"medic.paa","Sergent");
		RANK(R6,"medic.paa","Sergent-Chef");
		RANK(R7,"medic.paa","Adjudant");
		RANK(R8,"medic.paa","Adjudant-Chef");
		RANK(R9,"medic.paa","Sous-Lieutenant");
		RANK(R10,"medic.paa","Lieutenant");
		RANK(R11,"medic.paa","Captaine");
		RANK(R12,"medic.paa","Commandant");
		RANK(R13,"medic.paa","Lieutenant-Colonel");
		RANK(R14,"medic.paa","Colonel");
	};

	class OCAS
	{
		imgpath = "";
		rankvar = "rankOcas";

		teamTag = "Occasion Dépot";

		RANK(R1,"team.paa","Employé");
		RANK(R2,"team.paa","Bras Droit");
		RANK(R3,"team.paa","Chef D'Entreprise");
	};

	class BAR
	{
		imgpath = "";
		rankvar = "rankBar";

		teamTag = "La Pomme dorée";

		RANK(R1,"team.paa","Employé");
		RANK(R2,"team.paa","Bras Droit");
		RANK(R3,"team.paa","Chef D'Entreprise");
	};

	class JOHNSON
	{
		imgpath = "";
		rankvar = "rankJohnson";

		teamTag = "Johnson";

		RANK(R1,"team.paa","Employé");
		RANK(R2,"team.paa","Bras Droit");
		RANK(R3,"team.paa","Chef D'Entreprise");
	};
};

class CfgTeamTags
{
	class GENDARMERIE
	{
		rankvar = "team";
		imgpath = "icons\ranks\cops";
		TEAM(R1,"","Gendarmerie");
		TEAM(R2,"","Commando Marine");
		TEAM(R3,"12.paa","Escouade Ghost");
	};
};