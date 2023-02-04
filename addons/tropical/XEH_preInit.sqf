#include "script_component.hpp"

ADDON = false;

["FISH_Cream_Kit_Tropical"] call EFUNC(common,registerKit);

#define REG_CAMO_TYPE(cam) [ARR_2(cam,QUOTE(FISH_Cream_Kit_Tropical))]

REG_CAMO_TYPE("tropical_regular_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("tropical_dark_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("tropical_half_cream") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("tropical_light_cream") call EFUNC(common,registerCamo);

ADDON = true;
