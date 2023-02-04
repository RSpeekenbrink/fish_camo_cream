#include "script_component.hpp"

ADDON = false;

["FISH_Cream_Kit_Europe"] call EFUNC(common,registerKit);

#define REG_CAMO_TYPE(cam) [ARR_2(cam,QUOTE(FISH_Cream_Kit_Europe))]

REG_CAMO_TYPE("europe_regular_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("europe_dark_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("europe_half_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("europe_light_cream") call EFUNC(common,registerCamo);

ADDON = true;
