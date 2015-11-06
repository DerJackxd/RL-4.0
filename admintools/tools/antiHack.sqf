_unit = _this select 0;
_case = _this select 1;

switch(_case) do {
	case 0: {
		_frozen = _unit getVariable["disSim",false];

	if(_frozen) then {
		hint "Unfroze by Admin"
		_unit enableSimulation true;
		_unit getVariable["disSim",false];
	} else {
		hint "Froze by Admin"
		_unit enableSimulation false;
		_unit getVariable["disSim",true];
	};
	};
};