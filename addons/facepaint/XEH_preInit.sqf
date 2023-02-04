#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

/**
	Set array of possible items
 */
GVAR(camo_kits_available) = [
	"FISH_cream_cam_europe",
	"FISH_cream_cam_tropical",
	"FISH_cream_cam_snow",
	"FISH_cream_cam_desert"
];

/**
	Set available camo as Hashmap; camo name => required item
 */
#define cam_type_europe(cam) [ARR_2(cam,QUOTE(FISH_cream_cam_europe))]
#define cam_type_tropical(cam) [ARR_2(cam,QUOTE(FISH_cream_cam_tropical))]
#define cam_type_snow(cam) [ARR_2(cam,QUOTE(FISH_cream_cam_snow))]
#define cam_type_desert(cam) [ARR_2(cam,QUOTE(FISH_cream_cam_desert))]

GVAR(camo_available) = createHashMapFromArray [
	cam_type_europe("europe_regular_cream"),
	cam_type_europe("europe_dark_cream"),
	cam_type_europe("europe_half_cream"),
	cam_type_europe("europe_light_cream"),

	cam_type_snow("snow_regular_cream"),
	cam_type_snow("snow_dark_cream"),
	cam_type_snow("snow_half_cream"),
	cam_type_snow("snow_light_cream"),

	cam_type_desert("desert_regular_cream"),
	cam_type_desert("desert_dark_cream"),
	cam_type_desert("desert_half_cream"),
	cam_type_desert("desert_light_cream"),

	cam_type_tropical("tropical_regular_cream"),
	cam_type_tropical("tropical_dark_cream"),
	cam_type_tropical("tropical_half_cream"),
	cam_type_tropical("tropical_light_cream")
];

ADDON = true;
