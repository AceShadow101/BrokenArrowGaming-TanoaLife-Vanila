/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
			{ "hgun_Pistol_heavy_01_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
			{ "SMG_02_F", "", 20000, -1 },
			{ "SMG_01_F", "", 20000, -1 },
			{ "arifle_TRG20_F", "", 25000, 2500 },
			{ "arifle_SDAR_F", "", 20000, 7500 },
			{ "arifle_Mk20_F", "", 20000, 7500 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
			{ "11Rnd_45ACP_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_65x39_caseless_green", "", 75 },
			{ "20Rnd_556x45_UW_mag", "", 75 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 75 },
			{ "30Rnd_556x45_Stanag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 },
			{ "optic_Hamr", "", 2500 },
			{ "optic_Aco", "", 2500 },
			{ "optic_Holosight", "", 2500 },
			{ "optic_MRCO", "", 2500 },
			{ "acc_flashlight", "", 2500 }
        };
    };
	
	class vip1 {
        name = "Vip 1 Firearms";
        side = "civ";
        license = "vip";
        level[] = { "life_donorlevel", "SCALAR", 1, "You must be Vip level 1" };
        items[] = {
            { "hgun_Rook40_F", "", 3000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 3000, 500 },
			{ "hgun_Pistol_heavy_01_F", "", 3000, 500 },
            { "hgun_ACPC2_F", "", 3000, 500 },
            { "hgun_PDW2000_F", "", 3000, 500 },
			{ "SMG_02_F", "", 3000, 500 },
			{ "SMG_01_F", "", 3000, 500 },
			{ "arifle_TRG20_F", "", 15000, 7500 },
			{ "arifle_SDAR_F", "", 15000, 7500 },
			{ "arifle_Mk20_F", "", 15000, 7500 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
			{ "11Rnd_45ACP_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_65x39_caseless_green", "", 75 },
			{ "20Rnd_556x45_UW_mag", "", 75 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 75 },
			{ "30Rnd_556x45_Stanag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 500 },
            { "optic_Holosight", "", 500 },
            { "optic_Hamr", "", 500 },
			{ "optic_MRCO", "", 500 },
			{ "optic_DMS", "", 500 },
			{ "optic_AMS", "", 500 },
			{ "optic_KHS_blk", "", 500 },
            { "acc_flashlight", "", 500 }
        };
    };
	
	class vip2 {
        name = "Vip 2 Firearms";
        side = "civ";
        license = "vip";
        level[] = { "life_donorlevel", "SCALAR", 2, "You must be Vip level 2" };
        items[] = {
            { "hgun_Rook40_F", "", 2500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, 500 },
			{ "hgun_Pistol_heavy_01_F", "", 2500, 500 },
            { "hgun_ACPC2_F", "", 2500, 500 },
            { "hgun_PDW2000_F", "", 2500, 500 },
			{ "SMG_02_F", "", 2500, 500 },
			{ "SMG_01_F", "", 2500, 500 },
			{ "arifle_TRG20_F", "", 10000, 7500 },
			{ "arifle_SDAR_F", "", 10000, 7500 },
			{ "arifle_Mk20_F", "", 10000, 7500 },
			{ "arifle_Katiba_F", "", 10000, 7500 },
            { "srifle_DMR_01_F", "", 10000, 7500 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
			{ "11Rnd_45ACP_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_65x39_caseless_green", "", 75 },
			{ "20Rnd_556x45_UW_mag", "", 75 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 75 },
			{ "30Rnd_556x45_Stanag", "", 75 },
			{ "30Rnd_65x39_caseless_green", "", 75 },
			{ "30Rnd_65x39_caseless_mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 500 },
            { "optic_Holosight", "", 500 },
            { "optic_Hamr", "", 500 },
			{ "optic_MRCO", "", 500 },
			{ "optic_DMS", "", 500 },
			{ "optic_AMS", "", 500 },
			{ "optic_KHS_blk", "", 500 },
            { "acc_flashlight", "", 500 }
        };
    };
	
	class vip3 {
        name = "Vip 3 Firearms";
        side = "civ";
        license = "vip";
        level[] = { "life_donorlevel", "SCALAR", 3, "You must be Vip level 3" };
        items[] = {
            { "hgun_Rook40_F", "", 2000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2000, 500 },
			{ "hgun_Pistol_heavy_01_F", "", 2000, 500 },
            { "hgun_ACPC2_F", "", 2000, 500 },
            { "hgun_PDW2000_F", "", 2000, 500 },
			{ "SMG_02_F", "", 2000, 500 },
			{ "SMG_01_F", "", 2000, 500 },
			{ "arifle_TRG20_F", "", 80000, 5000 },
			{ "arifle_SDAR_F", "", 80000, 5000 },
			{ "arifle_Mk20_F", "", 80000, 5000 },
			{ "arifle_Katiba_F", "", 80000, 5000 },
            { "srifle_DMR_01_F", "", 80000, 5000 },
			{ "srifle_EBR_F", "", 80000, 5000 },
			{ "arifle_MXC_F", "", 80000, 5000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
			{ "11Rnd_45ACP_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_65x39_caseless_green", "", 75 },
			{ "20Rnd_556x45_UW_mag", "", 75 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 75 },
			{ "30Rnd_556x45_Stanag", "", 75 },
			{ "30Rnd_65x39_caseless_green", "", 75 },
			{ "30Rnd_65x39_caseless_mag", "", 75 },
			{ "10Rnd_762x54_Mag", "", 500 },
			{ "20Rnd_762x51_Mag", "", 500 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 500 },
            { "optic_Holosight", "", 500 },
            { "optic_Hamr", "", 500 },
			{ "optic_MRCO", "", 500 },
			{ "optic_DMS", "", 500 },
			{ "optic_AMS", "", 500 },
			{ "optic_KHS_blk", "", 500 },
            { "acc_flashlight", "", 500 }
        };
    };
	
	class vip4 {
        name = "Vip 4 Firearms";
        side = "civ";
        license = "gun";
        level[] = { "life_donorlevel", "SCALAR", 4, "You must be Vip level 4" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 1500, 500 },
			{ "hgun_Pistol_heavy_01_F", "", 1500, 500 },
            { "hgun_ACPC2_F", "", 1500, 500 },
            { "hgun_PDW2000_F", "", 1500, 500 },
			{ "SMG_02_F", "", 1500, 500 },
			{ "SMG_01_F", "", 1500, 500 },
			{ "arifle_TRG20_F", "", 50000, 3000 },
			{ "arifle_SDAR_F", "", 50000, 3000 },
			{ "arifle_Mk20_F", "", 50000, 3000 },
			{ "arifle_Katiba_F", "", 50000, 3000 },
            { "srifle_DMR_01_F", "", 50000, 3000 },
			{ "srifle_EBR_F", "", 50000, 3000 },
			{ "arifle_MXC_F", "", 50000, 3000 },
			{ "srifle_DMR_02_F", "", 50000, 3000 },
			{ "srifle_DMR_02_sniper_F", "", 50000, 3000 },
			{ "srifle_DMR_03_F", "", 50000, 3000 },
			{ "srifle_DMR_04_F", "", 50000, 3000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
			{ "11Rnd_45ACP_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_65x39_caseless_green", "", 75 },
			{ "20Rnd_556x45_UW_mag", "", 75 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 75 },
			{ "30Rnd_556x45_Stanag", "", 75 },
			{ "30Rnd_65x39_caseless_mag", "", 75 },
			{ "10Rnd_762x54_Mag", "", 500 },
			{ "200Rnd_65x39_cased_Box", "", 500 },
			{ "10Rnd_338_Mag", "", 500 },
			{ "10Rnd_127x54_Mag", "", 500 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 500 },
			{ "20Rnd_762x51_Mag", "", 500 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 500 },
            { "optic_Holosight", "", 500 },
            { "optic_Hamr", "", 500 },
			{ "optic_MRCO", "", 500 },
			{ "optic_DMS", "", 500 },
			{ "optic_AMS", "", 500 },
			{ "optic_KHS_blk", "", 500 },
            { "acc_flashlight", "", 500 }
        };
    };
	
	class vip5 {
        name = "Vip 5 Firearms";
        side = "civ";
        license = "vip";
        level[] = { "life_donorlevel", "SCALAR", 5, "You must be Vip level 5" };
        items[] = {
            { "hgun_Rook40_F", "", 1000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 1000, 500 },
			{ "hgun_Pistol_heavy_01_F", "", 1000, 500 },
            { "hgun_ACPC2_F", "", 1000, 500 },
            { "hgun_PDW2000_F", "", 1000, 500 },
			{ "SMG_02_F", "", 1000, 500 },
			{ "SMG_01_F", "", 1000, 500 },
			{ "arifle_TRG20_F", "", 35000, 3000 },
			{ "arifle_SDAR_F", "", 35000, 3000 },
			{ "arifle_Mk20_F", "", 35000, 3000 },
			{ "arifle_Katiba_F", "", 35000, 3000 },
            { "srifle_DMR_01_F", "", 35000, 3000 },
			{ "srifle_EBR_F", "", 35000, 3000 },
			{ "arifle_MXC_F", "", 35000, 3000 },
			{ "srifle_DMR_02_F", "", 35000, 3000 },
			{ "srifle_DMR_02_sniper_F", "", 35000, 3000 },
			{ "srifle_DMR_03_F", "", 35000, 3000 },
			{ "srifle_DMR_04_F", "", 35000, 3000 },
			{ "srifle_DMR_05_blk_F", "", 35000, 3000 },
			{ "srifle_DMR_06_olive_F", "", 35000, 3000 },
			{ "MMG_01_hex_F", "", 35000, 3000 },
			{ "MMG_02_sand_F", "", 35000, 3000 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
			{ "11Rnd_45ACP_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_65x39_caseless_green", "", 75 },
			{ "20Rnd_556x45_UW_mag", "", 75 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 75 },
			{ "30Rnd_556x45_Stanag", "", 75 },
			{ "30Rnd_65x39_caseless_mag", "", 75 },
			{ "10Rnd_762x54_Mag", "", 500 },
			{ "200Rnd_65x39_cased_Box", "", 500 },
			{ "10Rnd_338_Mag", "", 500 },
			{ "10Rnd_127x54_Mag", "", 500 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 500 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "150Rnd_93x64_Mag", "", 500 },
			{ "130Rnd_338_Mag", "", 500 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 500 },
            { "optic_Holosight", "", 500 },
            { "optic_Hamr", "", 500 },
			{ "optic_MRCO", "", 500 },
			{ "optic_DMS", "", 500 },
			{ "optic_AMS", "", 500 },
			{ "optic_KHS_blk", "", 500 },
			{ "optic_AMS", "", 500 },
			{ "muzzle_snds_338_black", "", 500 },
			{ "muzzle_snds_93mmg", "", 500 },
			{ "muzzle_snds_B", "", 500 },
			{ "muzzle_snds_H_MG", "", 500 },
			{ "muzzle_snds_M", "", 500 },
			{ "muzzle_snds_H", "", 500 },
            { "acc_flashlight", "", 500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
			{ "srifle_EBR_F", "", 130000, -1 },
			{ "arifle_MXC_F", "", 130000, -1 },
			{ "LMG_Mk200_F", "", 350000, -1 },
			{ "arifle_MX_F", "", 500000, -1 },
			{ "launch_Titan_F", "", 1500000, -1 },
			{ "LMG_Zafir_pointer_F", "", 250000, -1 },
			{ "hgun_ACPC2_snds_F", "", 10000, -1 },
			{ "hgun_Pistol_heavy_01_F", "", 10000, -1 },
			{ "arifle_Mk20C_F", "", 50000, -1 },
			{ "arifle_TRG20_ACO_Flash_F", "", 70000, -1 },
			{ "SMG_02_F", "", 20000, -1 },	
			{ "hgun_PDW2000_Holo_F", "", 20000, -1 },
			{ "srifle_LRR_LRPS_F", "", 400000, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_green", "", 275 },
			{ "30Rnd_65x39_caseless_mag", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "200Rnd_65x39_cased_Box", "", 500 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 1000 },
			{ "Titan_AA", "", 250000 },
			{ "150Rnd_762x54_Box_Tracer", "", 1000 },
			{ "9Rnd_45ACP_Mag", "", 200 },
			{ "11Rnd_45ACP_Mag", "", 200 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 200 },
			{ "30Rnd_9x21_Mag", "", 200 },
			{ "HandGrenade_Stone", "", 100000 },
			{ "7Rnd_408_Mag", "", 1000 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
			{ "optic_MRCO", "", 7500 },
			{ "optic_DMS", "", 7500 },
			{ "optic_AMS", "", 7500 },
			{ "optic_KHS_blk", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
				["launch_Titan_F",nil,175000],
				["Titan_AA",nil,250000],
				["SmokeShellBlue","Tear Gas",150000],
				["HandGrenade_Stone","Flash Grenade",150000],
				["arifle_TRG20_F",nil,30000],
                ["30Rnd_556x45_Stanag",nil,300],
				["arifle_Katiba_F",nil,65000],
                ["30Rnd_65x39_caseless_green",nil,275],
				["srifle_EBR_F",nil,150000],
                ["20Rnd_762x51_Mag",nil,500],
				["SMG_01_F",nil,20000],
                ["30Rnd_45ACP_Mag_SMG_01",nil,500],
				["hgun_Pistol_heavy_01_MRD_F",nil,5000],
                ["11Rnd_45ACP_Mag",nil,1000],
				["hgun_P07_F",nil,5000],
                ["30Rnd_9x21_Mag",nil,200],
				["16Rnd_9x21_Mag",nil,150],
				["srifle_DMR_01_F",nil,150000],
                ["10Rnd_762x54_Mag",nil,200],
                ["MMG_01_tan_F",nil,300000],
                ["MMG_01_hex_F",nil,300000],
                ["150Rnd_93x64_Mag",nil,200],
                ["srifle_DMR_06_olive_F",nil,100000],
                ["srifle_DMR_06_camo_khs_F",nil,100000],
                ["20Rnd_762x51_Mag",nil,200],
                ["srifle_DMR_05_tan_f",nil,150000],
                ["srifle_DMR_05_hex_F",nil,150000],
                ["10Rnd_93x64_DMR_05_Mag",nil,200],
                ["srifle_DMR_04_Tan_F",nil,200000],
                ["10Rnd_127x54_Mag",nil,200],
                ["srifle_DMR_03_woodland_F",nil,180000],
                ["srifle_DMR_03_multicam_F",nil,180000],
                ["srifle_DMR_03_tan_F",nil,180000],
                ["srifle_DMR_03_khaki_F",nil,180000],
                ["20Rnd_762x51_Mag",nil,200],
                ["srifle_GM6_camo_SOS_F",nil,500000],
                ["srifle_GM6_SOS_F",nil,500000],
                ["5Rnd_127x108_Mag",nil,200],
                ["LMG_Mk200_pointer_F",nil,250000],
                ["200Rnd_65x39_cased_Box",nil,200],
                ["LMG_Zafir_pointer_F",nil,250000],
                ["150Rnd_762x54_Box",nil,200],
				["arifle_SDAR_F",nil,25000],
                ["20Rnd_556x45_UW_mag",nil,125],
				["acc_flashlight",nil,500],
				["acc_pointer_IR",nil,500],
				["optic_ACO_grn",nil,5000],
				["optic_Aco_smg",nil,5000],
				["optic_Holosight",nil,3600],
				["optic_Hamr",nil,10500],
				["optic_NVS",nil,20000],
				["optic_DMS",nil,40000],
				["optic_LRPS",nil,3000],
				["optic_AMS",nil,4000],
				["SmokeShellGreen",nil,2500],
				["muzzle_snds_M",nil,10000],
                ["muzzle_snds_B",nil,100],
				["bipod_01_F_blk",nil,100],
				["bipod_01_F_snd",nil,100],
				["bipod_01_F_mtp",nil,100]
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
			{ "NVGoggles_OPFOR", "", 2000, 980 },
			{ "NVGoggles_INDEP", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
			{ "NVGoggles", "", 2000, 980 },
			{ "NVGoggles_OPFOR", "", 2000, 980 },
			{ "NVGoggles_INDEP", "", 2000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Cadet Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Taser Pistol Magazine", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {};
    };

    class cop_patrol {
        name = "Police Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
			{ "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "16Rnd_9x21_Mag", "Taser Pistol Magazine", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    class cop_sergeant {
        name = "Altis State Trooper Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a State Trooper Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
			{ "arifle_MX_Black_F", "", 30000, 5000 },
			{ "arifle_TRG20_F", "", 30000, 5000 },
			{ "srifle_DMR_02_F", "", 30000, 5000 },
			{ "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
			{ "30Rnd_556x45_Stanag", "", 60 },
			{ "10Rnd_338_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
			{ "optic_ACO_grn", "", 2500 },
			{ "optic_Hamr", "", 1200 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_SOS", "", 1200 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_lieutenant {
        name = "Altis Commissioner Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be Commissioner Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
			{ "arifle_MX_Black_F", "", 30000, 5000 },
			{ "arifle_TRG20_F", "", 30000, 5000 },
			{ "srifle_DMR_02_F", "", 30000, 5000 },
			{ "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
			{ "30Rnd_556x45_Stanag", "", 60 },
			{ "10Rnd_338_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 }
        };
		accs[] = {
            { "optic_Arco", "", 2500 },
			{ "optic_ACO_grn", "", 2500 },
			{ "optic_Hamr", "", 1200 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_SOS", "", 1200 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    class cop_captain {
        name = "Altis Police Chief Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be Police Chief Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
			{ "arifle_MX_Black_F", "", 30000, 5000 },
			{ "arifle_TRG20_F", "", 30000, 5000 },
			{ "srifle_DMR_02_F", "", 30000, 5000 },
			{ "srifle_DMR_03_F", "", 30000, 5000 },
			{ "srifle_DMR_04_F", "", 30000, 5000 },
			{ "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "launch_I_Titan_F", "", 100000, -1 },
			{ "launch_NLAW_F", "", 100000, -1 },
			{ "launch_RPG32_F", "", 100000, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
			{ "30Rnd_556x45_Stanag", "", 60 },
			{ "10Rnd_338_Mag", "", 60 },
			{ "20Rnd_762x51_Mag", "", 60 },
			{ "10Rnd_127x54_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 },
			{ "Titan_AA", "", 10000, -1 },
			{ "NLAW_F", "", 100, -1 },
			{ "RPG32_F", "", 100, -1 },
			{ "RPG32_HE_F", "", 100, -1 }
        };
		accs[] = {
            { "optic_Arco", "", 2500 },
			{ "optic_ACO_grn", "", 2500 },
			{ "optic_Hamr", "", 1200 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_SOS", "", 1200 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_major {
        name = "Altis Chief Superintendent Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be Chief Superintendent Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
			{ "arifle_MX_Black_F", "", 30000, 5000 },
			{ "arifle_TRG20_F", "", 30000, 5000 },
			{ "srifle_DMR_02_F", "", 30000, 5000 },
			{ "srifle_DMR_03_F", "", 30000, 5000 },
			{ "srifle_DMR_04_F", "", 30000, 5000 },
			{ "srifle_DMR_05_blk_F", "", 30000, 5000 },
			{ "srifle_DMR_06_olive_F", "", 30000, 5000 },
			{ "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "launch_I_Titan_F", "", 100000, -1 },
			{ "launch_NLAW_F", "", 100000, -1 },
			{ "launch_RPG32_F", "", 100000, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
			{ "30Rnd_556x45_Stanag", "", 60 },
			{ "10Rnd_338_Mag", "", 60 },
			{ "20Rnd_762x51_Mag", "", 60 },
			{ "10Rnd_127x54_Mag", "", 60 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 },
			{ "Titan_AA", "", 10000, -1 },
			{ "NLAW_F", "", 100, -1 },
			{ "RPG32_F", "", 100, -1 },
			{ "RPG32_HE_F", "", 100, -1 }
        };
		accs[] = {
            { "optic_Arco", "", 2500 },
			{ "optic_ACO_grn", "", 2500 },
			{ "optic_Hamr", "", 1200 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_SOS", "", 1200 },
			{ "optic_MRCO", "", 1200 },
			{ "optic_DMS", "", 1200 },
			{ "optic_AMS", "", 1200 },
			{ "optic_KHS_blk", "", 1200 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_colonel {
        name = "Altis S.W.A.T Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be S.W.A.T Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
			{ "arifle_MX_Black_F", "", 30000, 5000 },
			{ "arifle_TRG20_F", "", 30000, 5000 },
			{ "srifle_DMR_02_F", "", 30000, 5000 },
			{ "srifle_DMR_03_F", "", 30000, 5000 },
			{ "srifle_DMR_04_F", "", 30000, 5000 },
			{ "srifle_DMR_05_blk_F", "", 30000, 5000 },
			{ "srifle_DMR_06_olive_F", "", 30000, 5000 },
			{ "srifle_GM6_LRPS_F", "", 30000, 5000 },
			{ "srifle_LRR_LRPS_F", "", 30000, 5000 },
			{ "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
			{ "launch_I_Titan_F", "", 100000, -1 },
			{ "launch_NLAW_F", "", 100000, -1 },
			{ "launch_RPG32_F", "", 100000, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
			{ "30Rnd_556x45_Stanag", "", 60 },
			{ "10Rnd_338_Mag", "", 60 },
			{ "20Rnd_762x51_Mag", "", 60 },
			{ "10Rnd_127x54_Mag", "", 60 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 60 },
			{ "5Rnd_127x108_APDS_Mag", "", 60 },
			{ "7Rnd_408_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 },
			{ "Titan_AA", "", 100, -1 },
			{ "NLAW_F", "", 100, -1 },
			{ "RPG32_F", "", 100, -1 },
			{ "RPG32_HE_F", "", 100, -1 }
        };
		accs[] = {
            { "optic_Arco", "", 2500 },
			{ "optic_ACO_grn", "", 2500 },
			{ "optic_Hamr", "", 1200 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_SOS", "", 1200 },
			{ "optic_MRCO", "", 1200 },
			{ "optic_DMS", "", 1200 },
			{ "optic_AMS", "", 1200 },
			{ "optic_KHS_blk", "", 1200 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};