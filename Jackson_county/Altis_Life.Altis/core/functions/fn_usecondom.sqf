if (player getVariable ["usecondom", false]) exitWith {};

closeDialog 0;

player setVariable ["usecondom", true, true]; exitWith {};

hint "You are now protected."; 
life_inv_condom = life_inv_condom - 1;

player setVariable ["usecondom", false, true];