/*
	File: fn_welcomeNotification.sqf

	Description:
	Called upon first spawn selection and welcomes our player.
*/
/*format["Welcome %1, Please read the following as it is important!",profileName] hintC
[
	"Welcome to the server! A few things have changed with Altis Life RPG that you need to be aware of!",
	"An interaction key has been introduced which replaces the large majority of scroll wheel actions, this was for performance issues. By default this key is [Left Windows], you can change this key by pressing ESC and going to Configure->Controls->Custom
	and bind 'Use Action 10' to a single key like H. This key is used for the following actions",
	"Picking up items and money.",
	"Fishing and gathering",
	"Interacting with players (as a cop)",
	"Interacting with vehicles (repairing and cop actions)",
	"",
	"If you are having issues with interacting / picking up items just wait. A quick way to know when you can interact with that item if the server allows it is by pressing your tilde key (~) and using the circle to highlight the object, when it says for example 'Pile of Money' then
	that means you can pick it up!."
];
	*/

/*
	File: welcomecredits.sqf
	Author: Twikii
	Date: 04-18-2014
	Description:
	Creates an intro on the bottom-right hand corner of the screen and add camera effect to spawn.
*/

private ["_camera","_welcomeMessage","_camDistance","_finalText","_memberFunction","_memberNames","_rolepos","_roledir","_pos","_onScreenTime","_role1","_role1names","_role2","_role2names","_role3","_role3names","_role4","_role4names","_role5","_role5names"];
_welcomeMessage = format["Bonjour %1, bienvenue sur Pacific Island !",format["%1", name player]];
waitUntil { alive player };

cutText [_welcomeMessage, "PLAIN DOWN"];
sleep 1;


_onScreenTime = 5;

sleep 2;

_role1 = "Serveur Pacific Island";
_role1names = ["Tanoa Life est un mode Roleplay basé sur la simulation d'une vie. N'oubliez pas, ce n'est qu'un jeu!"];
_role2 = "Site et Forum";
_role2names = ["http://Pacific-Island.com"];
_role3 = "TeamSpeak";
_role3names = ["ts3.xxx"];
_role4 = "Prénom Nom";
_role4names = ["Merci de porter un pseudo sous la forme Prénom Nom ! (Obligatoire !)"];
_role5 = "Reglement";
_role5names = ["Merci de lire les règles sur le site avant de jouer sur Pacific Island!"];
_role6 = "Reboot";
_role6names = ["Les reboot sont a 02:00, 11:00, 16:00, 20:00"];
_role7 = "Carte";
_role7names = ["Ouvrez la carte pour voir les raccourcies"];
_role8 = "Level";
_role8names = ["Un Systeme de compétences est mis en place."];
_role9 = "Have Fun !";
_role9names = ["Bon jeu !"];

{
	sleep 2;
	_memberFunction = _x select 0;
	_memberNames = _x select 1;
	_finalText = format ["<t size='0.60' color='#FF0000' align='center'>%1<br /></t>", _memberFunction];
	_finalText = _finalText + "<t size='0.80' color='#FFFFFF' align='center'>";
	{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
	_finalText = _finalText + "</t>";
	_onScreenTime + (((count _memberNames) - 1) * 0.5);
	[
	_finalText,
	[safezoneX + safezoneW - 1.0,0.50], //DEFAULT: 0.5,0.35
	[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
	_onScreenTime,
	0.5
	] spawn BIS_fnc_dynamicText;
	sleep (_onScreenTime);
} forEach [
	[_role1, _role1names],
	[_role2, _role2names],
	[_role3, _role3names],
	[_role4, _role4names],
	[_role5, _role5names],
	[_role6, _role6names],
	[_role7, _role7names],
	[_role8, _role8names],
	[_role9, _role9names]
];