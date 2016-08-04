class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 6500 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "hgun_Pistol_heavy_02_F", "", 9850 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "hgun_ACPC2_F", "", 11500 },
            { "9Rnd_45ACP_Mag", "", 50 },
            { "hgun_PDW2000_F", "", 35000 },
            { "30Rnd_9x21_Mag", "", 200 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "V_Rangemaster_belt", "", 4900 }
        };
    };
    class hunting {
        name = "Hunting Shop";
        side = "civ";
        license = "hunting";
        level = -1;
        msg = "";
        items[] = {
            { "srifle_DMR_01_F", "", 50000 },
            { "10Rnd_762x51_Mag", "", 150 },
            { "srifle_DMR_06_olive_F", "", 60000 },
            { "20Rnd_762x51_Mag", "", 150 },
            { "optic_DMS", "", 1000 }
        };
    };
    class federal {
        name = "Federal Firearms Shop";
        side = "civ";
        license = "federal";
        level = -1;
        msg = "";
        items[] = {
            { "SMG_02_F", "", 50000},
            { "30Rnd_9x21_Mag", "", 1000 },
            { "SMG_05_F", "", 55000},
            { "30Rnd_9x21_Mag_SMG_02", "", 1000 },
            { "SMG_01_F", "", 60000},
            { "30Rnd_45ACP_Mag_SMG_01", "", 1000 },
            { "arifle_Mk20_plain_F", "", 150000 },
            { "30Rnd_556x45_Stanag", "", 2000 },
            { "arifle_TRG20_F", "", 150000 },
            { "30Rnd_556x45_Stanag", "", 2000 },
            { "arifle_MX_F", "", 200000 },
            { "30Rnd_65x39_caseless_mag", "", 2000 },
            { "arifle_SPAR_01_snd_F", "", 250000 },
            { "30Rnd_556x45_Stanag", "", 2000 },
            { "optic_Aco", "", 40000 },
            { "optic_Aco_grn", "", 40000 }
        };
    };
    class rebel {
        name = "Syndicat Weapons Suplier";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            { "arifle_AKM_F", "", 55000 },
            { "30Rnd_762x39_Mag_F", "", 100 },
            { "arifle_AKS_F", "", 55000 },
            { "30Rnd_545x39_Mag_F", "", 100 },
            { "arifle_TRG21_F", "", 80000 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "arifle_TRG21_GL_F", "", 110000 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "arifle_Katiba_F", "", 90000 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "arifle_Katiba_C_F", "", 90000 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "srifle_DMR_01_F", "", 85000 },
            { "10Rnd_762x51_Mag", "", 300 },
            { "srifle_DMR_03_woodland_F", "", 95000 },
            { "20Rnd_762x51_Mag", "", 300 },
            { "arifle_SDAR_F", "", 20000 },
            { "20Rnd_556x45_UW_mag", "", 125 },
            { "acc_flashlight", "", 1000 },
            { "optic_Hamr", "", 7500 },
            { "optic_Holosight", "", 3600 },
            { "optic_ACO_grn", "", 3500 }
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "hgun_Pistol_heavy_02_F", "", 2500 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "hgun_ACPC2_F", "", 4500 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "hgun_PDW2000_F", "", 9500 },
            { "30Rnd_9x21_Mag", "", 75 },
            { "arifle_AKM_F", "", 200000 },
            { "30Rnd_762x39_Mag_F", "", 100 },
            { "optic_ACO_grn_smg", "", 950 },
            { "V_Rangemaster_belt", "", 1900 }
        };
    };
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 }
        };
    };
    //Cop Shops
    class cop_basic {
        name = "TSP Basic Shop";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "hgun_P07_snds_F", "Stun Pistol", 2000 },
            { "16Rnd_9x21_Mag", "", 50 },
			{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 }
        };
    };
    class cop_patrol {
        name = "TSP Trooper Shop";
        side = "cop";
        license = "";
        level = 2;
        msg = "You must be a Patrol Officer Rank!";
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 2000 },
            { "16Rnd_9x21_Mag", "", 50 },
        	{ "arifle_MX_F", "", 35000 },
            { "30Rnd_65x39_caseless_mag", "", 130 },
			{ "SMG_02_ACO_F", "", 30000 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "acc_flashlight", "", 750 },
			{ "optic_Holosight", "", 1200 },
			{ "optic_Arco", "", 2500 },
            { "Binocular", "", 150 },
            { "ItemGPS", "", 100 },
            { "ToolKit", "", 250 },
            { "FirstAidKit", "", 150 },
            { "NVGoggles", "", 2000 }
        };
    };
    class cop_sergeant {
        name = "TSP Trooper Sergeant Shop";
        side = "cop";
        license = "";
        level = 3;
        msg = "You must be a Sergeant Rank!";
        items[] = {
            { "SMG_02_ACO_F", "", 15000 },
            { "30Rnd_9x21_Mag", "", 60 },
			{ "hgun_ACPC2_F", "", 17500 },
            { "9Rnd_45ACP_Mag", "", 200 },
			{ "arifle_MXC_F", "", 30000 },
            { "30Rnd_65x39_caseless_mag", "", 100 },
            { "HandGrenade_Stone", "Flashbang", 1700 },
            { "muzzle_snds_H", "", 2750 },
			{ "optic_Arco", "", 2500 },
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "Binocular", "", 150 },
            { "ItemGPS", "", 100 },
            { "ToolKit", "", 250 },
            { "FirstAidKit", "", 150 },
            { "NVGoggles", "", 2000 }
        };
    };
    class cop_lieutenant {
        name = "TSP Trooper Lieutenant Shop";
        side = "cop";
        license = "";
        level = 4;
        msg = "You must be a Lieutenant Rank!";
        items[] = {
            { "SMG_02_ACO_F", "", 15000 },
            { "hgun_ACPC2_F", "", 17500 },
            { "HandGrenade_Stone", "Flashbang", 1700 },
            { "arifle_MXC_F", "", 30000 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 },
            { "30Rnd_65x39_caseless_mag", "", 100 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "9Rnd_45ACP_Mag", "", 200 }
        };
    };
    class cop_swat {
        name = "TSP SR Team Shop";
        side = "cop";
        license = "";
        level = 5;
        msg = "You must be a part of the SR Team!";
        items[] = {
            { "SMG_02_ACO_F", "", 15000 },
            { "hgun_ACPC2_F", "", 17500 },
            { "HandGrenade_Stone", "Flashbang", 1700 },
            { "arifle_MXC_F", "", 30000 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 },
            { "30Rnd_65x39_caseless_mag", "", 100 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "9Rnd_45ACP_Mag", "", 200 }
        };
    };
    class cop_captain {
        name = "TSP Trooper Command Shop";
        side = "cop";
        license = "";
        level = 6;
        msg = "You must be a Captain Rank!";
        items[] = {
            { "SMG_02_ACO_F", "", 15000 },
            { "hgun_ACPC2_F", "", 17500 },
            { "HandGrenade_Stone", "Flashbang", 1700 },
            { "arifle_MXC_F", "", 30000 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 },
            { "30Rnd_65x39_caseless_mag", "", 100 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "9Rnd_45ACP_Mag", "", 200 }
        };
    };
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 100 },
			{ "Binocular", "", 150 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "Medikit", "", 500 },
			{ "NVGoggles", "", 1200 },
			{ "B_FieldPack_ocamo", "", 3000 }
        };
    };
};
