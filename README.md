# Fish Camo Cream

Camo Cream mod for ArmA 3. Based on camofaces.

## 1. Requirements

- Arma 3
- Arma 3 Tools (available on Steam)
- P-drive
- Run Arma 3 and Arma 3 Tools directly from steam once to install registry entries (and again after every update)
- [Python 3.x](https://www.python.org/)
- [Mikero Tools](https://mikero.bytex.digital/Downloads): DePbo, DeOgg, Rapify, MakePbo, PboProject >=3.16
  - `*.hpp` removed from PboProject's "Exclude From Pbo" list
- Python, Mikero Tools and Git in PATH environment variable
- [CBA](https://github.com/CBATeam/CBA_A3/releases/latest) mod (release or development version)
- [HEMTT](https://github.com/BrettMayson/HEMTT) is needed for "file patching" dev builds using build.py. Put hemtt.exe in root project folder


## 2. Getting Source Code

To actually get the source code on your machine, it is recommended that you use Git. Tutorials for this are all around the web, and it allows you to track your changes and easily update your local copy.

If you just want to create a quick and dirty build, you can also directly download the source code using the "Download ZIP" button on the front page of the GitHub repo.

### 2.1. How does it work?

Every face in arma has a classname. Which is fetched with the 'face' script command. What we try and do is match the face with a given camo and see if this exists. Once this exists and the Player has all requirements for this face it can apply the camo.

I.E.: WhiteHead_23_fish_europe_light_cream
```
Whitehead_23 is the face
_fish_europe_light_cream is the camo
```

The camo is registered via the RegisterCamo function.

So in order to make a custom extension we have to make new faces, for every face in arma. Register the camo and make a custom self action in ace using CfgVehicles. Look at one of the existing kits for examples.

## 3. Setup and Building

### 3.1 Initial Setup

Navigate to `tools` folder in command line.

```
cd "[location of the project]\tools"
```

Execute `setup.py` to create symbolic links to P-drive and Arma 3 directory required for building.


Should the script fail, you can create the required links manually. First, create `z` folders both in your Arma 3 directory and on your P-drive. Then run the following commands as admin, replacing the text in brackets with the appropriate paths:

```bat
mklink /J "[Arma 3 installation folder]\z\fish_camo_cream" "[location of the project]"
mklink /J "P:\z\fish_camo_cream" "[location of the project]"
```

Then, copy the `cba` folder from the `include\x` folder to `P:\x\cba`. Create the `x` folder if needed. That folder contains the parts of the CBA source code that are required for the macros to work.


## 3.2 Creating a Test Build

To create a development build to test changes or to debug something, run the `build.py` file in the `tools` folder. This will populate the `addons` folder with binarized PBOs. These PBOs still point to the source files in their respective folders however, which allows you to use [file patching](#file-patching). This also means that you cannot distribute this build to others.

To start the game using this build, you can use the following modline allong with other mods:

```sh
-mod=@CBA_A3;z\fish_camo_cream
```

## 3.3 Creating a Release Build

To create a complete build that you can use without the source files you will need to:

- Ensure `.hpp` is **NOT** in pboProject's "Exclude From Pbo" list

When the requirements are met:

- Execute `make.py version increment_build <other-increment-args> force checkexternal release` in the `tools` folder, replacing `<other-increment-args>` with the part of version you want to increment (options described below)

This will populate the `release` folder with binarized PBOs, compiled extensions, copied extras, bisigns and a bikey. Additionally, an archive file will also be created in the folder. The folder and archive handle like those of any other mod.

Different `make.py` command line options include:

- `version` - update version number in all files and leave them in working directory (leaving this out will still update the version in all files present in the `release` folder, but they will be reverted to not disturb the working directory)
- `increment_build` - increments _build_ version number
- `increment_patch` - increments _patch_ version number (ignored with `increment_minor` or `increment_major`)
- `increment_minor` - increments _minor_ version number and resets _patch_ version number to `0` (ignored with `increment_major`)
- `increment_major` - increments _major_ version number and resets _minor_ and _patch_ version numbers to `0`
- `force` - force rebuild all PBOs, even those already present in the `release` directory (combined with `compile` it will also rebuild all extensions)
- `checkexternal` - check external references (incompatible only with `<component1> <component2>` and `force <component1> <component2>`)
- `release` - create release packages/archives
- `<component1> <component2>` - build only specified component(s) (incompatible with `release`)
- `force <component1> <component2>` - force rebuild specified component(s) (incompatible with `release`)


## 4. File Patching

File Patching allows you to change the files in an addon while the game is running, requiring only a restart of the mission. This makes it great for debugging, as it cuts down the time required between tests. Note that this only works with PBOs created using MakePBO, which `build.py` uses.

To run Arma 3 with file patching add the `-filePatching` startup parameter (since Arma 3 v1.50, file patching is disabled by default).

### 4.1 Disabling CBA Function Caching

By default CBA caches a compiled version of functions to reduce mission load times. This interferes with file patching. There are three ways to disable function caching:

- Load `cba_cache_disable.pbo` (included in CBA's optional folder - simply move it to `addons` folder for the time being)
- Add the following to your test missions description.ext:

```cpp
class CfgSettings {
    class CBA {
        class Caching {
            compile = 0;
            xeh = 0;
            functions = 0;
        };
    };
};
```

- To only disable caching for a single module, hence greatly improving mission restart time, add the following line to the `script_component.hpp` file of said module (prepared in each component, simply uncomment):

```sqf
#define DISABLE_COMPILE_CACHE
```

All functions in module with `DISABLE_COMPILE_CACHE` line can be recompiled without mission restart with `[] call FISH_PREP_RECOMPILE;` command. You can add a addAction/keybind/pfeh with this code and use it for fast recompiling.

### 4.2 Restrictions

Files must exist in the built PBOs for file patching to work. If you create a new file you must rebuild the PBO or Arma will not find it in your file paths.

Configs are not patched during run time, only at load time. You do not have to rebuild a PBO to make config changes, just restart Arma. You can get around this though if you are on the dev branch of Arma 3 and running the [diagnostic exe](https://community.bistudio.com/wiki/Arma_3_Diagnostics_Exe). That includes `diag_mergeConfigFile` which takes a full system path (as in `diag_mergeConfigFile  ["p:\z\fish_camo_cream\addons\my_module\config.cpp"]`) and allows you selectively reload config files.

If you need to add/remove files, then you'll need to run `build.py` again without the game running, and restart. That is all that is required to add new files for further use in testing.
