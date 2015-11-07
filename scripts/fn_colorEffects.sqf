/*
	File: fn_colorEffects.sqf
	Autor: Unknown 
	Edit: Memphis
	
	Description:
	 
	The Author of this File was removed. Please inform us if you are the Author so we can add you credits
*/

switch (life_colorEffects) do {

	case 0:
	{
		"ColorCorrections" ppEffectEnable true; 
		"ColorCorrections" ppEffectAdjust [0.88, 0.88, 0, [0.2, 0.29, 0.4, -0.22], [1, 1, 1, 1.3], [0.15, 0.09, 0.09, 0.0]];
		"ColorCorrections" ppEffectCommit 0;
		life_colorEffects = 1;
	};
	
	case 1:
	{
		"ColorCorrections" ppEffectEnable false; 
		"ColorCorrections" ppEffectAdjust [0.88, 0.88, 0, [0.2, 0.29, 0.4, -0.22], [1, 1, 1, 1.3], [0.15, 0.09, 0.09, 0.0]];
		"ColorCorrections" ppEffectCommit 0;
		life_colorEffects = 0;
	};
};
