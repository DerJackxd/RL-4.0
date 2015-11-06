if (!isNil ("car_god")) then 
{
	if (isNil "car_cod_bool" ) then {car_cod_bool=0};
	if (car_cod_bool==0) then
	{	
		cutText [format["Vehicle God ON"], "PLAIN DOWN"];
		car_cod_bool = 1;
		car_cod_bool2 = true;
		while {car_cod_bool2} do
		{

		if ((fuel (vehicle player)) < 0.1) then {vehicle player setFuel 0.56;};
		if ((damage (vehicle player)) != 0) then {vehicle player setDammage 0;};

		sleep 0.01;
		};
	}
	else
	{
		cutText [format["Vehicle God OFF"], "PLAIN DOWN"];
		car_cod_bool2 = false;
		car_cod_bool = 0;
	};
}
else
{
	if (isNil "car_cod_bool" ) then {car_cod_bool=0};
	if (car_cod_bool==0) then
	{
		cutText [format["Cargod ON"], "PLAIN DOWN"];
		hint format["Cargod ON"];
		car_cod_bool = 1;
		
		car_cod_bool2 = true;
		while {car_cod_bool2} do
		{
			if ((vehicle player isKindOf "LandVehicle") || (vehicle player isKindOf "Air") || (vehicle player isKindOf "Ship")) then 
			{
				vehicle player removeAllEventHandlers "handleDamage";
				vehicle player addEventHandler ["handleDamage", {false}];
				vehicle player allowDamage false;
			} 
			else
			{
				vehicle player addEventHandler ["handleDamage", {true}];
				vehicle player removeAllEventHandlers "handleDamage";
				vehicle player allowDamage true;		
				
				if (g00d_Metallica == 1) then 
				{
					fnc_usec_damageHandler = {};
					fnc_usec_unconscious  = {};
					player removeAllEventHandlers "handleDamage";
					player addEventHandler ["handleDamage", {false}];
					player allowDamage false;
				};
			};
			
			if ((fuel (vehicle player)) < 0.5) then {vehicle player setFuel 0.56;};
			if ((damage (vehicle player)) != 0) then {vehicle player setDammage 0;};
		sleep 0.01;
		};
	}
	else
	{
		cutText [format["Cargod OFF"], "PLAIN DOWN"];
		hint format["Cargod OFF"];
		car_cod_bool = 0;
		
		vehicle player addEventHandler ["handleDamage", {true}];
		vehicle player removeAllEventHandlers "handleDamage";
		vehicle player allowDamage true;
		
		if (g00d_Metallica == 1) then 
		{
			fnc_usec_damageHandler = {};
			fnc_usec_unconscious  = {};
			player removeAllEventHandlers "handleDamage";
			player addEventHandler ["handleDamage", {false}];
			player allowDamage false;
		};
		
		car_cod_bool2 = false;
	};
};