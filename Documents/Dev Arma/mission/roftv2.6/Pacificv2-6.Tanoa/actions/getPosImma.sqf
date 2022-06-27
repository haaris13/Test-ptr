player addEventHandler["Fired",{

	_ammoType = _this select 4;
	_projectile = _this select 6;


	_projectile spawn {
		private "_position";
		while {!isNull _this} do {
			_position = ASLtoATL (visiblePositionASL _this);
			sleep 0.1;
		};
		hint ("Pos:" + str _position + str (veh_1 worldToModel _position));
		diag_log str (veh_1 worldToModel _position);
	};
}];

/*


["spine","spine1","spine2","spine3","head","leftshoulder","leftarm","leftarmroll","leftforearm","leftforearmroll","lefthand",
"rightshoulder","rightarm","rightarmroll","rightforearm","rightforearmroll","righthand","pelvis","leftupleg","leftuplegroll","leftleg","leftlegroll","leftfoot","lefttoebase",
"rightupleg","rightuplegroll","rightleg","rightlegroll","rightfoot","righttoebase","weapon","proxy:\a3\characters_f\proxies\weapon.001","proxy:\a3\characters_f\proxies\pistol.001",
"proxy:\a3\characters_f\proxies\binoculars.001","proxy:\a3\characters_f\proxies\launcher.001","launcher","nvg","proxy:\a3\characters_f\proxies\nvg.001","proxy:\a3\characters_f\proxies\flag.001",
"proxy:\a3\characters_f\proxies\equipment.001","proxy:\a3\characters_f\proxies\backpack.001","proxy:\a3\characters_f\proxies\pistol_holstered.001",
"proxy:\a3\characters_f\proxies\head_male.001","proxy:\a3\characters_f\proxies\glasses.001","proxy:\a3\characters_f\proxies\headgear.001",
"proxy:\a3\characters_f\proxies\hair.001","proxy:\a3\characters_f\proxies\backpack2.001","proxy:\a3\characters_f\proxies\radio.001","body_proxy",
"head_proxy","lefthandindex1","lefthandindex2","lefthandindex3","lefthandmiddle1","lefthandmiddle2","lefthandmiddle3","lefthandring","lefthandpinky1",
"lefthandpinky2","lefthandpinky3","lefthandring1","lefthandring2","lefthandring3","lefthandthumb1","lefthandthumb2","lefthandthumb3","righthandindex1","righthandindex2","righthandindex3",
"righthandmiddle1","righthandmiddle2","righthandmiddle3","righthandring","righthandpinky1","righthandpinky2","righthandpinky3","righthandring1","righthandring2","righthandring3",
"righthandthumb1","righthandthumb2","righthandthumb3","injury_hands","camo","proxy:\a3\characters_f\heads\bysta.001","injury_legs","proxy:\a3\characters_f\proxies\hmd.001","hl",
"insignia","injury_body","clan"]

*/