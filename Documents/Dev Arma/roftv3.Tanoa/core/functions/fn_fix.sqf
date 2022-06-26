/*
Script fix skin
*/
private["_oldClothes","_olduniformItems","_oldBackpack","_oldVest","_oldVestItems","_oldBackpackItems","_oldGlasses","_oldHat","_magazinesAmmoFull"];

_oldClothes = uniform player;
_olduniformItems = uniformItems player;
_oldBackpack = backpack player;
_oldVest = vest player;
_oldVestItems = vestItems player;
_oldBackpackItems = backpackItems player;
_oldGlasses = goggles player;
_oldHat = headgear player;
_magazinesAmmoFull = magazinesAmmoFull player;

removeUniform player;
removeBackpack player;
removeVest player;
removeGoggles player;
removeHeadgear player;

player forceAddUniform _oldClothes;
if(count _olduniformItems > 0) then {
    {
        if ( !(isClass (configFile >> "CFGMagazines" >> _x)) && {!(_x in ["SmokeShellRed","HandGrenade_Stone","SmokeShell","SmokeShellGreen","1Rnd_Smoke_Grenade_shell","UGL_FlareYellow_F","SmokeShellRed","1Rnd_SmokeRed_Grenade_shell"])}) then {
            [_x,true,false,false,true] call life_fnc_handleItem;
        };
    } foreach _olduniformItems;
};

player addBackpack _oldBackpack;
clearAllItemsFromBackpack player;
if(count _oldBackpackItems > 0) then {
    {
        if ( !(isClass (configFile >> "CFGMagazines" >> _x)) && {!(_x in ["SmokeShellRed","HandGrenade_Stone","SmokeShell","SmokeShellGreen","1Rnd_Smoke_Grenade_shell","UGL_FlareYellow_F","SmokeShellRed","1Rnd_SmokeRed_Grenade_shell"])}) then {
            [_x,true,true] call life_fnc_handleItem;
        };
    } foreach _oldBackpackItems;
};

player addVest _oldVest;
if(count _oldVestItems > 0) then {
    {
        if ( !(isClass (configFile >> "CFGMagazines" >> _x)) && {!(_x in ["SmokeShellRed","HandGrenade_Stone","SmokeShell","SmokeShellGreen","1Rnd_Smoke_Grenade_shell","UGL_FlareYellow_F","SmokeShellRed","1Rnd_SmokeRed_Grenade_shell"])}) then {
            [_x,true,false,false,true] call life_fnc_handleItem;
        };
    } foreach _oldVestItems;
};

player addGoggles _oldGlasses;
player addHeadgear _oldHat;

{
    if ( ((_x select 4) in ["Uniform","Backpack","Vest"]) || ((_x select 0) in ["SmokeShellRed","HandGrenade_Stone","SmokeShell","SmokeShellGreen","1Rnd_Smoke_Grenade_shell","UGL_FlareYellow_F","SmokeShellRed","1Rnd_SmokeRed_Grenade_shell"])) then {
        player addMagazine [_x select 0, _x select 1];
    };
} foreach _magazinesAmmoFull;

