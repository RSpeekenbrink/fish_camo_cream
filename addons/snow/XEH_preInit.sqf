#include "script_component.hpp"

ADDON = false;

["FISH_Cream_Kit_Snow"] call EFUNC(common,registerKit);

#define REG_CAMO_TYPE(cam) [ARR_2(cam,QUOTE(FISH_Cream_Kit_Snow))]

REG_CAMO_TYPE("snow_regular_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("snow_dark_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("snow_half_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("snow_light_cream") call EFUNC(common,registerCamo);

ADDON = true;
