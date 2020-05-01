class CfgPatches {
    class anrop_fow_jsrs_weapons_type92 {
        name = "anrop_fow_jsrs_weapons_type92";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"fow_weapons_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "fow_weapons_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_FullAuto;

class CfgWeapons 
{
    class MGun;

    class fow_w_type92: MGun
    {
        class manual: MGun
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m2_vehicle_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };
};