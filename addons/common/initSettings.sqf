[
    QGVAR(application_time),
    "SLIDER",
    [LSTRING(application_time), LSTRING(application_time_description)],
    LSTRING(DisplayName),
    [1, 300, 10, 0],
    true,
    {},
    false
] call CBA_fnc_addSetting;

[
    QGVAR(require_correct_kit),
    "CHECKBOX",
    [LSTRING(require_correct_kit), LSTRING(require_correct_kit_description)],
    LSTRING(DisplayName),
    true,
    true,
    {},
    false
] call CBA_fnc_addSetting;

[
    QGVAR(require_kit_for_removal),
    "CHECKBOX",
    [LSTRING(require_kit_for_removal), LSTRING(require_kit_for_removal_description)],
    LSTRING(DisplayName),
    true,
    true,
    {},
    false
] call CBA_fnc_addSetting;
