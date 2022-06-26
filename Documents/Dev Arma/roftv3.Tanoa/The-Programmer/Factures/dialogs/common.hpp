class Life_RscButtonInvisibleBill : Life_RscButtonMenu {
    animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
    animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
    colorBackground[] = {0, 0, 0, 0};
    colorBackground2[] = {1, 1, 1, 0};
    color[] = {1, 1, 1, 0};
    color2[] = {1, 1, 1, 0};
    colorText[] = {1, 1, 1, 0};
    colorDisabled[] = {1, 1, 1, 0};
};

class Life_RscTextBill : Life_RscText {
    font = "PuristaLight";
};

class Life_RscEditBill : Life_RscEdit {
    font = "PuristaLight";
    deletable = 0;
    fade = 0;
    access = 0;
    style = "16 + 512 + 2";
    x = 0;
    y = 0;
    h = 0.04;
    w = 0.2;
    colorBackground[] = {0,0,0,0};
    colorSelection[] = {1,1,1,0.25};
    autocomplete = "";
    text = "";
    size = 1;
    onKeyDown = "params [""_control"", ""_key"", ""_shift""]; if (_key isEqualTo 28) then {true} else {false};";
    lineSpacing = 0;
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {1,1,1,1};
    tooltipColorShade[] = {0,0,0,0.65};
};

class Life_RscListBoxBill : Life_RscListBox {
    font = "PuristaLight";
};
