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
private ["_time","_position"];


_time = 180;
_position = param [0];
while {Entretien == 3 && Inmission == 1 } do
{
	if (_time > 0 && vehicle player == entretient && position player distance position _position <750 && (speed player) <51 && (speed player) > 3) then
	{

		hint format ["Il te reste plus que \n %1 sec a surveiller, \n après tu pourras revenir !",_time];
		_time = _time - 1;
	};
	if (_time > 0 && vehicle player == entretient && position player distance position _position >749) then
	{
		hint format ["BORDEL ! \n RESTE DANS LA ZONE ! \n Il te reste plus que \n %1 sec à surveiller, \n après tu pourras revenir !",_time];
	};
	if ((speed player) >50 && position player distance position _position < 750) then
	{
		hint "VA MOINS VITE TU EST EN VILLE ET TU DOIS BIEN SURVEILLER \n \n IDIOT !";
	};
	if ((speed player) >50 && position player distance position _position > 749) then
	{
		hint "TU N'ES PLUS DANS LA ZONE ! \n EN PLUS TU DOIS ALLER MOINS VITE TU ES EN VILLE ET TU DOIS BIEN SURVEILLER \n \n IDIOT  !";
	};
	if (_time == 0) exitWith
	{
		hint "Tu as fini ta mission, tu peux maintenant revenir !";
		Entretien = 2;
	};
	uisleep 1;
};