#include "CustomControlClasses.h"
class Passeport_diplomatique
{
	idd = -1;
	movingenable = 0;
    enablesimulation = 1;
    duration = 15;
    fadein = 0;
    fadeout = 1;
    enableDisplay = 1;
	class ControlsBackground
	{
		class back
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.816875;
			y = safeZoneY + safeZoneH * -0.05444444;
			w = safeZoneW * 0.2375;
			h = safeZoneH * 0.40333334;
			style = 0+48;
			text = "\LID\Diplomatique\dialog\diplomatic_passeport.paa";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{

	};

};
