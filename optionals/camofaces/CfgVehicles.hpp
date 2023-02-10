class CfgVehicles {
    /** external **/ class Man;

    class CAManBase: Man {
        class ACE_SelfActions {
            class FISH_Camo_Cream {
                class FISH_Camo_Cream_type_camofaces {
                    displayName = CSTRING(type);
                    condition = QUOTE(true);
                    exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                    statement = "";
                    showDisabled = 1;
                    icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);

                    class GVAR(apply_fish_cfaces_BWTarn) {
                        displayName = CSTRING(apply_cfaces_BWTarn);
                        condition = QUOTE([ARR_2(player, DQUOTE(_fish_cfaces_BWTarn))] call EFUNC(common,canApplyCamo));
                        exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                        statement = QUOTE([ARR_3(player, DQUOTE(_fish_cfaces_BWTarn), (DLLSTRING(cfaces_BWTarn)))] call EFUNC(common,applyFace));
                        showDisabled = 0;
                        icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);
                    };

                    class GVAR(apply_fish_cfaces_BWStripes) {
                        displayName = CSTRING(apply_cfaces_BWStripes);
                        condition = QUOTE([ARR_2(player, DQUOTE(_fish_cfaces_BWStripes))] call EFUNC(common,canApplyCamo));
                        exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                        statement = QUOTE([ARR_3(player, DQUOTE(_fish_cfaces_BWStripes), (DLLSTRING(cfaces_BWStripes)))] call EFUNC(common,applyFace));
                        showDisabled = 0;
                        icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);
                    };

                    class GVAR(apply_fish_cfaces_Black) {
                        displayName = CSTRING(apply_cfaces_Black);
                        condition = QUOTE([ARR_2(player, DQUOTE(_fish_cfaces_Black))] call EFUNC(common,canApplyCamo));
                        exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                        statement = QUOTE([ARR_3(player, DQUOTE(_fish_cfaces_Black), (DLLSTRING(cfaces_Black)))] call EFUNC(common,applyFace));
                        showDisabled = 0;
                        icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);
                    };

                    class GVAR(apply_fish_cfaces_Serbian) {
                        displayName = CSTRING(apply_cfaces_Serbian);
                        condition = QUOTE([ARR_2(player, DQUOTE(_fish_cfaces_Serbian))] call EFUNC(common,canApplyCamo));
                        exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                        statement = QUOTE([ARR_3(player, DQUOTE(_fish_cfaces_Serbian), (DLLSTRING(cfaces_Serbian)))] call EFUNC(common,applyFace));
                        showDisabled = 0;
                        icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);
                    };

                    class GVAR(apply_fish_cfaces_USStripes) {
                        displayName = CSTRING(apply_cfaces_USStripes);
                        condition = QUOTE([ARR_2(player, DQUOTE(_fish_cfaces_USStripes))] call EFUNC(common,canApplyCamo));
                        exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                        statement = QUOTE([ARR_3(player, DQUOTE(_fish_cfaces_USStripes), (DLLSTRING(cfaces_USStripes)))] call EFUNC(common,applyFace));
                        showDisabled = 0;
                        icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);
                    };

                    class GVAR(apply_fish_cfaces_USStains) {
                        displayName = CSTRING(apply_cfaces_USStains);
                        condition = QUOTE([ARR_2(player, DQUOTE(_fish_cfaces_USStains))] call EFUNC(common,canApplyCamo));
                        exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                        statement = QUOTE([ARR_3(player, DQUOTE(_fish_cfaces_USStains), (DLLSTRING(cfaces_USStains)))] call EFUNC(common,applyFace));
                        showDisabled = 0;
                        icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);
                    };

                    class GVAR(apply_fish_cfaces_USFlash) {
                        displayName = CSTRING(apply_cfaces_USFlash);
                        condition = QUOTE([ARR_2(player, DQUOTE(_fish_cfaces_USFlash))] call EFUNC(common,canApplyCamo));
                        exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                        statement = QUOTE([ARR_3(player, DQUOTE(_fish_cfaces_USFlash), (DLLSTRING(cfaces_USFlash)))] call EFUNC(common,applyFace));
                        showDisabled = 0;
                        icon = QPATHTOEF(common,ui\icon_camoon_ca.paa);
                    };
                };
            };
        };
    };
};