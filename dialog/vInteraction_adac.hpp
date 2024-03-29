//Grid macros
#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

class vInteraction_adac
{
	idd = 37400;
	movingEnabled = false;
	enableSimulation = true;

	class controls
	{
		class Zerstoeren: RscButtonMenu
		{
			idc = 2404;
			text = "Beschlagnahmen"; //--- ToDo: Localize;
			x = 0.6 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class ADACReparieren: RscButtonMenu
		{
			idc = 2402;
			text = "ADAC Reparieren"; //--- ToDo: Localize;
			x = 0.6 * safezoneW + safezoneX;
			y = 0.4 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class EigentuemerSuchen: RscButtonMenu
		{
			idc = 2403;
			text = "Eigentuemer Suchen"; //--- ToDo: Localize;
			x = 0.6 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class FahrzeugIndieGerage: RscButtonMenu
		{
			idc = 2410;
			text = "Fahrzeug In die Gerage"; //--- ToDo: Localize;
			x = 0.25 * safezoneW + safezoneX;
			y = 0.44 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class FahrzeugCheck: RscButtonMenu
		{
			idc = 2401;
			text = "Fahrzeug Check"; //--- ToDo: Localize;
			x = 0.6 * safezoneW + safezoneX;
			y = 0.36 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class ACIM_creditText: RscText
		{
			idc = 1001;
			x = 0 * safezoneW + safezoneX;
			y = 0.98 * safezoneH + safezoneY;
			w = 0.4625 * safezoneW;
			h = 0.02 * safezoneH;
		};
		class Bootschieben: RscButtonMenu
		{
			idc = 2406;
			text = "Fahrzeug schieben"; //--- ToDo: Localize;
			x = 0.25 * safezoneW + safezoneX;
			y = 0.4 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class FahrzeugUmdrehen: RscButtonMenu
		{
			idc = 2405;
			text = "Fahrzeug Umdrehen"; //--- ToDo: Localize;
			x = 0.6 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class aufAbschlepphof: RscButtonMenu
		{
			idc = 2409;
			text = "auf Abschlepphof"; //--- ToDo: Localize;
			x = 0.25 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class inKartEinsteigen: RscButtonMenu
		{
			idc = 2411;
			text = "Fahrzeug Aufbrechen"; //--- ToDo: Localize;
			x = 0.25 * safezoneW + safezoneX;
			y = 0.36 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class EinhackenAN: RscButtonMenu
		{
			idc = 2408;
			text = "Abschleppen"; //--- ToDo: Localize;
			x = 0.25 * safezoneW + safezoneX;
			y = 0.48 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class RscPicture_1200: RscPicture
		{
			idc = 1200;
	        text = "textures\RealLifeRPG.paa";
			x = 0.4375 * safezoneW + safezoneX;
			y = 0.4 * safezoneH + safezoneY;
			w = 0.125 * safezoneW;
			h = 0.12 * safezoneH;
		};
		class FahrzeugReparieren: RscButtonMenu
		{
			idc = 2412;
			text = "Fahrzeug Reparieren"; //--- ToDo: Localize;
			x = 0.6 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.04 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
	};
};