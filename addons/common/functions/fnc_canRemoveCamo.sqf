#include "script_component.hpp"
/*
 * Author: Fisher
 * Check if given player can remove camo
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * if camo can be removed <BOOL>
 *
 * Example:
 * [player] call fish_camo_cream_common_fnc_canRemoveCamo
 *
 * Public: Yes
 */

private ["_player", "_face", "_result", "_playerItems", "_result"];

_player = [_this, 0, objNull] call BIS_fnc_param;

if (!alive _player) exitWith {false};

if (([_player] call FUNC(getCurrentCamo)) isEqualTo "") exitWith {false};

_result = false;

if (GVAR(require_kit_for_removal)) then {
    _result = [_player] call FUNC(hasAnyKit);
} else {
    _result = true;
};

_result;
