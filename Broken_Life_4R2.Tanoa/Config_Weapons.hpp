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
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class hunting {
        name = "Hunting Shop";
        side = "civ";
        license = "hunting";
        level = { "", "", -1, "" };
        items[] = {
            { "srifle_DMR_01_F", "", 90000, -1 },
            { "srifle_DMR_06_olive_F", "", 100000, -1 }
        };
        mags[] = {
            { "10Rnd_762x51_Mag", "", 150 },
            { "20Rnd_762x51_Mag", "", 200 }
        };
        accs[] = {
            { "optic_DMS", "", 1000 }
        }
    };

    class federal {
        name = "Federal Firearms Shop";
        side = "civ";
        license = "federal";
        level = { "", "", -1, "" };
        items[] = {
            { "SMG_02_F", "", 50000, -1 },
            { "SMG_05_F", "", 55000, -1 },
            { "SMG_01_F", "", 60000, -1 },
            { "arifle_Mk20_plain_F", "", 150000, -1 },
            { "arifle_TRG20_F", "", 150000, -1 },
            { "arifle_AKS_F", "", 200000, -1 },
            { "arifle_SPAR_01_snd_F", "", 250000, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 1000 },
            { "30Rnd_9x21_Mag_SMG_02", "", 1000 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 1000 },
            { "30Rnd_545x39_Mag_F", "", 1500 },
            { "30Rnd_556x45_Stanag", "", 2000 }
        };
        accs[] = {
            { "optic_Aco", "", 40000 },
            { "optic_Aco_grn", "", 40000 },
            { "optic_Holosight", "", 45000 }
        }
    };

    class rebel {
        name = "Syndicat Weapons Suplier";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_AKM_F", "", 75000, -1 },
            { "arifle_AKS_F", "", 75000, -1 },
            { "arifle_TRG21_F", "", 80000, -1 },
            { "arifle_Katiba_F", "", 90000, -1 },
            { "arifle_Katiba_C_F", "", 90000, -1 },
            { "srifle_DMR_01_F", "", 85000, -1 },
            { "srifle_DMR_03_woodland_F", "", 95000, -1 }
        };
        mags[] = {
            { "30Rnd_762x39_Mag_F", "", 100 },
            { "30Rnd_545x39_Mag_F", "", 100 },
            { "30Rnd_556x45_Stanag", "", 275 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x51_Mag", "", 300 },
            { "20Rnd_762x51_Mag", "", 350 },
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 3000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 5000, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "arifle_AKM_F", "", 350000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
            { "30Rnd_762x39_Mag_F", "", 500 },
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
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
            { "NVGoggles", "", 10000, 980 },
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
        name = "TSP Basic Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 2000, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 }
        };
    };

    class cop_patrol {
        name = "TSP Trooper Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Tanoa State Trooper!" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 2000, -1 },
            { "arifle_MX_Black_F", "", 35000, 7500 },
            { "arifle_SPAR_01_blk_F", "", 35000, 7500 },
            { "SMG_05_F", "", 30000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_556x45_Stanag", "", 120 },
            { "30Rnd_9x21_Mag_SMG_02", "", 120 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 }
        };
    };

    class cop_sergeant {
        name = "TSP Trooper Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be Trooper Sergeant!" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 2000, -1 },
            { "arifle_MX_Black_F", "", 35000, 7500 },
            { "arifle_SPAR_01_blk_F", "", 35000, 7500 },
            { "SMG_05_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_556x45_Stanag", "", 120 },
            { "30Rnd_9x21_Mag_SMG_02", "", 120 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "optic_NVS", "", 3000 }
        };
    };

    class cop_lieutenant {
        name = "TSP Trooper Lieutenant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Trooper Lieutenant!" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 2000, -1 },
            { "arifle_MX_Black_F", "", 35000, 7500 },
            { "arifle_SPAR_01_blk_F", "", 35000, 7500 },
            { "arifle_SPAR_03_blk_F", "", 45000, 7500 },
            { "SMG_05_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_556x45_Stanag", "", 120 },
            { "20Rnd_762x51_Mag", "", 120 },
            { "30Rnd_9x21_Mag_SMG_02", "", 120 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2000 },
            { "optic_Hamr", "", 2500 },
            { "optic_NVS", "", 3000 }
        };
    };

    class cop_swat {
        name = "TSP SR Team Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a part of the TSP SR Team!" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 2000, -1 },
            { "arifle_MX_Black_F", "", 35000, 7500 },
            { "arifle_SPAR_01_blk_F", "", 35000, 7500 },
            { "arifle_SPAR_03_blk_F", "", 45000, 7500 },
            { "srifle_DMR_02_F", "", 45000, 7500 },
            { "srifle_LRR_F", "", 45000, 7500 },
            { "SMG_05_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_556x45_Stanag", "", 120 },
            { "20Rnd_762x51_Mag", "", 120 },
            { "10Rnd_338_Mag", "", 120 },
            { "5Rnd_338_Mag", "", 120 },
            { "30Rnd_9x21_Mag_SMG_02", "", 120 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2000 },
            { "optic_Hamr", "", 2500 },
            { "optic_NVS", "", 3000 }
        };
    };

    class cop_command {
        name = "TSP Trooper Command Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be TSP Command!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
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
