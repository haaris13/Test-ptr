_pathtotools = "Admin\tools\";
_EXECscript1 = 'player execVM "'+_pathtotools+'%1"';

if ((getPlayerUID player) in ["76561198059757685"]) then { //all admins
	if ((getPlayerUID player) in ["76561198059757685"]) then { //Admins Go Here aswell
		adminmenu =
		[
			["Fusions Menu",true],
				["Menu Admin", [4], "#USER:ToolsMenu", -5, [["expression", ""]], "1", "1"],
			["Exit", [13], "", -3, [["expression", ""]], "1", "1"]
		];};
} else {
adminmenu =
[
	["",true],
		//["Toggle Debug", [2], "", -5, [["expression", format[_execdebug,"playerstats.sqf"]]], "1", "1"],
		["", [-1], "", -5, [["expression", ""]], "1", "0"],
	["Exit", [13], "", -3, [["expression", ""]], "1", "1"]
];};
ToolsMenu =
[
	["Tools",true],
        ["Téléportation", [2],  "", -5, [["expression", format[_EXECscript1,"teleport.sqf"]]], "1", "1"],
		["Téléporter le joueur à moi", [3],  "", -5, [["expression", format[_EXECscript1,"tptome.sqf"]]], "1", "1"],
        ["Me téléporter sur le joueur", [4],  "", -5, [["expression", format[_EXECscript1,"tpto.sqf"]]], "1", "1"],
		["Véhicule invincible", [5],  "", -5, [["expression", format[_EXECscript1,"cargod.sqf"]]], "1", "1"],
		["Se soigner", [6],  "", -5, [["expression", format[_EXECscript1,"heal.sqf"]]], "1", "1"],
		["Soigner le joueur", [7],  "", -5, [["expression", format[_EXECscript1,"healp.sqf"]]], "1", "1"],
		["Arsenal", [8],  "", -5, [["expression", format[_EXECscript1,"arsenal.sqf"]]], "1", "1"],
		["Mettre au Garage", [9],  "", -5, [["expression", format[_EXECscript1,"garage.sqf"]]], "1", "1"],
		["Réanimer", [10],  "", -5, [["expression", format[_EXECscript1,"fire.sqf"]]], "1", "1"],
		["Se Cacher", [11],  "", -5, [["expression", format[_EXECscript1,"dev.sqf"]]], "1", "1"],
			["Quitter", [12], "", -3, [["expression", ""]], "1", "1"]
];
showCommandingMenu "#USER:adminmenu";
