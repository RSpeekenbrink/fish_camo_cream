class CfgWeapons {
    /* external */ class CBA_MiscItem;
    /* external */ class CBA_MiscItem_ItemInfo;
    /* external */ class FISH_ItemCore: CBA_MiscItem {};

    class FISH_cream_cam_europe: FISH_ItemCore {
        author = ECSTRING(common,ModTeam);
        scope = 2;
        displayName = CSTRING(cam_europe);
        descriptionShort = CSTRING(cam_description);
        picture = QPATHTOF(ui\item_cam_europe.paa);
        model = QPATHTOF(data\cam_europe.p3d);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2.5;
        };
    };

    class FISH_cream_cam_tropical: FISH_cream_cam_europe {
        displayName = CSTRING(cam_tropical);
        descriptionShort = CSTRING(cam_description);
        picture = QPATHTOF(ui\item_cam_tropical.paa);
        model = QPATHTOF(data\cam_tropical.p3d);
    };

    class FISH_cream_cam_snow: FISH_cream_cam_europe {
        displayName = CSTRING(cam_snow);
        descriptionShort = CSTRING(cam_description);
        picture = QPATHTOF(ui\item_cam_snow.paa);
        model = QPATHTOF(data\cam_snow.p3d);
    };

    class FISH_cream_cam_desert: FISH_cream_cam_europe {
        displayName = CSTRING(cam_desert);
        descriptionShort = CSTRING(cam_description);
        picture = QPATHTOF(ui\item_cam_desert.paa);
        model = QPATHTOF(data\cam_desert.p3d);
    };
};