#include "..\..\script_macros.hpp"
/*
	File: fn_adminGodMode.sqf
	Author: Tobias 'Xetoxyc' Sittenauer

	Description: Enables God mode for Admin
*/

if(FETCH_CONST(life_adminlevel) < 4) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};

if(life_god) then {
	life_god = false;
	titleText ["God mode disabled","PLAIN"]; titleFadeOut 2;
	player allowDamage true;
  [0,format["Admin %1 Turned Off Gode Mode.",profileName]] remoteExecCall ["life_fnc_broadcast",RCLIENT]
} else {
	life_god = true;
	titleText ["God mode enabled","PLAIN"]; titleFadeOut 2;
	player allowDamage false;
  [0,format["Admin %1 Turned ON Gode Mode.",profileName]] remoteExecCall ["life_fnc_broadcast",RCLIENT]
};