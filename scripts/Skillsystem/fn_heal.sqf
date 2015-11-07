#include <macro.h>
/*
	Author: Unknown
	
	Description:
	 
	The Author of this File was removed. Please inform us if you are the Author so we can add you credits
*/

if((damage player) < 0.01) exitWith {};
if(!("FirstAidKit" in (items player))) exitWith {};
player removeItem "FirstAidKit";
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
sleep 3;
player setDamage 0.00;