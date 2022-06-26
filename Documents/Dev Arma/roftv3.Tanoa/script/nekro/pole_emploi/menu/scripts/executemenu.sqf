/*-----------------------------------------------------------------------------
	 _   _ ______ _  _______   ____
	| \ | |  ____| |/ /  __ \ / __ \
	|  \| | |__  | ' /| |__) | |  | |
	| . ` |  __| |  < |  _  /| |  | |
	| |\  | |____| . \| | \ \| |__| |
	|_| \_|______|_|\_\_|  \_\____/

Server:
	 ___       ____        ___       __
    /   \     |___ \      /   \     |  |
   /  ^  \      __) |    /  ^  \    |  |
  /  /_\  \    |__ <    /  /_\  \   |  |
 /  _____  \   ___) |  /  _____  \  |  `----.
/__/     \__\ |____/  /__/     \__\ |_______|

	FileName =

	Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



	Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

	Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
	Vous pouvez le contacter a cette adresse: minenekro@gmail.com
	Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/



#include "..\..\..\..\..\script_macros.hpp";

createDialog "PoleEmploie";

lbClear 245001;

_listofjobs = M_CONFIG(getArray,"nekrojobs","listofjobs","maliste"); //Va permetre de rajouter toute la liste dans le lbadd (peut-etre si sa fonctionne)

{
	lbAdd [245001, _x];
} forEach _listofjobs;

lbSetCurSel [245001, 1];
hint '';

if (JobDisable == 1) then
{
	ctrlEnable [2450030, false];
	hint "On t'a dit d'attendre une minute ! Merci.";
};
/*
sleep 1.2;
hint format ["%1 \n %2",findDisplay 245001,(findDisplay 245001)];




while {(findDisplay 245001) != "no display" && !isNull (findDisplay 245001)} do
{
	hint 'lol';
};

sleep 2.5;

hint "While non fonctionnelle ou fini";
*/
//hint 'nop';