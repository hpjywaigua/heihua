#include "Includes.h"
#include "Tools.h"
int 颜色=70;float FOVSizea = 100;float FOVSize = 50;
#include "imgui/XMAS.h"
#include "imgui/gradient.h"
#include "fake_dlfcn.h"
#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "StrEnc.h"
#include "plthook.h"
#include "Items.h"
#include "fontch.h"
#include "obfuscate.h"
#include "json.hpp"
#include "Iconcpp.h"
#include "ImguiPP.cpp"
#include "Menu.h"
#include "Font.h"
#include "icon.h"
#include "Vector3.hpp"
#include "Vector2.hpp"
#include "Rect.h"
bool 预判;
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))
using json = nlohmann::json;
#define SLEEP_TIME 1000LL / 60LL
#include "SDK.hpp"
#include "你妈又炸了.hpp"
using namespace SDK;
float 雷达X = 60;
float 范围 = 5;
float 雷达Y = 5;
#include "KittyMemory/MemoryPatch.h"
#include "KittyMemory/MemoryBackup.h"
#include "KittyMemory/MemoryBackup.cpp"
#include "KittyMemory/MemoryPatch.cpp"
#include "KittyMemory/KittyMemory.h"
#include "KittyMemory/KittyUtils.h"
#include "KittyMemory/KittyMemory.cpp"
#include "KittyMemory/KittyUtils.cpp"
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include "base64/base64.h"

//黑化团队出品
bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}
template<typename T>
void Write(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
void Box4Line(ImDrawList *draw, float thicc, int x, int y, int w, int h, int color) {
    int iw = w / 4;
    int ih = h / 4;
    // top
    draw->AddRect(ImVec2(x, y),ImVec2(x + iw, y), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y),ImVec2(x + w, y), color, thicc);
    draw->AddRect(ImVec2(x, y),ImVec2(x, y + ih), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y),ImVec2(x + w - 1, y + ih), color, thicc);;
    // bottom
    draw->AddRect(ImVec2(x, y + h),ImVec2(x + iw, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - iw, y + h),ImVec2(x + w, y + h), color, thicc);
    draw->AddRect(ImVec2(x, y + h - ih), ImVec2(x, y + h), color, thicc);
    draw->AddRect(ImVec2(x + w - 1, y + h - ih), ImVec2(x + w - 1, y + h), color, thicc);
}
//黑化团队出品
float RadarX=320,RadarY=255;
static float SliderFloat = 0;
bool show_another_bypass = false;
//bool Bypass;
//黑化团队出品
static bool s0 = 0.0;
#define GEngine_Offset 0xc2e0150
#define GNames_Offset 0x6DB6908
#define GUObject_Offset 0xC0FD220
#define GetActorArray 0x870ad08
#define CanvasMap_Offsets 0xc2d9148
#define GNativeAndroidApp_Offset 0xbe7faa0
#define Actors_Offset 0xA0
#define ShortEvent_Offset 165
//========xxxxxxxxxxx============
bool pink = false;
bool rectangle = false;
bool border = false;
bool show_Color1 = false;
bool show_another_info = false;
bool flyToggle = false;
bool VEHICLE = false;
bool playerVeh = false;
time_t rng = 0;
json items_data;
float FOV;
float Fov;
float fov;
float BC;
float RH;
float Radar;
void (*orig_mrSilentAim)(void *, float, float);
void hk_mrAimSilent(void *_this, float a1, float a2) {
if (_this != nullptr) {
return;
} else {
orig_mrSilentAim(_this, a1, a2);
orig_mrSilentAim(_this, a1, a2);
    }
}
std::string g_Token, g_Auth;
bool bValid = false;
//===KEY=====EXP====TIME========
std::string expiretime = "00:00:00:00:00:00:00";
std::string name ="";
std::string device = "";
std::string status = "";
std::string floating ="";
//================NEW====================
bool esp = false;
bool WideView = false;
bool FlashSdk = false;
bool bullet = false;
bool customize = false;
bool extra = false;
bool Logo = true;
bool Bypass = true;
bool loot = false;
bool memory = false;
//======BYPASS=====WORK====
uintptr_t UE4;
uintptr_t ANOGS;
uintptr_t g_UE4;
uintptr_t anogs;
uintptr_t g_Anogs;
uintptr_t g_gcloud;
uintptr_t g_Gcloud;
uintptr_t g_cloud;
uintptr_t CrashSight;
uintptr_t g_TDataMaster;
uintptr_t g_tprt;
uintptr_t INTLFoundation;
uintptr_t g_INTLFoundation;
uintptr_t TDataMaster;
uintptr_t PlayerBoxClrCf2;
android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
void 绘制加粗文本(float size, float x, float y, ImColor color, ImColor color1, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x-0.8, y-0.8}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x+0.8, y+0.8}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
}
void 绘制加粗文本2(float size, float x, float y, ImColor color, ImColor color1, const char* str)
{
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x-0.2, y-0.2}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x+0.2, y+0.2}, color1, str);
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, {x, y}, color, str);
}
ImColor 紫色2 = ImColor(46,46,177);
ImColor 浅蓝 = ImColor(ImVec4(36/255.f, 249/255.f, 217/255.f, 255/255.f));
ImColor 蓝色 = ImColor(ImVec4(170/255.f, 203/255.f, 244/255.f, 0.95f));
ImColor 白色 = ImColor(ImVec4(255/255.f, 255/255.f, 258/255.f, 0.95f));
ImColor 浅粉 = ImColor(ImVec4(255/255.f, 200/255.f, 250/255.f, 0.95f));
ImColor 黑色 = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 0.7f));
ImColor 半黑 = ImColor(ImVec4(0/255.f, 0/255.f, 0/255.f, 0.18f));
ImColor 血色 = ImColor(ImVec4(0/255.f, 249/255.f, 0/255.f, 0.35f));
ImColor 红色 = ImColor(ImVec4(233/255.f, 55/255.f, 51/255.f, 0.95f));
ImColor 绿色 = ImColor(ImVec4(50/255.f, 222/215.f, 50/255.f, 0.95f));
ImColor 黄色 = ImColor(ImVec4(255/255.f, 255/255.f, 0/255.f, 0.95f));
ImColor 橘黄 = ImColor(ImVec4(255/255.f, 150/255.f, 30/255.f, 0.95f));
ImColor 粉红 = ImColor(ImVec4(220/255.f, 108/255.f, 1202/255.f, 0.95f));
ImColor 紫色 = ImColor(ImVec4(169/255.f, 120/255.f, 223/255.f, 0.95f));
//黑化团队出品
bool Count = true;
bool initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;

static UEngine *GEngine = 0;
UWorld *GetWorld() {
    while (!GEngine) {
        GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1"); // Auto 
        sleep(1);
    }
    if (GEngine) {
        auto ViewPort = GEngine->GameViewport;

        if (ViewPort) {
   //return {};
            return ViewPort->World;
        }
    }
    return 0;
}

TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) (UE4 + GNames_Offset))();
}
FRotator ClampAngles(FRotator inRot) {
    FRotator outRot = inRot;
    if (outRot.Pitch > 180)
        outRot.Pitch -= 360;
    if (outRot.Pitch < -180)
        outRot.Pitch += 360;

    if (outRot.Pitch < -75.f)
        outRot.Pitch = -75.f;
    else if (outRot.Pitch > 75.f)
        outRot.Pitch = 75.f;

    while (outRot.Yaw < -180.0f)
        outRot.Yaw += 360.0f;
    while (outRot.Yaw > 180.0f)
        outRot.Yaw -= 360.0f;
    return outRot;
}
std::vector<AActor *> getActors() {
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();

    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();

    auto Actors = *(TArray<AActor *> *)((uintptr_t) PersistentLevel + Actors_Offset);

    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.Num(); i++) {
        auto Actor = Actors[i];
        if (Actor) {
            actors.push_back(Actor);
        }
    }
    return actors;
}
//黑化团队出品
enum EAim {
  Distance = 0,
  Croshhair = 1
};

enum EAimTarget {
    Head = 0,
    Chest = 1
};

enum EAimTrigger {
    None = 0,
    Shooting = 1,
    Scoping = 2,
    Both = 3,
    Any = 4
};
struct Threat_t {
    ASTExtraPlayerCharacter *m_Player;
    bool bAiming;
    bool bBehind;

    float mFOV;
    float mDIS;
};
std::map<int, bool> Items;
std::map<int, float *> ItemColors;

struct sConfig {
    bool Bypass;
	float Line;
	float Skeleton;
	float Skill;
	bool FoV;
	bool TriggerA;
	float FOV;
	bool 上帝;
    float Fov;
    bool 开火动态;
	bool 指向标雷达;
    float fov;
    float BC;
    float RH;
    struct sPlayerESP {
        bool Count;						
		bool Logo;
		bool 指向标雷达;
        bool Bypass;
         bool 手持;
        bool Linee;
        bool xiaobao;
        bool 动作判断;
        bool 盔甲判断;
        bool 物资显示;
        bool 头盔判断;
        bool 动态圈;
        bool 背包判断;
		bool Dbox;
		bool 盒子物资;
		bool 手持1;
		bool 预警;
		bool Mid;
		bool Below;
        bool Box;
        bool Skeleton;
		bool DBox;
        bool Health;
        bool Name;
        bool Distance;
        bool TeamID;
        bool NoBot;
        bool 你妈炸了;
		bool Circle;
		bool Andro;
		bool LootBox;
		bool Grenade;
		bool Radar;
		bool Vehicle;
        bool Warning;
        bool zxb;
    };   

    sPlayerESP PlayerESP{0};

    struct sAimMenu {
        bool Enable;
        float Cross;
float Recc;
bool Pred;
bool ReCo;
//bool Enable;
//bool AimBot;    
        bool AimBot;
     //   float Cross;
        bool 三六零追2;
		EAim By;
        EAimTarget Target;
        EAimTrigger Trigger;
        bool IgnoreKnocked;
        bool VisCheck;
        bool IgnoreBot;
		
    };
    sAimMenu SilentAim{0};
    sAimMenu BulletTracking{0};
    sAimMenu AimBot{0};

    struct sHighRisk {
        bool Bypass;
        bool Shake;
        bool Recoil;
        bool Instant;
        bool HitEffect;
        bool Flash;
        bool Parachute;
    };
    sHighRisk HighRisk{0};

    struct sOTHER {
        bool FPS;
        bool HIDEESP;
    };
    sOTHER OTHER{0};

    struct sColorsESP {
        float *Text;
    	float *Menucolour;
        float *Line;
        float *Box;
		float *Boxbot;
        float *Name;
        float *Distance;
        float *Skeleton;
		float *Skeletonbot;
		float *Linebot;
		float *LootBox;
        float *Count;
        float *Vehicle;
		float *TeamID;
        float *Items;
		float *Fova;
		float Cross;
    };
    sColorsESP ColorsESP{0};
};
sConfig Config{0};

#define CREATE_COLOR(r, g, b, a) new float[4]{(float)r, (float)g, (float)b, (float)a};
//黑化团队出品
static float LineSize = 0.6f;
static float BoxSize = 1.7f;
static float SkeletonSize = 1.0f;
static float NameSize = 34.0f;
static float DistanceSize = 35.0f;
static float VehicleSize = 30.0f;
float 自瞄距离 = 350;
//黑化团队出品
typedef void (*ImGuiDemoMarkerCallback)(const char* file, int line, const char* section, void* user_data);
extern ImGuiDemoMarkerCallback  GImGuiDemoMarkerCallback;
extern void* GImGuiDemoMarkerCallbackUserData;
ImGuiDemoMarkerCallback         GImGuiDemoMarkerCallback = NULL;
void* GImGuiDemoMarkerCallbackUserData = NULL;
#define IMGUI_DEMO_MARKER(section)  do { if (GImGuiDemoMarkerCallback != NULL) GImGuiDemoMarkerCallback(__FILE__, __LINE__, section, GImGuiDemoMarkerCallbackUserData); } while (0)

//黑化团队出品
void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
 if (forward.X == 0.f && forward.Y == 0.f) {
  angles.X = forward.Z > 0.f ? -90.f : 90.f;
  angles.Y = 0.f;
 } else {
  angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
  angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
 }
 angles.Z = 0.f;
}

void RotateTriangle(std::array<Vector3, 3> & points, float rotation) {
 const auto points_center = (points.at(0) + points.at(1) + points.at(2)) / 3;
 for (auto & point : points) {
  point = point - points_center;
  const auto temp_x = point.X;
  const auto temp_y = point.Y;
  const auto theta = DEG2RAD(rotation);
  const auto c = cosf(theta);
  const auto s = sinf(theta);
  point.X = temp_x * c - temp_y * s;
  point.Y = temp_x * s + temp_y * c;
  point = point + points_center;
 }
}
FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool &outbuff) {
 bool flag = false;
 double num = (double)Yaw;
 double num2 = num * 0.017453292519943295;
 float num3 = (float)std::cos(num2);
 float num4 = (float)std::sin(num2);
 float num5 = Origin.X - LocalOrigin.X;
 float num6 = Origin.Y - LocalOrigin.Y;
 struct FVector Xector;
 Xector.X = (num6 * num3 - num5 * num4) / 150.f;
 Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
 struct FVector Xector2;
 Xector2.X = Xector.X + PosX + Size.X / 2.f;
 Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
 bool flag2 = Xector2.X > PosX + Size.X;
 if (flag2) {
  Xector2.X = PosX + Size.X;
 }else{
  bool flag3 = Xector2.X < PosX;
  if (flag3) {
   Xector2.X = PosX;
  }
 }
 bool flag4 = Xector2.Y > PosY + Size.Y;
 if (flag4) {
  Xector2.Y = PosY + Size.Y;
 }else{
  bool flag5 = Xector2.Y < PosY;
  if (flag5){
   Xector2.Y = PosY;
  }
 }
 bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
 if (flag6){
  flag = true;
 }
 outbuff = flag;
 return Xector2;
}
//黑化团队出品
struct sRegion {
    uintptr_t start, end;
};

