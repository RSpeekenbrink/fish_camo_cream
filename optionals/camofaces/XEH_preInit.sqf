#include "script_component.hpp"

ADDON = false;

#define REG_CAMO_TYPE(cam) [ARR_2(cam,QUOTE(*))]

REG_CAMO_TYPE("cfaces_BWTarn") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("cfaces_BWStripes") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("cfaces_Black") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("cfaces_Serbian") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("cfaces_USStripes") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("cfaces_USStains") call EFUNC(common,registerCamo);
REG_CAMO_TYPE("cfaces_USFlash") call EFUNC(common,registerCamo);

ADDON = true;
