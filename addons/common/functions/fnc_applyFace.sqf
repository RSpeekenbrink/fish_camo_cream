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
 * [player, "europe_regular_cream", "Europe Regular Cream", "_fish_"] call fish_camo_cream_common_fnc_applyFace
 *
 * Public: Yes
 */

 private ["_player", "_camo", "_camoName", "_applicationTime", "_applicationText"];

_player = [_this, 0, objNull] call BIS_fnc_param;
_camo = [_this, 1, ""] call BIS_fnc_param;
_camoName = [_this, 2, ""] call BIS_fnc_param;

if (!(local _player)) exitWith {
    [_player, _camo, _camoName] remoteExecCall [QFUNC(applyFace), _player];
};

_applicationTime = GVAR(application_time);
_applicationText = LLSTRING(ApplyingX);

if (!(_camo isEqualType "") || _camo isEqualTo "") then {
    _applicationText = LLSTRING(Removing);
} else {
    _applicationText = format [_applicationText, " " + _camoName];
};

private _fnc_onSuccess = {
    params ["_args"];
    _args params ["_player", "_camo"];
    private ["_face"];

    TRACE_3("Applying Camo...",_player,_camo);

    if (!alive _player) exitWith {};

    if (!(_camo isEqualType "") || _camo isEqualTo "") then {
        _camo = [_player] call FUNC(getCurrentCamo);

        TRACE_1("Current Camo", _camo);

        if (!(_camo isEqualType "") || _camo isEqualTo "") exitWith {};

        _face = face _player;
        _face = [_face, 0, count _face - count _camo - 1] call BIS_fnc_trimString;

        TRACE_2("Set Face", face _player, _face);

        [_player, _face] remoteExec ["setFace"];
    } else {
        _face = face _player + _camo;

        TRACE_2("Set Face", face _player, _face);

        [_player, _face] remoteExec ["setFace"];
    };

    if (["fish_camo_cream_mirror"] call FUNC(isModLoaded) && EGVAR(mirror,showMirrorOnApplication)) then {
        [] call EFUNC(mirror,openMirror);
    };
};

private _fnc_onFailure = {};

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