std::vector<sRegion> trapRegions;

bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }

    return false;
}

//黑化团队出品
std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s;
}
bool isInsideFOVs(int x, int y) {
    if (!FOVSize)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad = FOVSizea;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
bool isInsideFOV(int x, int y) {
  
if (!FOVSize)
      
	return true;

	
    int circle_x = glWidth / 2;
  
	int circle_y = glHeight / 2;
   
	int rad = FOVSize;
   
	return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
	
}
int isOutsideSafezone(FVector2D pos, FVector2D screen) {
    FVector2D mSafezoneTopLeft(screen.X * 0.04f, screen.Y * 0.04f);
    FVector2D mSafezoneBottomRight(screen.X * 0.96f, screen.Y * 0.96f);
    int result = 0;
    if (pos.Y < mSafezoneTopLeft.Y) {
        result |= 1;
    }
    if (pos.X > mSafezoneBottomRight.X) {
        result |= 2;
    }
    if (pos.Y > mSafezoneBottomRight.Y) {
        result |= 4;
    }
    if (pos.X < mSafezoneTopLeft.X) {
        result |= 8;
    }
    return result;
}
FVector2D pushToScreenBorder(FVector2D Pos, FVector2D screen, int borders, int offset) {
    int x = (int)Pos.X;
    int y = (int)Pos.Y;
    if ((borders & 1) == 1) {
        y = 0 - offset;
    }
    if ((borders & 2) == 2) {
        x = (int)screen.X + offset;
    }
    if ((borders & 4) == 4) {
        y = (int)screen.Y + offset;
    }
    if ((borders & 8) == 8) {
        x = 0 - offset;
    }
    return FVector2D(x, y);
}
//黑化团队出品

int32_t ToColor(float *col) {
    return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}

FRotator ToRotator(FVector local, FVector target) {
    FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);

    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

    FRotator newViewAngle = {0};
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Roll = (float) 0.f;

    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;

    return newViewAngle;
}
int 随机颜色(){
	 int 红;
	 int 绿;
	 int 蓝;
	 int 颜色=70;
	 红=(0+255*rand());
	 绿=(0+255*rand());
	 蓝=(0+255*rand());
	 if(sizeof(红)==1) 红=红+红;
	 if(sizeof(绿)==1) 绿=绿+绿;
	 if(sizeof(蓝)==1) 蓝=蓝+蓝;
	 return 颜色+红+绿+蓝;
}
int 颜色数组[100];   // 必须分配空间
void 颜色初始化(){
    srand((unsigned)time(NULL));
	for(int 数量=0;数量<100;数量++){
		颜色数组[数量]=随机颜色();
	}
}

int 获取颜色(int 预号){
	if(颜色数组[预号-1]==NULL)
		return 88303030;
	else
	    return 颜色数组[预号-1];
}

int 队伍颜色(int 队伍){
	if(队伍<=100 && 队伍>0)
		return 获取颜色(队伍);
	else
		return 3411641396;
}
//黑化团队出品

#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)

auto GetTargetForAimBot() {
   ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto Actors = getActors();
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (auto Actor : Actors) {
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;
                auto Target = (ASTExtraPlayerCharacter *) Actor;
                
                float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
                if (dist > 自瞄距离)
                    continue;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Config.AimBot.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

               
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                

                if (Config.AimBot.IgnoreBot) {
                    if (Player->bIsAI)
                        continue;
                }

                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});

                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.65f;

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
                        
                  

                        float dist = FVector2D::Distance(v2Middle, v2Loc);

                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                      
                    }
                }
            }
        }
    }
    

    return result;
}
auto 子追360度() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto Actors = getActors();
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (auto Actor : Actors) {
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Config.BulletTracking.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.BulletTracking.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }

                if (Config.BulletTracking.IgnoreBot) {
                    if (Player->bIsAI)
                        continue;
                }
                
                float dist = localPlayer->GetDistanceTo(Player);
                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
    return result;
}
//黑化团队出品
auto GetTargetByCrossDist() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto Actors = getActors();

    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;

                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;

                if (Player->TeamID == localPlayer->TeamID)
                    continue;

                if (Player->bDead)
                    continue;

                if (Config.SilentAim.IgnoreKnocked) {
                    if (Player->Health == 0.0f)
                        continue;
                }

                if (Config.SilentAim.VisCheck) {
                    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
                }
                if (Config.SilentAim.IgnoreBot) {
                    if (Player->bIsAI)
                        continue;
                }

                auto Root = Player->GetBonePos("Root", {});
                auto Head = Player->GetBonePos("Head", {});

                FVector2D RootSc, HeadSc;
                if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
                    float height = abs(HeadSc.Y - RootSc.Y);
                    float width = height * 0.65f;

                    FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2), (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                        float dist = FVector2D::Distance(v2Middle, v2Loc);

                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
        }
    }

    return result;
}
std::vector<Threat_t> GetThreats() {
    std::vector<Threat_t> result;

    
        auto Actors = getActors();
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

        

        if (localPlayer) {
        for (auto Actor : Actors) {
            if (isObjectInvalid(Actor))
                continue;
            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *)Actor;
                if (Player->PlayerKey == localPlayer->PlayerKey)
                    continue;
                if (Player->TeamID == localPlayer->TeamID)
                    continue;
                if (Player->bDead)
                    continue;

                    auto RootComponent = Player->RootComponent;
                    if (RootComponent) {
                        FRotator RelativeRotation = RootComponent->RelativeRotation;
                        ClampAngles(RelativeRotation);

                        FVector myHeadPosition = localPlayer->GetBonePos("Head", {});
                        FVector headLocation = Player->GetBonePos("Head", {});

                        auto Angle = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(headLocation, myHeadPosition));
                        ClampAngles(Angle);

                        float num = abs(RelativeRotation.Pitch - Angle.Pitch);
                        float num2 = abs(RelativeRotation.Yaw - Angle.Yaw);
                        bool num3 = (num + num2) >= 170.f && (num + num2) <= 220.f; //判断敌人是否在瞄准玩家

                        if (num + num2 >= 65.f) { //判断敌人是否面朝玩家
                            if (localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
                            float dist = localPlayer->GetDistanceTo(Player);
                            FVector2D HeadPosSC;
                          
                                result.push_back({Player, num3, NULL, num + num2, dist}); ///NULL为背敌判断，因为W2S没办写所以改NULL
                             
                            }
                        }
                    }
                }
            }
        }
    

    std::sort(result.begin(), result.end(),
              [](const Threat_t &a, const Threat_t &b) -> bool {
                  return a.mDIS < b.mDIS;
              });

    return result;
}
std::string playerstatus(int GetEnemyState)
{    
     switch (GetEnemyState)
     {
        case 0:
            return "发呆";
            break;
        case 1032:
            return "TILT HEAD";
            break;
        case 268435464:
            return "PLAY EMOTION";
            break;
        case 1552:
            return "在喵什么";
            break;
        case 8388616:
            return "PARACHUTE";
            break;
        case 131072:
            return "被打倒了";
            break;
        case 33554440:
            return "PLANE";
            break;
        case 8205:
            return "在射精";
            break;
        case 32:
            return "坐下来了";
            break;
        case 4194303:
            return "正在游泳";
            break;
        case 72:
            return "在蹦迪";
            break;
        case 8388608:
            return "PARACHUTE";
            break;
        case 16392:
            return "在丢什么";
            break;
        case 262:
            return "RELOADING";
            break;
        case 1048584:
            return "RIDE";
            break;
        case 8200:
            return "FIST";
            break;
        case 2056:
            return "切枪";
            break;
        case 4194302:
            return "正在游泳";
            break;
        case 269:
            return "RELOADING";
            break;
        case 16777224:
            return "正在爬";
            break;
        case 10:
            return "在跑步";
            break;
        case 263:
            return "RELOADING";
            break;
        case 65568 || 65544:
            return "在打药呢";
            break;
        case 4194308:
            return "正在游泳";
            break;
        case 268:
            return "RELOADING";
            break;
        case 35:
            return "GET 坐下来了";
            break;
        case 8388617:
            return "PARACHUTE";
            break;
        case 33:
            return "在喵什么";
            break;
        case 75:
            return "在蹦迪";
            break;
        case 8201:
            return "FIST";
            break;
        case 266:
            return "RELOADING";
            break;
        case 32776:
            return "被打倒了";
            break;
        case 270:
            return "RELOADING";
            break;
        case 4194301:
            return "正在游泳";
            break;
        case 1033:
            return "在跑步";
            break;
        case 131073:
            return "被打倒了";
            break;
        case 524296:
            return "在开车车";
            break;
        case 1114120:
            return "在打药呢";
            break;
        case 265:
            return "RELOADING";
            break;
        case 9:
            return "在跑步";
            break;
        case 262144:
            return "在抽烟";
            break;
        case 8203:
            return "FIST";
            break;
        case 8202:
            return "在射精";
            break;
        case 262152:
            return "嗝屁了";
            break;
        case 17416:
            return "在扔什么";
            break;
        case 17:
            return "坐下来了";
            break;
        case 11:
            return "在跑步";
            break;
        case 65545:
            return "在打药呢";
            break;
        case 33554432:
            return "PLANE";
            break;
        case 19:
            return "SQUAT";
            break;
        case 8208:
            return "在射精";
            break;
        case 520:
            return "在喵什么";
            break;
        case 8206:
            return "在射精";
            break;
        case 8:
            return "立起来了";
            break;
        case 16:
            return "坐下来了";
            break;
        case 13180:
            return "被打倒了";
            break;
        case 4194310:
            return "正在游泳";
            break;
        case 16393:
            return "在丢什么";
            break;
        case 4194309:
            return "正在游泳";
            break;
        case 264:
            return "RELOADING";
            break;
        case 4194305:
            return "正在游泳";
            break;
        case 8207:
            return "在射精";
            break;
        case 4194307:
            return "正在游泳";
            break;
        return "";
    }
	}
//黑化团队出品
const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return "Motorbike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return "Dacia";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return "Mini Bus";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return "Pick Up";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return "Buggy";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return "UAZ";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            return "PG117";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            return "Aquarail";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return "Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return "Rony";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return "Scooter";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return "Snow Mobile";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return "Tuk Tuk";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return "Snow Bike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            return "Surf Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            return "Snow Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return "Amphibious";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            return "Lada Niva";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            return "UAV";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            return "Mega Drop";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            return "Lamborghini";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return "Gold Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            return "Big Foot";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            return "UH60";
            break;
        default:
            return "Vehicle";
            break;
    }
    return "Vehicle";
}

void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;

void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {
if (Config.BulletTracking.三六零追2) {
        ASTExtraPlayerCharacter *Target = 子追360度();
        if (Target) {
            bool triggerOk = false;
            if (Config.BulletTracking.Trigger != EAimTrigger::None) {
                if (Config.BulletTracking.Trigger == EAimTrigger::Shooting) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (Config.BulletTracking.Trigger == EAimTrigger::Scoping) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (Config.BulletTracking.Trigger == EAimTrigger::Both) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                } else if (Config.BulletTracking.Trigger == EAimTrigger::Any) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                }
            } else triggerOk = true;
            if (triggerOk) {
                //if (Config.BulletTracking.Target == EAimTarget::Head) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                if (Config.AimBot.Target == EAimTarget::Chest) {
                    targetAimPos.Z -= 25.0f;
                }
                if (Config.BulletTracking.Target == EAimTarget::Head) {
                                targetAimPos.Z -= 5.0f;
                            }
                UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;
                if (ShootWeaponEntityComponent) {
                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                    if (CurrentVehicle) {
                       // Tools::Hook((void *)(UE4 + AimBullet_Offset), (void *) shoot_event, (void **) &orig_shoot_event);
                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel)); 
                    } else {
                  //      Tools::Hook((void *)(UE4 + AimBullet_Offset), (void *) shoot_event, (void **) &orig_shoot_event);
                        FVector Velocity = Target->GetVelocity();
                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
                    rot = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                }
            }
        }
    }
    if (Config.SilentAim.Enable) {
        ASTExtraPlayerCharacter *Target = GetTargetByCrossDist();
        if (Target) {
            bool triggerOk = false;
            if (Config.SilentAim.Trigger != EAimTrigger::None) {
                if (Config.SilentAim.Trigger == EAimTrigger::Shooting) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Scoping) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Both) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Any) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                }
            } else triggerOk = true;
            if (triggerOk) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                if (Config.SilentAim.Target == EAimTarget::Chest) {
                    targetAimPos.Z -= 25.0f;
                }
                UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;
                if (ShootWeaponEntityComponent) {
                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                    if (CurrentVehicle) {
                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                    } else {
                        FVector Velocity = Target->GetVelocity();

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
                    rot = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                }
            }
        }
    }
    return orig_shoot_event(thiz, start, rot, weapon, unk1);
}

//黑化团队出品
class FPSCounter {
protected:
    unsigned int m_fps;
    unsigned int m_fpscount;
    long m_fpsinterval;

public:
    FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {
    }

    void update() {
        m_fpscount++;

        if (m_fpsinterval < time(0)) {
            m_fps = m_fpscount;

            m_fpscount = 0;
            m_fpsinterval = time(0) + 1;
        }
    }

    unsigned int get() const {
        return m_fps;
    }
};

FPSCounter fps;
//黑化团队出品

void DrawFilledRectangle(int x, int y, int w, int h, ImU32 col, float rounding) {
    ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h), col, rounding);
}

