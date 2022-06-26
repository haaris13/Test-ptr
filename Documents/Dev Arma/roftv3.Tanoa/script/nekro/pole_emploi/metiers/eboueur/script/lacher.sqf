_random = param [0];
{
  detach _x;
  _x enableSimulationGlobal true;
} forEach attachedObjects player;
/*thepoubelle*/ _random animate ["Trash_2_rot", 0];
hint "Vous avez laché la poubelle";
missionpoubelle = 3;