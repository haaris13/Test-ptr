
obj1 attachTo [build, [4.34097,0.28873,4.9]];
c4 setVectorDirAndUp [ [0.5, 0.5, 0], [-0.5, 0.5, 0] ];
c4 attachTo [build, [0.734131,2.65088,4.56334]]; 

source01 = "#particlesource" createVehicleLocal (position obj1);  
source01 setParticleClass "FireSparks"; 
source01 attachTo [obj1, [0,-0.2,0.1]];
source01 setVectorDirAndUp [ [0, 0, 0], [0, 0, 0] ];