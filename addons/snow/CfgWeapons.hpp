class CfgWeapons {
    /* external */ class FISH_ItemCore;
    /* external */ class CBA_MiscItem_ItemInfo;

    class FISH_Cream_Kit_Snow: FISH_ItemCore {
        author = ECSTRING(common,ModTeam);
        scope = 2;
        displayName = CSTRING(Item);
        descriptionShort = CSTRING(Item_description);
        picture = QPATHTOF(ui\item_snow.paa);
        model = QPATHTOF(data\cam_snow.p3d);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2.5;
        };
    };
};