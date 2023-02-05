#include "script_component.hpp"
/*
 * Author: Fisher
 * Open mirror dialog
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call fish_camo_cream_mirror_fnc_openMirror
 *
 * Public: No
 */

private ["_player", "_face", "_result", "_playerItems"];

if (!hasInterface) exitWith {};

if (!alive player) exitWith {};

createDialog QGVAR(dialog);