void DrawRectangle(int x, int y, int w, int h, ImU32 col, float rounding) {
    ImGui::GetBackgroundDrawList()->AddRect(ImVec2(x, y), ImVec2(x + w, y + h), col, rounding);
}
bool W2S2(FVector worldPos, FVector2D *screenPos) {
    return g_LocalController->ProjectWorldLocationToScreen(worldPos, true, screenPos);
}

void Line(ImDrawList *draw,FVector2D origin, FVector2D dest, ImColor color)
{
   draw->AddLine({origin.X, origin.Y},{dest.X, dest.Y},color, 2.0f);
}


void Box3D(ImDrawList *draw, FVector origin, FVector extends, ImColor col) {
    origin.X -= extends.X / 2.f;
    origin.Y -= extends.Y / 2.f;
    origin.Z -= extends.Z / 2.f;
    
    
 FVector one = origin;
 FVector two = origin; two.X += extends.X;
 FVector tree = origin; tree.X += extends.X; tree.Y += extends.Y;
 FVector four = origin; four.Y += extends.Y;

 FVector five = one; five.Z += extends.Z;
 FVector six = two; six.Z += extends.Z;
 FVector seven = tree; seven.Z += extends.Z;
 FVector eight = four; eight.Z += extends.Z;

    FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
    if (W2S2(one, &s1) && W2S2(two, &s2) && W2S2(tree, &s3) && W2S2(four, &s4) &&
    W2S2(five, &s5) && W2S2(six, &s6) && W2S2(seven, &s7) && W2S2(eight, &s8))
    {
        
    Line(draw,s1, s2, col);
    Line(draw,s2, s3, col);
    Line(draw,s3, s4, col);
    Line(draw,s4, s1, col);
 
    Line(draw,s5, s6, col);
    Line(draw,s6, s7, col);
    Line(draw,s7, s8, col);
    Line(draw,s8, s5, col);
 
    Line(draw,s1, s5, col);
    Line(draw,s2, s6, col);
    Line(draw,s3, s7, col);
    Line(draw,s4, s8, col);

}
}

void DrawBoxEnemy(ImDrawList *draw, ImVec2 X, ImVec2 Y, float thicc, int color) {
    draw->AddLine({X.x, X.y}, {Y.x, Y.y}, color, thicc);
}

//黑化团队出品
void DrawESP(ImDrawList *draw) {	
if (Config.Bypass) {

}
    if(Config.PlayerESP.Logo) {

}   


 if (Config.PlayerESP.Bypass) {

}
     
   // if (Count) {
      
         auto Actors = getActors();

        int totalEnemies = 0, totalBots = 0;

        ASTExtraPlayerCharacter *localPlayer = 0;
        ASTExtraPlayerController *localController = 0;     

draw->AddText(NULL, ((float) density / 10.0f),{(float) glWidth / 150 + glWidth / 40,100},IM_COL32(255, 255, 255, 255),"                              作者:烈川");

draw->AddText(NULL, ((float) density / 10.0f),{(float) glWidth / 150 + glWidth / 40,640},IM_COL32(255, 255, 255, 255),name.c_str());

std::string sFPS = "FPS: ";
    sFPS += std::to_string(fps.get());			
    if (Config.OTHER.FPS) {

draw->AddText({((float) density / 10.0f), 35},IM_COL32(255, 255, 0, 255),sFPS.c_str());
    }               

//黑化团队出品
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
                localController = (ASTExtraPlayerController *) Actor;
                break;
            }
        }

        if (localController) {
            for (int i = 0; i < Actors.size(); i++) {
                auto Actor = Actors[i];
                if (isObjectInvalid(Actor))
                    continue;

                if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                    if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey ==
                        localController->PlayerKey) {
                        localPlayer = (ASTExtraPlayerCharacter *) Actor;
                        break;
                    }
                }
            }
            
            if (localPlayer) {
                if (localPlayer->PartHitComponent) {
                    auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
                    for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
                        ConfigCollisionDistSqAngles[j].Angle = 90.0f;
                    }
                    localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
                }                          
             
  ///===================== Memory Function ====================//
//=======𝗣𝗔𝗜𝗗==𝗦𝗥𝗖==𝗝𝗢𝗜𝗡==𝗧𝗘𝗟𝗘𝗚𝗥𝗔𝗠=@NEW_SRC================= //
                if (Config.HighRisk.Recoil || Config.HighRisk.Shake || Config.HighRisk.Instant || Config.HighRisk.Bypass) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                if (Config.HighRisk.Recoil) {
                                    memset(&ShootWeaponEntityComp->RecoilInfo, 0,
                                           sizeof(FSRecoilInfo));

                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = 0.0f;

                                    memset(&ShootWeaponEntityComp->DeviationInfo, 0,
                                           sizeof(FSDeviation));

                                    ShootWeaponEntityComp->ShotGunCenterPerc = 0.0f;
                                    ShootWeaponEntityComp->ShotGunVerticalSpread = 0.0f;
                                    ShootWeaponEntityComp->ShotGunHorizontalSpread = 0.0f;

                                    ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
                                    ShootWeaponEntityComp->GameDeviationAccuracy = 0.0f;

                                    ShootWeaponEntityComp->CrossHairInitialSize = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstSpeed = 0.0f;
                                    ShootWeaponEntityComp->CrossHairBurstIncreaseSpeed = 0.0f;
                                    ShootWeaponEntityComp->VehicleWeaponDeviationAngle = 0.0f;

                                    ShootWeaponEntityComp->RecoilKickADS = 0.0f;
                                }

                                if (Config.HighRisk.Shake) {
                                    ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
                                }

                                if (Config.HighRisk.HitEffect) {
                                    ShootWeaponEntityComp->ExtraHitPerformScale = 50.0f;
                                }

                                if (Config.HighRisk.Instant) {
                                    ShootWeaponEntityComp->BulletFireSpeed = 100000.0f;

                                }
                            }
                        }
                    }
                }
                if (Config.HighRisk.Bypass){
            }
if (Config.PlayerESP.Radar) {                                 
                     struct Vector3 坐标;
                     坐标.X = 雷达X*10;
                     坐标.Y = 雷达Y*10;
                     struct Vector3 Size;
                     Size.X = 200; //Width of Radar Box.
                     Size.Y = 210; //Height of Radar Box.
                     float 雷达X轴 = 坐标.X + (Size.X / 2);
                     float 雷达Y轴 = 坐标.Y + (Size.Y / 2);
    draw->AddLine({雷达X轴,雷达Y轴},{雷达X轴+200,雷达Y轴}, IM_COL32(255, 255, 0, 255),2.0f);
    draw->AddLine({雷达X轴,雷达Y轴}, {雷达X轴,雷达Y轴 + 200}, IM_COL32(255, 255, 0, 255),2.0f);
    draw->AddLine({雷达X轴 + 200,雷达Y轴}, {雷达X轴 + 200,雷达Y轴 + 200}, IM_COL32(177, 134, 0, 255),2.0f);
    draw->AddLine({雷达X轴,雷达Y轴 + 200},{雷达X轴 + 200,雷达Y轴 + 200}, IM_COL32(177, 134, 0, 255),2.0f);
    draw->AddLine({雷达X轴 + 100,雷达Y轴},{雷达X轴+100,雷达Y轴 + 200}, IM_COL32(255, 255, 255, 255),2.0f);
    draw->AddLine({雷达X轴,雷达Y轴 + 100},{雷达X轴+200,雷达Y轴 + 100}, IM_COL32(255, 255, 255, 255),2.0f);
    draw->AddLine({雷达X轴 + 50,雷达Y轴 + 50},{雷达X轴+150,雷达Y轴 + 50},绿色,2.0f);
    draw->AddLine({雷达X轴 + 50,雷达Y轴 + 50},{雷达X轴+50,雷达Y轴 + 100},绿色,2.0f);
draw->AddLine({雷达X轴 + 150,雷达Y轴 + 50},{雷达X轴+150,雷达Y轴 + 100},绿色,2.0f);


                 }
//THIS OLD BYPASS  ADD HERE REMOVE THIS AND NEW SAFE BYPASS

//黑化团队出品
if (Config.BulletTracking.三六零追2) {
auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
if (WeaponManagerComponent) {
auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated) {
auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
if (ShootWeaponComponent) {
int shoot_event_idx = 163;
auto f_mprotect = [](uintptr_t addr, size_t len, int32_t prot) -> int32_t {
static_assert(PAGE_SIZE == 4096);
constexpr size_t page_size = static_cast<size_t>(PAGE_SIZE);
void* start = reinterpret_cast<void*>(addr & -page_size);
uintptr_t end = (addr + len + page_size - 1) & -page_size;
return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
};
auto VTable = (void **) ShootWeaponComponent->VTable;
if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
orig_shoot_event = decltype(orig_shoot_event)(
VTable[shoot_event_idx]);
f_mprotect((uintptr_t)(&VTable[shoot_event_idx]), sizeof(uintptr_t), PROT_READ | PROT_WRITE);
VTable[shoot_event_idx] = (void *) shoot_event;
}
}   
}  
} 
}
}
                if (Config.SilentAim.Enable) {
                    auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                        if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
                            auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                            if (CurrentWeaponReplicated) {
                                auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                if (ShootWeaponComponent) {
                                    int shoot_event_idx = 160;
                                    auto VTable = (void **) ShootWeaponComponent->VTable;
                                    if (VTable && (VTable[shoot_event_idx] != shoot_event)) {
                                        orig_shoot_event = decltype(orig_shoot_event)(
                                                VTable[shoot_event_idx]);
                                        VTable[shoot_event_idx] = (void *) shoot_event;
                                    }
                                }
                            }
                        }
                    }
                }
                //Aimbot//
