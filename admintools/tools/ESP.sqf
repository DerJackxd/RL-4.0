if!("ItemMap"in items player) then { player addWeapon"ItemMap";};

units_array=[];
vehicles_array=[];

if(isNil"markers_bool")then{ 
	markers_bool = 0;
};
if(markers_bool == 0)then{
	markers_bool = 1;
	hint"ESP ON";
}else{
markers_bool = 0;
	hint"ESP OFF";
};

while{markers_bool==1}do
{
	{
		if((vehicle _x isKindOf"LandVehicle")||(vehicle _x isKindOf"Air")||(vehicle _x isKindOf"Ship"))then{
			if(count(crew vehicle _x)>0)then{
			{
				if(!(_x in units_array)and(alive _x)and(getPlayerUID _x!=""))then{
				
					private["_pos","_l44","_l45"];
					_l45=vehicle _x;
					_pos=visiblePosition _x;
					_l44=createMarkerLocal[format["CRW%1%2",_pos select 0,_pos select 1],[(_pos select 0)+20,_pos select 1,0]];
					_l8=(getText(configFile>>'CfgVehicles'>>(typeOf vehicle _x)>>'displayName'));
					_l44 setMarkerTextLocal format['%1---%2---%3m',name _x,_l8,round(_x distance player)];
					_l44 setMarkerTypeLocal"mil_dot";
					
					if((side _x==side player)and(side _x!=resistance))then{
						_l44 setMarkerColorLocal"ColorBlue";
					} else{
						_l44 setMarkerColorLocal"ColorRed";
					};
					
					_l44 setMarkerSizeLocal[1,1];
					units_array set[count units_array,_x];
					
					[_x,_l44,_l45] spawn { 
						private["_l46","_l47","_l48"];
						_l46=_this select 0;
						_l47=_this select 1;
						while{(markers_bool==1)and(alive _l46)and(vehicle _l46!=_l46)and(getPlayerUID _l46!="")}do{
							_l48=((crew vehicle _l46)find _l46);
							_l47 setMarkerPosLocal([(visiblePosition _l46 select 0)+20,(visiblePosition _l46 select 1)-(25+_l48*20),0]);sleep 0.01;
						};
						deleteMarkerLocal _l47;
						if(_l46 in units_array)then{
							units_array set[(units_array find _l46),-1];
							units_array=units_array-[-1];
						};
						true;
					};
				};
			}forEach crew vehicle _x;};
		} else {
			if(!(_x in vehicles_array)and(vehicle _x==_x)and(getPlayerUID _x!=""))then{
				private["_pos","_l44"];
				_pos=visiblePosition _x;
				_l44=createMarkerLocal[format["PLR%1%2",_pos select 0,_pos select 1],[(_pos select 0)+20,_pos select 1,0]];
				_l44 setMarkerTypeLocal"mil_dot";
				_l44 setMarkerSizeLocal[1,1];
				
				if((side _x==side player)and(side _x!=resistance))then{
					_l44 setMarkerColorLocal"ColorWhite";
				}else{
					_l44 setMarkerColorLocal"ColorRed";
				};
				
				_l44 setMarkerTextLocal format["%1---%2",name _x,round(_x distance player)];
				if(_x==player)then{_l44 setMarkerColorLocal"ColorGreen";};
				vehicles_array set[count vehicles_array,_x];
				[_x,_l44]spawn{
					private["_l46","_l47"];
					_l46=_this select 0;
					_l47=_this select 1;
					while{(markers_bool==1)and(alive _l46)and(vehicle _l46==_l46)and(getPlayerUID _l46!="")}do{
						_l47 setMarkerPosLocal([visiblePosition _l46 select 0,visiblePosition _l46 select 1,0]);
						sleep 0.01;
					};
					deleteMarkerLocal _l47;
					
					if(_l46 in vehicles_array)then{
					vehicles_array set[(vehicles_array find _l46),-1];
					vehicles_array=vehicles_array-[-1];
					};
					true;
				};
			};
		};
	}forEach playableUnits;sleep 0.3;
};
{
	_l44 = str _x;
	deleteMarkerLocal _l44;
}forEach playableUnits;

