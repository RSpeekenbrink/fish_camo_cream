/**
Fast Recompiling via function
**/
// #define DISABLE_COMPILE_CACHE
// To Use: [] call FISH_PREP_RECOMPILE;

#ifdef DISABLE_COMPILE_CACHE
    #define LINKFUNC(x) {_this call FUNC(x)}
    #define PREP_RECOMPILE_START    if (isNil "FISH_PREP_RECOMPILE") then {FISH_RECOMPILES = []; FISH_PREP_RECOMPILE = {{call _x} forEach FISH_RECOMPILES;}}; private _recomp = {
    #define PREP_RECOMPILE_END      }; call _recomp; FISH_RECOMPILES pushBack _recomp;
#else
    #define LINKFUNC(x) FUNC(x)
    #define PREP_RECOMPILE_START /* */
    #define PREP_RECOMPILE_END /* */
#endif


/**
STACK TRACING
**/
//#define ENABLE_CALLSTACK
//#define ENABLE_PERFORMANCE_COUNTERS
//#define DEBUG_EVENTS

#ifdef ENABLE_CALLSTACK
    #define CALLSTACK(function) {if(FISH_IS_ERRORED) then { ['AUTO','AUTO'] call FISH_DUMPSTACK_FNC; FISH_IS_ERRORED = false; }; FISH_IS_ERRORED = true; FISH_STACK_TRACE set [FISH_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, FISH_CURRENT_FUNCTION, 'ANON', _this]]; FISH_STACK_DEPTH = FISH_STACK_DEPTH + 1; FISH_CURRENT_FUNCTION = 'ANON'; private _ret = _this call ##function; FISH_STACK_DEPTH = FISH_STACK_DEPTH - 1; FISH_IS_ERRORED = false; _ret;}
    #define CALLSTACK_NAMED(function, functionName) {if(FISH_IS_ERRORED) then { ['AUTO','AUTO'] call FISH_DUMPSTACK_FNC; FISH_IS_ERRORED = false; }; FISH_IS_ERRORED = true; FISH_STACK_TRACE set [FISH_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, FISH_CURRENT_FUNCTION, functionName, _this]]; FISH_STACK_DEPTH = FISH_STACK_DEPTH + 1; FISH_CURRENT_FUNCTION = functionName; private _ret = _this call ##function; FISH_STACK_DEPTH = FISH_STACK_DEPTH - 1; FISH_IS_ERRORED = false; _ret;}
    #define DUMPSTACK ([__FILE__, __LINE__] call FISH_DUMPSTACK_FNC)

    #define FUNC(var1) {if(FISH_IS_ERRORED) then { ['AUTO','AUTO'] call FISH_DUMPSTACK_FNC; FISH_IS_ERRORED = false; }; FISH_IS_ERRORED = true; FISH_STACK_TRACE set [FISH_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, FISH_CURRENT_FUNCTION, 'TRIPLES(ADDON,fnc,var1)', _this]]; FISH_STACK_DEPTH = FISH_STACK_DEPTH + 1; FISH_CURRENT_FUNCTION = 'TRIPLES(ADDON,fnc,var1)'; private _ret = _this call TRIPLES(ADDON,fnc,var1); FISH_STACK_DEPTH = FISH_STACK_DEPTH - 1; FISH_IS_ERRORED = false; _ret;}
    #define EFUNC(var1,var2) {if(FISH_IS_ERRORED) then { ['AUTO','AUTO'] call FISH_DUMPSTACK_FNC; FISH_IS_ERRORED = false; }; FISH_IS_ERRORED = true; FISH_STACK_TRACE set [FISH_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, FISH_CURRENT_FUNCTION, 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)', _this]]; FISH_STACK_DEPTH = FISH_STACK_DEPTH + 1; FISH_CURRENT_FUNCTION = 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)'; private _ret = _this call TRIPLES(DOUBLES(PREFIX,var1),fnc,var2); FISH_STACK_DEPTH = FISH_STACK_DEPTH - 1; FISH_IS_ERRORED = false; _ret;}
#else
    #define CALLSTACK(function) function
    #define CALLSTACK_NAMED(function, functionName) function
    #define DUMPSTACK
#endif
