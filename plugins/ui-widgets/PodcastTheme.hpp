// Copyright 2022-2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "Quantum.hpp"
#include "DistrhoPluginUtils.hpp"
#include "json.hpp"

#include <fstream>

// --------------------------------------------------------------------------------------------------------------------
// our custom theme, using line size 1 and adds bar colors

struct PodcastTheme : QuantumTheme
{
    uint sidelabelsFontSize = 13;
    Color inputLevelBracket1 = Color(255, 0, 0, 0.75f);
    Color inputLevelBracket2 = Color(0, 255, 0, 0.75f);

    PodcastTheme(const double scaleFactor, const bool loadThemeNow = true) noexcept
    {
        widgetLineSize = 1;

        if (loadThemeNow)
            loadTheme();

        borderSize *= scaleFactor;
        padding *= scaleFactor;
        fontSize *= scaleFactor;
        sidelabelsFontSize *= scaleFactor;
        knobIndicatorSize *= scaleFactor;
        textHeight *= scaleFactor;
        widgetLineSize *= scaleFactor;
        windowPadding *= scaleFactor;
        textPixelRatioWidthCompensation = static_cast<uint>(scaleFactor - 1.0 + 0.25);
    }

    void loadTheme()
    {
        String filename(getConfigDir());
        filename += "PodcastTheme.json";
        std::ifstream f(filename);
        if (! f.good())
            return;

        nlohmann::json j;

        try {
            j = nlohmann::json::parse(f);

            #define LOAD_UINT(var) if (j.contains(#var)) var = j[#var].get<uint>();
            LOAD_UINT(borderSize)
            LOAD_UINT(padding)
            LOAD_UINT(fontSize)
            LOAD_UINT(textHeight)
            LOAD_UINT(knobIndicatorSize)
            LOAD_UINT(widgetLineSize)
            LOAD_UINT(sidelabelsFontSize)
            #undef LOAD_UINT

            #define LOAD_COLOR(var) if (j.contains(#var)) var = Color::fromHTML(j[#var].get<std::string>().c_str());
            LOAD_COLOR(inputLevelBracket1)
            LOAD_COLOR(inputLevelBracket2)
            LOAD_COLOR(levelMeterColor)
            LOAD_COLOR(levelMeterAlternativeColor)
            LOAD_COLOR(knobRingColor)
            LOAD_COLOR(knobAlternativeRingColor)
            LOAD_COLOR(widgetBackgroundColor)
            LOAD_COLOR(widgetActiveColor)
            LOAD_COLOR(widgetAlternativeColor)
            LOAD_COLOR(widgetForegroundColor)
            LOAD_COLOR(windowBackgroundColor)
            LOAD_COLOR(textLightColor)
            LOAD_COLOR(textMidColor)
            LOAD_COLOR(textDarkColor)
            #undef LOAD_COLOR

        } catch (const std::exception& e) {
            d_stderr("failed to parse PodcastTheme: %s", e.what());
            return;
        } catch (...) {
            d_stderr("failed to parse PodcastTheme: unknown exception");
            return;
        }
    }
};
