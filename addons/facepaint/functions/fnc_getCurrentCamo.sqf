#include "script_component.hpp"
/*
 * Author: Fisher
 * Get current camo applied to players face
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * Current camo or empty string <STRING>
 *
 * Example:
 * [player] call fish_camo_cream_facepaint_fnc_getCurrentCamo
 *
 * Public: Yes
 */

private ["_player", "_face", "_result"];

_player = [_this, 0, objNull] call BIS_fnc_param;

if (!alive _player) exitWith {false};

_face = face _player;
_result = "";

{
	private _camo = "_fish_facepaint_" + _x;

	if ([_camo, _face] call BIS_fnc_inString) exitWith {_result = _camo};
} forEach GVAR(camo_available);

_result;