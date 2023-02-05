#include "script_component.hpp"
/*
 * Author: Fisher
 * Apply face to player
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Face to apply or false to remove camo <STRING>
 * 2: Name of the camo applied shown during load <STRING> (Optional)
 *
 * Return Value:
 * if camo can be applied <BOOL>
 *
 * Example:
 * [player, "europe_regular_cream"] call fish_camo_cream_common_fnc_applyFace
 *
 * Public: Yes
 */

params ["_player", "_camo", "_camoName"];

private _applicationTime = GVAR(application_time);
private _applicationText = LLSTRING(ApplyingX);

if (!(_camo isEqualType "") || _camo isEqualTo "") then {
    _applicationText = LLSTRING(Removing);
} else {
    _applicationText = format [_applicationText, " " + _camoName];
};

private _fnc_onSuccess = {
    params ["_args"];
    _args params ["_player", "_camo"];
    private ["_face"];

    if (!alive _player) exitWith {};

    if (!(_camo isEqualType "") || _camo isEqualTo "") then {
        _camo = [_player] call FUNC(getCurrentCamo);

        if (!(_camo isEqualType "") || _camo isEqualTo "") exitWith {};

        _face = (face _player) trim [_camo, 2];

        [_player, _face] remoteExec ["setFace"];
    } else {
        _face = face _player + GVAR(face_prefix) + _camo;

        [_player, _face] remoteExec ["setFace"];
    };
};

private _fnc_onFailure = {
     params ["_args"];
    _args params ["_player"];

    //
};

private _fnc_condition = {
    params ["_args"];
    _args params ["_player", "_camo"];

    if (!(_camo isEqualType "") || _camo isEqualTo "") exitWith {true};

    [_player, _camo] call FUNC(canApplyCamo);
};

[
    _applicationTime,
    [
        _player,
        _camo
    ],
    _fnc_onSuccess,
    _fnc_onFailure,
    _applicationText,
    _fnc_condition,
    ["isNotInside"]
] call ACEFUNC(common,progressBar);