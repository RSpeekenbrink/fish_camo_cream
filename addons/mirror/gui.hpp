/** external **/ class RscPicture;

class GVAR(dialog) {
	idd = 68123;
	movingEnable = 1;
	enableSimulation = 1;
	onload = QUOTE(_this call FUNC(loadMirrorDialog));

	class controlsBackground {
		class Background: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.314323 * safezoneW + safezoneX;
			y = 0.23595 * safezoneH + safezoneY;
			w = 0.361039 * safezoneW;
			h = 0.528101 * safezoneH;
		};
	};

	class controls {
		class Mirror: RscPicture
		{
			idc = 1201;
			text = "#(argb,8,8,3)r2t(fish_mirror_rtt,1)";
			x = 0.334953 * safezoneW + safezoneX;
			y = 0.279958 * safezoneH + safezoneY;
			w = 0.319778 * safezoneW;
			h = 0.20904 * safezoneH;
		};
	};
};
