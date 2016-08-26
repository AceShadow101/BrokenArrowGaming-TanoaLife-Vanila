#include "..\..\script_macros.hpp"
/*
	File: fn_p_openMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens the players virtual inventory menu
*/
if(!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "playerSettings";
disableSerialization;

switch(playerSide) do {
	case west: {
		ctrlShow[2011,false];
		ctrlShow[3023,false];
	};

	case civilian: {
		ctrlShow[2012,false];
		ctrlShow[3023,true];
	};

	case independent: {
		ctrlShow[2012,false];
		ctrlShow[2011,false];
		ctrlShow[3023,false];
	};
};

if(FETCH_CONST(life_adminlevel) < 1) then {
	ctrlShow[2020,false];
	ctrlShow[2021,false];
};

[] call life_fnc_p_updateMenu;