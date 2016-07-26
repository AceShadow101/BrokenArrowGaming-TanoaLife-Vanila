/*
	Custom uniforms for
	Civilians, Medics and Cops

	Created by: Stanley / Invision
*/

#include <macro.h>

#define FETCH_CONST(var) (call var)
if(side player == independent) then {
	if ((uniform player) == "U_B_CombatUniform_mcam") then { player setObjectTextureGlobal [0, "textures\medic\medic_uniform.paa"]; };
};

if(side player == west) then {
	if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) == 1)) then {
		player setObjectTextureGlobal [0, "textures\police\cop_uniform/paa"];
	};
};

if(side player == civilian) then {
	if ((uniform player) == "U_B_CombatUniform_mcam") then { player setObjectTextureGlobal [0, "textures\civilian\military_uniform.paa"]; };
};