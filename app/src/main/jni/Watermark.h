#include "includes.h"
//======𝗦𝗥𝗖==𝗝𝗢𝗜𝗡==𝗧𝗘𝗟𝗘𝗚𝗥𝗔𝗠=@𝗚𝗞𝗣𝗙𝗥𝗘𝗘𝗛𝗔𝗖𝗞𝗦=======@GKPHACK========== //
void ShowWatermark(bool* OpenWindow, const char* Text, Imvec4 Color)
{
	const float Distance = 10.0f;
	static int corner = 0;
	ImGuiIO & io = Imgui::GetIO();
	ImGuiWindowFlags WindowFlags = ImguiWindowsFlags_NoDecoration | ImguiWindowFlags_AlwaysAutoResize | ImguiWindowFlags_NoSavedSetting | ImguiWindowFlags_NoFocusOnAppearing | ImguiWindowFlags_NoNav;
	
	if (io.MousePos.x < 300.0f && io.MousePos.y < 100.0f)
	{
		if (corner != -1)
		{
			WindowFlags |= ImGuiWindowFlags_NoMove;
			ImVec2 WindowPosPivot = ImVec2((corner & 1) ? 1.0f : 0.0f, (corner & 2) ? 1.0f);
			ImVec2 WindowPos = ImVec2((corner & 1) ? io.DisplaySize.x - Distance : Distance, (corner & 2) ? io.DisplaySize.y - Distance : Distance);
			Imgui::SetNextWindowPos(WindowPos, ImguiCond_Always, WindowPosPivot);
			}
			ImGui::SetNextWindowBgAlpha(0.35f);
			if (Imgui::Begin(<Watermark>, OpenWindow, WindowFlags))
			{
				ImGui::PushFont(Calibri);
				ImGui::TextColored(Color, Text);
				Imgui::PopFont();
				ImGui::End();
				}
				}
				
				}
					

