/*
	Config For Shell

	Autor: IronBlade
*/

class CfgShell {

	// Class CompShell for All Computers
	class CompShell {

		// Personal
		class Personal {
			user = "root@pod863";

			load[] = {"Run => init.sh", "Ready.", "Load system.db", "-> Set All Users", "Define folder", "Good.", "find user", "diskcopy backup", "Complete.", "All File Check.", "Reading pack... Done", "Reading state information... Done", "All System Is Done.."};

			class MainDirectory {};

			class Files {
				class print {
					conditionShow = "";
				};
				class helloworld {
					conditionShow = "";
				};
			};
		};

		class VehCop {
			user = "user@genServ23";

			load[] = {"Run => init.sh", "Ready.", "Load system.db", "-> Set All Users", "Connect to Serveur", "Good.", "find user", "diskcopy backup", "Complete.", "All File Check.", "Reading pack... Done", "Reading state information... Done", "All System Is Done.."};

			class MainDirectory {
				class home {
					class prgm {
						class external {};

						files[] = {{"checkImma.sh", ""}};
					};
				};

				class var {
					class tmp {};
					files[] = {{"print.sh", ""}};
				};
			};
		};
	};

	class Programs {

		class helloworld {
			action = "hint 'helloworld';";
			info = "";
			conditionOpen = "";
			extention = "sh";
		};

		class print {
			action = "_text = ''; if (count _this > 0) then {_text = _this select 0;}; [_text, false] spawn life_fnc_shellPrint;";
			info = "";
			conditionOpen = "";
			extention = "sh";
		};

		class checkImma {
			action = "";
			info = "";
			conditionOpen = "";
			extention = "sh";
		};
	};
};