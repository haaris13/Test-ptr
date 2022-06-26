passTupyForThisReboot = selectRandom["fU54C5duK7","3Um39V9sMz","H9X92f7Ljb","cknKWT5883","9uJXW3fc66","pC9m3FyD49","Bj73Kft73T","R7hXz775sC","37yV4JteL3","5T9a4v3mRU","ad6pL2V99Z","mYqA3M75n4","x6BVPz447u","ZV5rs42M4b","ntG9z35V2C","Xb222J3Jpk","5zL77sD5Qf","N7vb8h7HS8","36JtBKm85r","ryRNA923z8","3Kc48x2DjV","5U5Aca5Xv9","49EgQm58Sx","6GT69E2jjx","f8Mah2H5K9","r7v9h8W2LA","w94f8rYFQ9","6JfC3z8sF2","nXRr7475wM","w9MwcD8G32","Y5Euh537cK","c5423LeFtH","ka4Y6Z3n6T","3Dq67Z8urZ","96geMrX8A8","932kYJD6re","6PAr36zSp6","4L8cMEq9g6","6w3Q5d5NXv","92iaWP25bB","5Lch9FkQ97","jE5hPn33F9","32RGwNbi25","aui358MV8S","3Aty8U6Mu8","gF56mE2Ki9","9gFE42bfL8","LEy944Zn8z","XLu98nF4s8","T69Uu3y4bF"];
publicVariable "passTupyForThisReboot";


{
	_x setObjectTextureGlobal [0, format["\Hazendarck_Post_It\%1.paa",passTupyForThisReboot]];
} foreach nearestObjects [[8316.78,9739.65,0.04179], ["Hazendarck_Post_It"], 20000];

[] spawn {
	while {true} do 
	{
		diag_log format ["RealTime: %2 ////// Server FPS : %1",diag_fps,systemTime];
		sleep 200;
	};
};