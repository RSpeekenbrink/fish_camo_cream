#include "script_component.hpp"
/*
 * Author: Fisher
 * Register kit as available
 *
 * Arguments:
 * 0: Kit name <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["FISH_cream_europe"] call fish_camo_cream_common_fnc_registerKit
 *
 * Public: No
 */

private ["_kit"];

_kit = [_this, 0, ""] call BIS_fnc_param;

if (!(_kit isEqualType "") || _kit isEqualTo "") exitWith {};

GVAR(camo_kits_available) pushBack _kit;