if (Config.AimBot.Enable) {
                    ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
                    if (Target) {
                        bool triggerOk = false;
                        if (Config.AimBot.Trigger != EAimTrigger::None) {
                            if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
                                triggerOk = localPlayer->bIsWeaponFiring;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
                                triggerOk = localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
                                triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
                            } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
                                triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;
                            }
                        } else triggerOk = true;
                        if (triggerOk) {
                            FVector targetAimPos = Target->GetBonePos("Head", {});
                            if (Config.AimBot.Target == EAimTarget::Chest) {
                                targetAimPos.Z -= 25.0f;
                            }

                            auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                            if (WeaponManagerComponent) {
                                auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                if ((int) propSlot.GetValue() >= 1 &&
                                    (int) propSlot.GetValue() <= 3) {
                                    auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                    if (CurrentWeaponReplicated) {
                                        auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                        if (ShootWeaponComponent) {
                                            UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                                            if (ShootWeaponEntityComponent) {
                                                ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                                                if (CurrentVehicle) {
                                                    FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist /
                                                                        ShootWeaponEntityComponent->BulletFireSpeed;

                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(
                                                            targetAimPos,
                                                            UKismetMathLibrary::Multiply_VectorFloat(
                                                                    LinearVelocity, timeToTravel));
                                                } else {
                                                    FVector Velocity = Target->GetVelocity();

                                                    float dist = localPlayer->GetDistanceTo(Target);
                                                    auto timeToTravel = dist /
                                                                        ShootWeaponEntityComponent->BulletFireSpeed;

                                                    targetAimPos = UKismetMathLibrary::Add_VectorVector(
                                                            targetAimPos,
                                                            UKismetMathLibrary::Multiply_VectorFloat(
                                                                    Velocity, timeToTravel));
                                                }
 if (Config.AimBot.ReCo) {
                            if (g_LocalPlayer->bIsGunADS) {
                               if (g_LocalPlayer->bIsWeaponFiring) {
                                float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
                                targetAimPos.Z -= dist * Config.AimBot.Recc;                       
                                }  
                             }
                           } 
                                                
                                                localController->SetControlRotation(ToRotator(
                                                        localController->PlayerCameraManager->CameraCache.POV.Location,
                                                        targetAimPos), "");
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                //==========//
///黑化团队出品
                			//=============ESP=================//
				for (int i = 0; i < Actors.size(); i++) {
                        auto Actor = Actors[i];
                        if (isObjectInvalid(Actor))
                            continue;
  
                        if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                            long SCOLOR = IM_COL32(0, 255, 0, 255);
							long SCOLOR4 = IM_COL32(255, 255, 255, 255);
							long PlayerBoxClrCf = IM_COL32(254, 0, 0, 255);
                        long PlayerBoxClrCf2 = IM_COL32(254, 0, 0, 25);

							long SCOLOR3 = IM_COL32(0, 255, 0, 255);
                            long SCOLOR2 = IM_COL32(0, 255, 0, 25);
                            auto Player = (ASTExtraPlayerCharacter *) Actor;
							                        ImColor 颜色 = ImColor(队伍颜色(Player->TeamID));    //绘制人机
                            if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
                                SCOLOR = IM_COL32(255, 0, 0, 255);
						        SCOLOR3 = IM_COL32(255, 255, 255, 255);
                                SCOLOR2 = IM_COL32(255, 0, 0, 25);
								SCOLOR4 = IM_COL32(255, 255, 0, 0);
								
                            PlayerBoxClrCf = IM_COL32(0, 255, 0, 255);
                            PlayerBoxClrCf2 = IM_COL32(0, 255, 0, 25);
                    
                            }

                            float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                            if (Distance > 500.0f)
                                continue;

                            if (Player->PlayerKey == localController->PlayerKey)
                                continue;

                            if (Player->TeamID == localController->TeamID)
                                continue;

                            if (Player->bDead)
                                continue;

                            if (!Player->Mesh)
                                continue;

                            if (Player->bIsAI)
                            {
                                SCOLOR = IM_COL32(255, 255, 255, 255);
                                SCOLOR2 = IM_COL32(255, 255, 255, 25);
                                long PlayerBoxClrCf = IM_COL32(254, 0, 0, 255);
                        long PlayerBoxClrCf2 = IM_COL32(254, 0, 0, 25);
                            }
                            totalEnemies++;

                            if (Config.PlayerESP.NoBot)
                            if (Player->bIsAI)
                                continue;

                            else totalEnemies++;

                        auto HeadPos = Player->GetBonePos("Head", {});
                        ImVec2 headPosSC;

                        auto RootPos = Player->GetBonePos("Root", {});
                        ImVec2 RootPosSC;

                        auto upper_r = Player->GetBonePos("upperarm_r", {});
                        ImVec2 upper_rPoSC;
                        auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
                        ImVec2 lowerarm_rPoSC;
                        auto hand_r = Player->GetBonePos("hand_r", {});
                        ImVec2 hand_rPoSC;
                        auto upper_l = Player->GetBonePos("upperarm_l", {});
                        ImVec2 upper_lPoSC;
                        auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
                        ImVec2 lowerarm_lSC;
                        auto hand_l = Player->GetBonePos("hand_l", {});
                        ImVec2 hand_lPoSC;
                        auto thigh_l = Player->GetBonePos("thigh_l", {});
                        ImVec2 thigh_lPoSC;
                        auto calf_l = Player->GetBonePos("calf_l", {});
                        ImVec2 calf_lPoSC;
                        auto foot_l = Player->GetBonePos("foot_l", {});
                        ImVec2 foot_lPoSC;
                        auto thigh_r = Player->GetBonePos("thigh_r", {});
                        ImVec2 thigh_rPoSC;
                        auto calf_r = Player->GetBonePos("calf_r", {});
                        ImVec2 calf_rPoSC;
                        auto foot_r = Player->GetBonePos("foot_r", {});
                        ImVec2 foot_rPoSC;
                        auto neck_01 = Player->GetBonePos("neck_01", {});
                        ImVec2 neck_01PoSC;
                        auto pelvis = Player->GetBonePos("pelvis", {});
                        ImVec2 pelvisPoSC;
                        FVector2D location (RootPosSC.x, headPosSC.y);
                    //    int SCOLOR;
                        SCOLOR = IM_COL32(255, 000, 000, 255);
                    
                        if (W2S(HeadPos, (FVector2D *) &headPosSC) &&
                            W2S(upper_r, (FVector2D *) &upper_rPoSC) &&
                            W2S(upper_l, (FVector2D *) &upper_lPoSC) &&
                            W2S(lowerarm_r, (FVector2D *) &lowerarm_rPoSC) &&
                            W2S(hand_r, (FVector2D *) &hand_rPoSC) &&
                            W2S(lowerarm_l, (FVector2D *) &lowerarm_lSC) &&
                            W2S(hand_l, (FVector2D *) &hand_lPoSC) &&
                            W2S(thigh_l, (FVector2D *) &thigh_lPoSC) &&
                            W2S(calf_l, (FVector2D *) &calf_lPoSC) &&
                            W2S(foot_l, (FVector2D *) &foot_lPoSC) &&
                            W2S(thigh_r, (FVector2D *) &thigh_rPoSC) &&
                            W2S(calf_r, (FVector2D *) &calf_rPoSC) &&
                            W2S(foot_r, (FVector2D *) &foot_rPoSC) &&
                            W2S(neck_01, (FVector2D *) &neck_01PoSC) &&
                            W2S(pelvis, (FVector2D *) &pelvisPoSC) &&
                            W2S(RootPos, (FVector2D *) &RootPosSC)) {
                            if (预判){
                            auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                    if (WeaponManagerComponent) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
auto 当前子弹= CurrentWeaponReplicated->CurBulletNumInClip;
auto  最大子弹 = CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
if(当前子弹!=最大子弹) {
FOVSizea = 100;
}else if (当前子弹=最大子弹) {
FOVSizea = 0;
}
}

}
}
}
       FVector2D screen(glWidth, glHeight);
                                FVector2D location(RootPosSC.x, headPosSC.y);
                                
                    
                            int borders = isOutsideSafezone(location, screen);
							if (Config.PlayerESP.你妈炸了 && borders != 0) {
								float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
								std::string s;
								s += std::to_string((int)Distance);
								s += "米";
								float mScale = glHeight / (float) 1080;
								auto hintDotRenderPos = pushToScreenBorder(location, screen, borders, (int)((mScale * 100) / 3));
								auto hintTextRenderPos = pushToScreenBorder(location, screen, borders, -(int)((mScale * 36)));
								draw->AddCircleFilled(ImVec2(hintDotRenderPos.X, hintDotRenderPos.Y), mScale * 100, IM_COL32(255, 0, 0, 128), 0);
								draw->AddText(NULL, ((float)density / 30.0f), ImVec2(hintTextRenderPos.X, hintTextRenderPos.Y), IM_COL32(255, 255, 255, 255), s.c_str());
							}
       /*FVector2D screen (glWidth, glHeight);
                                int borders = isOutsideSafezone(location, screen);
                                
                    
                            if (Config.PlayerESP.预警 && borders != 0) {
                                
                                FVector2D screen (glWidth, glHeight);
                                
                                
                                std::string s;
                                s += std::to_string((int)Distance);
                                s += "米";
                                float mScale = glHeight / (float) 1080;
                                auto hintDotRenderPos = pushToScreenBorder(location, screen, borders, (int)((mScale * 100) / 3));
                                auto hintTextRenderPos = pushToScreenBorder(location, screen, borders, -(int)((mScale * 36)));
                                draw->AddCircleFilled(ImVec2(hintDotRenderPos.X, hintDotRenderPos.Y), mScale * 100,颜色,0);
                                draw->AddRectFilled(ImVec2(hintDotRenderPos.X, hintDotRenderPos.Y),  ImVec2(hintDotRenderPos.X, hintDotRenderPos.Y),22,颜色,40);
                                绘制加粗文本(NULL,hintTextRenderPos.X, hintTextRenderPos.Y, IM_COL32(255, 255, 255, 255),黑色, s.c_str());
                            }*/
 
       if (Config.PlayerESP.预警) {
           if (!localController->LineOfSightTo(Actor, {0, 0, 0}, true)) {

      }else{
             draw->AddText(NULL, ((float) density / 12.0f),{(float) glWidth / 4 + glWidth / 40,500},IM_COL32(255, 000, 000, 155),
                                                "你可以打到敌人了");     
       }
      }
       				if (Config.PlayerESP.Warning) {          
                     bool out = false;                              
                     struct Vector3 Pos;
                     Pos.X = screenWidth / 4.395;
                     Pos.Y = screenHeight / Config.TriggerA;
                     struct Vector3 Size;
                     Size.X = 640; //Width of Radar Box.
                     Size.Y = 510; //Height of Radar Box.
                     float RadarCenterX = Pos.X + (Size.X / 2);
                     float RadarCenterY = Pos.Y + (Size.Y / 2);
                     ImColor CircleColor = ImColor(0, 0, 0, 20);
                     ImColor PointColor = ImColor(255,0, 0, 255);
				     draw->AddLine({RadarCenterX + 50, RadarCenterY - 50}, {RadarCenterX, RadarCenterY}, PointColor, 2);
                     draw->AddLine({RadarCenterX - 50, RadarCenterY - 50}, {RadarCenterX, RadarCenterY}, PointColor, 2);
                     draw->AddLine({RadarCenterX, RadarCenterY}, {RadarCenterX, RadarCenterY}, PointColor, 2);
                     draw->AddCircleFilled(ImVec2(RadarCenterX, RadarCenterY), 100.f, CircleColor, 1000); //Background
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 100.f, PointColor, 1000);
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 50.f, PointColor, 1000);
                     draw->AddCircleFilled(ImVec2(RadarCenterX + 0.5f, RadarCenterY + 0.5f), 3.f, PointColor, 1000); // Center of Cross Ci 

                 }
                 if (Config.PlayerESP.手持) {
                        auto rrrr = Player->GetBonePos("pelvis", {});
                                
                                FVector2D we;
                                
                                std::string wep;
                                
                                if (W2S(rrrr, &we)) {
                                    auto WeaponManagerComponent = Player->WeaponManagerComponent;
                                    if (WeaponManagerComponent) {
                                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                                        if (CurrentWeaponReplicated) {
                                            auto wppp = CurrentWeaponReplicated->GetWeaponID();
                                           // auto 手持武器 = CurrentWeaponReplicated->GetWeaponID();
                                            
                                                 auto 当前子弹= CurrentWeaponReplicated->CurBulletNumInClip;
                                           
                                                  auto  最大子弹 = CurrentWeaponReplicated->CurMaxBulletNumInOneClip;
                                            if(wppp == 108004 || wppp == 108003 || wppp == 108002  ||wppp == 108001 || wppp == 108000 || wppp == 108005 || wppp == 108006 || wppp == 108007)
                                                continue;
                                         //   bool hqtt(int wppp,ImTextureID * textureId){
                                            switch (wppp) {
                                                case NULL:
                                                    wep +="空手";
                                                   
                                                    break;
                                                    
                                                case 101001:
                                                    wep += "武器:[AKM]";
                                                    break;
                                                case 101002:
                                                    wep +=  "武器:[M16A4]";
                                                    break;
                                                case 101003:
                                                    wep +=  "武器:[SCAR-L]";
                                                    break;
                                                case 101004:
                                                    wep +=  "武器:[M416]";
                                                    break;
                                                case 101005:
                                                    wep +=  "武器:[狗砸]";
                                                    break;
                                                case 101006:
                                                    wep +=  "武器:[AUG]";
                                                    break;
                                                case 101007:
                                                    wep +=  "武器:[QBZ]";
                                                    break;
                                                case 101008:
                                                    wep +=  "武器:[M762]";
                                                    break;
                                                case 101009:
                                                    wep +=  "武器:[Mk47]";
                                                    break;
                                                case 101010:
                                                    wep +=  "武器:[G36C]";
                                                    break;
                                                case 101100:
                                                    wep +=  "武器:[FAMAS]";
                                                    break;
                                                    //LIGHT MACHINEGUN
                                                case 105001:
                                                    wep +=  "武器:[M249]";
                                                    break;
                                                case 105002:
                                                    wep +=  "武器:[DP-28]";
                                                    break;
                                                    //SMG
                                                case 102001:
                                                    wep +=  "武器:[UZI]";
                                                    break;
                                                case 102002:
                                                    wep +=  "武器:[UMP45]";
                                                    break;
                                                case 102003:
                                                    wep +=  "武器:[Vector]";
                                                    break;
                                                case 102004:
                                                    wep +=  "武器:[TommyGun]";
                                                    break;
                                                    
                                                case 102005:
                                                    wep +=  "武器:[PP-19 Bizon]";
                                                    break;
                                                case 102007:
                                                    wep +=  "武器:[Skorpion]";
                                                    break;
                                                    //SNIPER
                                                case 103001:
                                                    wep +=  "武器:[Kar98K]";
                                                    break;
                                                case 103002:
                                                    wep +=  "武器:[M24]";
                                                    break;
                                                case 103003:
                                                    wep +=  "武器:[AWM]";
                                                    break;
                                                case 103004:
                                                    wep +=  "武器:[SKS]";
                                                    break;
                                                case 103005:
                                                    wep +=  "武器:[VSS]";
                                                    break;
                                                case 103006:
                                                    wep +=  "武器:[Mini14]";
                                                    break;
                                                case 103007:
                                                    wep +=  "武器:[Mk14]";
                                                    break;
                                                case 103008:
                                                    wep +=  "武器:[Win94]";
                                                    break;
                                                case 103009:
                                                    wep +=  "武器:[SLR]";
                                                    break;
                                                case 103010:
                                                    wep +=  "武器:[QBU]";
                                                    break;
                                                case 103011:
                                                    wep +=  "武器:[Mosin]";
                                                    break;
                                                    //SHOTGUN
                                                case 103100:
                                                    wep +=  "武器:[Mk12]";
                                                    break;
                                                case 104001:
                                                    wep +=  "武器:[S686]";
                                                    break;

                                                case 104002:
                                                    wep +=  "武器:[S1897]";
                                                    break;
                                                case 104003:
                                                    wep +=  "武器:[S12K]";
                                                    break;
                                                case 104004:
                                                    wep +=  "武器:[M1014]";
                                                    break;
                                                case 106006:
                                                    wep +=  "武器:[Sawed-off]";
                                                    break;
                                                    //POSTIL
                                                case 106001:
                                                    wep +=  "武器:[P1911]";
                                                    break;
                                                case 106003:
                                                    wep +=  "武器:[R1895]";
                                                    break;
                                                case 106004:
                                                    wep +=  "武器:[P18C]";
                                                    break;
                                                case 106005:
                                                    wep +=  "武器:[R45]";
                                                    break;
                                                case 106008:
                                                    wep +=  "武器:[Vz61]";
                                                    break;
                                                case 106010:
                                                    wep +=  "武器:[Desert Eagle]";
                                                    break;
                                                    //OTHER
                                                case 107001:
                                                    wep +=  "武器:[Crossbow]";
                                                    break;
                                                case 108001:
                                                    wep +=  "武器:[vcMachete]";
                                                    break;
                                                case 108002:
                                                    wep +=  "武器:[Crowbar]";
                                                    break;
                                                case 108003:
                                                    wep +=  "武器:[Sickle]";
                                                    break;
                                                case 108004:
                                                    wep +=  "武器:[Pan]";
                                                    break;
                                                case 201001:
                                                    wep +=  "武器:[Choke]";
                                                    break;
                                                case 103012:
                                                    wep += "武器[AMR大狙]";
                                                    case 1030071:
                                                        wep +="妹控-[破损]";
                                                        
                                                    break;
                                                    case 1030072:
                                                        wep +="妹控-[修复]";
                                                    break;
                                                    case 1030073:
                                                        wep +="妹控-[完好]";
                                                    break;
                                                    case 1030074:
                                                        wep +="妹控-[改进]";
                                                    break;
                                                    case 1030075:
                                                        wep +="妹控-[精致]";
                                                    break;
                                                    case 1030076:
                                                        wep +="妹控-[独眼蛇]";
                                                    break;
                                                    case 1030077:
                                                        wep +="妹控-[钢铁阵线]";
                                                    break;
                                                    
                                                    
                                                    case 1010041:
                                                        wep +="M416-[破损]";
                                                    break;
                                                    case 1010042:
                                                        wep +="M416-[修复]";
                                                    break;
                                                    case 1010043:
                                                        wep +="M416-[完好]";
                                                    break;
                                                    case 1010044:
                                                        wep +="M416-[改进]";
                                                    break;
                                                    case 1010045:
                                                        wep +="M416-[精致]";
                                                    break;
                                                    case 1010046:
                                                        wep +="M416-[独眼蛇]";
                                                    break;
                                                    case 1010047:
                                                        wep +="M416-[钢铁阵线]";
                                                    break;
                                                    
                                                    case 1050011:
                                                        wep +="M249-[破损]";
                                                    break;
                                                    case 1050012:
                                                        wep +="M249-[修复]";
                                                    break;
                                                    case 1050013:
                                                        wep +="M249-[完好]";
                                                    break;
                                                    case 1050014:
                                                        wep +="M249-[改进]";
                                                    break;
                                                    case 1050015:
                                                        wep +="M249-[精致]";
                                                    break;
                                                    case 1050016:
                                                        wep +="M249-[独眼蛇]";
                                                    break;
                                                    case 1050017:
                                                        wep +="M249-[钢铁阵线]";
                                                    break;
                                                    
                                                    case 1010051:
                                                        wep +="狗砸-[破损]";
                                                    break;
                                                    case 1010052:
                                                        wep +="狗砸-[修复]";
                                                    break;
                                                    case 1010053:
                                                        wep +="狗砸-[完好]";
                                                    break;
                                                    case 1010054:
                                                        wep +="狗砸-[改进]";
                                                    break;
                                                    case 1010055:
                                                        wep +="狗砸-[精致]";
                                                    break;
                                                    case 1010056:
                                                        wep +="狗砸-[独眼蛇]";
                                                    break;
                                                    case 1010057:
                                                        wep +="狗砸-[钢铁阵线]";
                                                        
                                                    case 1010061:
                                                        wep +="AUG-[破损]";
                                                        
                                                    break;
                                                    case 1010062:
                                                        wep +="AUG-[修复]";
                                                    break;
                                                    case 1010063:
                                                        wep +="AUG-[完好]";
                                                    break;
                                                    case 1010064:
                                                        wep +="AUG-[改进]";
                                                    break;
                                                    case 1010065:
                                                        wep +="AUG-[精致]";
                                                    break;
                                                    case 1010066:
                                                        wep +="AUG-[独眼蛇]";
                                                    break;
                                                    case 1010067:
                                                        wep +="AUG-[钢铁阵线]";
                                                    break;
                                                    
                                                    case 1010071:
                                                        wep +="QBZ-[破损]";
                                                    break;
                                                    case 1010072:
                                                        wep +="QBZ-[修复]";
                                                    break;
                                                    case 1010073:
                                                        wep +="QBZ-[完好]";
                                                    break;
                                                    case 1010074:
                                                        wep +="QBZ-[改进]";
                                                    break;
                                                    case 1010075:
                                                        wep +="QBZ-[精致]";
                                                    break;
                                                    case 1010076:
                                                        wep +="QBZ-[独眼蛇]";
                                                    break;
                                                    case 1010077:
                                                        wep +="QBZ-[钢铁阵线]";
                                                    break;
                                                    
                                                    
                                                    case 1010081:
                                                        wep +="猛男762-[破损]";
                                                    break;
                                                    case 1010082:
                                                        wep +="猛男762-[修复]";
                                                    break;
                                                    case 1010083:
                                                        wep +="猛男762-[完好]";
                                                    break;
                                                    case 1010084:
                                                        wep +="猛男762-[改进]";
                                                    break;
                                                    case 1010085:
                                                        wep +="猛男762-[精致]";
                                                    break;
                                                    case 1010086:
                                                        wep +="猛男762-[独眼蛇]";
                                                    break;
                                                    case 1010087:
                                                        wep +="猛男762-[钢铁阵线]";
                                                    break;
                                                    
                                                    
                                                    
                                                    case 1010091:
                                                        wep +="榴弹底座-[破损]";
                                                    break;
                                                    case 1010092:
                                                        wep +="榴弹底座-[修复]";
                                                    break;
                                                    case 1010093:
                                                        wep +="榴弹底座-[完好]";
                                                    break;
                                                    case 1010094:
                                                        wep +="榴弹底座-[改进]";
                                                    break;
                                                    
                                                    
                                                    case 1010101:
                                                        wep +="G36C-[破损]";
                                                    break;
                                                    case 1010102:
                                                        wep +="G36C-[修复]";
                                                    break;
                                                    case 1010103:
                                                        wep +="G36C-[完好]";
                                                    break;
                                                    case 1010104:
                                                        wep +="G36C-[改进]";
                                                    break;
                                                    case 1010105:
                                                        wep +="G36C-[精致]";
                                                    break;
                                                    case 1010106:
                                                        wep +="G36C-[独眼蛇]";
                                                    break;
                                                    case 1010107:
                                                        wep +="G36C-[钢铁阵线]";
                                                    break;
                                                    
                                                    
                                                    
                                                    case 1030021:
                                                        wep +="M24-[破损]";
                                                    break;
                                                    case 1030022:
                                                        wep +="M24-[修复]";
                                                    break;
                                                    case 1030023:
                                                        wep +="M24-[完好]";
                                                    break;
                                                    case 1030024:
                                                        wep +="M24-[改进]";
                                                    break;
                                                    case 1030025:
                                                        wep +="M24-[精致]";
                                                    break;
                                                    case 1030026:
                                                        wep +="M24-[独眼蛇]";
                                                    break;
                                                    case 1030027:
                                                        wep +="M24-[钢铁阵线]";
                                                    break;
                                                    
                                                    case 1030031:
                                                        wep +="AWM-[破损]";
                                                    break;
                                                    case 1030032:
                                                        wep +="AWM-[修复]";
                                                    break;
                                                    case 1030033:
                                                        wep +="AWM-[完好]";
                                                    break;
                                                    case 1030034:
                                                        wep +="AWM-[改进]";
                                                    break;
                                                    case 1030035:
                                                        wep +="AWM-[精致]";
                                                    break;
                                                    case 1030036:
                                                        wep +="AWM-[独眼蛇]";
                                                    break;
                                                    case 1030037:
                                                        wep +="AWM-[钢铁阵线]";
                                                    break;
                                                    
                                                    
                                                    case 1030041:
                                                        wep +="SKS-[破损]";
                                                    break;
                                                    case 1030042:
                                                        wep +="SKS-[修复]";
                                                    break;
                                                    case 1030043:
                                                        wep +="SKS-[完好]";
                                                    break;
                                                    case 1030044:
                                                        wep +="SKS-[改进]";
                                                    break;
                                                    case 1030045:
                                                        wep +="SKS-[精致]";
                                                    break;
                                                    case 1030046:
                                                        wep +="SKS-[独眼蛇]";
                                                    break;
                                                    case 1030047:
                                                        wep +="SKS-[钢铁阵线]";
                                                    break;
                                                    
                                                    
                                                    default:
                                                    wep +="未知";
                                                    break;
                                                    }
                                                    wep += "[当前子弹:";
   
                                   wep += std::to_string((int)当前子弹);
                                   wep += "/最大子弹:";
                                   wep += std::to_string((int)最大子弹);
                                   wep += "]";


                               
                                
                                 float boxWidth = density / 1.8f;
                                boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance,
                                                     boxWidth / 2);
                                float boxHeight = boxWidth * 0.19f;
                            绘制加粗文本2(19,headPosSC.x - (boxWidth / 3)  -60,headPosSC.y - 126, 白色,蓝色,wep.c_str());
                 
                             }
                           }
                           
                          
                         }
                         
                         }
              
                        
                      if (Config.PlayerESP.Warning) 
					 {
                     std::string s;

                                    s += std::to_string((int) Distance);
                                    s += "米";
                      FVector MyPosition;
                      ASTExtraVehicleBase *CurrentVehiclea = Player->CurrentVehicle;
                 if (CurrentVehiclea) {
                      MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
                       } else {
                      MyPosition = Player->RootComponent->RelativeLocation;
                       }                                     
                      FVector EnemyPosition;
                      ASTExtraVehicleBase *CurrentVehicle = localPlayer->CurrentVehicle;
                 if (CurrentVehicle) {
                      EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
                       }  else {
                      EnemyPosition = localPlayer->RootComponent->RelativeLocation;
                }
               bool out = false;                              
               struct Vector3 坐标;
               坐标.X = 雷达X*10;
               坐标.Y = 雷达Y*10;
               struct Vector3 Size;
               Size.X = 200; //Width of Radar Box.
               Size.Y = 210; //Height of Radar Box.
               float 雷达X轴 = 坐标.X + (Size.X / 2);
               float 雷达Y轴 = 坐标.Y + (Size.Y / 2);                                
                                                   
               
               FVector EntityPos = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, NULL, NULL, Vector3(glWidth, glHeight, 0), out);
               FVector RadarSketch = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, 雷达X轴,雷达Y轴, Vector3(Size.X, Size.Y, 0), out);
              if (Distance >= 0.f) {

               draw->AddCircleFilled(ImVec2(RadarSketch.X, RadarSketch.Y), 5, PlayerBoxClrCf, 0.0f);    
                绘制加粗文本2(14,RadarSketch.X + 1, RadarSketch.Y+1,黄色,白色,s.c_str());
                FVector angle = FVector();
                            Vector3 forward = Vector3((float)(glWidth / 2) - EntityPos.X, (float)(glHeight / 2) - EntityPos.Y, 0.0f);
                            VectorAnglesRadar(forward, angle);
                            const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
                            const auto new_point_x = (glWidth / 2) + (55/*alert dist from me*/) / 2 * 8 * cosf(angle_yaw_rad);
                            const auto new_point_y = (glHeight / 2) + (55/*alert dist from me*/) / 2 * 8 * sinf(angle_yaw_rad);
                            std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
                            RotateTriangle(points, angle.Y + 180.f);
                            draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y),颜色, 1.5f);
                           
            }
		}	
                            
							if (Config.PlayerESP.Linee) {
                            if (Player->bIsAI) {
                                draw->AddLine({(float) glWidth / 2, 0}, headPosSC, SCOLOR3,0.6f);
                            } else {
                                draw->AddLine({(float) glWidth / 2, 0}, headPosSC, SCOLOR3,0.9f);                           
                         
                         }
						 }
                      if (Config.PlayerESP.Mid) {
                            if (Player->bIsAI) {
                                draw->AddLine({(float) glWidth / 2, 358}, headPosSC, SCOLOR4,0.9f);
                            } else {
                                draw->AddLine({(float) glWidth / 2, 358}, headPosSC, SCOLOR4,0.9f);
                            }
							}
                            if (Config.PlayerESP.Below) {               
                                draw->AddText(NULL, 42.0f, ImVec2(glWidth / 2.3 - 50.f, 150), IM_COL32(255, 255, 255, 255), "@PUSSYCHEATS69");      
                           if (Player->bIsAI) {
                                draw->AddLine({(float) glWidth / 2, 358}, headPosSC, IM_COL32(255, 255, 255, 0));
                            } else {
                                draw->AddLine({(float) glWidth / 2, 358}, headPosSC, IM_COL32(255, 255, 255, 0));
                            }        
                            }
							
					                     if (Config.PlayerESP.Box) {
                                float boxHeight = abs(headPosSC.y - RootPosSC.y);
                                float boxWidth = boxHeight * 0.65f;
                                ImVec2 vStart = {headPosSC.x - (boxWidth / 2), headPosSC.y};
                                ImVec2 vEnd = {vStart.x + boxWidth, vStart.y + boxHeight};
               if (Player->bIsAI){
                                draw->AddRect(vStart, vEnd, PlayerBoxClrCf2, 1.5f, 240, 1.7f);
                                  }else{
                                draw->AddRectFilled(vStart, vEnd, PlayerBoxClrCf, 1.5f, 240);
                }} /*else if (Config.PlayerESP.DDBox == ox::BBBox) {
                            float He_RoZ = (float) Head_RootZ;
                                     
                                     FVector BoxSize;
                                     BoxSize.X = 65.f; //65
                                     BoxSize.Y = 80.f; //80
                                     BoxSize.Z = He_RoZ + 5; //165
                          if (Player->bIsAI){
                              Box3D1(draw, Player->K2_GetActorLocation(), BoxSize, PlayerBoxClrCf2);
                                }else{
                                    Box3D1(draw, Player->K2_GetActorLocation(), BoxSize, PlayerBoxClrCf);
                               
                                }*/
                         
                        if (Config.PlayerESP.动作判断) {
                                float boxWidth = density / 1.8f;
                                boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance,
                                                     boxWidth / 2);
                                float boxHeight = boxWidth * 0.19f;
                                            auto PlayerStat = playerstatus(Player->CurrentStates);
                                            std::string s = "当前状态:[";
                                             s += PlayerStat;
                                             s += "]";
                                            if (PlayerStat != "") {
                                            绘制加粗文本2(19,headPosSC.x - (boxWidth / 3)  - 60,
                                               headPosSC.y - 105,
                                              白色,红色,s.c_str());
                                            }
                                            }
                         
							
		
                                  if (Config.PlayerESP.Skeleton) {
                                if (Player->Health == 0.0f && !Player->bDead) {
                                float boxWidth = 7.f - Distance * 0.03;
                                draw->AddCircle({headPosSC.x, headPosSC.y}, boxWidth, IM_COL32(51, 255, 255, 255), 0, 1.0f);
                                draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, neck_01PoSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, neck_01PoSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                draw->AddLine({upper_rPoSC.x, upper_rPoSC.y}, lowerarm_rPoSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                draw->AddLine({lowerarm_rPoSC.x, lowerarm_rPoSC.y}, hand_rPoSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                draw->AddLine({upper_lPoSC.x, upper_lPoSC.y}, lowerarm_lSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                draw->AddLine({lowerarm_lSC.x, lowerarm_lSC.y}, hand_lPoSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, thigh_lPoSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                draw->AddLine({thigh_lPoSC.x, thigh_lPoSC.y}, calf_lPoSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                draw->AddLine({calf_lPoSC.x, calf_lPoSC.y}, foot_lPoSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                draw->AddLine({thigh_rPoSC.x, thigh_rPoSC.y}, calf_rPoSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                draw->AddLine({calf_rPoSC.x, calf_rPoSC.y}, foot_rPoSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, pelvisPoSC, IM_COL32(51, 255, 255, 255), 1.0f);
								draw->AddLine({neck_01PoSC.x, neck_01PoSC.y}, headPosSC, IM_COL32(51, 255, 255, 255), 1.0f);
                                } else {                  
                                static std::vector<std::string> right_arm{"neck_01", "clavicle_r", "upperarm_r", "lowerarm_r", "hand_r", "item_r"};
                                static std::vector<std::string> left_arm{"neck_01", "clavicle_l", "upperarm_l", "lowerarm_l", "hand_l", "item_l"};
                                static std::vector<std::string> spine{"Head", "neck_01", "spine_03", "spine_02", "spine_01", "pelvis"};
                                static std::vector<std::string> lower_right{"pelvis", "thigh_r", "calf_r", "foot_r"};
                                static std::vector<std::string> lower_left{"pelvis", "thigh_l", "calf_l", "foot_l"};
                                static std::vector<std::vector<std::string>> skeleton{right_arm, left_arm, spine, lower_right, lower_left};
                                for (auto &boneStructure: skeleton) {
                                std::string lastBone;
                                for (std::string &currentBone: boneStructure) {
                                if (!lastBone.empty()) {
                                ImVec2 boneFrom, boneTo;
                                if (W2S(Player->GetBonePos(lastBone.c_str(), {}),
                                (FVector2D *) &boneFrom) &&
                                W2S(Player->GetBonePos(currentBone.c_str(), {}),
                                (FVector2D *) &boneTo)) {
                                draw->AddLine(boneFrom, boneTo,
                                PlayerBoxClrCf, 1.0f);
                                                }
                                            }
                                lastBone = currentBone;
                                        }
                                    }
                                }
                    }	if (Config.PlayerESP.Name) {
                            
                                     draw->AddRectFilled({headPosSC.x - 105, headPosSC.y - 61}, {headPosSC.x - 65, headPosSC.y - 28}, 颜色, 1, 0);                                 
                                    draw->AddRectFilled({headPosSC.x - 105, headPosSC.y - 61}, {headPosSC.x + 105, headPosSC.y - 28}, 颜色, 1, 0);
                                    draw->AddRect({headPosSC.x - 106, headPosSC.y - 62}, {headPosSC.x + 106, headPosSC.y - 29},白色);
                                    draw->AddRect({headPosSC.x - 106, headPosSC.y - 62}, {headPosSC.x + 106, headPosSC.y - 29},白色);
                                    draw->AddRect({headPosSC.x - 106, headPosSC.y - 62}, {headPosSC.x + 106, headPosSC.y - 29},白色);
                                    draw->AddRect({headPosSC.x - 106, headPosSC.y - 62}, {headPosSC.x + 106, headPosSC.y - 29},颜色);
                                    draw->AddRect({headPosSC.x - 106, headPosSC.y - 62}, {headPosSC.x + 106, headPosSC.y - 29},颜色);
                                    draw->AddRect({headPosSC.x - 106, headPosSC.y - 62}, {headPosSC.x + 106, headPosSC.y - 29},颜色);
                                    
                                
                                   std::string s;
                                    if (Player->bIsAI) {
                                        s += "  人机";
                                     
                                    } else {
                                       s += "";
                                       s += Player->PlayerName.ToString();
                                    }
                                    绘制加粗文本(NULL,headPosSC.x - 60, headPosSC.y - 58.5, IM_COL32(255, 255, 255, 255),黑色,s.c_str());
                                }
                                
                                
                            
                            
                            
                            
                            if (Config.PlayerESP.TeamID) {//队伍ID
                                
                          std::string s;
                                
                                
                                if(Player->TeamID == 996)
                                s +="鸡";
                                else
                                s += std::to_string(Player->TeamID);
                                auto textSize = ImGui::CalcTextSize(s.c_str(), 0, 30);
                    
                   绘制加粗文本(NULL,headPosSC.x - 84 - (textSize.x / 2), headPosSC.y - 58.5, IM_COL32(255, 255, 255, 255),黑色,s.c_str());
                   
                                }
                                if (Config.PlayerESP.Health) {//绘制血条
                                    int CurHP = (int) std::max(0, std::min((int) Player->Health,100));
                                    int MaxHP = 100;
                                    long 血条颜色 = IM_COL32(255, 255, 255, 255);
                                
                                    draw->AddRectFilled({headPosSC.x - 105, headPosSC.y - 28}, {headPosSC.x - 105 + (2.1 * CurHP), headPosSC.y - 23},血条颜色, 1, 0);
                                //    DrawBoxEnemy(draw, ImVec2(headPosSC.x - healthLength, headPosSC.y - 15), vEndFilled, 4, curHP_Color);
                                    draw->AddRect({headPosSC.x - 106, headPosSC.y - 29}, {headPosSC.x - 104 + (2.1 * MaxHP), headPosSC.y - 22}, IM_COL32(0, 0, 0, 255));
                                }
                                
                                
                                

                        

                    if (Config.PlayerESP.LootBox) {
                    if (Actors[i]->IsA(APickUpListWrapperActor::StaticClass())) {
                        auto DeadBox = (APickUpListWrapperActor *) Actors[i];
                        auto Pick = (APickUpListWrapperActor *) Actors[i];
                        if (!Pick->RootComponent)
                            continue;

                     //   auto PickUpDataList2 = *(TArray<FPickUpItemData> *)((uintptr_t) Pick + 0x690);
                        float Distance = Pick->GetDistanceTo(localPlayer) / 100.0f;
                        FVector2D PickUpListsPos;
                        Vector3 origin, extends;
                        
                        if (W2S(Pick->K2_GetActorLocation(), &PickUpListsPos)) {
                            std::string s = "棺材箱";
                            s += " ";
                            s += std::to_string((int) Distance);
                            s += "米";
                            draw->AddText(NULL, ((float) density / 25.0f), {PickUpListsPos.X, PickUpListsPos.Y},IM_COL32(255, 000, 000, 255), s.c_str());
                            FVector BoxSize;
                            BoxSize.X = 60.f; // Height
                            BoxSize.Y = 75.f; // Front
                            BoxSize.Z = 30.f; // Height
                            Box3D(draw, DeadBox->K2_GetActorLocation(), BoxSize, IM_COL32(255, 000, 000, 255));
                            
                            if (Config.PlayerESP.物资显示) {
                                if (Distance <= 1000.f) {
                                    auto mWidthScale = std::min(0.1f * Distance, 35.f);
                                    auto boxWidth = 75.f - mWidthScale;
                                    auto boxHeight = boxWidth * 0.120f;
                                    auto PickUpDataList = *(TArray<FPickUpItemData> *)((uintptr_t) Pick + 0x828);

                                    Rect PlayerRect(PickUpListsPos.X - (boxWidth / 2), PickUpListsPos.Y, boxWidth, boxHeight);       
                                    float posY = PickUpListsPos.Y - (PlayerRect.height * 1.00f);

                                    for (int j = 0; j < PickUpDataList.Num(); j++) {
                                        std::vector<std::string> s2;
                                        std::string itm;

                                    uint32_t tc = 0xFF000000;

                                        for (auto &category : items_data) {
                                            for (auto &item : category["Items"]) {
                                                
                                                if (item["itemId"] == PickUpDataList[j].ID.TypeSpecificID) {
                                                    tc = strtoul(
                                                    item["itemTextColor"].get<std::string>().c_str(),
                                                    0, 16);
                                                   /* itm += "[]";
                                                    itm += item["itemClass"].get<std::string>();
                                                    itm += " ]]";*/
                                                    itm += item["itemName"].get<std::string>();
                                    
                                    
                                              
                                                    s2.push_back(itm);
                                                    break;
                                                }
                                            }
                                        }

                                        if (!s2.empty()) {
                                            
                                                s2.push_back("X");
                                                s2.push_back(std::to_string(PickUpDataList[j].Count));
                                                s2.push_back("件");
                                            
                                            std::string s3;
                                            for (auto &s4 : s2) {
                                                s3 += s4;
                                            }

                                            
                                            绘制加粗文本2(15, PickUpListsPos.X, posY,tc,白色, s3.c_str());  
                                            posY -= PlayerRect.height * 1.00f;
                                        }
                                    }
                                }
                            }
                        }
                      }
                   
                }
              
							
								
								
							   if (!Config.指向标雷达) {      
                            bool shit = false;
                            FVector MyPosition, EnemyPosition;
                            ASTExtraVehicleBase * CurrentVehiclea = Player->CurrentVehicle;//xiaobaoYa666
                            if (CurrentVehiclea) {
                                MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
                            } else {
                                MyPosition = Player->RootComponent->RelativeLocation;
                            }//TG：xiaobaoYa666//TG：xiaobaoYa666//TG：xiaobaoYa666//TG：xiaobaoYa666//TG：xiaobaoYa666
                            ASTExtraVehicleBase * CurrentVehicle = localPlayer->CurrentVehicle;
                            if (CurrentVehicle) {
                                EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
                            } else {
                                EnemyPosition = localPlayer->RootComponent->RelativeLocation;
                            }//TG：xiaobaoYa666
                            FVector EntityPos = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, NULL, NULL, Vector3(glWidth, glHeight, 0), shit);
                            FVector angle = FVector();//TG：xiaobaoYa666
                            Vector3 forward = Vector3((float)(glWidth / 2) - EntityPos.X, (float)(glHeight / 2) - EntityPos.Y, 0.0f);
                            VectorAnglesRadar(forward, angle);
                            const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
                            const auto new_point_x = (glWidth / 2) + (55/*alert dist from me*/) / 2 * 8 * cosf(angle_yaw_rad);
                            const auto new_point_y = (glHeight / 2) + (55/*alert dist from me*/) / 2 * 8 * sinf(angle_yaw_rad);
                            std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
                            RotateTriangle(points, angle.Y + 180.f);//TG：xiaobaoYa666
                                                    draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), PlayerBoxClrCf, 1.5f);
       draw->AddTriangleFilled(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), PlayerBoxClrCf2);//TG：xiaobaoYa666
       }
							if (!Config.开火动态) {
/*by禾黎back*/ //ImGuiIO& io = ImGui::GetIO(); /*by禾黎back*/ //获取ImGuiIO结构体
if (g_LocalPlayer->bIsWeaponFiring) {/*by禾黎back*/ //如果正在开火
  /*by禾黎back*/ //  bIsWeaponFiring_time += 0.02f; /*by禾黎back*/ //计时累加
    FOVSizea += 7.5f; /*by禾黎back*/ //fov开火累加，循环加
    if (FOVSizea > 351.0f) /*by禾黎back*/ //如果fov达？，Fov固定
    {
    FOVSizea = 350.0f;/*by禾黎back*/ //固定值
    }
}else{
FOVSizea -= 6.0f; /*by禾黎back*/ //fov停火累减，循环减
if (FOVSizea < 31.0f) /*by禾黎back*/ //停火状态/如果fov达？，FOVSizea固定
    {
    FOVSizea = 30.0f;/*by禾黎back*/ //固定值
    }
}
}
/*by禾黎back*/ //
/*by禾黎back*/ //
/*by禾黎back*/ //
/*by禾黎back*/ //
/*by禾黎back*/ //

               




						
							if (Config.PlayerESP.Vehicle) {
                        if (Actors[i]->IsA(ASTExtraVehicleBase::StaticClass())) {
                            auto Vehicle = (ASTExtraVehicleBase *) Actors[i];

                            if (!Vehicle->Mesh)
                                continue;

                            float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;

                            FVector2D vehiclePos;
                            if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos)) {
                                std::string s = GetVehicleName(Vehicle);
                                s += " [";
                                s += std::to_string((int) Distance);
                                s += "米]";

                                draw->AddText(NULL, ((float) density / 30.0f),
                                              {vehiclePos.X, vehiclePos.Y}, 
											  ToColor(Config.ColorsESP.Distance), s.c_str());
                            }
                        }
                    }
                    
                        if (Config.PlayerESP.Grenade) {
                        if (Actors[i]->IsA(ASTExtraGrenadeBase::StaticClass())) {
                            auto grenade = (ASTExtraGrenadeBase *) Actors[i];/*@sjwmod*/

                            if (!grenade)
                                continue;

                            float Distance = grenade->GetDistanceTo/*@sjwmod*/(localPlayer) / 100.f;
                            if (Distance <= 500.f) {
						     draw->AddText(NULL, 70.0f, ImVec2(glWidth / 3.0 - 50.f, 350), IM_COL32(255, 0, 0, 200), "!!! 有手雷!!!");
                             FVector2D grenadePos;
                            if (W2S(grenade->K2_GetActorLocation(), &grenadePos)) {

                                  std::string s;
                                  s =  "投掷物[";
                                  s += std::to_string((int) Distance);/*@sjwmod*/
                                  s += "]";
                                  draw->AddText(NULL, ((float) density / 30.0f),
                                              {grenadePos.X, grenadePos.Y},
                                              ToColor(Config.ColorsESP.Distance), s.c_str());
                        }
                        }
			    	    }
                      
                    
                        
                   	       	if (Actors[i]->IsA(APickUpWrapperActor::StaticClass()))
					{
						auto PickUp = (APickUpWrapperActor *)Actors[i];
						if (Items[PickUp->DefineID.TypeSpecificID])
						{
							auto RootComponent = PickUp->RootComponent;
							if (!RootComponent)
								continue;
							float Distance = PickUp->GetDistanceTo(localPlayer) / 100.f;
							FVector2D itemPos;
							if (W2S(PickUp->K2_GetActorLocation(), &itemPos))
							{
								std::string s;
								uint32_t tc = 0xFF000000;
								for (auto &category : items_data)
								{
									for (auto &item : category["Items"])
									{
										if (item["itemId"] == PickUp->DefineID.TypeSpecificID)
										{
											s = item["itemName"].get<std::string>();
											break;
										}
									}
								}
								s += " - ";
								s += std::to_string((int)Distance);
								s += "米";
								draw->AddText(NULL, ((float)density / 15.0f), {itemPos.X, itemPos.Y}, ToColor(Config.ColorsESP.Items), s.c_str());
                                 }
                            }
                        }
                   }
               }
            }
            }
            
            
