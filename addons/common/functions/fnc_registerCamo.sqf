#include "script_component.hpp"
/*
 * Author: Fisher
 * Register camo as available and bind required kit
 *
 * Arguments:
 * 0: Camo name <STRING>
 * 1: Required Kit <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["europe_regular_cream","FISH_cream_europe"] call fish_camo_cream_common_fnc_registerCamo
 *
 * Public: No
 */

private ["_camo","_kit"];

_camo = [_this, 0, ""] call BIS_fnc_param;
if (!(_camo isEqualType "") || _camo isEqualTo "") exitWith {};
_kit = [_this, 1, ""] call BIS_fnc_param;
if (!(_kit isEqualType "") || _kit isEqualTo "") exitWith {};

GVAR(camo_available) set [_camo,_kit];
