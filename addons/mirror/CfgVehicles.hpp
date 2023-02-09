class CfgVehicles {
    /* external */ class Man;
    
    class CAManBase: Man {
        class ACE_SelfActions {
            class FISH_Camo_Cream {
                class GVAR(show_mirror) {
                    displayName = CSTRING(Show);
                    condition = QUOTE([player] call EFUNC(common,hasAnyKit));
                    exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                    statement = QUOTE([] call FUNC(openMirror));
                    showdisabled = 1;
                    icon = QPATHTOEF(common,ui\icon_camocream_ca.paa);
                };
            };
        };
    };
};