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
 * [player] call fish_camo_cream_facepaint_fnc_canRemoveCamo
 *
 * Public: Yes
 */

private ["_player", "_face", "_result", "_playerItems"];

_player = [_this, 0, objNull] call BIS_fnc_param;

if (!alive _player) exitWith {false};

if (([_player] call FUNC(getCurrentCamo)) isEqualTo "") exitWith {false};

_playerItems = _player call ACEFUNC(common,uniqueItems);
_result = false;

{
	if (_x in _playerItems) exitWith {_result = true};
} forEach GVAR(camo_kits_available);

_result;