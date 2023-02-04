class CfgWeapons {
    /* external */ class FISH_ItemCore;
    /* external */ class CBA_MiscItem_ItemInfo;

    class FISH_Cream_Kit_Desert: FISH_ItemCore {
        author = ECSTRING(common,ModTeam);
        scope = 2;
        displayName = CSTRING(Item);
        descriptionShort = CSTRING(Item_description);
        picture = QPATHTOF(ui\item_desert.paa);
        model = QPATHTOF(data\cam_desert.p3d);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2.5;
        };
    };
};