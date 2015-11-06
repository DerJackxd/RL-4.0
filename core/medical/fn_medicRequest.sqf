/*
	File: fn_medicRequest.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Notifies the medics that someone has requested emergency and prompts them
	if they want to take the request or not.
*/
private["_caller","_callerName","_task"];
_caller = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_callerName = [_this,1,"Unknown Player",[""]] call BIS_fnc_param;
_pos = [_this,2,[],[[]]] call BIS_fnc_param;
if(isNull _caller) exitWith {}; //Bad data

_task = player createSimpleTask [format["patient_%1_%2",_callerName,_pos]];
_task setSimpleTaskDescription [format["Verletzte Person: %1, Position: %2 | %3",_callerName,_pos select 0, _pos select 1],format["Patient: %1",_callerName],format["Patient: %1",_callerName]];

_task setSimpleTaskDestination _pos;
_task setTaskState "Assigned";
player setCurrentTask _task;

hint parseText format["<t align='center'><t color='#00FF00'><t size='3'>NOTRUF</t></t><br/>Ein Mensch ist in Not</t><br/><br/>Name: %1<br/>Der Unfall ist bei den Koordinaten: %2 | %3 passiert",_callerName,_pos select 0, _pos select 1];