//======================== //

        g_LocalController = localController;
g_LocalPlayer = localPlayer;

std::string s;
ImColor sColor;
if (totalEnemies+totalBots==0){
s += "安全";
sColor = 绿色;
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 40);
绘制加粗文本(40, (glWidth / 2) - (textSize.x / 2), 50, sColor, 白色, s.c_str());
}else{
s += "玩家[";
s += std::to_string((int)totalEnemies);
s += "] ";
s += " 人机[";
s += std::to_string((int)totalBots);
s += "]";
sColor = 红色;
auto textSize = ImGui::CalcTextSize2(s.c_str(), 0, 35);
绘制加粗文本(35, (glWidth / 2) - (textSize.x / 2), 50, sColor, 白色, s.c_str());
}
// ===============================================================//
      fps.update();
        }
        
// ===============================================================//   
if (Config.AimBot.Enable) {
draw->AddCircle(ImVec2(glWidth / 2, glHeight / 2), FOVSizea, ToColor(Config.ColorsESP.Fova), 100, 0.0f);
}
// ===============================================================//   
     }
    
	}
    
	
	
	
	
	
//黑化团队出品
    std::string getClipboardText() {
        if (!g_App)
            return "";

        auto activity = g_App->activity;
        if (!activity)
            return "";

        auto vm = activity->vm;
        if (!vm)
            return "";

        auto object = activity->clazz;
        if (!object)
            return "";

        std::string result;

        JNIEnv *env;
        vm->AttachCurrentThread(&env, 0);
        {
            auto ContextClass = env->FindClass("android/content/Context");
            auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");

            auto str = env->NewStringUTF("clipboard");
            auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
            env->DeleteLocalRef(str);

            auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
            auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");

            auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
            auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");

            auto text = env->CallObjectMethod(clipboardManager, getText);
            if (text) {
                str = (jstring) env->CallObjectMethod(text, toStringMethod);
                result = env->GetStringUTFChars(str, 0);
                env->DeleteLocalRef(str);
                env->DeleteLocalRef(text);
            }

            env->DeleteLocalRef(CharSequenceClass);
            env->DeleteLocalRef(ClipboardManagerClass);
            env->DeleteLocalRef(clipboardManager);
            env->DeleteLocalRef(ContextClass);
        }
        vm->DetachCurrentThread();

        return result;
    }

