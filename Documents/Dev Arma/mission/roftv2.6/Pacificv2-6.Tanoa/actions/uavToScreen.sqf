
screen setObjectTexture [0, "#(argb,512,512,1)r2t(uavrtttt,1)"];

cam2 = "camera" camCreate [0,0,0];
cam2 cameraEffect ["Internal", "Back", "uavrtttt"];

cam2 attachTo [uav, [0,0,0], "laserstart"];



addMissionEventHandler ["Draw3D", {
    _dir = 
        (uav selectionPosition "laserstart") 
            vectorFromTo 
        (uav selectionPosition "commanderview");
    cam2 setVectorDirAndUp [
        _dir, 
        _dir vectorCrossProduct [-(_dir select 1), _dir select 0, 0],
    ];
}];

//cam2 camSetFov 1;