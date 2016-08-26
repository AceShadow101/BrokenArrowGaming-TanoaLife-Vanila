#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch(playerSide) do {
	case civilian: {
		if(EQUAL(LIFE_SETTINGS(getNumber,"civ_skins"),1)) then {
			if(uniform player == "U_C_Poloshirt_blue") then {
				player setObjectTextureGlobal [0, "textures\Civilian\clothing\civilian_uniform_1.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_burgundy") then {
				player setObjectTextureGlobal [0, "textures\Civilian\clothing\civilian_uniform_2.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_stripped") then {
				player setObjectTextureGlobal [0, "textures\Civilian\clothing\civilian_uniform_3.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_tricolour") then {
				player setObjectTextureGlobal [0, "textures\Civilian\clothing\civilian_uniform_4.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_salmon") then {
				player setObjectTextureGlobal [0, "textures\Civilian\clothing\civilian_uniform_5.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_redwhite") then {
				player setObjectTextureGlobal [0, "textures\Civilian\clothing\civilian_uniform_6.jpg"];
			};
			if(uniform player == "U_C_Commoner1_1") then {
				player setObjectTextureGlobal [0, "textures\Civilian\clothing\civilian_uniform_7.jpg"];
			};
			if(backpack player == "B_Bergen_sgg") then {
				backpackContainer player setObjectTextureGlobal [0, "textures\Civilian\clothing\usa.jpg"];
			};
			if(backpack player == "B_Kitbag_cbr") then {
				backpackContainer player setObjectTextureGlobal [0, "textures\Civilian\clothing\rebelbackpack.jpg"];
			};
			if(uniform player == "U_C_Commoner1_3") then {
				player setObjectTextureGlobal [0, "textures\Civilian\clothing\civilian_uniform_9.jpg"];
			};
			if(uniform player == "U_C_Commoner1_2") then {
				player setObjectTextureGlobal [0, "textures\Civilian\clothing\civilian_uniform_8.jpg"];
			};
		};
	};

	case west: {
		if(uniform player == "U_Rangemaster") then {
			_skinName = "textures\cop_uniform.jpg";
			if(EQUAL(LIFE_SETTINGS(getNumber,"cop_extendedSkins"),1) && FETCH_CONST(life_coplevel) >= 1 && FETCH_CONST(life_coplevel) <= 8) then {
					_skinName = ["textures\Cop\Clothing\cop_uniform_",(FETCH_CONST(life_coplevel)),".jpg"] joinString "";
			};
			player setObjectTextureGlobal [0, _skinName];
		};

		if ((uniform player == "U_B_SpecopsUniform_sgg") && (FETCH_CONST(life_coplevel) > 5)) then
		{
			player setObjectTextureGlobal [0, "textures\Cop\Clothing\police_uniform.jpg"];
		};

		if ((uniform player == "U_Competitor") && (FETCH_CONST(life_coplevel) > 2)) then
		{
			player setObjectTextureGlobal [0, "textures\Cop\Clothing\BorderPatrol.jpg"];
		};

		if ((backpack player == "B_Kitbag_cbr") && (FETCH_CONST(life_coplevel) > 0)) then
		{
			backpackContainer player setObjectTextureGlobal [0, "textures\Cop\Clothing\kitbag_police.jpg"];
		};
	};

	case independent: {
		if(uniform player == "U_Rangemaster") then {
			player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
		};
	};
};
