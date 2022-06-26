_pathtotools = "Admin\tools\";
_EXECscript1 = 'player execVM "'+_pathtotools+'%1"';

if ((getPlayerUID player) in ["76561198059757685","76561198118138558","76561198045934831"]) then { //all admins
	if ((getPlayerUID player) in ["76561198059757685","76561198118138558","76561198045934831"]) then { //Admins Go Here aswell
		adminmenu =
		[
			["Fusions Menu",true],
				["Admin Menu", [4], "#USER:ToolsMenu", -5, [["expression", ""]], "1", "1"],
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
        ["Teleport", [2],  "", -5, [["expression", format[_EXECscript1,"teleport.sqf"]]], "1", "1"],
		["Teleport Player To Me", [3],  "", -5, [["expression", format[_EXECscript1,"tptome.sqf"]]], "1", "1"],		
        ["Teleport to Player", [4],  "", -5, [["expression", format[_EXECscript1,"tpto.sqf"]]], "1", "1"],
		["Car God Mode", [5],  "", -5, [["expression", format[_EXECscript1,"cargod.sqf"]]], "1", "1"],
		["Heal Self", [6],  "", -5, [["expression", format[_EXECscript1,"heal.sqf"]]], "1", "1"],
		["Heal Player(s)", [7],  "", -5, [["expression", format[_EXECscript1,"healp.sqf"]]], "1", "1"],
		["Arsenal", [8],  "", -5, [["expression", format[_EXECscript1,"arsenal.sqf"]]], "1", "1"],
		["Mettre au Garage", [9],  "", -5, [["expression", format[_EXECscript1,"garage.sqf"]]], "1", "1"],
		["Revive", [10],  "", -5, [["expression", format[_EXECscript1,"fire.sqf"]]], "1", "1"],
		["Se Cacher", [11],  "", -5, [["expression", format[_EXECscript1,"dev.sqf"]]], "1", "1"],
			["Exit", [12], "", -3, [["expression", ""]], "1", "1"]
];
showCommandingMenu "#USER:adminmenu";