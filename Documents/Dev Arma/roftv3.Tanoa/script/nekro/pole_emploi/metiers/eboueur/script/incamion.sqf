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


OKcamion = 1;
_random = param [0];
_random disableCollisionWith moncamion;
detach _random;
_random attachTo [moncamion, [0, -4.95, -.85] ];


_ac = -.85;
for "_ab" from 1 to 52 step 1 do
{
	_ac = _ac + 0.004;
	_random attachTo [moncamion, [0, -4.95, _ac] ];
	uisleep 0.0006;
};

uisleep 0.5;
_random animate ["couvercle_rot", 1];
uisleep 0.5;
_base = 0;

for "_i" from 1 to 120 do
{
	_base = _base + 1;
	_random animate ["Trash_2_rot", _base];
	uisleep 0.01;

};

//_random attachTo [moncamion, [0, -0.65, 0.25] ];
//_random attachTo [moncamion, [0, -1.65, -0.265] ];

uisleep 2;
//_random attachTo [moncamion, [0, -2.9, 0.25] ];
_random attachTo [moncamion, [0, -4.95, _ac] ];

for "_s" from 1 to 120 do
{
	_base = _base - 1;
	_random animate ["Trash_2_rot", _base];
	uisleep 0.01;
};
_random attachTo [moncamion, [0, -5.5, -0.235] ];
{
  detach _x;
  _x enableSimulationGlobal true;
} forEach attachedObjects moncamion;

_poscam = getPos moncamion;
_test = _poscam select 0;
_test1 = (_poscam select 1);
_test2 = (_poscam select 2);
//hint format ["%1 \n %2 \n %3",_test,_test1,_test2];
//_arraypos = [(_test - 2),(_test1 -2),(_test2 + 2)];



//_random setPos _arraypos;

clearWeaponCargoGlobal _random;
clearItemCargoGlobal _random;
clearMagazineCargoGlobal _random;
clearBackpackCargoGlobal _random;

_random animate ["couvercle_rot", 0];

missionpoubelle = 3;

