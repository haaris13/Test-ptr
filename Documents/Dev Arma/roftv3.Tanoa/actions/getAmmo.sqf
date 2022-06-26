

_ammo = "true" configClasses (configfile >> "CfgAmmo"); 

_tab = [];

{
  _tab pushBack configName(_x);
} forEach _ammo;

copyToClipboard _tab;