waitUntil {!isNull player && player == player};
if(player diarySubjectExists "rules")exitwith{};

player createDiarySubject ["credits","Credits"];
player createDiarySubject ["changelog","Change Log"];

/*  Example
	player createDiaryRecord ["", //Container
		[
			"", //Subsection
				"
					TEXT HERE<br/><br/>
				"
		]
	];
*/

	player createDiaryRecord ["credits",
		[
			"Pacific Island",
				"
					Pacific Island is a modified project from the original Altis Life RPG by tonic.<br/><br/>

					
				"
		]
	];

	player createDiaryRecord["changelog",
		[
			"Altis Life Change Log",
				"
					The official change log can be found in ArmaLife github.<br/><br/>

					v4.3 release 4!<br/>
					by: danielstuart14<br/>
					31. January 2016<br/><br/>

					v4.3.2 release!<br/>
					by: danielstuart14<br/>
					22. January 2016<br/><br/>

					v4.3.1 release!<br/>
					by: danielstuart14<br/>
					19. January 2016<br/><br/>
				"
		]
	];

	player createDiaryRecord["changelog",
		[
			"Pacific Island Change log",
				"
					Les mises à jours dePacific Island sont disponible sur le site officiel et sur le discord avec d'avantages de détails<br/><br/>

					1.0 Expérimental<br/>
					Lancement du projet !<br/>
					- Ajout du téléphone<br/>
					- Ajout des stand de tir<br/>
					- Ajout de la killzone<br/>
					- Ajout de la compétence de tir<br/>
					- Ajout des factures<br/>
					- Ajout de l'argent sale<br/>
					- Ajout de l'argent physique<br/>
					- Ajout d'un nouveau système de marqueur<br/>
					- Ajout d'un nouveau système de menottage<br/>
					- Ajout de deux nouveaux farms<br/>
					- Refonte des notifications<br/>
					- Refonte des braquages de banques<br/>
					- Refonte de l'économie<br/>
					25 Janvier 2020<br/><br/>
				"
		]
	];