class CfgVehicles {
    /* external */ class Man;
    
    class CAManBase: Man {
        class ACE_SelfActions {
            class FISH_Camo_Cream {
                displayName = CSTRING(ace_category);
                condition = QUOTE(true);
                exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                statement = "";
                showdisabled = 0;
                icon = QPATHTOF(ui\icon_camocream_ca.paa);

                class GVAR(remove_cream) {
                    displayName = CSTRING(remove_cream);
                    condition = QUOTE([player] call FUNC(canRemoveCamo));
                    exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                    statement = QUOTE([ARR_2(player, false)] call FUNC(applyFace));
                    showDisabled = 0;
                    icon = QPATHTOEF(common,ui\icon_camooff_ca.paa);
                };
            };
        };
    };
};