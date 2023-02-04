#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "FISH_Cream_Kit_Desert"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"fish_camo_cream_common"};
        author = ECSTRING(common,ModTeam);
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgFaces.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
