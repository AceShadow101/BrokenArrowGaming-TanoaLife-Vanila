/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
          { "NONE", "Remove Uniform", 0, { "", "", -1 } },
          { "U_C_Poloshirt_blue", "Cat", 250, { "", "", -1 } },
          { "U_C_Poloshirt_burgundy", "Rainbow", 275, { "", "", -1 } },
          { "U_C_Poloshirt_redwhite", "Tiger", 150, { "", "", -1 } },
          { "U_C_Poloshirt_salmon", "Bear", 175, { "", "", -1 } },
          { "U_C_Poloshirt_stripped", "Hand", 125, { "", "", -1 } },
          { "U_C_Poloshirt_tricolour", "Pikachu", 350, { "", "", -1 } },
          { "U_B_Soldier_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 1 } },
		  { "U_O_Soldier_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
          { "U_I_Soldier_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 1 } },
          { "U_C_Soldier_VR", "Admin Purple", 10, { "life_adminlevel", "SCALAR", 1 } },
		  { "U_B_Protagonist_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 1 } },
		  { "U_O_Protagonist_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
          { "U_I_Protagonist_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 1 } }
        };
        headgear[] = {
          { "NONE", "Remove Hat", 0, { "", "", -1 } },
          { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
          { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
          { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
          { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
          { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
          { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
          { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
          { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
          { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
          { "H_Booniehat_tan", "", 425, { "", "", -1 } },
          { "H_Hat_blue", "", 310, { "", "", -1 } },
          { "H_Hat_brown", "", 276, { "", "", -1 } },
          { "H_Hat_checker", "", 340, { "", "", -1 } },
          { "H_Hat_grey", "", 280, { "", "", -1 } },
          { "H_Hat_tan", "", 265, { "", "", -1 } },
          { "H_Cap_blu", "", 150, { "", "", -1 } },
          { "H_Cap_grn", "", 150, { "", "", -1 } },
          { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
          { "H_Cap_oli", "", 150, { "", "", -1 } },
          { "H_Cap_red", "", 150, { "", "", -1 } },
          { "H_Cap_tan", "", 150, { "", "", -1 } }
        };
        goggles[] = {
          { "NONE", "Remove Glasses", 0, { "", "", -1 } },
          { "G_Bandanna_blk", "", 25, { "", "", -1 } },
          { "G_Bandanna_oli", "", 25, { "", "", -1 } },
          { "G_Bandanna_tan", "", 25, { "", "", -1 } },
          { "G_Bandanna_sport", "", 25, { "", "", -1 } },
          { "G_Shades_Black", "", 25, { "", "", -1 } },
          { "G_Shades_Blue", "", 20, { "", "", -1 } },
          { "G_Sport_Blackred", "", 20, { "", "", -1 } },
          { "G_Sport_Checkered", "", 20, { "", "", -1 } },
          { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
          { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
          { "G_Squares", "", 10, { "", "", -1 } },
          { "G_Aviator", "", 100, { "", "", -1 } },
          { "G_Lady_Mirror", "", 150, { "", "", -1 } },
          { "G_Lady_Dark", "", 150, { "", "", -1 } },
          { "G_Lady_Blue", "", 150, { "", "", -1 } },
          { "G_Lowprofile", "", 30, { "", "", -1 } },
          { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
          { "NONE", "Remove Backpack", 0, { "", "", -1 } },
          { "B_Bergen_sgg", "USA", 2000, { "", "", -1 } },
          { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
          { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
          { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
          { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
          { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
          { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
          { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
          { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
          { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
          { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
          { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
          { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
          { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
          { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
          { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
          { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
          { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
          { "B_Carryall_oli", "", 7500, { "", "", -1 } },
          { "B_Carryall_khk", "", 7500, { "", "", -1 } },
          { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
          { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };
	
	class vip {
        title = "STR_Shops_C_Vip";
        license = "vip";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "life_donorlevel", "SCALAR", 1 } },
            { "U_IG_Guerilla1_1", "", 5000, { "life_donorlevel", "SCALAR", 1 } },
            { "U_I_G_Story_Protagonist_F", "", 7500, { "life_donorlevel", "SCALAR", 1 } },
            { "U_I_G_resistanceLeader_F", "", 11500, { "life_donorlevel", "SCALAR", 1 } },
            { "U_IG_leader", "Guerilla Leader", 15340, { "life_donorlevel", "SCALAR", 1 } },
            { "U_O_PilotCoveralls", "", 15610, { "life_donorlevel", "SCALAR", 1 } },
            { "U_O_SpecopsUniform_ocamo", "", 17500, { "life_donorlevel", "SCALAR", 1 } },
            { "U_O_GhillieSuit", "", 50000, { "life_donorlevel", "SCALAR", 1 } },
			{ "U_B_Soldier_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_O_Soldier_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_I_Soldier_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_C_Soldier_VR", "Admin Purple", 10, { "life_adminlevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "life_donorlevel", "SCALAR", 1 } },
            { "H_Bandanna_camo", "", 650, { "life_donorlevel", "SCALAR", 1 } },
            { "H_ShemagOpen_khk", "", 800, { "life_donorlevel", "SCALAR", 1 } },
            { "H_ShemagOpen_tan", "", 850, { "life_donorlevel", "SCALAR", 1 } },
            { "H_Shemag_olive", "", 850, { "life_donorlevel", "SCALAR", 1 } },
            { "H_MilCap_oucamo", "", 1200, { "life_donorlevel", "SCALAR", 1 } },
            { "H_HelmetO_ocamo", "", 2500, { "life_donorlevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Shades_Black", "", 20, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Shades_Blue", "", 20, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Sport_Blackred", "", 25, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Sport_Checkered", "", 25, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Sport_Blackyellow", "", 25, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Sport_BlackWhite", "", 25, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Lowprofile", "", 30, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Squares", "", 50, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Combat", "", 125, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Balaclava_blk", "", 150, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Balaclava_combat", "", 150, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Balaclava_lowprofile", "", 150, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Balaclava_oli", "", 150, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Bandanna_aviator", "", 150, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Bandanna_beast", "", 150, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Bandanna_blk", "", 150, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Bandanna_khk", "", 150, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Bandanna_oli", "", 150, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Bandanna_shades", "", 150, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Bandanna_sport", "", 150, { "life_donorlevel", "SCALAR", 1 } },
            { "G_Bandanna_tan", "", 150, { "life_donorlevel", "SCALAR", 1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "life_donorlevel", "SCALAR", 1 } },
            { "V_BandollierB_cbr", "", 4500, { "life_donorlevel", "SCALAR", 1 } },
            { "V_HarnessO_brn", "", 7500, { "life_donorlevel", "SCALAR", 1 } },
            { "V_TacVest_khk", "", 12500, { "life_donorlevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "life_donorlevel", "SCALAR", 1 } },
            { "B_OutdoorPack_blk", "", 500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_AssaultPack_khk", "", 2000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_AssaultPack_rgr", "", 2000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_AssaultPack_sgg", "", 2000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_AssaultPack_blk", "", 2000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_AssaultPack_cbr", "", 2000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_TacticalPack_oli", "", 2500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Kitbag_mcamo", "", 3500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Kitbag_sgg", "", 3500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Kitbag_cbr", "", 3500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_FieldPack_blk", "", 5000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_FieldPack_ocamo", "", 5000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_FieldPack_oucamo", "", 5000, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Bergen_sgg", "", 6500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Bergen_mcamo", "", 6500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Bergen_rgr", "", 6500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Bergen_blk", "", 6500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Carryall_ocamo", "", 7500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Carryall_oucamo", "", 7500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Carryall_mcamo", "", 7500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Carryall_oli", "", 7500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Carryall_khk", "", 7500, { "life_donorlevel", "SCALAR", 1 } },
            { "B_Carryall_cbr", "", 7500, { "life_donorlevel", "SCALAR", 1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Police Uniform", 25, { "", "", -1 } },
            { "U_Competitor", "Border Patrol", 25, { "life_coplevel", "SCALAR", 4 } },
            { "U_B_SpecopsUniform_sgg", "Swat Uniform", 25, { "life_coplevel", "SCALAR", 7 } },
			{ "U_B_Soldier_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_O_Soldier_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_I_Soldier_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_C_Soldier_VR", "Admin Purple", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_B_Protagonist_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_O_Protagonist_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_I_Protagonist_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_police", "", 25, { "", "", -1 } },
            { "H_Beret_blk_POLICE", "", 50, { "life_coplevel", "SCALAR", 3 } },
			{ "H_Beret_Colonel", "", 50, { "life_coplevel", "SCALAR", 6 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 1000, { "life_coplevel", "SCALAR", 1 } },
            { "V_PlateCarrier2_rgr", "", 1500, { "life_coplevel", "SCALAR", 2 } },
			{ "V_RebreatherB", "", 1500, { "life_coplevel", "SCALAR", 2 } },
			{ "V_PlateCarrierH_CTRG", "", 1500, { "life_coplevel", "SCALAR", 6 } },
			{ "V_PlateCarrierIA2_dgtl", "", 1500, { "life_coplevel", "SCALAR", 2 } },
			{ "V_PlateCarrierSpec_blk", "", 1500, { "life_coplevel", "SCALAR", 7 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 500, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 1500, { "life_coplevel", "SCALAR", 2 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Soldier_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_O_Soldier_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_I_Soldier_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_C_Soldier_VR", "Admin Purple", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_B_Protagonist_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_O_Protagonist_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_I_Protagonist_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 50, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_B_Soldier_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_O_Soldier_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_I_Soldier_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_C_Soldier_VR", "Admin Purple", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_B_Protagonist_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 1 } },
		  { "U_O_Protagonist_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
          { "U_I_Protagonist_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 3000, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
			["U_IG_Guerilla1_1",nil,5000],
			["U_I_G_Story_Protagonist_F",nil,8000],
			["U_BG_Guerrilla_6_1",nil,9000],
			["U_O_CombatUniform_ocamo",nil,15000],
			["U_O_CombatUniform_oucamo",nil,17500],
			["U_I_G_resistanceLeader_F",nil,11500],
			["U_O_SpecopsUniform_ocamo",nil,17500],
			["U_O_PilotCoveralls",nil,15000],
			["U_IG_leader",nil,10000],
			["U_O_GhillieSuit",nil,15000],
			["U_B_FullGhillie_lsh",nil,15000],
			["U_B_FullGhillie_sard",nil,15000],
			["U_B_FullGhillie_ard",nil,15000],
			["U_O_FullGhillie_lsh",nil,15000],
			["U_O_FullGhillie_sard",nil,15000],
			["U_O_FullGhillie_ard",nil,15000],
			["U_I_FullGhillie_lsh",nil,15000],
			["U_I_FullGhillie_sard",nil,15000],
			["U_I_FullGhillie_ard",nil,15000],
			["U_B_CTRG_1",nil,50000],
			{ "U_B_Soldier_VR", "Admin Blue", 0, { "life_adminlevel", "SCALAR", 5 } },
			{ "U_O_Soldier_VR", "Admin Red", 0, { "life_adminlevel", "SCALAR", 5 } },
			{ "U_I_Soldier_VR", "Admin Green", 0, { "life_adminlevel", "SCALAR", 5 } },
			{ "U_C_Soldier_VR", "Admin Purple", 0, { "life_adminlevel", "SCALAR", 5 } },
			{ "U_B_Protagonist_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 4 } },
			{ "U_O_Protagonist_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_I_Protagonist_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 3 } },
			{ "U_B_FullGhillie_lsh", "", 50000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 650, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_Cap_blk", "", 500, { "", "", -1 } },
			{ "H_CrewHelmetHeli_B", "", 20000, { "", "", -1 } },
			{ "H_PilotHelmetFighter_I", "", 25000, { "", "", -1 } },
			{ "H_MilCap_blue", "", 250, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Combat", "", 125, { "", "", -1 } },
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } },
			{ "V_PlateCarrierGL_blk", "", 25000, { "", "", -1 } },
			{ "V_PlateCarrierIAGL_oli", "", 25000, { "", "", -1 } },
			{ "V_PlateCarrierGL_mtp", "", 25000, { "", "", -1 } },
			{ "V_I_G_resistanceLeader_F", "", 15000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } },
			{ "U_B_Soldier_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_O_Soldier_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_I_Soldier_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_C_Soldier_VR", "Admin Purple", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_B_Protagonist_VR", "Admin Blue", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_O_Protagonist_VR", "Admin Red", 10, { "life_adminlevel", "SCALAR", 1 } },
			{ "U_I_Protagonist_VR", "Admin Green", 10, { "life_adminlevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