//黑化团队出品
    const char *GetAndroidID(JNIEnv *env, jobject context) {
        jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
        jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/ StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(), /*()Landroid/content/ContentResolver;*/ StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
        jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/ StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
        jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/ StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/ StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());

        auto obj = env->CallObjectMethod(context, getContentResolverMethod);
        auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF(/*android_id*/ StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
        return env->GetStringUTFChars(str, 0);
    }

    const char *GetDeviceModel(JNIEnv *env) {
        jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
        jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/ StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

        auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
        return env->GetStringUTFChars(str, 0);
    }

    const char *GetDeviceBrand(JNIEnv *env) {
        jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
        jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/ StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(), /*Ljava/lang/String;*/ StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

        auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
        return env->GetStringUTFChars(str, 0);
    }

    const char *GetPackageName(JNIEnv *env, jobject context) {
        jclass contextClass = env->FindClass(/*android/content/Context*/ StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
        jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/ StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(), /*()Ljava/lang/String;*/ StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());

        auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
        return env->GetStringUTFChars(str, 0);
    }

    const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
        jclass uuidClass = env->FindClass(/*java/util/UUID*/ StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());

        auto len = strlen(uuid);

        jbyteArray myJByteArray = env->NewByteArray(len);
        env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

        jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/ StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(), /*([B)Ljava/util/UUID;*/ StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
        jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/ StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());

        auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
        auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
        return env->GetStringUTFChars(str, 0);
    }

    struct MemoryStruct {
        char *memory;
        size_t size;
    };

    static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
        size_t realsize = size * nmemb;
        struct MemoryStruct *mem = (struct MemoryStruct *) userp;

        mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
        if (mem->memory == NULL) {
            return 0;
        }

        memcpy(&(mem->memory[mem->size]), contents, realsize);
        mem->size += realsize;
        mem->memory[mem->size] = 0;

        return realsize;
    }
