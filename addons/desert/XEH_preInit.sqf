#include "script_component.hpp"

ADDON = false;

["FISH_Cream_Kit_Desert"] call EFUNC(common,registerKit);

#define REG_CAMO_TYPE(cam) [ARR_2(cam,QUOTE(FISH_Cream_Kit_Desert))]

REG_CAMO_TYPE("_fish_desert_regular_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("_fish_desert_dark_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("_fish_desert_half_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("_fish_desert_light_cream") call EFUNC(common,registerCamo);

ADDON = true;
