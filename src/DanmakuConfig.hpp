#ifndef _WTF_DANMAKU_CONFIG_HPP
#define _WTF_DANMAKU_CONFIG_HPP

#include <string>
#include <dwrite.h>

namespace WTFDanmaku {

    enum DanmakuStyle : int {
        kOutline = 1,
        kProjection = 2
    };

    struct DanmakuConfig {
        bool TopVisible = true;
        bool R2LVisible = true;

        int DanmakuDuration = 3800;

        int LogicalScreenWidth = 682;
        int LogicalScreenHeight = 438;

        int MeasureFlag = 0;

        float FontScaleFactor = 1.0f;
        float CompositionOpacity = 1.0f;

        DanmakuStyle DanmakuStyle = kOutline;

        std::wstring FontName = L"SimHei";
        DWRITE_FONT_WEIGHT FontWeight = DWRITE_FONT_WEIGHT_BOLD;
        DWRITE_FONT_STYLE FontStyle = DWRITE_FONT_STYLE_NORMAL;
        DWRITE_FONT_STRETCH FontStretch = DWRITE_FONT_STRETCH_NORMAL;
    };

}

#endif // _WTF_DANMAKU_CONFIG_HPP