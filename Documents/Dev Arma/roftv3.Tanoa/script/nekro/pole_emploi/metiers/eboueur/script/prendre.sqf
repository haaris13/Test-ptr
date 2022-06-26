
hint "Vous avez récuperé une poubelle";


_random = param [0];

/*thepoubelle*/ _random attachTo [player, [0, 1.5, 0.7] ];

//hint format ["pos joueur; %1  \n pos poubelle; %2 ",getDir player,getDir thepoubelle];

/*thepoubelle*/ _random animate ["Trash_2_rot", 340];

//thepoubelle enableSimulationGlobal false;
missionpoubelle = 2;