#include "script_component.hpp"
/*
 * Author: Fisher
 * Initialize Mirror Dialog
 *
 * Arguments:
 * 0: Display <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [dialog] call fish_camo_cream_mirror_fnc_loadMirrorDialog
 *
 * Public: No
 */

disableSerialization;

params ["_display"];

private _background = _display displayCtrl 1200;

_background ctrlSetText QPATHTOF(data\background.paa);

private _mirror = "camera" camCreate [0,0,0];
_mirror cameraEffect ["Internal", "Back", "fish_mirror_rtt"];
_mirror attachTo [player, [-0.05,0.4,0.1],"head"];
_mirror setVectorDirAndUp [[0,-1,0], [0,0,1]];
_mirror camSetFov 0.5;
