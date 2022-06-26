/*
_null=this execVM "The-Programmer\CarPainter\init.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction [(["title","The_Programmer_CarPainter_Config","CarPainter_Localization"] call theprogrammer_core_fnc_localize),the_programmer_carpainter_fnc_paintCar];