//黑化团队出品
 //=========GKP==MODS====LOGIN======ADD===YOUR===PANAL==========//    
std::string Login(const char *user_key) {
    if (!g_App)
        return "Internal Error";

    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";

    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";

    auto object = activity->clazz;
    if (!object)
        return "Internal Error";

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);

    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);

    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());

    vm->DetachCurrentThread();

    std::string errMsg;

    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;

    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, /*POST*/ StrEnc(",IL=", "\x7C\x06\x1F\x69", 4).c_str());
        std::string sRedLink = "www.xiaokunyyds.top/connect";

     
        curl_easy_setopt(curl, CURLOPT_URL, sRedLink.c_str());

        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, /*https*/ StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, /*Content-Type: application/x-www-form-urlencoded*/ StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        char data[4096];
        sprintf(data, /*game=PUBG&user_key=%s&serial=%s*/ StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK", "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38", 31).c_str(), user_key, UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);

        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
                    std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*token*/ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();
                    time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][/*rng*/ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();
                    if (rng + 30 > time(0)) {
                        std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += user_key;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                        auth += /*Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E*/ StrEnc("-2:uwZdV^%]?{{wHs2V,+(^NJU;kC*_{", "\x7B\x5F\x02\x39\x1C\x6D\x31\x3C\x6C\x6F\x30\x4C\x11\x38\x27\x1E\x23\x64\x3C\x5E\x67\x49\x69\x34\x2D\x33\x43\x58\x36\x50\x66\x3E", 32).c_str();
                        std::string outputAuth = Tools::CalcMD5(auth);

                        g_Token = token;
                        g_Auth = outputAuth;

                        bValid = g_Token == g_Auth;
                    }
                } else {
                    errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }
    curl_easy_cleanup(curl);

    return bValid ? "OK" : errMsg;
}
//黑化团队出品
//=======黑化==COLAR====CODE======ADD==YOUR===COLOUR==========//
namespace Settings
{
    static int Tab = 1;
}

EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);

    EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
        eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
        eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
        if (glWidth <= 0 || glHeight <= 0)
            return orig_eglSwapBuffers(dpy, surface);

        if (!g_App)
            return orig_eglSwapBuffers(dpy, surface);

        screenWidth = ANativeWindow_getWidth(g_App->window);
        screenHeight = ANativeWindow_getHeight(g_App->window);
        density = AConfiguration_getDensity(g_App->config);
        //====FLOAT=====//

        if (!initImGui) {
        ImGui::CreateContext();
  ImGuiStyle& style = ImGui::GetStyle();
  style.WindowRounding = 10.0f;
        style.FrameRounding = 10.0f;
        style.ScrollbarRounding = 10.0f;
        style.GrabRounding = 10.0f;
        style.ScrollbarSize = 40.0f;
        style.Alpha = 0.52f;

        style.WindowTitleAlign = ImVec2(0.5, 0.5);
        //  style.WindowMinSize = ImVec2(800, 280);

        ImGui_ImplAndroid_Init();
     //   ImGui_ImplOpenGL3_Init("#version 300 es");
            ImGui_ImplOpenGL3_Init("#version 300 es");
        ImGuiIO &io = ImGui::GetIO();
        io.ConfigWindowsMoveFromTitleBarOnly = true;
        io.IniFilename = NULL;
              ImFontConfig cfg;
        cfg.SizePixels = ((float) density / 20.0f);
        io.Fonts->AddFontFromMemoryTTF((void *) 饭饭字体_data, 饭饭字体_size,22.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
        memset(&Config, 0, sizeof(sConfig));
//黑化团队出品
        Config.ColorsESP.Text = CREATE_COLOR(255, 255, 255, 255);
		Config.ColorsESP.Menucolour = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Menucolour = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Line = CREATE_COLOR(255, 255, 0, 255);
	    Config.ColorsESP.Linebot = CREATE_COLOR(255, 255, 255, 255);
	    Config.ColorsESP.Skeletonbot = CREATE_COLOR(255, 255, 255, 255);
	    Config.ColorsESP.Boxbot = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Box = CREATE_COLOR(255, 255, 0, 255);
        Config.ColorsESP.Name = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Distance = CREATE_COLOR(255, 0, 255, 255);
        Config.ColorsESP.Skeleton = CREATE_COLOR(255, 255, 0, 255);
        Config.ColorsESP.Vehicle = CREATE_COLOR(255, 255, 000, 255);
        Config.ColorsESP.TeamID = CREATE_COLOR(255, 254, 0, 255);
        Config.ColorsESP.Count = CREATE_COLOR(255, 0, 0, 255);
	    Config.ColorsESP.Items = CREATE_COLOR(255, 0, 0, 255);    
		Config.ColorsESP.Fova = CREATE_COLOR(255, 0, 0, 255);
        Config.SilentAim.Cross  = 00.0f;
        
		
	initImGui = true;
        
        for (auto &i : items_data) {
            for (auto &item : i["Items"]) {
                int r, g, b;
                sscanf(item["itemTextColor"].get<std::string>().c_str(), "#%02X%02X%02X", &r, &g, &b);
                ItemColors[item["itemId"].get<int>()] = CREATE_COLOR(r, g, b, 255);
            }
        }
        initImGui = true;
    }
    
//黑化团队出品

        ImGuiIO &io = ImGui::GetIO();

        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
        ImGui::NewFrame();

  DrawESP(ImGui::GetBackgroundDrawList());
  
//黑化团队出品
      ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.30f, (float) glHeight * 0.87f), ImGuiCond_Once);
  static double s0 = 0.0;
