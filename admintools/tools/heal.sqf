/*
+
+	Author: "vabene1111"
+	Date: 11.05.2014
+	Description: extends the admin tool to heal and regain food and drinks
*/

player setDamage 0;
life_hunger = 100;
life_thirst = 100;

[player,player] call ace_medical_fnc_treatmentAdvanced_fullHealLocal;