class CfgVehicles {
    /* external */ class Man;
    
    class CAManBase: Man {
        class ACE_SelfActions {
           class FISH_CAMO_CREAM {
                displayName = CSTRING(ace_category);
                condition = QUOTE(true);
                exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                statement = "";
                showDisabled = 1;
                icon = QPATHTOF(data\ace_menu_logo.paa);
            };
        };
    };
};