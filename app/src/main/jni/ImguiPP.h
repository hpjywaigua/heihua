#include "imgui/imgui.h"

//======𝗦𝗥𝗖==𝗝𝗢𝗜𝗡==𝗧𝗘𝗟𝗘𝗚𝗥𝗔𝗠=@𝗚𝗞𝗣𝗙𝗥𝗘𝗘𝗛𝗔𝗖𝗞𝗦=======@GKPHACK========== //

namespace ImguiPP
{


    float getx();
    float gety();

    void button(const char* label, int& currentTab, int newTab, ImVec2 size = ImVec2());

    void line(int newId);
    void linevertical();

    void center_text(const char* text, int lineId, bool separator);
    void center_text_ex(const char* text, float width_available, int lineId, bool separator);

    namespace other
    {
        float get_window_size_x();
        float get_window_size_y();

        ImVec2 get_window_size();
        char* get_window_name();
        ImDrawList* get_drawlist();
    }

    ImVec4 to_vec4(float r, float g, float b, float a);

}
