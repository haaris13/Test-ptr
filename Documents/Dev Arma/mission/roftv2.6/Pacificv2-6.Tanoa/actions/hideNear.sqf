_objs = nearestObjects [player, [], 100]; 
_class = "tinwall"; 
 
listes = []; 
 
{ 
 _obj = _x; 
 
 _name = str(_obj); 
 
 _result = (_name splitString ":"); 
 
 if ((_result select 1) find _class >= 0) then { 
  	listes pushBack parseNumber(_result select 0);
 }; 
 
} forEach _objs;


{
  hideObject ([9040.17,11257.9,0.00144196] nearestObject _x);
} forEach [487598,487594,487592,487599,487597,487591,487593,487596,487600,487595,487703,487711,487707,487706,487712,487713,487710,487705,487704,487775,487772,487776,487773,487778,487771,487777,487780,487782,487781,487779];