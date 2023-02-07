#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "initSettings.sqf"

ADDON = true;

GVAR(default_face_prefix) = "_fish_";
GVAR(camo_kits_available) = [];
GVAR(camo_available) = createHashMap;