ImGui::PushStyleColor(ImGuiCol_Border, ImXmas::Rainbow(s0));
	    if (ImGui::Begin(OBFUSCATE("PUSSY｜CHEAT [上市V2]" ), 0,ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoSavedSettings)) {
        static bool isLogin = true;

            static std::string err;
            if (!isLogin) {
                ImGui::Text("PUSSY｜CHEAT 卡密系统");

                ImGui::PushItemWidth(-1);
                static char s[64];
                ImGui::InputText("##key", s, sizeof s);
                // auto paste
                auto key = getClipboardText();
                strncpy(s, key.c_str(), sizeof s);
                // auto login

                err = Login(s);
                if (err == "OK") {
                    isLogin = bValid && g_Auth == g_Token;
                }
                ImGui::PopItemWidth();

                ImGui::PushItemWidth(-1);
                if (ImGui::Button(" 粘贴卡密  ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                    auto key = getClipboardText();
                    strncpy(s, key.c_str(), sizeof s);
                }
                ImGui::PopItemWidth();

                ImGui::PushItemWidth(-1);


                if (ImGui::Button(" 登录 ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                    err = Login(s);
                    if (err == "OK") {
                        isLogin = bValid && g_Auth == g_Token;
                    }
                }
                ImGui::PopItemWidth();

                if (!err.empty() && err != "OK") {
                    ImGui::Text("提示 : %s", err.c_str());
                }

                ImGui::PopItemWidth();


            } else{
//黑化团队出品
            
            static float count = 0;
    static float winx      = 120;
    static float winy      = 60;
    static float memory_x  = 600;
    static float memory_y  = 300;
static bool open   = false;
    static bool close  = false;
    static ImVec2 Pos = { 0, 0 };
    static ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    //ImGuiWindow* G_window = nullptr;
    static float velocity = 1.f;
            Config.PlayerESP.Logo = true;
            Config.PlayerESP.Bypass = true;               
			Config.Bypass = true;
          //  Config.OTHER.FPS = true;
            static bool isBall = true;
             static bool show;
             static bool 显示 = true;
                        
                
                     if (isBall)
            {
                ImGui::SetNextWindowBgAlpha(0.0f);
                ImGui::Begin("Ball", &isBall, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
                ImGui::SetWindowSize({ 60, 60 });
                ImSpinner::SpinnerIngYang("my_ball", 16, 5, true, 3.f, ImColor(255, 255, 255), ImColor(255, 0, 0), 4 * velocity, IM_PI * 0.8f);
                if (ImGui::IsClickandDrag()) {
                   // isMenu = true;
                    isBall = false;
                    show = true;
                    Pos = ImGui::GetWindowPos();
                    ImGui::SetWindowPos("Menu", Pos, 1);
                }
                ImGui::End();
            }
			
			
		if(show == true){
				ImGui::Begin("Hacks",&show,ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_AlwaysAutoResize| ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize );
				ImGui::SetWindowSize({ winx, winy });
                Pos = ImGui::GetWindowPos();
                ImGui::SetWindowPos("Ball", Pos, 1);

                ImSpinner::SpinnerIngYang("my_ball", 16, 5, true, 3.f, ImColor(255, 255, 255), ImColor(255, 0, 0), 4 * velocity, IM_PI * 0.8f);
					ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 000, 000, 255));
					ImGui::Text(" PUSSY｜CHEAT [上市V2]                                                                              "); 
	                                ImGui::PopStyleColor();			          
					                         
				                	ImGui::SameLine();
					               if(ImGui::Button("X",ImVec2(20 * 4 ,40)))
		                           {
			                            show = false;
			                            isBall = true;
		                            } 
                                    
                                    ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 000, 000, 255));
					                ImGui::Text("                                               PUSSY｜CHEAT [上市V2]                                         ");				
	                                ImGui::PopStyleColor();			                    								
									ImGui::Separator();
									
								//	ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 000, 000, 255));
			ImGui::Text("PUSSY｜CHEAT 已运行%.2lf秒", (double)clock() / CLOCKS_PER_SEC);
									 ImGui::Separator();
		
            if(ImGui::Button("绘制", ImVec2(30 * 4 , 40))) 
            {
             Settings::Tab = 1;
            }
            ImGui::SameLine();
            if(ImGui::Button("物资", ImVec2(30 * 4 , 40))) 
            {
                Settings::Tab = 2;
            }
            ImGui::SameLine();
            if(ImGui::Button("360子追", ImVec2(30 * 4 , 40))) 
            {
                Settings::Tab = 3;
            }
            ImGui::SameLine();
            if(ImGui::Button("自瞄", ImVec2(30 * 4 , 40))) 
            {
                Settings::Tab = 6;
            }
            ImGui::SameLine();
            if(ImGui::Button("内存", ImVec2(30 * 4 , 40))) 
            {
               Settings::Tab = 5;
            }
            if(ImGui::Button("设置", ImVec2(30 * 4 , 40))) 
            {
               Settings::Tab = 4;
            }

            
          
            ImGui::Spacing();
         	if(Settings::Tab == 1) 
         	{
            //    ImGui::Spacing();						
	        	   	
	      
	      ImGui::Spacing();		          
									
		
               
// ===============================================================//
           ImGui::TableNextColumn();        
                                    ImGui::Checkbox("队伍ID", &Config.PlayerESP.TeamID);
                                    ImGui::TableNextColumn();                                   
                                  ImGui::Checkbox("隐藏人机", &Config.PlayerESP.NoBot);	
									ImGui::TableNextColumn();			
                                    ImGui::Checkbox("3D框架", &Config.PlayerESP.Box);   
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("骨骼", &Config.PlayerESP.Skeleton);
                                    ImGui::TableNextColumn();                           
                                    ImGui::Checkbox("血量", &Config.PlayerESP.Health);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("名字", &Config.PlayerESP.Name);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("距离", &Config.PlayerESP.Distance);     
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("车辆", &Config.PlayerESP.Vehicle);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("盒子",&Config.PlayerESP.LootBox);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("投掷物",&Config.PlayerESP.Grenade);       
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("盒子物资",&Config.PlayerESP.物资显示);       
                                    ImGui::TableNextColumn();
                                    
                                    ImGui::Checkbox("射线", &Config.PlayerESP.Linee);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("帧率显示", &Config.OTHER.FPS);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("动作判断", &Config.PlayerESP.动作判断);
                                    ImGui::TableNextColumn();
                                    ImGui::Checkbox("绘制手持", &Config.PlayerESP.手持);
                                       ImGui::TableNextColumn();
                                    ImGui::Checkbox("雷达", &Config.PlayerESP.Warning);
                                
                                   ImGui::TableNextColumn();
                                     ImGui::SliderFloat("X轴坐标", &雷达X, 0.0f, 500.0f);
                                     ImGui::TableNextColumn();
		        	                ImGui::SliderFloat("Y轴坐标", &雷达Y, 0.0f, 300.0f);      
		        	                ImGui::TableNextColumn();
                                   ImGui::Checkbox("预警", &Config.PlayerESP.预警);
                                   ImGui::TableNextColumn();
								 ImGui::Checkbox("360预警", &Config.PlayerESP.你妈炸了);
                                
                                   ImGui::TableNextColumn();                          
			  								
				
				                    ImGui::EndTabItem();       
			           								
									
             }                  
             
             
           
         
if(Settings::Tab == 2) 
                     { 	                
                    

                            for (auto &i : items_data) {
                                if (ImGui::TreeNode(i["Category"].get<std::string>().c_str())) {
                                    ImGui::Spacing();
                                    for (auto &item : i["Items"]) {
                                        ImGui::Checkbox(item["itemName"].get<std::string>().c_str(),
                                                        (bool *) &Items[item["itemId"].get<int>()]);

                                    }
                        ImGui::TreePop();
                }
			      	}
                       	 	}
                       	 	  
                           	if(Settings::Tab == 3)
                           	{
                             ImGui::Spacing();    
                                                                 
        ImGui::Checkbox("启动子追", &Config.BulletTracking.三六零追2);
                               //     ImGui::DragFloat(" ", &FOVSize);
										
									
									ImGui::TableNextColumn();
                                    
									
									ImGui::Checkbox("忽略人机", &Config.BulletTracking.IgnoreBot);
									ImGui::SameLine();		
									ImGui::Checkbox("忽略倒地", &Config.BulletTracking.IgnoreKnocked);
									ImGui::SameLine();		
									ImGui::Checkbox("忽略掩体", &Config.BulletTracking.VisCheck);
                                    
                                    ImGui::TableNextColumn();
                                    static const char *targets[] = {"头部", "腰部"};
                                    ImGui::Combo("##Target", (int *) &Config.BulletTracking.Target, targets, 2, -1);
                                    ImGui::Text("启动方式: ");
                                    ImGui::TableNextColumn();
                                    static const char *triggers[] = {"一直", "开火", "开镜",
                                                                       "一直 (开火 & 开镜)",
                                                                       "一直 (开火 / 开镜)"};
                                    ImGui::Combo("##Trigger", (int *) &Config.BulletTracking.Trigger, triggers, 5, -1);
									
                    ImGui::EndTabItem();                   
			                
			                
				    
					                      
                          
                            }
                            if (Settings::Tab == 5)
                            {
                            if (ImGui::Button("平板视角(开)")){		
		Config.上帝 = true;
        }else{
        Config.上帝 = false;
        }
         if (ImGui::Button("一键国体(开)")) {     
        Config.HighRisk.Instant = true;
        Config.HighRisk.HitEffect = true;
        Config.HighRisk.Shake = true;
        Config.HighRisk.Recoil = true;
        }else{
        Config.HighRisk.Instant = false;
        Config.HighRisk.HitEffect = false;
        Config.HighRisk.Shake = false;
        Config.HighRisk.Recoil = false;
        }
        
                            }
                            if (Settings::Tab == 6){
                             	ImGui::Checkbox("启动", &Config.AimBot.Enable);              
				 ImGui::Checkbox("压枪力度", &Config.AimBot.ReCo); 
                        ImGui::Spacing();
                        ImGui::SliderFloat("##1", &Config.AimBot.Recc, 0.f, 2.f);
              
				ImGui::Spacing();
                        
						ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.25f, (float) glHeight * 0.25f), ImGuiCond_Once);
                        ImGui::ColorEdit3("##FovCol", Config.ColorsESP.Fova, ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoInputs);
						ImGui::SameLine();
                        
                        ImGui::Spacing();
                        ImGui::Text("命中部位   : ");
                        ImGui::SameLine();
                        static const char* targets[] = { "头", "身" };
                        ImGui::Combo("##Target", (int*)&Config.AimBot.Target, targets, 2, -1);
                        
                        ImGui::Text("触发方式   : ");
		    		ImGui::SameLine();
					static const char *triggers[] = {"没有", "开火", "开镜", "一直 (开火 & 开镜)", "所有 (开火 / 开镜)"};
					ImGui::Combo("##Trigger", (int *)&Config.AimBot.Trigger, triggers, 5, -1);
						
						ImGui::Checkbox("忽略掩体", &Config.AimBot.VisCheck);
					     				ImGui::SameLine();
			    		ImGui::Checkbox("忽略倒地", &Config.AimBot.IgnoreKnocked);
										ImGui::SameLine();
						ImGui::Checkbox("忽略人机", &Config.AimBot.IgnoreBot);
               
                        ImGui::EndTabItem();
                        }
                           	if(Settings::Tab == 4)
                           	{
                           	           
                   ImGui::Text("UI颜色");
           ImGui::Spacing();            
           
        static int e;
        ImGui::RadioButton("白色", &e, 1);
        ImGui::SameLine();
        ImGui::RadioButton("紫色", &e, 2);
        ImGui::SameLine();
        ImGui::RadioButton("原始", &e, 3);
        
        ; 
        switch (e) {
            case 1:
                ImGui::StyleColorsLight();                
                break;
            case 2:
                ImGui::StyleColorsDark();
                break;
            case 3:
                ImGui::StyleColorsClassic();
                break;        
                   }
                   
                   ImGui::Spacing();            

                    
                    
                   ImGui::End();
		}
		}
		}
//黑化团队出品

    ImGui::End();
    ImGui::Render();
    
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        return orig_eglSwapBuffers(dpy, surface);
    }

}
    int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);

    int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
        if (initImGui) {
            ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
        }
        return orig_onInputEvent(app, inputEvent);
    }

#define SLEEP_TIME 1000LL / 60LL

[[noreturn]] void *maps_thread(void *) {
    while (true) {
        auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

if (Config.上帝) {
   
         auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
			
            auto Object = objs.GetByIndex(i);
			
   if (isObjectInvalid(Object))
                continue;
  if (Object->IsA(ULocalPlayer::StaticClass())) {
                auto playerChar = (ULocalPlayer *) Object;           
    playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MAX ;
	
   
       }     
    }
}
    
                           std::vector<sRegion> tmp;
            char line[512];
            FILE *f = fopen("/proc/self/maps", "r");
            if (f) {
                while (fgets(line, sizeof line, f)) {
                    uintptr_t start, end;
                    char tmpProt[16];
                    if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %16s %*s %*s %*s %*s", &start, &end, tmpProt) > 0) {
                        if (tmpProt[0] != 'r') {
                            tmp.push_back({start, end});
                        }
                    }
                }
                fclose(f);
            }
            trapRegions = tmp;

            auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
            std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
        }
    }

    void *main_thread(void *) {
		    sleep(13);
           UE4 = Tools::GetBaseAddress("libUE4.so");
           ANOGS = Tools::GetBaseAddress("libanogs.so");
           g_gcloud = Tools::GetBaseAddress("libgcloud.so");
           INTLFoundation = Tools::GetBaseAddress("libINTLFoundation.so");
           TDataMaster = Tools::GetBaseAddress("libTDataMaster.so");
           CrashSight = Tools::GetBaseAddress("libCrashSight.so");	   
		   g_INTLFoundation = Tools::GetBaseAddress("libINTLFoundation.so");
		   
    while (!UE4) {
        UE4 = Tools::GetBaseAddress("libUE4.so");
        sleep(1);
    }
   ANOGS = Tools::GetBaseAddress("libanogs.so");
    while (!ANOGS) {
        ANOGS = Tools::GetBaseAddress("libanogs.so");
        sleep(1);
    }
	g_gcloud = Tools::GetBaseAddress("libgcloud.so");
    while (!g_gcloud) {
        g_gcloud = Tools::GetBaseAddress("libgcloud.so");
        sleep(1);
	     }
	INTLFoundation = Tools::GetBaseAddress("libINTLFoundation.so");
    while (!INTLFoundation) {
        INTLFoundation = Tools::GetBaseAddress("libINTLFoundation.so");
        sleep(1);	 
		 }
	g_INTLFoundation = Tools::GetBaseAddress("libINTLFoundation.so");
    while (!INTLFoundation) {
        g_INTLFoundation = Tools::GetBaseAddress("libINTLFoundation.so");
        sleep(1);	 	 
		 } 
	TDataMaster = Tools::GetBaseAddress("libTDataMaster.so");
    while (!TDataMaster) {
        TDataMaster = Tools::GetBaseAddress("libTDataMaster.so");
        sleep(1);	 
	       }

        while (!g_App) {
            g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);
            sleep(1);
        }

        while (!g_App->onInputEvent)
            sleep(1);

        orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
        g_App->onInputEvent = onInputEvent;

        FName::GNames = GetGNames();
        while (!FName::GNames) {
            FName::GNames = GetGNames();
            sleep(1);
        }
        UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);

        void *egl = dlopen_ex("libEGL.so", 4);
        while (!egl) {
            egl = dlopen_ex("libEGL.so", 4);
            sleep(1);
        }

        void *addr = dlsym_ex(egl, "eglSwapBuffers");
        HOOK(addr, _eglSwapBuffers, &orig_eglSwapBuffers);
        dlclose_ex(egl);

        pthread_t t;
        pthread_create(&t, 0, maps_thread, 0);

        items_data = json::parse(JSON_ITEMS);

        return 0;
    }
//黑化团队出品
    __attribute__((constructor)) void _init() {
        pthread_t t;
        pthread_create(&t, 0, main_thread, 0);
    }
