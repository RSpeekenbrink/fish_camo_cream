class CfgVehicles
{
	/** external **/ class Man;

	class CAManBase: Man
	{
		class ACE_SelfActions
		{
           class FISH_FacePaint {
                displayName = CSTRING(ace_category);
                condition = QUOTE(true);
                exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
                statement = "";
                showDisabled = 1;
                icon = QPATHTOF(ui\icon_camocream_ca.paa);

				class FISH_FacePaint_type_europe {
					displayName = CSTRING(type_europe);
					condition = QUOTE(true);
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					statement = "";
					showDisabled = 1;
					icon = QPATHTOF(ui\icon_camoon_ca.paa);

					class GVAR(apply_europe_regular_cream) {
						displayName = CSTRING(apply_europe_regular_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(europe_regular_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(europe_regular_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_europe_dark_cream) {
						displayName = CSTRING(apply_europe_dark_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(europe_dark_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(europe_dark_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_europe_light_cream) {
						displayName = CSTRING(apply_europe_light_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(europe_light_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(europe_light_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_europe_half_cream) {
						displayName = CSTRING(apply_europe_half_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(europe_half_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(europe_half_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};
				};

				class FISH_FacePaint_type_snow {
					displayName = CSTRING(type_snow);
					condition = QUOTE(true);
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					statement = "";
					showDisabled = 1;
					icon = QPATHTOF(ui\icon_camoon_ca.paa);
				
					class GVAR(apply_snow_regular_cream) {
						displayName = CSTRING(apply_snow_regular_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(snow_regular_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(snow_regular_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_snow_dark_cream) {
						displayName = CSTRING(apply_snow_dark_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(snow_dark_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(snow_dark_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_snow_light_cream) {
						displayName = CSTRING(apply_snow_light_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(snow_light_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(snow_light_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_snow_half_cream) {
						displayName = CSTRING(apply_snow_half_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(snow_half_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(snow_half_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};
				};

				class FISH_FacePaint_type_desert {
					displayName = CSTRING(type_desert);
					condition = QUOTE(true);
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					statement = "";
					showDisabled = 1;
					icon = QPATHTOF(ui\icon_camoon_ca.paa);

					class GVAR(apply_desert_regular_cream) {
						displayName = CSTRING(apply_desert_regular_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(desert_regular_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(desert_regular_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_desert_dark_cream) {
						displayName = CSTRING(apply_desert_dark_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(desert_dark_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(desert_dark_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_desert_light_cream) {
						displayName = CSTRING(apply_desert_light_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(desert_light_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(desert_light_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_desert_half_cream) {
						displayName = CSTRING(apply_desert_half_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(desert_half_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(desert_half_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};
				};

				class FISH_FacePaint_type_tropical {
					displayName = CSTRING(type_tropical);
					condition = QUOTE(true);
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					statement = "";
					showDisabled = 1;
					icon = QPATHTOF(ui\icon_camoon_ca.paa);

					class GVAR(apply_tropical_regular_cream) {
						displayName = CSTRING(apply_tropical_regular_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(tropical_regular_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(tropical_regular_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_tropical_dark_cream) {
						displayName = CSTRING(apply_tropical_dark_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(tropical_dark_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(tropical_dark_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_tropical_light_cream) {
						displayName = CSTRING(apply_tropical_light_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(tropical_light_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(tropical_light_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};

					class GVAR(apply_tropical_half_cream) {
						displayName = CSTRING(apply_tropical_half_cream);
						condition = QUOTE([ARR_2(player, DQUOTE(tropical_half_cream))] call FUNC(canApplyCamo));
						exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
						statement = QUOTE([ARR_2(player, DQUOTE(tropical_half_cream))] call FUNC(applyFace));
						showDisabled = 0;
						icon = QPATHTOF(ui\icon_camoon_ca.paa);
					};
				};

				class GVAR(remove_cream) {
					displayName = CSTRING(remove_cream);
					condition = QUOTE([player] call FUNC(canRemoveCamo));
					exceptions[] = {"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"};
					statement = QUOTE([ARR_2(player, false)] call FUNC(applyFace));
					showDisabled = 0;
					icon = QPATHTOF(ui\icon_camooff_ca.paa);
                };
            };
		};
	};
};