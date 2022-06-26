

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

		RANK(R1,"1.paa","Gendarme Adjoint Volontaire");
		RANK(R2,"2.paa","Brigadier");
		RANK(R3,"3.paa","Brigadier Chef");
		RANK(R4,"4.paa","Maréchal des Logis");
		RANK(R5,"5.paa","Gendarme");
		RANK(R6,"6.paa","Marechal des Logis Chef");
		RANK(R7,"7.paa","Adjudant");
		RANK(R8,"8.paa","Adjudant Chef");
		RANK(R9,"9.paa","Major");
		RANK(R10,"10.paa","Élève-Lieutenant");
		RANK(R11,"11.paa","Lieutenant");
		RANK(R12,"12.paa","Capitaine");
		RANK(R13,"13.paa","Commandant");
		RANK(R14,"14.paa","Lieutenant Colonel");
		RANK(R15,"15.paa","Colonel");

	};

	class ONU
	{
		imgpath = "";
		rankvar = "rankEu";

		teamTag = "Onu";

		RANK(R1,"team.paa","Aspirant");
		RANK(R2,"team.paa","Sergent");
		RANK(R3,"team.paa","Caporal");
		RANK(R4,"team.paa","Lieutenant");
		RANK(R5,"team.paa","Capitaine");
		RANK(R6,"team.paa","Commandant");
		RANK(R7,"team.paa","Colonel");
		RANK(R8,"team.paa","Général d'Armée");
	};

	class ERP
	{
		imgpath = "";
		rankvar = "rankErp";

		teamTag = "Narvalo Dépannage";

		RANK(R1,"team.paa","Employé");
		RANK(R2,"team.paa","Bras Droit");
		RANK(R3,"team.paa","Chef D'Entreprise");
	};

	class MEDIC
	{
		imgpath = "icons\ranks\medic";
		rankvar = "rankMedic";

		teamTag = "Médecin";

		RANK(R1,"medic.paa","Auxiliaire");
		RANK(R2,"medic.paa","Sapeur");
		RANK(R3,"medic.paa","Sapeur 1ere Classe");
		RANK(R4,"medic.paa","Caporal");
		RANK(R5,"medic.paa","Caporal Chef");
		RANK(R6,"medic.paa","Sergent");
		RANK(R7,"medic.paa","Sergent Chef");
		RANK(R8,"medic.paa","Adjudant");
		RANK(R9,"medic.paa","Adjudant Chef");
		RANK(R10,"medic.paa","Lieutenant");
		RANK(R11,"medic.paa","Capitaine");
		RANK(R12,"medic.paa","Commandant");
		RANK(R13,"medic.paa","Lieutenant-Colonel");
		RANK(R14,"medic.paa","Colonel");
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
		TEAM(R3,"666.paa","Schwarzesmarken");
		TEAM(R4,"12.paa","Escouade Ghost");
	};
};
