uint32_t Colors[] = {0x9241EB, 0x9EFF00, 0x006EF4, 0xCA2876, 0x0A31DE, 0xBAA7FD, 0xCEDB3F, 0x286A45, 0x58F014, 0x45CAE6, 0x773702, 0xB0CEF0, 0x3C5F51, 0x453CD7, 0x364024, 0x439997, 0x4CB612, 0xC6B564, 0x17F250, 0xE41BC0, 0xAF8E27, 0x8E382E, 0x47A101, 0x9DAC33, 0x66F4CF, 0x59A9F0, 0x798D1A, 0x2EBB59, 0xBF66C3, 0x4BD8FB, 0xBBFA54, 0x6B9881, 0x144967, 0xBAA3AE, 0xE80B9D, 0x7BA552, 0x96A456, 0x17D7B4, 0x130C39, 0x3C06A8, 0x62737E, 0xA87E89, 0xB6D3E4, 0x66B77D, 0x66E304, 0x1B80E1, 0x7A06BC, 0xBFFB1B, 0x618506, 0x7E4D34};

long GetRandomColorByIndex(int index) {
    srand(index);

    int a = 255;
    int r = ((Colors[rand() % sizeof(Colors)] & 0xFF0000) >> 16);
    int g = ((Colors[rand() % sizeof(Colors)] & 0x00FF00) >> 8);
    int b = (Colors[rand() % sizeof(Colors)] & 0x0000FF);

    return IM_COL32(r, g, b, a);
}

int skeletonByDistance(int distance, int Health){
    int _colorByDistance;
    if (distance < 500)
        _colorByDistance = 0xFF0096FF;
    if (distance < 100)
        _colorByDistance = IM_COL32(255, 0, 0, 255);
    if (Health == 0.0f)
        _colorByDistance = IM_COL32(255, 0, 255, 255);
    return _colorByDistance;
}

int boxByDistance(int distance, int Health){
    int _colorByDistance;
    if (distance < 500)
        _colorByDistance = 0x300096FF;
    if (distance < 100)
        _colorByDistance = IM_COL32(255, 0, 0, 30);
    if (Health == 0.0f)
        _colorByDistance = IM_COL32(255, 0, 255, 30);
    return _colorByDistance;
}

int skeletonByDistancebot(int distance, int Health){
    int _colorByDistance;
    if (distance < 500)
        _colorByDistance = IM_COL32(255, 255, 255, 255);
    if (Health == 0.0f)
        _colorByDistance = IM_COL32(255, 0, 255, 255);
    return _colorByDistance;
}
int boxByDistancebot(int distance, int Health){
    int _colorByDistance;
    if (distance < 500)
        _colorByDistance = IM_COL32(255, 255, 255, 30);
    if (Health == 0.0f)
        _colorByDistance = IM_COL32(255, 0, 255, 30);
    return _colorByDistance;
}

uint32_t ColorsBack[] =
        {
                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800,

                0x818181,
                0x0096FF,
                0xE91E63,
                0xFF00E1,
                0xAB00FF,
                0x6100FF,
                0x0051FF,
                0x00BCFF,
                0x00E4FF,
                0x00FFAE,
                0x00FF79,
                0x00FF31,
                0x8FFF00,
                0xE2FF00,
                0xE2FF00,
                0xFFC900,
                0xFF8000,
                0xB00082,
                0xA700B0,
                0x7600B0,
                0x4100B0,
                0x003EB0,
                0x0074B0,
                0x009BB0,
                0x00B07B,
                0x00B019,
                0x51B000,
                0x98B000,
                0xB08B00,
                0xB05800

        };
long GetRandomColorByIndexBack(int index) {
    srand(index);

    int a = 250;
    int r = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0xFF0000) >> 16);
    int g = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0x00FF00) >> 8);
    int b = (ColorsBack[rand() % sizeof(ColorsBack)] & 0x0000FF);

    return IM_COL32(r, g, b, a);
}
long GetRandomColorByIndexAlpa(int index) {
    srand(index);

    int a = 180;
    int r = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0xFF0000) >> 16);
    int g = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0x00FF00) >> 8);
    int b = (ColorsBack[rand() % sizeof(ColorsBack)] & 0x0000FF);

    return IM_COL32(r, g, b, a);
}

long GetRandomColorByIndexLine(int index) {
    srand(index);

    int a = 255;
    int r = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0xFF0000) >> 16);
    int g = ((ColorsBack[rand() % sizeof(ColorsBack)] & 0x00FF00) >> 8);
    int b = (ColorsBack[rand() % sizeof(ColorsBack)] & 0x0000FF);

    return IM_COL32(r, g, b, a);
}
