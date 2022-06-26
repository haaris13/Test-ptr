/*-----------------------------------------------------------------------------
	 _   _ ______ _  _______   ____
	| \ | |  ____| |/ /  __ \ / __ \
	|  \| | |__  | ' /| |__) | |  | |
	| . ` |  __| |  < |  _  /| |  | |
	| |\  | |____| . \| | \ \| |__| |
	|_| \_|______|_|\_\_|  \_\____/

Server:
 _____   ____  ______ _______
|  __ \ / __ \|  ____|__   __|
| |__) | |  | | |__     | |
|  _  /| |  | |  __|    | |
| | \ \| |__| | |       | |
|_|  \_\\____/|_|       |_|

(Pacific Island)

	FileName = fn_creategroundMoney.sqf

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/

private _pos = (position player);
private _montant = parseNumber(ctrlText 1555);



if (_montant isEqualTo 0) exitWith {hint "vous ne pouvez pas enterrer un sac vide";};

if (_montant > ArgentSal) exitWith {hint format ["%1, vous ne disposez pas de l'argent nécéssaire ! vous avez seulement %2 en argent sale !",name player,ArgentSal];};
//need to do playmove.
maxi = 0;
if (param [0] isEqualTo "petit") then
{
	maxi = 20000;
	[false,"petitsac",1] call life_fnc_handleInv;
};

if (param [0] isEqualTo "moyen") then
{
	maxi = 250000;
	[false,"malette",1] call life_fnc_handleInv;
};

if (param [0] isEqualTo "gros") then
{
	maxi = 1000000;
	[false,"sacdesport",1] call life_fnc_handleInv;
};

private _max = maxi;
maxi = nil;
if (_montant > _max) exitWith {hint "vous ne pouvez pas effectuer cela avec un si petit sac.";};
closeDialog 0;
player playMove "AwopPknlMstpSgthWpstDnon_Part1";
ArgentSal = ArgentSal - _montant;
player setVariable ["ArgentSal",ArgentSal,true];
[player,getPlayerUID player,ArgentSal,_pos,_montant] remoteExec ["TON_fnc_addnewargent",2];
[getPlayerUID player,ArgentSal] remoteExec ["TON_fnc_updateDB",2];
hint format ["Vous avez enterré %1 euros, n'oubliez pas votre position !",_montant];
player switchMove "stop";