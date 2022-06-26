
/*-----------------------------------------------------------------------------
	 _   _ ______ _  _______   ____
	| \ | |  ____| |/ /  __ \ / __ \
	|  \| | |__  | ' /| |__) | |  | |
	| . ` |  __| |  < |  _  /| |  | |
	| |\  | |____| . \| | \ \| |__| |
	|_| \_|______|_|\_\_|  \_\____/

Server:
	 _      _____ ______ ______   _____  _____   _____  ________      __
	| |    |_   _|  ____|  ____| |_   _|/ ____| |  __ \|  ____\ \    / /
	| |      | | | |__  | |__      | | | (___   | |  | | |__   \ \  / /
	| |      | | |  __| |  __|     | |  \___ \  | |  | |  __|   \ \/ /
	| |____ _| |_| |    | |____   _| |_ ____) | | |__| | |____   \  /
	|______|_____|_|    |______| |_____|_____/  |_____/|______|   \/
(Life Is Dev)

	FileName = fn_deterre.sqf

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/
switch (param [0]) do
{
	case 1:
	{
		if(life_action_inUse) exitWith {}; 
		if (count (player nearEntities ["Man", 7]) > 1) exitWith {hint "Tu ne peux pas creuser si quelqu'un est a coté de toi !";};
		life_action_inUse = true;

/*			
			for "_i" from 1 to _rdm step 1 do
			{
				hint format ["l'action va s'effectuer dans: %1 sec",_i];
				sleep 1;
			};
*/		

		[player] remoteExec ["TON_fnc_deterre",2];
	};

	case 2:
	{
		private _posP = position player;
		private _return = param [1];
		
		{
			private _pos = (_x # 0);
			private _ammount = (_x # 1);
			if (_posP distance _pos < 3) exitWith
			{

				player playMove "AinvPknlMstpSnonWnonDnon_medic_1";

				
				[_pos,_ammount] remoteExec ["ton_fnc_removeterre",2];
				if (playerSide isEqualTo "WEST") exitWith
				{
					hint format ["Vous avez saisie au sol %1  en argent sale. Ceux ci ont été détruit.",_ammount];
				};
				ArgentSal = ArgentSal + _ammount;
				hint format ["Vous avez déterré %1 Euros !",_ammount call BIS_fnc_numberText];
				[getPlayerUID player,ArgentSal] remoteExec ["TON_fnc_updateDB",2];
				player setVariable ["ArgentSal",ArgentSal,true];
				sleep 3;
				player switchMove "stop";
				life_action_inUse = false;
			};
					hint "Bordel il n'y avais rien d'enterrer ici !";
				life_action_inUse = false;
		} forEach _return;
		if !(playerSide isEqualTo "WEST") exitWith
		{
			diag_log format ["Nekro Return Deterre - client - Value: %1",_return];
		};

	};
};


/*
player addaction ["look argent",{createDialog "LID_ARG_Sale_Show";}];

player addaction ["petit",{createDialog "LID_ARG_Sale_Type_Text_petit" ;}];

player addaction ["moyen",{createDialog "LID_ARG_Sale_Type_Text_moyen";}];

player addaction ["gros",{createDialog "LID_ARG_Sale_Type_Text_gros";}];

player addaction ["deterrer",{[1] call life_fnc_deterre;}];
*/

