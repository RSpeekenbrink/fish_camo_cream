#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "FISH_cream_cam_europe",
            "FISH_cream_cam_desert",
            "FISH_cream_cam_snow",
            "FISH_cream_cam_tropical"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"fish_camo_cream_common","ace_interact_menu"};
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
