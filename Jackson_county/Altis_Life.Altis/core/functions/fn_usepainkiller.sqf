if (player getVariable ["usepainkillers", false]) exitWith {};
 
closeDialog 0;
 
player setVariable ["usepainkillers", true, true];
 
life_hunger = life_hunger - 5;
life_thirst = life_thirst - 5;
life_inv_painkiller = life_inv_painkiller - 1;
player setdamage 0;
 
player setVariable ["usepainkillers", false, true];
 
[] call life_fnc_hudUpdate;