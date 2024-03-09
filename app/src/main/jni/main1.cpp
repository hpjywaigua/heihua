#include "Helper/Includes.h"
#include "Tools.h"
//KL NIKE JUST DO IT...
#include "obfuscate.h"
#include "Vector2.hpp"
#include "Vector3.hpp"
#include "Helper/fake_dlfcn.h"
#include "Iconcpp.h"
#include "Font.h"
#include "Icon.h"
#include "NIKE.h"
#include "MemoryTools.h"
#include "KittyMemory/MemoryPatch.h"
#include "KittyMemory/MemoryBackup.h"
#include "KittyMemory/MemoryBackup.cpp"
#include "KittyMemory/MemoryPatch.cpp"
#include "KittyMemory/KittyMemory.h"
#include "KittyMemory/KittyUtils.h"
#include "KittyMemory/KittyMemory.cpp"
#include "KittyMemory/KittyUtils.cpp"




//#include "ca/MemoryPatch.h"
#include "Rect.h"
#include "Items.h"
#include "Itemss.h"
#include "Itemsss.h"
#include "imgui/imgui.h"
#include "imgui/XMAS.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include "KittyMemory/MemoryPatch.h"
#include "StrEnc.h"
#include "Spoof.h"
#include "Helper/plthook.h"
//#include "Dobby/dobby.h"


//#include "Dobby/dobby.h"
//#include "Dobby/dobby.h"
//#include "Helper/Items.h"
char *提示 = "";
static bool 错误提示 = false;
int code_sock = -1;
static char s[64];
#include "Helper/json.hpp"
using json = nlohmann::json;
#include "SDK.hpp"

static std::string Mobile = "";
static std::string EXP = "0000-00-00 00:00:00";
static std::string name = "";
static std::string floating = "";
static std::string device = "";
static std::string status = "";

 

bool 范围 = false;
bool 子弹追踪 = false;
bool JAVA卡密验证 = false;

using namespace SDK;
bool FC = false;
static int style_idx = 2;
bool 变色 = false;
static bool Drive;  
bool 旁路1 = false;
bool 安全期 = false;

bool Java隐藏 = false;

bool isLogin123 = false;

bool 防观战 = false;
bool Bypass10 = false;
bool Bypass11 = false;
bool Breakdown = false;
bool BED = false;
bool 大厅旁路 = false;
bool clear = true;
bool clear1 = false;
bool BypassLOGO = true;
bool update = false;
bool XCF = false;
bool tyyuyUI = false;

bool 开启内透 = false;
bool 内透上色 = false;
bool 内透线条 = false;
bool 内透发光 = false;
bool 内透变色 = false;
bool 内透蜘蛛网 = false;
bool 开启调色 = false;
float *内透颜色;


float 语言;


bool 窗口隐藏 = false;
float 隐藏1;
bool 隐藏 = false;
bool 隐藏窗口 = false;
float 窗口Y;
float 窗口X;
bool UI1 = false;
float 平板视角调整 = 90.0;
float 黑体颜色 = 14.0;
float Random;
float 触摸XX;
float 触摸对象X;
float 触摸对象XX;
float 触摸对象Y;
float 触摸对象YY;
float 触摸对象队伍;
float 触摸次数;



//修复崩溃
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include "base64/base64.h"
#include "AMColor.h"
//#include "Icon.h"
#include <stdio.h>
char extra[32];
//#include "Iconcpp.h"
bool Visble = false;
bool Eaimbot = false;
bool 通过 = false;
static bool is头,is脖子,is盆骨,is左上臂,is左小臂,is左手,is左大腿,is左小腿,is左脚,is右上臂,is右小臂,is右手,is右大腿,is右小腿,is右脚;
bool Bypass = true;
bool Bypass1 = false;
bool Bypass2 = false;
bool Bypass3 = false;

bool 显示到期时间 = false;

bool 全局离线 = false;
bool Catch = false;

bool Slow提示 = false;
bool Slow提示1 = true;

bool DobyBypass = false;

bool 人物范围 = false;
bool 无后 = false;
bool 稳定加速关 = false;
bool 稳定加速开 = false;
bool 稳定除雾 = false;
bool 除草 = false;
bool 除树 = false;
bool 黑天 = false;
bool 自瞄 = false;
bool 平板视角 = false;
bool 高伤害 = false;
bool 黑体 = false;

float 自瞄接口;

bool Login赢藏 = false;
bool Login文字 = false;

bool 好心提示 = false;
//float 提示内容;

float 文字xx;
float 文字12;
float 文字11;
float 文字1;
float 文字2;
float 文字3;
float 文字4;
float 文字5 = 150;
float 文字6;
float 文字7;
float 文字8;
bool 显示文字 = false;

bool 彩色文字 = false;

float 显示小提示;
bool 显示提示开关;

std::string 提示内容 = "";
//#define GEngine_Offset
//////////////////


/*#define GEngine_Offset 0x7D80E5C
#define GNames_Offset 0x3E64F90
#define GUObject_Offset 0x80C0EF0
#define GNativeAndroidApp_Offset 0x7D760DC
#define GetActorArray_Offset 0x5747420
#define Actors_Offset 0x70*/

#define AimBullet_Offset 0x1FE6C04
#define GNames_Offset 0x68d5774
#define GUObject_Offset 0xba18ec0
#define GNativeAndroidApp_Offset 0xb799d68
#define CanvasMap_Offset 0xbbf00f8
#define GetActorArray 0x819f78c

#define Actors_Offset 0xA0


#define IM_PI                   3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))
bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}
template<typename T>
void 写入F类(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
void 写入D类(uintptr_t addr,int var){
WriteAddr(reinterpret_cast<void*>(addr),reinterpret_cast<void*>(&var),4);
}


//内存读写
json items_datakl;
json itemss_datakl;
json itemsss_datakl;
std::string g_Token, g_Auth;
std::string g_Token1, g_Auth1;
bool bValid = false;
bool bValid1 = false;
uintptr_t UE4;
uintptr_t anort;
uintptr_t AAGS;
uintptr_t anogs;
uintptr_t gcloud;
uintptr_t INTLFoundation;

android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
float 自瞄子追;

static bool Feu;
static float Aim10;
static float Aim50;
static float Aim100;
static float Aim150;
static float Aim200;
static float Aim250;
static float Aim300;
static float AimYQ;
static float 绘制距离;
float 触摸X;
float 触摸Y;
float 自瞄距离 = 350;
bool ActiveEsp = true;
bool fov = true;
bool initImGui = false;
bool Unlock = false;
bool FK = false;
bool 动作 = false;
bool 蔡徐坤 = false;
bool 地铁逃生 = false;
bool show_防封 = false;
bool show_调试 = false;
bool show_压枪 = false;
bool 显示物资 = false;
bool WideView = false;
bool 飞机 = false;
bool 空投 = false;
bool 全图绘制 = false;
bool 重置游客 = false;
bool 平板视角123 = false;
bool 头部范围 = false;
bool 时间 = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;
float RadarX=320,RadarY=255;
bool 视角子追 = false;
bool 防抖 = false;
bool 瞬击 = false;
bool 加速 = false;
bool 飞天开 = false;
bool 聚点 = false;
bool 加速开 = false;
bool 飞天 = false;
//GET UE4 BY✔NIKE*Studio






















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



/*UWorld * GetWorld() {
 auto GEngine = * (UEngine * *)(UE4 + GEngine_Offset);
 if (GEngine) {
  auto ViewPort = GEngine->GameViewport;
  if (ViewPort) {
   return ViewPort->World;
  }
 }
 return 0;
}*/


TNameEntryArray *GetGNames()
{
	return ((TNameEntryArray * (*)())(UE4 + GNames_Offset))();
}

std::vector<AActor *> getActors()
{
	auto World = GetWorld();
	if (!World)
		return std::vector<AActor *>();

	auto PersistentLevel = World->PersistentLevel;
	if (!PersistentLevel)
		return std::vector<AActor *>();

	auto Actors = *(TArray<AActor *> *)((uintptr_t)PersistentLevel + Actors_Offset);

	std::vector<AActor *> actors;
	for (int i = 0; i < Actors.Num(); i++)
	{
		auto Actor = Actors[i];
		if (Actor)
		{
			actors.push_back(Actor);
		}
	}
	return actors;
}

//////GET Word Name Player

bool 漏打 = false;
bool 自定义;
float *Y轴;
float *Z轴;
float *X轴;
// ======================================================================= //
enum Aimfirst {
    DHead = 0,//头部
    Pelvis = 1,
    Lhand = 2,//左手
    Rhand = 3,//右手
    Lfoot = 4,//左脚
    Rfoot = 5//右脚
};

static int Corepriority = 0;

enum Aimmode{
    Mdp = 0, //漏哪打哪
    Fixed = 1,//固定点位
    Nearest = 2//距离准星最近
};

enum EEsp {
  eno = 0,
  Line = 1,
  Mid = 2,
  Below = 3
  
};

enum EAimTarget
{
	Head = 0,
	Chest = 1,
	JJ = 2
};

enum AIMBOT
{
	SJ = 0,
	ZX = 1,
	LD = 2,
	PH = 3,
	QS = 4,
	NC = 5,
	CM = 6,
	SJZM = 7,
	MY = 8
};

enum RADAR
{
	KR = 0,
	QZ = 1,
	DNA = 2
};

enum AIMBOTA
{
	SJZZ = 0,
	QSZZ = 1,
	MYZZ = 2
};

enum EAimTrigger
{
	None = 0,
	Shooting = 1,
	Scoping = 2,
	Both = 3,
	Any = 4
};

enum BOXD
{
	BOX2D = 0,
	BOX3D = 1,
	CLOUD = 2
};

std::map<int, bool> Items;
std::map<int, bool> Itemss;
std::map<int, bool> Itemsss;

struct sConfig {
    bool 自动选择;
    bool 内透1;
    bool 内透2;
    bool 防追封;
    bool 雷达;
    bool 箭头;
    bool 预警;
    bool Crash1;
    bool 自动Z;
    bool Crash;
    bool 预判;
    bool 物资1;
    bool 物资;
    bool FOV;
    bool 手持;
    bool 动作;
    bool 圈;
    float Less;
    bool 基址;
    bool RecoilComparison;
    bool 登陆页面;
    bool 自动开火ON;
    bool 自动开火OFF;
	float 压枪系数;
	bool SIT;
	BOXD BOX;
	bool 残留;
	float X轴;
	float 移动;
	float RadarY;
	float RadarX;
    float 瞬击;
	float Y轴;
	float 后坐力;
	float 子弹射速;
	bool CHAMS;
	bool WH;
		bool CHAMSR;
		bool Hunt;
		bool GLOW;
		bool OUTLINE;
		
		
	struct sPlayerESP {
        bool ActiveEsp;
        RADAR RadarZX;
		bool 上;
		bool 中;
		bool 下;
		bool 开启线条;
		bool AirDrop;
		bool AUTOGOODZ;
		bool AUTOGOODY;
		bool AUTOGOODX;
		bool AUTOGOODXX;
		bool AUTOGOODYY;
		bool Box;
		bool 准心射线;
		bool Alert360;
		bool Box3D;
		bool Health;
		bool Skeleton;
		bool Name;
		bool Radar;
		bool Distance;
		bool TeamID;
		bool Vehicle;
		bool NoBot;
		bool ME;
		bool WALL;
		bool Team;
		bool LootBox;
		bool Grenade;
		bool VehicleHP;
		bool VehicleFuel;
		EEsp By;
	};

	sPlayerESP PlayerESP{0};
	
	
	struct sGOODVIEW {
    	bool ENABLE;
		bool UP;
		bool ON;
		bool DOWN;
		bool FRONT;
		bool BEHIND;
		bool RIGHT;
		bool LEFT;
		
		
	};
	sGOODVIEW GOODVIEW;
	
	

	struct sAimMenu
	{
		bool Enable;
		bool Enable1;
		bool 开启自瞄;
		bool 开启子追;
		Aimfirst HeadPriority;//头部优先
        Aimfirst PelvisPriority;//盆骨优先
        Aimfirst LhandPriority;//左手优先
        Aimfirst RhandPriority;//右手优先
        Aimfirst LfootPriority;//左脚优先
        Aimfirst RfootPriority;//右脚优先
        Aimmode  Amode;
		bool AimBot;
		float Meter;
		AIMBOT AINBOT;
		AIMBOTA AINBOTA;
		EAimTarget Target;
		EAimTrigger Trigger;
		bool IgnoreKnocked;
		bool IgnoreBot;
		bool 任何;
		bool 默认;
		bool 开火;
		bool 开镜;
		bool 开火开镜;
		bool VisCheck;
		float Cross;
		bool Fov;
		float Recc;
	};
	sAimMenu SilentAim{0};
	sAimMenu AimBot{0};

	struct sHighRisk
	{
		bool Shake;
		bool Recoil;
		bool Instant;
		bool Prone;
		bool HitEffect;
		bool Flash;
		bool Less;
		bool Cross;
		//🐔址
		bool Fw;
	};
	sHighRisk HighRisk{0};

	struct sColorsESP
	{
		float *PVLine;
        float *PVILine;
        float *BVLine;
        float *BVILine;
        float *PVBox;
        float *PVIBox;
        float *BVBox;
        float *BVIBox;
        float *PVLinebot;
        float *PVILinebot;
        float *PVSkeleton;
        float *PVISkeleton;
        float *BVSkeleton;
        float *BVISkeleton;
        float *TeamID;
        float *PVName;
        float *PVIName;
        float *Name;
        float *Distance;
        float *Vehicle;
        float *Items;
        float *Itemss;
        float *Itemsss;
		float *Fov;
	};
	sColorsESP ColorsESP{0};
};
sConfig Config{0};



#define CREATE_COLOR(r, g, b, a) new float[4]{(float)r, (float)g, (float)b, (float)a};
// ======================================================================== //
typedef void (*ImGuiDemoMarkerCallback)(const char* file, int line, const char* section, void* user_data);
extern ImGuiDemoMarkerCallback  GImGuiDemoMarkerCallback;
extern void* GImGuiDemoMarkerCallbackUserData;
ImGuiDemoMarkerCallback         GImGuiDemoMarkerCallback = NULL;
void* GImGuiDemoMarkerCallbackUserData = NULL;
#define IMGUI_DEMO_MARKER(section)  do { if (GImGuiDemoMarkerCallback != NULL) GImGuiDemoMarkerCallback(__FILE__, __LINE__, section, GImGuiDemoMarkerCallbackUserData); } while (0)
// ======================================================================== //
struct sRegion
{
	uintptr_t start, end;
};

std::vector<sRegion> trapRegions;


bool isInsideFOV(int x, int y) {
    if (!Config.SilentAim.Cross)
        return true;

    int circle_x = screenWidth / 3.0f;
    int circle_y = screenHeight / 3.0f;
    int rad = Config.SilentAim.Cross*0.5f;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}
bool isInsideFOV2(int x, int y) {
    if (!Config.SilentAim.Cross)
        return true;

    int circle_x = screenWidth / 3.0f;
    int circle_y = screenHeight / 3.0f;
    int rad = Config.SilentAim.Cross*0.5f;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}

bool isObjectInvalid(UObject *obj)
{
	if (!Tools::IsPtrValid(obj))
	{
		return true;
	}
	if (!Tools::IsPtrValid(obj->ClassPrivate))
	{
		return true;
	}
	if (obj->InternalIndex <= 0)
	{
		return true;
	}
    if (obj->NamePrivate.ComparisonIndex <= 0)
	{
		return true;
	}
	if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4)
	{
		return true;
	}
	if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t)obj) >= region.start && ((uintptr_t)obj) <= region.end; }) || std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t)obj->ClassPrivate) >= region.start && ((uintptr_t)obj->ClassPrivate) <= region.end; }))
	{
		return true;
	}
	return false;
}

FRotator ToRotator(FRotator inRot) {
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
///360° NIKE AIMBOT 3.0
// ======================================================================== //
std::string getObjectPath(UObject *Object)
{
	std::string s;
	for (auto super = Object->ClassPrivate; super; super = (UClass *)super->SuperStruct)
	{
		if (!s.empty())
			s += ".";
		s += super->NamePrivate.GetName();
	}
	return s;
}

// ======================================================================== //
int32_t ToColor(float *col)
{
	return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *)(col));
}

FRotator ToRotator(FVector local, FVector target)
{
	FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);
	float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
	FRotator newViewAngle = {0};
	newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float)3.14159265358979323846);
	newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float)3.14159265358979323846);
	newViewAngle.Roll = (float)0.f;
	if (rotation.X >= 0.f)
		newViewAngle.Yaw += 180.0f;
	return newViewAngle;
}
// ======================================================================== //
//AiMBot3.0
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)
auto 自瞄360度() {
if (Config.AimBot.开启自瞄) {
if (Config.AimBot.AINBOT == AIMBOT::SJ) {

    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto GWorld = GetWorld();
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
                                                             Actors_Offset);
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
for (int i = 0; i < Actors.Num(); i++) {
                    auto Actor = Actors[i];
                    if (isObjectInvalid(Actor))
                        continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;
                
                float dist = localPlayer->GetDistanceTo(Player) / 100.0f;    
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

            
                dist = localPlayer->GetDistanceTo(Player);
                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
        
    
    return result;
    }}}}}
    
    //=====///===///===///

//AimBot6.0

auto 内存自瞄() {
if (Config.AimBot.开启自瞄) {
if (Config.AimBot.AINBOT == AIMBOT::NC) {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto GWorld = GetWorld();
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
                                                             Actors_Offset);

            auto localPlayer = g_LocalPlayer;
            auto localController = g_LocalController;

            if (localPlayer) {
                for (int i = 0; i < Actors.Num(); i++) {
                    auto Actor = Actors[i];
                    if (isObjectInvalid(Actor))
                        continue;

                    if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                        auto Player = (ASTExtraPlayerCharacter *) Actor;
				         auto Target = (ASTExtraPlayerCharacter *) Actor;

        

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

                            FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2),
                                                   0};
                            if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
                                (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                                FVector2D v2Middle = FVector2D((float) (glWidth / 2),
                                                               (float) (glHeight / 2));
                                FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
                                if(isInsideFOV((int)middlePoint.X, (int)middlePoint.Y)) {
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
             }
            return result;
        }
    }
}}}



auto 通用自瞄() {
    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto GWorld = GetWorld();
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
                                                             Actors_Offset);

            auto localPlayer = g_LocalPlayer;
            auto localController = g_LocalController;

            if (localPlayer) {
                for (int i = 0; i < Actors.Num(); i++) {
                    auto Actor = Actors[i];
                    if (isObjectInvalid(Actor))
                        continue;

                    if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                        auto Player = (ASTExtraPlayerCharacter *) Actor;
				         auto Target = (ASTExtraPlayerCharacter *) Actor;

            

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

                            FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2),
                                                   0};
                            if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
                                (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                                FVector2D v2Middle = FVector2D((float) (glWidth / 2),
                                                               (float) (glHeight / 2));
                                FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
                                if(isInsideFOV((int)middlePoint.X, (int)middlePoint.Y)) {
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
             }
            return result;
        }
    }
}

//AimBot5.0
auto 漏打自瞄() {
if (Config.AimBot.开启自瞄) {
if (Config.AimBot.AINBOT == AIMBOT::LD || Config.AimBot.AINBOT == AIMBOT::SJZM) {

    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();
    auto GWorld = GetWorld();
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
                                                             Actors_Offset);
    


    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
for (int i = 0; i < Actors.Num(); i++) {
                    auto Actor = Actors[i];
                    if (isObjectInvalid(Actor))
                        continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;
                
                float dist = localPlayer->GetDistanceTo(Player) / 100.0f;    
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
                
                if (Config.AimBot.IgnoreBot) {
                    if (Player->bIsAI)
                        continue;
                }
                Visble = false;
                
                        {
                		auto HeadPos = Player->GetBonePos("Head", {});
						ImVec2 HeadPosSC;
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
						if (W2S(HeadPos, (FVector2D *)&HeadPosSC) && W2S(upper_r, (FVector2D *)&upper_rPoSC) && W2S(upper_l, (FVector2D *)&upper_lPoSC) && W2S(lowerarm_r, (FVector2D *)&lowerarm_rPoSC) && W2S(hand_r, (FVector2D *)&hand_rPoSC) && W2S(lowerarm_l, (FVector2D *)&lowerarm_lSC) && W2S(hand_l, (FVector2D *)&hand_lPoSC) && W2S(thigh_l, (FVector2D *)&thigh_lPoSC) && W2S(calf_l, (FVector2D *)&calf_lPoSC) && W2S(foot_l, (FVector2D *)&foot_lPoSC) && W2S(thigh_r, (FVector2D *)&thigh_rPoSC) && W2S(calf_r, (FVector2D *)&calf_rPoSC) && W2S(foot_r, (FVector2D *)&foot_rPoSC) && W2S(neck_01, (FVector2D *)&neck_01PoSC) && W2S(pelvis, (FVector2D *)&pelvisPoSC) && W2S(RootPos, (FVector2D *)&RootPosSC))
						{
                                
                     
                     
                     
                     
                     

                                             if(!localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, false))
                        {//脖子
                            is脖子 = false;
                         }else{
                            is脖子 = true;
                         }
                        
                         
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, false))
                        {//右小臂
                             is右小臂 = false;
                         }else{
                             is右小臂 = true;
                         }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, upper_r, false))
                        {//右上臂
                           is右上臂 = false;
                        }else{
                           is右上臂 = true;
                        }
                        
                         if(!localController->LineOfSightTo(localController->PlayerCameraManager, upper_l, false))
                        {//左上臂
                             is左上臂 = false;
                        }else{
                            is左上臂 = true;
                        }
                        
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_r, false))
                        {//右手
                            is右手 = false;
                        }else{
                            is右手 = true;
                        }
                        
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, false))
                        {//左小臂
                            is左小臂 = false;
                        }else{
                            is左小臂 = true;
                        }
                        
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_l, false))
                        {//左手
                            is左手 = false;
                         }else{
                            is左手 = true;
                         }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_l, false))
                        {//左大腿
                            is左大腿 = false;
                         }else{
                            is左大腿 = true;
                         }
                        
                         
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_l, false))
                        {//左小腿
                             is左小腿 = false;
                        }else{
                             is左小腿 = true;
                        }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_l, false))
                        {//左脚
                             is左脚 = false;
                        }else{
                             is左脚 = true;
                        }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_r, false))
                        {//右大腿
                             is右大腿 = false;
                         }else{
                             is右大腿 = true;
                         }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_r, false))
                        {//右小腿
                             is右小腿 = false;
                         }else{
                             is右小腿 = true;
                         }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_r, false))
                        {//右脚
                             is右脚 = false;
                        }else{
                             is右脚 = true;
                        }
                  
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, pelvis, false))
                        {//骨盆
                            is盆骨 = false;
                        }else{
                            is盆骨 = true;
                        }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, HeadPos, false))
                        {//头
                          is头 = false;
                         }else{
                           is头 = true;
                         }
                         
                         
                         if (is头) {
                         Visble = true;
                         }
                         if (is脖子) {
                         Visble = true;
                         }
                         if (is右小臂) {
                         Visble = true;
                         }
                         if (is右上臂) {
                         Visble = true;
                         }
                         if (is左上臂) {
                         Visble = true;
                         }
                         if (is右手) {
                         Visble = true;
                         }
                         if (is左小臂) {
                         Visble = true;
                         }
                         if (is左手) {
                         Visble = true;
                         }
                         if (is左大腿) {
                         Visble = true;
                         }
                         if (is左小腿) {
                         Visble = true;
                         }
                         if (is左脚) {
                         Visble = true;
                         }
                         if (is右大腿) {
                         Visble = true;
                         }
                         if (is右小腿) {
                         Visble = true;
                         }
                         if (is右脚) {
                         Visble = true;
                         }
                         if (is盆骨) {
                         Visble = true;
                         }
                         
                         
                         
                         
                         
                     }}
                     
                     
                     
                通过 = false;
 
                if (Visble) {
                    
                     
             
通过 = true;
//Visble = false;


                
                        auto HeadPos = Player->GetBonePos("Head", {});
                        HeadPos.Z = HeadPos.Z + 1.0f; //head se line ooper
                        
                        


                        
                        auto RootPos = Player->GetBonePos("Root", {});
                        
                        
                        
                        
                        auto Head_RootZ = HeadPos.Z - RootPos.Z;
                        
                        

                        auto upper_r = Player->GetBonePos("upperarm_r", {});
                        
                        auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
                        
                        auto hand_r = Player->GetBonePos("hand_r", {});
                        
                        auto upper_l = Player->GetBonePos("upperarm_l", {});
                        
                        auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
                        
                        auto hand_l = Player->GetBonePos("hand_l", {});
                        
                        auto thigh_l = Player->GetBonePos("thigh_l", {});
                        
                        auto calf_l = Player->GetBonePos("calf_l", {});
                        
                        auto foot_l = Player->GetBonePos("foot_l", {});
                        
                        auto thigh_r = Player->GetBonePos("thigh_r", {});
                        
                        auto calf_r = Player->GetBonePos("calf_r", {});
                        
                        auto foot_r = Player->GetBonePos("foot_r", {});
                        
                        auto neck_01 = Player->GetBonePos("neck_01", {});
                        
                        auto pelvis = Player->GetBonePos("pelvis", {});
                        
                        

                       
                

                FVector2D RootPosSC, headPosSC,upper_rPoSC,upper_lPoSC,lowerarm_rPoSC,hand_rPoSC,lowerarm_lSC,hand_lPoSC,thigh_lPoSC,calf_lPoSC,foot_lPoSC,thigh_rPoSC,calf_rPoSC,foot_rPoSC,neck_01PoSC,pelvisPoSC;
                if (W2S(HeadPos,&headPosSC) &&W2S(upper_r,&upper_rPoSC) &&
                            W2S(upper_l,&upper_lPoSC) &&W2S(lowerarm_r,&lowerarm_rPoSC) &&
                            W2S(hand_r,&hand_rPoSC) &&W2S(lowerarm_l, &lowerarm_lSC) &&
                            W2S(hand_l,&hand_lPoSC) && W2S(thigh_l, &thigh_lPoSC) &&
                            W2S(calf_l,&calf_lPoSC) &&W2S(foot_l,&foot_lPoSC) &&
                            W2S(thigh_r, &thigh_rPoSC) &&W2S(calf_r, &calf_rPoSC) &&
                            W2S(foot_r,&foot_rPoSC) &&W2S(neck_01,&neck_01PoSC) &&
                            W2S(pelvis,&pelvisPoSC) &&W2S(RootPos,&RootPosSC)) {
                                
                     /*
                       优先次序: 头 脖子 盆骨 
                       左上臂 左小臂 左手 左大腿 左小腿 左脚
                       右上臂 右小臂 右手 右大腿 右小腿 右键
                     */           

                                                   static bool 已选择 = false;
Corepriority = 0;
已选择 = false;

is脖子 = false;
is右小臂 = false;
is右上臂 = false;
is左上臂 = false;
is右手 = false;
is左小臂 = false;
is左手 = false;
is左大腿 = false;
is左小腿 = false;
is左脚 = false;
is右大腿 = false;
is右小腿 = false;
is右脚 = false;
is盆骨 = false;
is头 = false;

                                             if(!localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, false))
                        {//脖子
                            is脖子 = false;
                         }else{
                            is脖子 = true;
                         }
                        
                         
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, false))
                        {//右小臂
                             is右小臂 = false;
                         }else{
                             is右小臂 = true;
                         }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, upper_r, false))
                        {//右上臂
                           is右上臂 = false;
                        }else{
                           is右上臂 = true;
                        }
                        
                         if(!localController->LineOfSightTo(localController->PlayerCameraManager, upper_l, false))
                        {//左上臂
                             is左上臂 = false;
                        }else{
                            is左上臂 = true;
                        }
                        
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_r, false))
                        {//右手
                            is右手 = false;
                        }else{
                            is右手 = true;
                        }
                        
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, false))
                        {//左小臂
                            is左小臂 = false;
                        }else{
                            is左小臂 = true;
                        }
                        
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_l, false))
                        {//左手
                            is左手 = false;
                         }else{
                            is左手 = true;
                         }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_l, false))
                        {//左大腿
                            is左大腿 = false;
                         }else{
                            is左大腿 = true;
                         }
                        
                         
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_l, false))
                        {//左小腿
                             is左小腿 = false;
                        }else{
                             is左小腿 = true;
                        }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_l, false))
                        {//左脚
                             is左脚 = false;
                        }else{
                             is左脚 = true;
                        }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_r, false))
                        {//右大腿
                             is右大腿 = false;
                         }else{
                             is右大腿 = true;
                         }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_r, false))
                        {//右小腿
                             is右小腿 = false;
                         }else{
                             is右小腿 = true;
                         }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_r, false))
                        {//右脚
                             is右脚 = false;
                        }else{
                             is右脚 = true;
                        }
                  
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, pelvis, false))
                        {//骨盆
                            is盆骨 = false;
                        }else{
                            is盆骨 = true;
                        }
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, HeadPos, false))
                        {//头
                          is头 = false;
                         }else{
                           is头 = true;
                         }
                         
                         
                      
                      if (!已选择)
                      if(is头)
                             {
                                 Corepriority = 1;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                      if (!已选择)
                      if(is盆骨)
                             {
                                 Corepriority = 2;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                      if (!已选择)
                      if(is左手)
                             {
                                 Corepriority = 3;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                      if (!已选择)
                      if(is右手)
                             {
                                 Corepriority = 4;   
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                      if (!已选择)
                      if(is左脚)
                             {
                                 Corepriority = 5;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                      if (!已选择)
                      if(is右脚)
                             {
                                 Corepriority = 6;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                      if (!已选择)
                      if(is右小腿)
                         {
                             Corepriority = 14;
                             已选择 = true;
                         }else{
                             已选择 = false;
                         }
                      if (!已选择)
                      if(is右大腿)
                         {
                             Corepriority = 13;
                             已选择 = true;
                         }else{
                             已选择 = false;
                         }
                      if (!已选择)
                      if(is右小臂)
                         {
                             Corepriority = 12;
                             已选择 = true;
                         }else{
                             已选择 = false;
                         }
                      if (!已选择)
                      if(is右上臂)
                         {
                             Corepriority = 11;
                             已选择 = true;
                         }else{
                             已选择 = false;
                         }
                      if (!已选择)
                      if(is左小腿)
                         {
                             Corepriority = 10;
                             已选择 = true;
                         }else{
                             已选择 = false;
                         }
                      if (!已选择)
                      if(is左大腿)
                         {
                             Corepriority = 9;
                             已选择 = true;
                         }else{
                             已选择 = false;
                         }
                      if (!已选择)
                      if(is左小臂)
                         {
                             Corepriority = 8;
                             已选择 = true;
                         }else{
                             已选择 = false;
                         }
                      if (!已选择)
                      if(is左上臂)
                         {
                             Corepriority = 7;
                             已选择 = true;
                         }else{
                             已选择 = false;
                         }
                         
                         if (!漏打) {
                         if (!已选择){
                         if(Config.SilentAim.HeadPriority == Aimfirst::DHead)
                         {
                             if(is头)
                             {
                                 Corepriority = 1;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.HeadPriority == Aimfirst::Pelvis){
                             if(is盆骨)
                             {
                                 Corepriority = 2;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.HeadPriority == Aimfirst::Lhand){
                             if(is左手)
                             {
                                 Corepriority = 3;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.HeadPriority == Aimfirst::Rhand){
                             if(is右手)
                             {
                                 Corepriority = 4;   
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.HeadPriority == Aimfirst::Lfoot){
                             if(is左脚)
                             {
                                 Corepriority = 5;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.HeadPriority == Aimfirst::Rfoot){
                             if(is右脚)
                             {
                                 Corepriority = 6;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }}
                         
                         
                         
                         
                         
                         if (!已选择) {
                         if(Config.SilentAim.PelvisPriority == Aimfirst::DHead)
                         {
                             if(is头)
                             {
                                 Corepriority = 1;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.PelvisPriority == Aimfirst::Pelvis){
                             if(is盆骨)
                             {
                                 Corepriority = 2;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.PelvisPriority == Aimfirst::Lhand){
                             if(is左手)
                             {
                                 Corepriority = 3;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.PelvisPriority == Aimfirst::Rhand){
                             if(is右手)
                             {
                                 Corepriority = 4;   
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.PelvisPriority == Aimfirst::Lfoot){
                             if(is左脚)
                             {
                                 Corepriority = 5;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.PelvisPriority == Aimfirst::Rfoot){
                             if(is右脚)
                             {
                                 Corepriority = 6;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }}
                         
                         
                         if (!已选择){
                         if(Config.SilentAim.LhandPriority == Aimfirst::DHead)
                         {
                             if(is头)
                             {
                                 Corepriority = 1;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.LhandPriority == Aimfirst::Pelvis){
                             if(is盆骨)
                             {
                                 Corepriority = 2;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.LhandPriority == Aimfirst::Lhand){
                             if(is左手)
                             {
                                 Corepriority = 3;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.LhandPriority == Aimfirst::Rhand){
                             if(is右手)
                             {
                                 Corepriority = 4;   
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.LhandPriority == Aimfirst::Lfoot){
                             if(is左脚)
                             {
                                 Corepriority = 5;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.LhandPriority == Aimfirst::Rfoot){
                             if(is右脚)
                             {
                                 Corepriority = 6;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }}
                         
                         
                         
                         if (!已选择){
                         if(Config.SilentAim.RhandPriority == Aimfirst::DHead)
                         {
                             if(is头)
                             {
                                 Corepriority = 1;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.RhandPriority == Aimfirst::Pelvis){
                             if(is盆骨)
                             {
                                 Corepriority = 2;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.RhandPriority == Aimfirst::Lhand){
                             if(is左手)
                             {
                                 Corepriority = 3;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.RhandPriority == Aimfirst::Rhand){
                             if(is右手)
                             {
                                 Corepriority = 4;   
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.RhandPriority == Aimfirst::Lfoot){
                             if(is左脚)
                             {
                                 Corepriority = 5;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.RhandPriority == Aimfirst::Rfoot){
                             if(is右脚)
                             {
                                 Corepriority = 6;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }}
                         
                         
                         
                         
                         if (!已选择){
                         if(Config.SilentAim.LfootPriority == Aimfirst::DHead)
                         {
                             if(is头)
                             {
                                 Corepriority = 1;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.LfootPriority == Aimfirst::Pelvis){
                             if(is盆骨)
                             {
                                 Corepriority = 2;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.LfootPriority == Aimfirst::Lhand){
                             if(is左手)
                             {
                                 Corepriority = 3;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.LfootPriority == Aimfirst::Rhand){
                             if(is右手)
                             {
                                 Corepriority = 4;   
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.LfootPriority == Aimfirst::Lfoot){
                             if(is左脚)
                             {
                                 Corepriority = 5;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.LfootPriority == Aimfirst::Rfoot){
                             if(is右脚)
                             {
                                 Corepriority = 6;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }}
                         
                         
                         
                         if (!已选择){
                         if(Config.SilentAim.RfootPriority == Aimfirst::DHead)
                         {
                             if(is头)
                             {
                                 Corepriority = 1;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.RfootPriority == Aimfirst::Pelvis){
                             if(is盆骨)
                             {
                                 Corepriority = 2;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }else if(Config.SilentAim.RfootPriority == Aimfirst::Lhand){
                             if(is左手)
                             {
                                 Corepriority = 3;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.RfootPriority == Aimfirst::Rhand){
                             if(is右手)
                             {
                                 Corepriority = 4;   
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.RfootPriority == Aimfirst::Lfoot){
                             if(is左脚)
                             {
                                 Corepriority = 5;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                         }else if(Config.SilentAim.RfootPriority == Aimfirst::Rfoot){
                             if(is右脚)
                             {
                                 Corepriority = 6;
                                 已选择 = true;
                             }else{
                                 已选择 = false;
                             }
                             
                         }}






                     
                      }

                      
             
                    float height = abs(headPosSC.Y - RootPosSC.Y);
                    float width = height * 0.65f;

                    FVector middlePoint = {headPosSC.X + (width / 2), headPosSC.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
                        (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2),
                                                       (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                        float dist = FVector2D::Distance(v2Middle, v2Loc);
                        if (Config.圈) {
                        if (isInsideFOV((int) middlePoint.X, (int) middlePoint.Y)) {
                       
                        if (dist < max) {
                            max = dist;
                            result = Player;
                            }
                            
                        
                         }} else {
                         
                       
                        if (dist < max) {
                            max = dist;
                            result = Player;
                            }
                            
                        
                         }
                    }
                }
            }}
        }
    }
   // 已选择 = false;
    return result;
    
}}}}}


//Aimbot 5.1
auto 平滑自瞄() {
if (Config.AimBot.开启自瞄) {
if (Config.AimBot.AINBOT == AIMBOT::PH) {

    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();
    
    auto GWorld = GetWorld();
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
                                                             Actors_Offset);

    
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
for (int i = 0; i < Actors.Num(); i++) {
                    auto Actor = Actors[i];
                    if (isObjectInvalid(Actor))
                        continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;
                
                float dist = localPlayer->GetDistanceTo(Player) / 100.0f;    
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
                
                if (Config.AimBot.IgnoreBot) {
                    if (Player->bIsAI)
                        continue;
                }
                
                if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;



                
                        auto HeadPos = Player->GetBonePos("Head", {});
                        HeadPos.Z = HeadPos.Z + 1.0f; //head se line ooper
                        auto RootPos = Player->GetBonePos("Root", {});

                FVector2D RootPosSC, headPosSC;
                if (W2S(HeadPos,&headPosSC) &&W2S(RootPos,&RootPosSC)) {
                                
                 
                      

                      
             
                    float height = abs(headPosSC.Y - RootPosSC.Y);
                    float width = height * 0.65f;

                    FVector middlePoint = {headPosSC.X + (width / 2), headPosSC.Y + (height / 2), 0};
                    if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
                        (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
                        FVector2D v2Middle = FVector2D((float) (glWidth / 2),
                                                       (float) (glHeight / 2));
                        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);

                        float dist = FVector2D::Distance(v2Middle, v2Loc);
                        if (Config.圈) {
                        if (isInsideFOV((int) middlePoint.X, (int) middlePoint.Y)) {
                       
                        if (dist < max) {
                            max = dist;
                            result = Player;
                            }
                            
                        
                         }} else {
                         
                       
                        if (dist < max) {
                            max = dist;
                            result = Player;
                            }
                            
                        
                         }
                    }
                }
            }
        }
    }
   // 已选择 = false;
    return result;
    }}}}
}


//AimBot2.0
auto GetTargetForAimBot() {
if (Config.AimBot.开启自瞄) {
if (Config.AimBot.AINBOT == AIMBOT::ZX) {

    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto GWorld = GetWorld();
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
                                                             Actors_Offset);
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
for (int i = 0; i < Actors.Num(); i++) {
                    auto Actor = Actors[i];
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
                        
                        if (Config.圈) {
                        if (isInsideFOV((int) middlePoint.X, (int) middlePoint.Y)) {

                        float dist = FVector2D::Distance(v2Middle, v2Loc);

                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                      }} else {
                  

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
    }
    

    return result;
}}}}}

auto 触摸自瞄() {
if (Config.AimBot.开启自瞄) {
if (Config.AimBot.AINBOT == AIMBOT::CM) {

    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto GWorld = GetWorld();
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
                                                             Actors_Offset);
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
for (int i = 0; i < Actors.Num(); i++) {
                    auto Actor = Actors[i];
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
}}}}}

auto 超级子追() {
if (Config.AimBot.开启子追) {
if (Config.SilentAim.AINBOTA == AIMBOTA::QSZZ) {

    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

    auto GWorld = GetWorld();
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
                                                             Actors_Offset);
    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
for (int i = 0; i < Actors.Num(); i++) {
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

            
float dist = localPlayer->GetDistanceTo(Player);
                        if (dist < max) {
                            max = dist;
                            result = Player;
                        }
                    }
                }
            }
        
    
    return result;
    }}}}}
auto GetTargetByCrossDist() {
if (Config.AimBot.开启子追) {
if (Config.SilentAim.AINBOTA == AIMBOTA::SJZZ) {

    ASTExtraPlayerCharacter *result = 0;
    float max = std::numeric_limits<float>::infinity();

   auto GWorld = GetWorld();
    if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
            TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
                                                             Actors_Offset);

    auto localPlayer = g_LocalPlayer;
    auto localController = g_LocalController;

    if (localPlayer) {
        for (int i = 0; i < Actors.Num(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                auto Player = (ASTExtraPlayerCharacter *) Actor;
                auto Target = (ASTExtraPlayerCharacter *) Actor;
                
                float dist = localPlayer->GetDistanceTo(Target) / 100.0f;
                if (dist > 50.0f)
                    continue;

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

                                                 if(isInsideFOV((int)middlePoint.X, (int)middlePoint.Y)) {
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
            }
        }
    }

    


    return result;
}}}





const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return "摩托车";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return "轿车";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return "巴士";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return "坤坤";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return "蹦蹦";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return "吉普";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            return "快艇";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            return "摩托艇";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return "四人跑车";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return "皮卡";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return "小型摩托车";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return "雪橇车";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return "三轮车";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return "雪地自行车";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            return "冲浪板";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            return "雪板";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return "装甲车";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            return "雪地越野车";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            return "无人机";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            return "跳楼机";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            return "兰博基尼";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return "四人跑车[金色]";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            return "大脚车";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            return "直升机";
            break;
        default:
            return "载具";
            break;
    }
    return "Vehicle";
}

std::string playerstatus(int GetEnemyState)
{    
     switch (GetEnemyState)
     {
        case 0:
            return "发呆";
            break;
        case 1032:
            return "探头";
            break;
        case 268435464:
            return "发挥情感";
            break;
        case 1552:
            return "在喵什么";
            break;
        case 8388616:
            return "降落中";
            break;
        case 131072:
            return "被打倒了";
            break;
        case 33554440:
            return "坐飞机";
            break;
        case 8205:
            return "在射击";
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
            return "降落中";
            break;
        case 16392:
            return "在丢什么";
            break;
        case 262:
            return "再装";
            break;
        case 1048584:
            return "骑行";
            break;
        case 8200:
            return "挥拳";
            break;
        case 2056:
            return "切枪";
            break;
        case 4194302:
            return "正在游泳";
            break;
        case 269:
            return "再装";
            break;
        case 16777224:
            return "正在爬";
            break;
        case 10:
            return "在跑步";
            break;
        case 263:
            return "再装";
            break;
        case 65568 || 65544:
            return "在打药";
            break;
        case 4194308:
            return "正在游泳";
            break;
        case 268:
            return "再装";
            break;
        case 35:
            return "坐下来了";
            break;
        case 8388617:
            return "降落中";
            break;
        case 33:
            return "在瞄准";
            break;
        case 75:
            return "在蹦迪";
            break;
        case 8201:
            return "挥拳";
            break;
        case 266:
            return "再装";
            break;
        case 32776:
            return "被打倒了";
            break;
        case 270:
            return "再装";
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
            return "在打药";
            break;
        case 265:
            return "再装";
            break;
        case 9:
            return "在跑步";
            break;
        case 262144:
            return "在抽烟";
            break;
        case 8203:
            return "挥拳";
            break;
        case 8202:
            return "在射击";
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
            return "坐飞机";
            break;
        case 19:
            return "蹲着的";
            break;
        case 8208:
            return "在射击";
            break;
        case 520:
            return "在喵什么";
            break;
        case 8206:
            return "在射击";
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
            return "再装";
            break;
        case 4194305:
            return "正在游泳";
            break;
        case 8207:
            return "在射击";
            break;
        case 4194307:
            return "正在游泳";
            break;
        return "";
    }
}

// ================================================================================================================================ //
void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;
void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {
if (Config.AimBot.AINBOT == AIMBOT::ZX) {
ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
if (Target) {
bool triggerOk = false;
if (Config.AimBot.Trigger != EAimTrigger::None) {
if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
triggerOk = g_LocalPlayer->bIsWeaponFiring;
} else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
triggerOk = g_LocalPlayer->bIsGunADS;
} else if (Config.AimBot.Trigger == EAimTrigger::Both) {
triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
} else if (Config.AimBot.Trigger == EAimTrigger::Any) {
triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
}
} else triggerOk = true;
if (triggerOk) {
FVector targetAimPos = Target->GetBonePos("Head", {});
if (Config.AimBot.Target == EAimTarget::Chest) {
targetAimPos.Z -= 25.0f;
}
if (Config.AimBot.Target == EAimTarget::JJ) {
                                targetAimPos.Z -= 65.0f;
                            }


UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;//预判 傻逼源码自带的玩意
                if (ShootWeaponEntityComponent) {
					if (Config.预判) {
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
				}
                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
                    rot = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                }

FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
rot = UKismetMathLibrary::Conv_VectorToRotator(fDir);
}

}
}

    if (Config.AimBot.开启子追) {
        if (Config.SilentAim.AINBOTA == AIMBOTA::QSZZ) {
        ASTExtraPlayerCharacter *Target = 超级子追();
        if (Target)
					{
						bool triggerOk = false;						
							if (Config.AimBot.Trigger == EAimTrigger::Shooting)
							{
								triggerOk = g_LocalPlayer->bIsWeaponFiring;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Scoping)
							{
								triggerOk = g_LocalPlayer->bIsGunADS;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Both)
							{
								triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Any)
							{
								triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
							}
						
						else
							triggerOk = true;
            if (triggerOk) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                if (Config.AimBot.Trigger == EAimTarget::Chest) {
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
                    rot = ToRotator(g_LocalController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos);
                                                       
                                        
                                    
                                }
                            }
                        }
    }
}

    if (Config.AimBot.开启子追) {
        if (Config.SilentAim.AINBOTA == AIMBOTA::SJZZ) {
ASTExtraPlayerCharacter *Target = GetTargetByCrossDist();
        if (Target)
					{
						bool triggerOk = false;						
							if (Config.AimBot.Trigger == EAimTrigger::Shooting)
							{
								triggerOk = g_LocalPlayer->bIsWeaponFiring;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Scoping)
							{
								triggerOk = g_LocalPlayer->bIsGunADS;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Both)
							{
								triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Any)
							{
								triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
							}
						
						else
							triggerOk = true;
            if (triggerOk) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                if (Config.AimBot.Trigger == EAimTarget::Chest) {
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
                    rot = ToRotator(g_LocalController->PlayerCameraManager->CameraCache.POV.Location, targetAimPos);
                                                       
                                        
                                    
                                }
                            }
                        }
    }}





return orig_shoot_event(thiz, start, rot, weapon, unk1);
}
class FPSCounter
{
  protected:
	unsigned int m_fps;
	unsigned int m_fpscount;
	long m_fpsinterval;

  public:
	FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0)
	{
	}

	void update()
	{
		m_fpscount++;

		if (m_fpsinterval < time(0))
		{
			m_fps = m_fpscount;

			m_fpscount = 0;
			m_fpsinterval = time(0) + 1;
		}
	}

	unsigned int get() const
	{
		return m_fps;
	}
};

FPSCounter fps;


	void loadConfig()
{
int fd = open("/data/data/com.tencent.ig/files/sc.ini", O_RDONLY);

read(fd, &Config, sizeof(Config));   



close(fd);


}
void loadfov()
{
int fd = open("/data/data/com.tencent.ig/files/fov.ini", O_RDONLY);


read(fd, &fov, sizeof(fov));

close(fd);


}

void loadaim10()
{  
int fd = open("/data/data/com.tencent.ig/files/aim10.ini", O_RDONLY);


read(fd, &Aim10, sizeof(Aim10));

close(fd);

}

void loadaim50()
{  
int fd = open("/data/data/com.tencent.ig/files/aim50.ini", O_RDONLY);


read(fd, &Aim50, sizeof(Aim50));

close(fd);

}
void loadaim100()
{
int fd = open("/data/data/com.tencent.ig/files/aim100.ini", O_RDONLY);


read(fd, &Aim100, sizeof(Aim100));

close(fd);

}

void loadaim150()
{
int fd = open("/data/data/com.tencent.ig/files/aim150.ini", O_RDONLY);


read(fd, &Aim150, sizeof(Aim150));

close(fd);

}

void loadaim200()
{
int fd = open("/data/data/com.tencent.ig/files/aim200.ini", O_RDONLY);


read(fd, &Aim200, sizeof(Aim200));

close(fd);

}

void loadaim250()
{
int fd = open("/data/data/com.tencent.ig/files/aim250.ini", O_RDONLY);


read(fd, &Aim250, sizeof(Aim250));

close(fd);

}

void loadaim300()
{
int fd = open("/data/data/com.tencent.ig/files/aim300.ini", O_RDONLY);


read(fd, &Aim300, sizeof(Aim300));

close(fd);

}



void saveConfig()
{

int fd = open("/data/data/com.tencent.ig/files/sc.ini", O_WRONLY | O_CREAT);
system("chmod 777 /data/data/com.tencent.ig/files/sc.ini");
write(fd, &Config , sizeof(Config));   // 写入文本


close(fd);
}

void savefov()
{

int fd = open("/data/data/com.tencent.ig/files/fov.ini", O_WRONLY | O_CREAT);
system("chmod 777 /data/data/com.tencent.ig/files/fov.ini");

write(fd, &fov , sizeof(fov));
close(fd);
}

void saveaim10()
{

int fd = open("/data/data/com.tencent.ig/files/aim10.ini", O_WRONLY | O_CREAT);
system("chmod 777 /data/data/com.tencent.ig/files/aim10.ini");

write(fd, &Aim10 , sizeof(Aim10));
close(fd);
}

void saveaim50()
{

int fd = open("/data/data/com.tencent.ig/files/aim50.ini", O_WRONLY | O_CREAT);
system("chmod 777 /data/data/com.tencent.ig/files/aim50.ini");

write(fd, &Aim50 , sizeof(Aim50));
close(fd);
}

void saveaim100()
{

int fd = open("/data/data/com.tencent.ig/files/aim100.ini", O_WRONLY | O_CREAT);
system("chmod 777 /data/data/com.tencent.ig/files/aim100.ini");

write(fd, &Aim100 , sizeof(Aim100));
close(fd);
}

void saveaim150()
{

int fd = open("/data/data/com.tencent.ig/files/aim150.ini", O_WRONLY | O_CREAT);
system("chmod 777 /data/data/com.tencent.ig/files/aim150.ini");

write(fd, &Aim150 , sizeof(Aim150));
close(fd);
}
void saveaim200()
{

int fd = open("/data/data/com.tencent.ig/files/aim200.ini", O_WRONLY | O_CREAT);
system("chmod 777 /data/data/com.tencent.ig/files/aim200.ini");

write(fd, &Aim200 , sizeof(Aim200));
close(fd);
}

void saveaim250()
{

int fd = open("/data/data/com.tencent.ig/files/aim250.ini", O_WRONLY | O_CREAT);
system("chmod 777 /data/data/com.tencent.ig/files/aim250.ini");

write(fd, &Aim250 , sizeof(Aim250));
close(fd);
}

void saveaim300()
{

int fd = open("/data/data/com.tencent.ig/files/aim300.ini", O_WRONLY | O_CREAT);
system("chmod 777 /data/data/com.tencent.ig/files/aim300.ini");

write(fd, &Aim300 , sizeof(Aim300));
close(fd);
}





void loadCFG(){
loadConfig();
loadfov();
loadaim10();
loadaim50();
loadaim100();
loadaim150();
loadaim200();
loadaim250();
loadaim300();
}

void saveCFG(){
saveConfig();
savefov();
saveaim10();
saveaim50();
saveaim100();
saveaim150();
saveaim200();
saveaim250();
saveaim300();
}

std::string getClipboardText()
{
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
		if (text)
		{
			str = (jstring)env->CallObjectMethod(text, toStringMethod);
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

// ======================================================================== //
#include "登陆.h"


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
//方框
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




//#include "上色.h"



//ESP/////=====NIKE///=IMGUI PLUS
void DrawESP(ImDrawList *draw){


if (窗口隐藏) {
ImGuiIO& io = ImGui::GetIO(); if (io.MousePos.y == 窗口Y && io.MousePos.x == 窗口X) { } else {
隐藏 = false;
窗口Y = io.MousePos.y;
窗口X = io.MousePos.x; if (io.MousePos.x > 0 && io.MousePos.x < 100) { if (io.MousePos.y > 0 && io.MousePos.y < 100) { if (隐藏1 < 2) { if (!隐藏) {
隐藏1 = 隐藏1 + 1;
隐藏 = true; }} else { if (隐藏窗口) {
隐藏窗口 = false;
隐藏1 = 0; } else {
隐藏窗口 = true;
隐藏1 = 0; }}} else {
隐藏1 = 0; }} else {
隐藏1 = 0; }}} else {
隐藏窗口 = false;
隐藏1 = 0; }
if (显示文字 || Config.圈 || 显示到期时间) { if (文字8 == 0) { if (文字1 == 255) { if (文字2 == 255) { if (文字3 == 255) {
文字8 = 1; } else {
文字3 = 文字3 + 1; }} else {
文字2 = 文字2 + 1; }} else {
文字1 = 文字1 + 1; }} else { if (文字1 == 0) { if (文字2 == 0) { if (文字3 == 0) {
文字8 = 0; } else {
文字3 = 文字3 - 1; }} else {
文字2 = 文字2 - 1; }} else {
文字1 = 文字1 - 1; }} if (文字6 == 0) {
文字4 = 文字4 + 1; if (文字4 == 255) {
文字6 = 1; }} else {
文字4 = 文字4 - 1; if (文字4 == 100) {
文字6 = 0; }} if (文字7 == 0) {
文字5 = 文字5 + 0.5; if (文字5 == 300) {
文字7 = 1; }} else {
文字5 = 文字5 - 0.5; if (文字5 == 150) {
文字7 = 0; }} 

/*if (文字8 == 0) { if (文字11 == 0) {
文字12 + 1;
if (文字12 == 6) {
文字12 = 0; }
文字11 = 1; }} else if (文字8 == 1) { if (文字11 == 1) {
文字11 = 0; }}*/
if (文字xx = 1500) {
文字12 + 1; if (文字12 = 6) {
文字12 = 0; }
文字xx = 0; } else { 文字xx + 1; }}









 if (显示文字) {

if (文字12 == 0) {
draw->AddText({ ((float) density / 20.0f), 文字5}, IM_COL32(文字1,文字2,文字3, 文字4),OBFUSCATE("\n\n｜PUSSY CHEAT 上市V2｜"));
}
if (文字12 == 1) {
draw->AddText({ ((float) density / 20.0f), 文字5}, IM_COL32(文字1,文字2,文字3, 文字4),OBFUSCATE("\n\n｜稳定直装｜"));
}
if (文字12 == 2) {
draw->AddText({ ((float) density / 20.0f), 文字5}, IM_COL32(文字1,文字2,文字3, 文字4),OBFUSCATE("\n\n｜加入官方电报群｜"));
}
if (文字12 == 3) {
draw->AddText({ ((float) density / 20.0f), 文字5}, IM_COL32(文字1,文字2,文字3, 文字4),OBFUSCATE("\n\n｜@PUSSYCHEATS69｜"));
}
if (文字12 == 4) {
draw->AddText({ ((float) density / 20.0f), 文字5}, IM_COL32(文字1,文字2,文字3, 文字4),OBFUSCATE("\n\n｜必须演戏/不演封号｜"));
}
if (文字12 == 5) {
draw->AddText({ ((float) density / 20.0f), 文字5}, IM_COL32(文字1,文字2,文字3, 文字4),OBFUSCATE("\n\n｜祝你有个好生活｜"));
}
if (显示到期时间) {
std::string 到期 = "\n\n\n到期时间:";
到期 += EXP;
到期 += "\n";
到期 += Mobile.c_str();
draw->AddText({ ((float) density / 10.0f), 文字5}, IM_COL32(文字1, 文字2, 文字3, 文字4), 到期.c_str()); }}
if (语言 == 0) {
	if (Config.AimBot.开启自瞄) {
 draw->AddText({ ((float) density / 10.0f), 150}, IM_COL32(255,000,000, 255),OBFUSCATE("自动瞄准[ON]"));
}
if (Config.AimBot.开启子追) {
 draw->AddText({ ((float) density / 10.0f), 150}, IM_COL32(255,000,000, 255),OBFUSCATE("子弹追踪[ON]"));
}} else if (语言 == 1) {
if (Config.AimBot.开启自瞄) {
 draw->AddText({ ((float) density / 10.0f), 150}, IM_COL32(255,000,000, 255),OBFUSCATE("AIMBOT[ON]"));
}
if (Config.AimBot.开启子追) {
 draw->AddText({ ((float) density / 10.0f), 150}, IM_COL32(255,000,000, 255),OBFUSCATE("BULLET[ON]"));
}
}
if (Config.圈) {
draw->AddRect({(screenWidth/3)-(Config.SilentAim.Cross/2), (screenHeight/3)-(Config.SilentAim.Cross/2)}, {(screenWidth/3)+(Config.SilentAim.Cross/2), (screenHeight/3)+(Config.SilentAim.Cross/2)}, IM_COL32(文字1,文字2,文字3,文字4), 15, 0, 1.7);
}


/*if (clear) {
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17122.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17123.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17124.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17125.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17126.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17127.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17128.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17129.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17130.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17132.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17134.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17135.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/1375135419_59_2.4.1.17136_20230117180727_351170870_cures.ifs.res"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/apollo_reslist.flist"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/core_patch_2.4.1.17136.pak");
clear = false;
}*/

/*if (clear) {
system("rm -rf /data/data/com.tencent.ig/app_appcache"
"rm -rf /data/data/com.tencent.ig/app_bugly"
"rm -rf /data/data/com.tencent.ig/app_crashrecord"
"rm -rf /data/data/com.tencent.ig/app_databases"
"rm -rf /data/data/com.tencent.ig/app_geolocation"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/GameErrorNoRecords"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Config"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Pandora"
"rm -rf /data/data/com.tencent.ig/app_appcache"
"rm -rf /data/data/com.tencent.ig/app_bugly"
"rm -rf /data/data/com.tencent.ig/app_crashrecord"
"rm -rf /data/data/com.tencent.ig/app_databases"
"rm -rf /data/data/com.tencent.ig/app_geolocation"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/GameErrorNoRecords"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Config"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Pandora"
"rm -rf /data/data/com.tencent.ig/app_appcache"
"rm -rf /data/data/com.tencent.ig/app_bugly"
"rm -rf /data/data/com.tencent.ig/app_crashrecord"
"rm -rf /data/data/com.tencent.ig/app_databases"
"rm -rf /data/data/com.tencent.ig/app_geolocation"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/GameErrorNoRecords"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Config"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Pandora"
"rm -rf /data/data/com.tencent.ig/app_appcache"
"rm -rf /data/data/com.tencent.ig/app_bugly"
"rm -rf /data/data/com.tencent.ig/app_crashrecord"
"rm -rf /data/data/com.tencent.ig/app_databases"
"rm -rf /data/data/com.tencent.ig/app_geolocation"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/GameErrorNoRecords"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Config"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Pandora"
"rm -rf /data/data/com.tencent.ig/app_appcache"
"rm -rf /data/data/com.tencent.ig/app_bugly"
"rm -rf /data/data/com.tencent.ig/app_crashrecord"
"rm -rf /data/data/com.tencent.ig/app_databases"
"rm -rf /data/data/com.tencent.ig/app_geolocation"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/GameErrorNoRecords"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Config"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Pandora"
"rm -rf /data/data/com.tencent.ig/app_appcache"
"rm -rf /data/data/com.tencent.ig/app_bugly"
"rm -rf /data/data/com.tencent.ig/app_crashrecord"
"rm -rf /data/data/com.tencent.ig/app_databases"
"rm -rf /data/data/com.tencent.ig/app_geolocation"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/GameErrorNoRecords"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Config"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Pandora"
"rm -rf /data/data/com.tencent.ig/app_appcache"
"rm -rf /data/data/com.tencent.ig/app_bugly"
"rm -rf /data/data/com.tencent.ig/app_crashrecord"
"rm -rf /data/data/com.tencent.ig/app_databases"
"rm -rf /data/data/com.tencent.ig/app_geolocation"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/GameErrorNoRecords"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Config"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Pandora"
"rm -rf /data/data/com.tencent.ig/app_appcache"
"rm -rf /data/data/com.tencent.ig/app_bugly"
"rm -rf /data/data/com.tencent.ig/app_crashrecord"
"rm -rf /data/data/com.tencent.ig/app_databases"
"rm -rf /data/data/com.tencent.ig/app_geolocation"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/GameErrorNoRecords"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Config"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Pandora"
"rm -rf /sdcard/.backups/com.tencent.ig/helpshift/database"
"rm -rf /sdcard/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/SaveGames/Match"
"rm -rf /sdcard/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"
"rm -rf /sdcard/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/filelist.json"
"rm -rf /sdcard/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/puffer_res.eifs"
"rm -rf /sdcard/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/apollo_reslist.flist"
"rm -rf /sdcard/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/puffer_temp"
"rm -rf /sdcard/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/RoleInfo/RoleInfo.json"
"rm -rf /sdcard/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/PufferFileList.json"
"rm -rf /sdcard/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/StatEventReportedFlag"
"rm -rf /sdcard/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/PufferTmpDir"
"rm -rf /sdcard/.backups"
"rm -rf /sdcard/Tencent"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/cache"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/tbslog"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/ca-bundle.pem"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/cacheFile.txt"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/login-identifier.txt"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/vmpcloudconfig.json"
"rm -rf /storage/emulated/0/.backups/com.tencent.ig/helpshift/database"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/SaveGames/Match"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/filelist.json"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/puffer_res.eifs"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/apollo_reslist.flist"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/puffer_temp"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/RoleInfo/RoleInfo.json"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/PufferFileList.json"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/StatEventReportedFlag"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/PufferTmpDir"
"rm -rf /storage/emulated/0/.backups"
"rm -rf /storage/emulated/0/Tencent"
"rm -rf /data/user/0/com.tencent.ig/cache"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17122.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17123.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17124.pak"
"rm -rf /storage/emulated/0/Android/data/com.tencent.ig/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/game_patch_2.4.1.17125.pak");
clear = false;
}*/



if (Bypass10) {
//旁路

}






if (全局离线) {
MemoryPatch::createWithHex("libgcloud.so",0x42A168, "FF FF FF FF",4).Modify();
MemoryPatch::createWithHex("libgcloud.so",0x4A4618, "FF FF FF FF",4).Modify();
//全局离线 断网 
} else {
MemoryPatch::createWithHex("libgcloud.so",0x42A168, "26 35 13 13",4).Modify();
MemoryPatch::createWithHex("libgcloud.so",0x4A4618, "26 35 13 13",4).Modify();
//全局离线 恢复联网
}



if (BypassLOGO) {

//工具写地址
//Bypass();
}


//#include "MemoryTools (1).h"
//long int get_module_base(int pid,const char*module_name)



if (大厅旁路) {


}





/*if(稳定除雾){
写入D类(UE4 + 0x6DF5FB0,706675684);
}*/

if(稳定加速开){
写入D类(UE4 + 0x7D68B40,505453825);
}

if(稳定加速关){
写入D类(UE4 + 0x7D68B40,505453824);
}

if(无后){
写入D类(UE4 + 0x4C451A4,449318186);
}
           
if(防抖){
写入D类(UE4 + 0x57E2650,1409287170);
写入D类(UE4 + 0x7C5A398,449318186);
}

if(聚点){
写入D类(UE4 +0x4C42B2C,505425152);                
}

if(瞬击){
写入D类(UE4 + 0x7DA4058,506015752);
}

if(自瞄){
写入F类(UE4 + 0x3dbba6c,0);
}

/*if(除草){
写入D类(UE4 + 0x3dad878,0);
}   

if(除树){
写入F类(UE4 + 0x56ac6c8,-1.86389771e-20);
}

if(黑天){
写入D类(UE4 + 0x576cd10,-1222130000);
}

if(平板视角123){
写入F类(UE4 + 0x5483064,平板视角调整);
}

if(高伤害){
写入F类(UE4 + 0x58fe1f0,10);
}

if(黑体){
写入F类(UE4 + 0x4649548,黑体颜色);
}*/






if (Config.PlayerESP.ActiveEsp) {
		auto Actors = getActors();
		int totalEnemies = 0, totalBots = 0, oozing = 0;
		ASTExtraPlayerCharacter *localPlayer = 0;
		ASTExtraPlayerController *localController = 0;
		
		std::string sFPS = "\n\n\n\nFPS:";
		sFPS += std::to_string(fps.get());
        draw->AddText({((float)density / 10.0f), 40}, IM_COL32(255, 255, 255, 255), sFPS.c_str());
		for (int i = 0; i < Actors.size(); i++)
		{
			auto Actor = Actors[i];
			if (isObjectInvalid(Actor))
				continue;
			if (Actor->IsA(ASTExtraPlayerController::StaticClass()))
			{
				localController = (ASTExtraPlayerController *)Actor;
				break;
			}
		}
		if (localController)
		{
			for (int i = 0; i < Actors.size(); i++)
			{
				auto Actor = Actors[i];
				if (isObjectInvalid(Actor))
					continue;
				if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
				{
					if (((ASTExtraPlayerCharacter *)Actor)->PlayerKey ==
						localController->PlayerKey)
					{
						localPlayer = (ASTExtraPlayerCharacter *)Actor;
						break;
					}
				}
			}
			if (localPlayer)
			{
				if (localPlayer->PartHitComponent)
				{
					auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
					for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++)
					{
						ConfigCollisionDistSqAngles[j].Angle = 90.0f;
					}
					localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
				}
				//===================== 基址 SDK BASE ====================//
			

if (Config.HighRisk.Recoil || Config.HighRisk.Shake || Config.HighRisk.Prone || Config.HighRisk.HitEffect || Config.HighRisk.Instant || Config.HighRisk.Cross || Config.HighRisk.Less) {
                auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                if (WeaponManagerComponent) {
                    auto Slot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                    if ((int) Slot.GetValue() >= 1 && (int) Slot.GetValue() <= 3) {
                        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
                        if (CurrentWeaponReplicated) {
                            auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
                            auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
                            if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
                                if (Config.HighRisk.Recoil) {
                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.0f;
                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = 0.0f;

                                    ShootWeaponEntityComp->RecoilKickADS = 0.0f;
                                }
                               /* if (Config.HighRisk.Less) {
                                //> 0.100 = safe
                                    ShootWeaponEntityComp->AccessoriesVRecoilFactor = Config.Less;
                                    ShootWeaponEntityComp->AccessoriesHRecoilFactor = Config.Less;
                                    ShootWeaponEntityComp->AccessoriesRecoveryFactor = Config.Less;
                                    }*/
                                    
                                    if (Config.HighRisk.Shake) {
                                    ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
                                    ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
                                }

                   
                                if (Config.HighRisk.Cross) {
                                                          ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
                                    }

                                if (Config.HighRisk.HitEffect) {
                                       ShootWeaponEntityComp->ExtraHitPerformScale = 50.0f;
                                }
								 if (Config.HighRisk.Instant) {
                               
    ShootWeaponEntityComp->BulletFireSpeed = 1000000.0f;
 
                                }
                          
                            }
                        }
                    }
                }
            }






//=====子追算法   NIKE IMGUI 3.0






///360° 子弹追踪
//视角子追
//自瞄算法3.0
if (Config.AimBot.开启自瞄) {
if (Config.AimBot.AINBOT == AIMBOT::SJ) {
                                                    
         ASTExtraPlayerCharacter *Target = 自瞄360度();     
         long PlayerAimLineColor = IM_COL32(254, 0, 0, 255);
        if (Target) {
FVector HEAD = Target->GetBonePos("Head", {});
ImVec2 HEADSC;
if (W2S(HEAD, (FVector2D *)&HEADSC)) {
draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, HEADSC, PlayerAimLineColor, 1.0f);
}
   
        
                        }
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
                            if (Config.AimBot.Target == EAimTarget::JJ) {
                                targetAimPos.Z -= 65.0f;
                            }

                            auto WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;
                                        if (WeaponManagerComponent) {
                                            auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                            if ((int)propSlot.GetValue() >= 1 && (int)propSlot.GetValue() <= 3) {
                                                auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
                                                if (CurrentWeaponReplicated) {
                                                    auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
                                                    if (ShootWeaponComponent) {
                                                        UShootWeaponEntity * ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
                                                        if (ShootWeaponEntityComponent) {
                                                    
                                                            ASTExtraVehicleBase * CurrentVehicle = Target->CurrentVehicle;
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
                                                            
                                                            if (g_LocalPlayer->bIsGunADS) {
                                                        if (g_LocalPlayer->bIsWeaponFiring) {
                                                            float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
                                                            
                                                        }  
                                                    }
                                                                                                        if (g_LocalController) {
                                            auto PlayerCameraManage = g_LocalController->PlayerCameraManager;
                                            if (PlayerCameraManage) {                                                                                                                                          
                                                FVector currViewAngle = PlayerCameraManage->CameraCache.POV.Location;                                                
                                                auto aimRotation = ToRotator(currViewAngle, targetAimPos);  
                                                g_LocalController->PlayerCameraManager->CameraCache.POV.Rotation = aimRotation;          
                                               }
                                               }
                                               }
                                                }
                                                }
                                                }
                                                }
                                                }
                                                }
                                                }}
                //自瞄算法6.0
                if (Config.AimBot.开启自瞄) {
                            if (Config.AimBot.AINBOT == AIMBOT::NC) {
ASTExtraPlayerCharacter *Target = 内存自瞄();
					if (Target)
					{
						bool triggerOk = false;						
							if (Config.AimBot.Trigger == EAimTrigger::Shooting)
							{
								triggerOk = g_LocalPlayer->bIsWeaponFiring;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Scoping)
							{
								triggerOk = g_LocalPlayer->bIsGunADS;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Both)
							{
								triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
							}
							else if (Config.AimBot.Trigger == EAimTrigger::Any)
							{
								triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
							}
						
						else
							triggerOk = true;
						if (triggerOk)
						{
						FVector targetAimPos = Target->GetBonePos("Head", {});
							if (Config.AimBot.Target == EAimTarget::Chest)
							{
								targetAimPos.Y -= 1.228f;
								targetAimPos.Z -= 25.0f;
							//	targetAimPos.X -= Config.Skill4;
							}
										
										auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
                                if (WeaponManagerComponent) {
                                    auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
                                    if ((int) propSlot.GetValue() >= 1 && (int) propSlot.GetValue() <= 3) {
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
                                                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                                                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                                                    } else {
                                                        FVector Velocity = Target->GetVelocity();

                                                        float dist = localPlayer->GetDistanceTo(Target);
                                                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                                                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                                                    
													
													/*targetAimPos.Z += Velocity.Z * timeToTravel + 0.5 * Config.Line * timeToTravel * timeToTravel;    */
												}
												
												
                            if (g_LocalPlayer->bIsGunADS) {
                               if (g_LocalPlayer->bIsWeaponFiring) {
                                float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;                                                                                 
                                targetAimPos.Z -= dist * 1.25f;        
                                
                                                          
                                }  
                             }
                           
                            if (自瞄接口 == 0) {
localController->ControlRotation =ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location,targetAimPos);
} else if (自瞄接口 == 1) {
FRotator fAimRotation = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(targetAimPos, localController->PlayerCameraManager->CameraCache.POV.Location));
localController->ControlRotation = fAimRotation;
}
                                        }
									}
								}
							}
						}
					}
				}
                }}


//自动瞄准5.1

                            if (Config.AimBot.开启自瞄) {
                            if (Config.AimBot.AINBOT == AIMBOT::PH) {
                    
                
                    ASTExtraPlayerCharacter *Target = 平滑自瞄();
                    
                  
                    long PlayerAimLineColor = IM_COL32(254, 0, 0, 255);
                    
                    
                    

                    if (Target) {
                        FVector HEAD = Target->GetBonePos("Head", {});
                        
                        ImVec2 headPosSC;
                        if (W2S(HEAD, (FVector2D *)&headPosSC)) {
                    
                           
                          draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, headPosSC,
                                              PlayerAimLineColor, 1.0f);
                            
                        }
                        
if (Config.自动Z){
float AimDis= localPlayer->GetDistanceTo(Target) / 100.f;

if(AimDis > 0.0f && AimDis <= 28.0f){
AimYQ = Aim10;
}
if(AimDis > 28.0f && AimDis <= 50.0f){
AimYQ = Aim50;
}
if(AimDis > 50.0f && AimDis <= 100.0f){
AimYQ = Aim100;
}
if(AimDis > 100.0f && AimDis <= 150.0f){
AimYQ = Aim150;
}
if(AimDis > 150.0f && AimDis <= 200.0f){
AimYQ = Aim200;
}
if(AimDis > 200.0f && AimDis <= 250.0f){
AimYQ = Aim250;
}
if(AimDis > 250.0f && AimDis <= 300.0f){
AimYQ = Aim300;
}}
                     
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
if (Config.AimBot.Target == EAimTarget::JJ) {
targetAimPos.Z -= 65.0f;
}
if (Config.自动Z){
if (localPlayer->bIsWeaponFiring)
targetAimPos.Z -= AimYQ;
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
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
} else {
FVector Velocity = Target->GetVelocity();
float dist = localPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
}
if (自瞄接口 == 0) {
localController->ControlRotation =ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location,targetAimPos);
} else if (自瞄接口 == 1) {
FRotator fAimRotation = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(targetAimPos, localController->PlayerCameraManager->CameraCache.POV.Location));
localController->ControlRotation = fAimRotation;
}
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                  
                }}


//自瞄算法5.2
                            if (Config.AimBot.开启自瞄) {
                            if (Config.AimBot.AINBOT == AIMBOT::SJZM) {
                    
                
                    ASTExtraPlayerCharacter *Target = 漏打自瞄();
                    
                  
                    long PlayerAimLineColor = IM_COL32(254, 0, 0, 255);
                    
                    
                    

                    if (Target) {
                        FVector HEAD = Target->GetBonePos("Head", {});
                        
                        ImVec2 headPosSC;
                        if (W2S(HEAD, (FVector2D *)&headPosSC)) {
                    
                           
                          draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, headPosSC,
                                              PlayerAimLineColor, 1.0f);
                            
                        }
                     
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
                              /*
                       其余次序:  
                         1      2     3      4
                         头    盆骨   左手   右手
                         左脚  右脚   
                          5     6
                         7     8       9    10
                       左上臂 左小臂  左大腿 左小腿 
                       右上臂 右小臂  右大腿 右小腿 
                         11    12     13    14
                        */
                      FVector targetAimPos;
                     
                        if(Random == 1)
                        {
                             targetAimPos = Target->GetBonePos("Head", {});
                        }else if(Random == 2){
//                             targetAimPos = Target->GetBonePos("pelvis", {});
                        }else if(Random == 3){
                             targetAimPos = Target->GetBonePos("hand_l", {});
                        }else if(Random == 4){
                             targetAimPos = Target->GetBonePos("hand_r", {});
                        }else if(Random == 5){
                             targetAimPos = Target->GetBonePos("foot_l", {});
                        }else if(Random == 6){
                             targetAimPos = Target->GetBonePos("foot_r", {});
                        }else if(Random == 7){
                             targetAimPos = Target->GetBonePos("upper_l", {});
                        }else if(Random == 8){
                             targetAimPos = Target->GetBonePos("lowerarm_r", {});
                        }else if(Random == 9){
                             targetAimPos = Target->GetBonePos("thigh_l", {});
                        }else if(Random == 10){
                             targetAimPos = Target->GetBonePos("calf_l", {});
                        }else if(Random == 11){
                             targetAimPos = Target->GetBonePos("upper_r", {});
                        }else if(Random == 12){
                             targetAimPos = Target->GetBonePos("lowerarm_r", {});
                        }else if(Random == 13){
                             targetAimPos = Target->GetBonePos("thigh_r", {});
                        }else if(Random == 14){
                             targetAimPos = Target->GetBonePos("calf_r", {});
                        }
                        if (localPlayer->bIsWeaponFiring) {
                        Random = Random + 1;
                        if (Random == 14) {
                        Random = 1;
                        }}
                           
                          
                           
                          
              
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
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
} else {
FVector Velocity = Target->GetVelocity();
float dist = localPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
}
if (自瞄接口 == 0) {
localController->ControlRotation =ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location,targetAimPos);
} else if (自瞄接口 == 1) {
FRotator fAimRotation = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(targetAimPos, localController->PlayerCameraManager->CameraCache.POV.Location));
localController->ControlRotation = fAimRotation;
}
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                  
                }}

//自瞄算法5.0
                            if (Config.AimBot.开启自瞄) {
                            if (Config.AimBot.AINBOT == AIMBOT::LD) {
                    
                
                    ASTExtraPlayerCharacter *Target = 漏打自瞄();
                    
                  
                    long PlayerAimLineColor = IM_COL32(254, 0, 0, 255);
                    
                    
                    

                    if (Target) {
                        FVector HEAD = Target->GetBonePos("Head", {});
                        
                        ImVec2 headPosSC;
                        if (W2S(HEAD, (FVector2D *)&headPosSC)) {
                    
                           
                          draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, headPosSC,
                                              PlayerAimLineColor, 1.0f);
                            
                        }
                     
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
                              /*
                       其余次序:  
                         1      2     3      4
                         头    盆骨   左手   右手
                         左脚  右脚   
                          5     6
                         7     8       9    10
                       左上臂 左小臂  左大腿 左小腿 
                       右上臂 右小臂  右大腿 右小腿 
                         11    12     13    14
                        */
                      FVector targetAimPos;
                     
                        if(Corepriority == 1)
                        {
                             targetAimPos = Target->GetBonePos("Head", {});
                        }else if(Corepriority == 2){
//                             targetAimPos = Target->GetBonePos("pelvis", {});
                        }else if(Corepriority == 3){
                             targetAimPos = Target->GetBonePos("hand_l", {});
                        }else if(Corepriority == 4){
                             targetAimPos = Target->GetBonePos("hand_r", {});
                        }else if(Corepriority == 5){
                             targetAimPos = Target->GetBonePos("foot_l", {});
                        }else if(Corepriority == 6){
                             targetAimPos = Target->GetBonePos("foot_r", {});
                        }else if(Corepriority == 7){
                             targetAimPos = Target->GetBonePos("upper_l", {});
                        }else if(Corepriority == 8){
                             targetAimPos = Target->GetBonePos("lowerarm_r", {});
                        }else if(Corepriority == 9){
                             targetAimPos = Target->GetBonePos("thigh_l", {});
                        }else if(Corepriority == 10){
                             targetAimPos = Target->GetBonePos("calf_l", {});
                        }else if(Corepriority == 11){
                             targetAimPos = Target->GetBonePos("upper_r", {});
                        }else if(Corepriority == 12){
                             targetAimPos = Target->GetBonePos("lowerarm_r", {});
                        }else if(Corepriority == 13){
                             targetAimPos = Target->GetBonePos("thigh_r", {});
                        }else if(Corepriority == 14){
                             targetAimPos = Target->GetBonePos("calf_r", {});
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
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
} else {
FVector Velocity = Target->GetVelocity();
float dist = localPlayer->GetDistanceTo(Target);
auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
}

if (自瞄接口 == 0) {
localController->ControlRotation =ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location,targetAimPos);
} else if (自瞄接口 == 1) {
FRotator fAimRotation = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(targetAimPos, localController->PlayerCameraManager->CameraCache.POV.Location));
localController->ControlRotation = fAimRotation;
}
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                  
                }}



//自瞄算法2.0

                                if (Config.AimBot.开启自瞄) {
								if (Config.AimBot.AINBOT == AIMBOT::ZX) {
ASTExtraPlayerCharacter *Target = GetTargetForAimBot();

long PlayerAimLineColor = IM_COL32(254, 0, 0, 255);

if (Target) {
FVector HEAD = Target->GetBonePos("Head", {});
ImVec2 HEADSC;
if (W2S(HEAD, (FVector2D *)&HEADSC)) {
draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, HEADSC, PlayerAimLineColor, 1.0f);
}

if (Config.自动Z){
float AimDis= localPlayer->GetDistanceTo(Target) / 100.f;

if(AimDis > 0.0f && AimDis <= 28.0f){
AimYQ = Aim10;
}
if(AimDis > 28.0f && AimDis <= 50.0f){
AimYQ = Aim50;
}
if(AimDis > 50.0f && AimDis <= 100.0f){
AimYQ = Aim100;
}
if(AimDis > 100.0f && AimDis <= 150.0f){
AimYQ = Aim150;
}
if(AimDis > 150.0f && AimDis <= 200.0f){
AimYQ = Aim200;
}
if(AimDis > 200.0f && AimDis <= 250.0f){
AimYQ = Aim250;
}
if(AimDis > 250.0f && AimDis <= 300.0f){
AimYQ = Aim300;
}}


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
if (Config.AimBot.Target == EAimTarget::JJ) {
                                targetAimPos.Z -= 65.0f;
                            }
if (Config.自动Z){
if (localPlayer->bIsWeaponFiring)
targetAimPos.Z -= AimYQ;
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

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                    } else {
                        FVector Velocity = Target->GetVelocity();

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
				



        if (自瞄接口 == 0) {
localController->ControlRotation =ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location,targetAimPos);
} else if (自瞄接口 == 1) {
FRotator fAimRotation = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(targetAimPos, localController->PlayerCameraManager->CameraCache.POV.Location));
localController->ControlRotation = fAimRotation;
}
    }
}
}
}
}

}
}

}}





//自瞄算法1.0

if (Config.AimBot.开启自瞄) {
if (Config.AimBot.AINBOT == AIMBOT::QS) {
ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
long PlayerAimLineColor = IM_COL32(254, 0, 0, 255);
if (Target) {
FVector HEAD = Target->GetBonePos("Head", {});
ImVec2 HEADSC;
if (W2S(HEAD, (FVector2D *)&HEADSC)) {
draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, HEADSC, PlayerAimLineColor, 1.0f);
}
if (Config.自动Z){
float AimDis= localPlayer->GetDistanceTo(Target) / 100.f;
if(AimDis > 0.0f && AimDis <= 28.0f){
AimYQ = Aim10;
}
if(AimDis > 28.0f && AimDis <= 50.0f){
AimYQ = Aim50;
}
if(AimDis > 50.0f && AimDis <= 100.0f){
AimYQ = Aim100;
}
if(AimDis > 100.0f && AimDis <= 150.0f){
AimYQ = Aim150;
}
if(AimDis > 150.0f && AimDis <= 200.0f){
AimYQ = Aim200;
}
if(AimDis > 200.0f && AimDis <= 250.0f){
AimYQ = Aim250;
}
if(AimDis > 250.0f && AimDis <= 300.0f){
AimYQ = Aim300;
}}
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
if (Config.AimBot.Target == EAimTarget::JJ) {
targetAimPos.Z -= 65.0f;
}
if (Config.自动Z){
if (localPlayer->bIsWeaponFiring)
targetAimPos.Z -= AimYQ;
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
if (自瞄接口 == 0) {
localController->ControlRotation =ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location,targetAimPos);
} else if (自瞄接口 == 1) {
FRotator fAimRotation = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(targetAimPos, localController->PlayerCameraManager->CameraCache.POV.Location));
localController->ControlRotation = fAimRotation;
}
}}}}}}}}}


if (Config.AimBot.开启自瞄) {
if (Config.AimBot.AINBOT == AIMBOT::CM) {
ASTExtraPlayerCharacter *Target = 触摸自瞄();

for (int i = 0; i < Actors.size(); i++)
				{
					auto Actor = Actors[i];
					if (isObjectInvalid(Actor))
						continue;
					if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
					{

auto Player = (ASTExtraPlayerCharacter *)Actor;

if (Player->TeamID == localController->TeamID)
							continue;
							
long PlayerAimLineColor = IM_COL32(254, 0, 0, 255);
if (Target) {
FVector HEAD = Player->GetBonePos("Head", {});
ImVec2 HEADSC;
if (W2S(HEAD, (FVector2D *)&HEADSC)) {
draw->AddLine({(float) glWidth / 2,  (float) (glHeight / 2)}, HEADSC, PlayerAimLineColor, 1.0f);
}
if (Config.自动Z){
float AimDis= localPlayer->GetDistanceTo(Player) / 100.f;
if(AimDis > 0.0f && AimDis <= 28.0f){
AimYQ = Aim10;
}
if(AimDis > 28.0f && AimDis <= 50.0f){
AimYQ = Aim50;
}
if(AimDis > 50.0f && AimDis <= 100.0f){
AimYQ = Aim100;
}
if(AimDis > 100.0f && AimDis <= 150.0f){
AimYQ = Aim150;
}
if(AimDis > 150.0f && AimDis <= 200.0f){
AimYQ = Aim200;
}
if(AimDis > 200.0f && AimDis <= 250.0f){
AimYQ = Aim250;
}
if(AimDis > 250.0f && AimDis <= 300.0f){
AimYQ = Aim300;
}}
bool triggerOk = false;
if (Target) {
FVector 触摸调用 = Player->GetBonePos("Head", {});
ImVec2 触摸调用SC;
if (W2S(触摸调用, (FVector2D *)&触摸调用SC)) {
触摸对象X = 触摸调用SC.x - 30;
触摸对象XX = 触摸调用SC.x + 30;

触摸对象Y = 触摸调用SC.y - 10;
触摸对象YY = 触摸调用SC.y +100;


}}

ImGuiIO& io = ImGui::GetIO();

if (触摸对象X < io.MousePos.x && 触摸对象XX > io.MousePos.x) {
if (触摸对象Y < io.MousePos.y && 触摸对象YY > io.MousePos.y) {
if (触摸X == io.MousePos.x && 触摸Y == io.MousePos.y) {} else {
if (触摸对象队伍 == 0) {
触摸次数 + 1;
if (触摸次数 > 1) {
触摸对象队伍 = Player->TeamID;
触摸次数 = 0;
}} else {
if (触摸对象队伍 == Player->TeamID) {
触摸次数 + 1;
if (触摸次数 > 1) {
触摸对象队伍 = 0;
触摸次数 = 0;
}} else {
触摸次数 + 1;
if (触摸次数 > 1) {
触摸对象队伍 = Player->TeamID;
触摸次数 = 0;
}}}
触摸X = io.MousePos.x;
触摸Y = io.MousePos.y;
}} else {
触摸次数 = 0;
}} else {
触摸次数 = 0;
}

if (触摸对象队伍 == 0) {
triggerOk = false;
} else {
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
}

/*if (触摸X == io.MousePos.x) {
if (触摸Y == io.MousePos.y) {
} else {
触摸Y = io.MousePos.y;
triggerOk = true;
}
} else {
触摸X = io.MousePos.x;
triggerOk = true;
}*/



if (triggerOk) {
if (触摸对象队伍 == Player->TeamID) {
FVector targetAimPos = Player->GetBonePos("Head", {});
if (Config.AimBot.Target == EAimTarget::Chest) {
targetAimPos.Z -= 25.0f;
}
if (Config.AimBot.Target == EAimTarget::JJ) {
targetAimPos.Z -= 65.0f;
}
if (Config.自动Z){
if (localPlayer->bIsWeaponFiring)
targetAimPos.Z -= AimYQ;
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
if (自瞄接口 == 0) {
localController->ControlRotation =ToRotator(localController->PlayerCameraManager->CameraCache.POV.Location,targetAimPos);
} else if (自瞄接口 == 1) {
FRotator fAimRotation = UKismetMathLibrary::Conv_VectorToRotator(UKismetMathLibrary::Subtract_VectorVector(targetAimPos, localController->PlayerCameraManager->CameraCache.POV.Location));
localController->ControlRotation = fAimRotation;
}
}}}}}}}}}}}}


if (Config.AimBot.开启子追) {
if (Config.SilentAim.AINBOTA == AIMBOTA::SJZZ) {
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
            }

if (Config.AimBot.开启子追) {
if (Config.SilentAim.AINBOTA == AIMBOTA::QSZZ) {
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
             }

				
		
                                    
                                

                                    if (Config.雷达) {             
                                    if (Config.PlayerESP.RadarZX == RADAR::KR) {                    
                     struct Vector3 坐标;
                     坐标.X = Config.RadarX*10;
                     坐标.Y = Config.RadarY*10;
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
                 if (Config.PlayerESP.RadarZX == RADAR::QZ) {
                 
                 bool out = false;                              
                     struct Vector3 Pos;
                     Pos.X = 200;
                     Pos.Y = 210;
                     struct Vector3 Size;
                     Size.X = Config.RadarX*10;
                     Size.Y = Config.RadarY*10;
                     float RadarCenterX = Pos.X + (Size.X / 2);
                     float RadarCenterY = Pos.Y + (Size.Y / 2);
                     ImColor CircleColor = ImColor(000, 000, 000, 15);
                     ImColor PointColor = ImColor(255, 255, 255, 255);
                    draw->AddCircleFilled(ImVec2(RadarCenterX, RadarCenterY), 100.f, CircleColor, 100); 
                    draw->AddCircleFilled(ImVec2(RadarCenterX, RadarCenterY), 20.f, CircleColor, 20); 
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 100.f, PointColor, 1000); 
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 20.f, PointColor, 1000); 
                     draw->AddCircleFilled(ImVec2(RadarCenterX + 0.5f, RadarCenterY + 0.5f), 3.f, PointColor, 1000);
                 }
                 if (Config.PlayerESP.RadarZX == RADAR::DNA) {                                 
                     bool out = true;                              
                     struct Vector3 Pos;
                     Pos.X = 200;
                     Pos.Y = 210;
                     struct Vector3 Size;
                     Size.X = Config.RadarX*10; //Width of Radar Box.
                     Size.Y = Config.RadarY*10; //Height of Radar Box.
                     float RadarCenterX = Pos.X + (Size.X / 2);
                     float RadarCenterY = Pos.Y + (Size.Y / 2);
                     ImColor CircleColor = ImColor(0, 0, 0, 20);
                     ImColor PointC = IM_COL32(234,209,220,250);
                     ImColor Point = IM_COL32(0,250,154,125);
                     ImColor Color = IM_COL32(0,255,255,125);
                     ImColor PointColor = IM_COL32(255,192,203,125);                    
                                          
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 50.f, PointC, 1000);    
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 88.f, Point, 1000);  
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 120.f, Color, 1000);  
                     draw->AddCircle(ImVec2(RadarCenterX, RadarCenterY), 150.f, PointColor, 1000);    
                     draw->AddCircleFilled(ImVec2(RadarCenterX + 0.5f, RadarCenterY + 0.5f), 3.f, PointColor, 1000); 
			

                 }
                 }
                               
                         
              
				//=============ESP=================//
				for (int i = 0; i < Actors.size(); i++)
				{
					auto Actor = Actors[i];
					if (isObjectInvalid(Actor))
						continue;
					if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
					{
						auto Player = (ASTExtraPlayerCharacter *)Actor;
                        long PBox, PLine, PSkeleton;
                        ImColor 颜色 = ImColor(队伍颜色(Player->TeamID));
                        long PlayerBoxClrCf = IM_COL32(223,0,41, 255);
                        long PlayerBoxClrCf2 = IM_COL32(223,0,41, 25);
						float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
						if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
                            PlayerBoxClrCf = IM_COL32(0,255,0, 255);
                            PlayerBoxClrCf2 = IM_COL32(0,255,0, 25);
                        }
						
							
	          			if (Distance > 500.0f)//默认绘制距离
							continue;
							
					    
						if (Player->PlayerKey == localController->PlayerKey)
							continue;
					    if (!Config.PlayerESP.Team)
						if (Player->TeamID == localController->TeamID)
							continue;
						if (Config.PlayerESP.WALL)
					    if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                        continue;
						if (Player->bDead)
							continue;
						if (!Player->Mesh)
							continue;
						if (localController->LineOfSightTo(Player, {0, 0, 0}, true))
						oozing++;
						if (Player->bIsAI)
						{
					 		totalBots++;
	  	     				PBox = ToColor(Config.ColorsESP.BVBox);
                            PLine = ToColor(Config.ColorsESP.BVLine);
                            PSkeleton = ToColor(Config.ColorsESP.BVSkeleton);
                            if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                            {
                                PBox = ToColor(Config.ColorsESP.BVIBox);
                                PLine = ToColor(Config.ColorsESP.BVILine);
                                PSkeleton = ToColor(Config.ColorsESP.BVISkeleton);
                            }
						} else {
							totalEnemies++;
	  	     				PBox = ToColor(Config.ColorsESP.PVBox);
                            PLine = ToColor(Config.ColorsESP.PVLine);
                            PSkeleton = ToColor(Config.ColorsESP.PVSkeleton);
                            if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                            {
                                PBox = ToColor(Config.ColorsESP.PVIBox);
                                PLine = ToColor(Config.ColorsESP.PVILine);
                                PSkeleton = ToColor(Config.ColorsESP.PVISkeleton);
                            }
						}

						
						if (Config.雷达) 
					 {
					 if (Config.PlayerESP.RadarZX == RADAR::KR) {
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
               坐标.X = Config.RadarX*10;
               坐标.Y = Config.RadarY*10;
               struct Vector3 Size;
               Size.X = 200; //Width of Radar Box. 雷达箱的宽度
               Size.Y = 210; //Height of Radar Box. 雷达箱的高度
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
                            const auto new_point_x = (glWidth / 2) + (55) / 2 * 8 * cosf(angle_yaw_rad);
                            const auto new_point_y = (glHeight / 2) + (55) / 2 * 8 * sinf(angle_yaw_rad);
                            std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
                            RotateTriangle(points, angle.Y + 180.f);
                            draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y),颜色, 1.5f);
                           
            }
		}
		
		if (Config.PlayerESP.RadarZX == RADAR::QZ) {
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
               坐标.X = Config.RadarX*10;
               坐标.Y = Config.RadarY*10;
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
                            const auto new_point_x = (glWidth / 2) + (55) / 2 * 8 * cosf(angle_yaw_rad);
                            const auto new_point_y = (glHeight / 2) + (55) / 2 * 8 * sinf(angle_yaw_rad);
                            std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
                            RotateTriangle(points, angle.Y + 180.f);
                            draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y),颜色, 1.5f);
                           
            }
		}
		if (Config.PlayerESP.RadarZX == RADAR::DNA) 
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
               坐标.X = Config.RadarX*10;
               坐标.Y = Config.RadarY*10;
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
                            const auto new_point_x = (glWidth / 2) + (55) / 2 * 8 * cosf(angle_yaw_rad);
                            const auto new_point_y = (glHeight / 2) + (55) / 2 * 8 * sinf(angle_yaw_rad);
                            std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
                            RotateTriangle(points, angle.Y + 180.f);
                            draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y),颜色, 1.5f);
                           
            }
		}}
						
						if (Config.PlayerESP.NoBot)
							if (Player->bIsAI)
								continue;
					
								//totalEnemies++;
						auto HeadPos = Player->GetBonePos("Head", {});
						ImVec2 HeadPosSC;
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
						if (W2S(HeadPos, (FVector2D *)&HeadPosSC) && W2S(upper_r, (FVector2D *)&upper_rPoSC) && W2S(upper_l, (FVector2D *)&upper_lPoSC) && W2S(lowerarm_r, (FVector2D *)&lowerarm_rPoSC) && W2S(hand_r, (FVector2D *)&hand_rPoSC) && W2S(lowerarm_l, (FVector2D *)&lowerarm_lSC) && W2S(hand_l, (FVector2D *)&hand_lPoSC) && W2S(thigh_l, (FVector2D *)&thigh_lPoSC) && W2S(calf_l, (FVector2D *)&calf_lPoSC) && W2S(foot_l, (FVector2D *)&foot_lPoSC) && W2S(thigh_r, (FVector2D *)&thigh_rPoSC) && W2S(calf_r, (FVector2D *)&calf_rPoSC) && W2S(foot_r, (FVector2D *)&foot_rPoSC) && W2S(neck_01, (FVector2D *)&neck_01PoSC) && W2S(pelvis, (FVector2D *)&pelvisPoSC) && W2S(RootPos, (FVector2D *)&RootPosSC))
						{
                            FVector2D location(RootPosSC.x, HeadPosSC.y);
					
				
						if (Config.PlayerESP.开启线条) {
							if (Config.PlayerESP.上) {
	draw->AddLine({(float)glWidth / 2, 0}, HeadPosSC, PLine, 1.0f);
                        }
				
							if (Config.PlayerESP.中) {
                            draw->AddLine({(float)glWidth / 2, 358}, HeadPosSC, PLine, 1.0f);
                            }
                            
                          if (Config.PlayerESP.下) {			
                     draw->AddLine({(float)glWidth / 2, 716}, HeadPosSC, PLine, 1.0f);
											  }			}
						
						

						
						                        if (Config.动作) {
                                float boxWidth = density / 1.8f;
                                boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance,
                                                     boxWidth / 2);
                                float boxHeight = boxWidth * 0.19f;
                                            auto PlayerStat = playerstatus(Player->CurrentStates);
                                            std::string s = "当前状态:[";
                                             s += PlayerStat;
                                             s += "]";
                                            if (PlayerStat != "") {
                                            绘制加粗文本2(19,HeadPosSC.x - (boxWidth / 3)  - 60,
                                               HeadPosSC.y - 105,
                                              白色,黄色,s.c_str());
                                            }
                                            }
                                            
                                         if (Config.手持) {
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
                                         
                                         
                        if (wppp == NULL) {
                        wep +="空手";
                        } else {
                        for (auto & category : itemsss_datakl) {
						for (auto & item : category["Items"]) {
						if (item["itemId"] == wppp) {
					  //tc = strtoul(item["itemTextColor"].get<std::string>().c_str(), 0, 16);
						wep += item["itemName"].get<std::string>();
						break;
						}}}}
                                         
                                         
                                         
                                         
                                          /*  switch (wppp) {
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

                                                    
                                                    case 1010011:
                                                        wep +="AKM-[破损]";
                                                    break;
                                                    case 1010012:
                                                        wep +="AKM-[修复]";
                                                    break;
                                                    case 1010013:
                                                        wep +="AKM-[完好]";
                                                    break;
                                                    case 1010014:
                                                        wep +="AKM-[改进]";
                                                    break;
                                                    case 1010015:
                                                        wep +="AKM-[精致]";
                                                    break;
                                                    case 1010016:
                                                        wep +="AKM-[独眼蛇]";
                                                    break;
                                                    case 1010017:
                                                        wep +="AKM-[钢铁阵线]";
                                                    break;
                                                    
                                                    
                                                    case 1030121:
                                                        wep +="AMR-[破损]";
                                                    break;
                                                    case 1030122:
                                                        wep +="AMR-[修复]";
                                                    break;
                                                    case 1030123:
                                                        wep +="AMR-[完好]";
                                                    break;
                                                    case 1030124:
                                                        wep +="AMR-[改进]";
                                                    break;
                                                    case 1030125:
                                                        wep +="AMR-[精致]";
                                                    break;
                                                    case 1030126:
                                                        wep +="AMR-[独眼蛇]";
                                                    break;
                                                    case 1030127:
                                                        wep +="AMR-[钢铁阵线]";
                                                    break;
                                                    
                                                    
                                                    case 1010121:
                                                        wep +="蜜獾突击步枪-[破损]";
                                                    break;
                                                    case 1010122:
                                                        wep +="蜜獾突击步枪-[修复]";
                                                    break;
                                                    case 1010123:
                                                        wep +="蜜獾突击步枪-[完好]";
                                                    break;
                                                    case 1010124:
                                                        wep +="蜜獾突击步枪-[改进]";
                                                    break;
                                                    case 1010125:
                                                        wep +="蜜獾突击步枪-[精致]";
                                                    break;
                                                    case 1010126:
                                                        wep +="蜜獾突击步枪-[独眼蛇]";
                                                    break;
                                                    case 1010127:
                                                        wep +="蜜獾突击步枪-[钢铁阵线]";
                                                    break;
                                                    
                                                    
                                                    


                                                    
                                                    
                                                default:
                                                wep +="未收录 ID: [";
                                                wep += wppp;
                                                wep +="]";
                                                
                                                
                                                    break;
                                            }*/
                                            
                                        
                                   wep += "[";
                                   
                                   wep += std::to_string((int)当前子弹);
                                   wep += "/";
                                   wep += std::to_string((int)最大子弹);
                                   wep += "]";


                               
                                
                                 float boxWidth = density / 1.8f;
                                boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance,
                                                     boxWidth / 2);
                                float boxHeight = boxWidth * 0.19f;
                
                            auto textSize = ImGui::CalcTextSize2(wep.c_str(), 0, ((float) density / 28.0f));
                            绘制加粗文本2(19,HeadPosSC.x - (boxWidth / 3)  -60,HeadPosSC.y - 120,白色,黄色,wep.c_str());
                 
                             }
                           }
                           
                          
                         }
                         
                         }
						

						
						
                        int PSkeleton =  IM_COL32( 255, 255, 255, 255 );
                        int PSkeleton2 =  IM_COL32( 255, 255, 000, 255 );
						int	SCOLOR2 =  IM_COL32( 000, 255, 000, 255 );
				        int SCOLOR = IM_COL32( 255, 000, 000, 255 );
						if (Config.PlayerESP.Skeleton) {
                                float boxWidth = 7.f - Distance * 0.05;
                        
                        
                        if (Player->bIsAI) {
                        
                        if(!localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, false))
						{
						

						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, neck_01PoSC, PSkeleton2,1.0f );
						}else
						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, neck_01PoSC, PSkeleton,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, false))
						{
						

						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, neck_01PoSC, PSkeleton2,1.0f );
						}else
						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, neck_01PoSC, PSkeleton,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, false))
						{
						

						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, lowerarm_rPoSC,PSkeleton2, 1.0f );
						}else
						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, lowerarm_rPoSC,PSkeleton, 1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_r, false))
						{
						

						draw->AddLine( { lowerarm_rPoSC.x, lowerarm_rPoSC.y }, hand_rPoSC,PSkeleton2, 1.0f );
						}else
						draw->AddLine( { lowerarm_rPoSC.x, lowerarm_rPoSC.y }, hand_rPoSC,PSkeleton, 1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, false))
						{
						

						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, lowerarm_lSC, PSkeleton2,1.0f );
						}else
						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, lowerarm_lSC, PSkeleton,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_l, false))
						{
						
						
						draw->AddLine( { lowerarm_lSC.x, lowerarm_lSC.y }, hand_lPoSC, PSkeleton2,1.0f );
						}else
						draw->AddLine( { lowerarm_lSC.x, lowerarm_lSC.y }, hand_lPoSC, PSkeleton,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_l, false))
						{
						
						
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, thigh_lPoSC, PSkeleton2,1.0f );
						}else
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, thigh_lPoSC, PSkeleton,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_l, false))
						{
						
						
						draw->AddLine( { thigh_lPoSC.x, thigh_lPoSC.y }, calf_lPoSC, PSkeleton2,1.0f );
						}else
						draw->AddLine( { thigh_lPoSC.x, thigh_lPoSC.y }, calf_lPoSC, PSkeleton,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_l, false))
						{
						
						
						draw->AddLine( { calf_lPoSC.x, calf_lPoSC.y }, foot_lPoSC, PSkeleton2,1.0f );
						}else
						draw->AddLine( { calf_lPoSC.x, calf_lPoSC.y }, foot_lPoSC, PSkeleton,1.0f );
					    
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_r, false))
						{
						
						
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, calf_rPoSC, PSkeleton2,1.0f );
						}else
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, calf_rPoSC, PSkeleton,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_r, false))
						{
						
						
						draw->AddLine( { calf_rPoSC.x, calf_rPoSC.y }, foot_rPoSC, PSkeleton2,1.0f );
						}else
						draw->AddLine( { calf_rPoSC.x, calf_rPoSC.y }, foot_rPoSC, PSkeleton,1.0f );
						
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, pelvis, false))
						{
						
						
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, pelvisPoSC, PSkeleton2,1.0f );
						}else
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, pelvisPoSC, PSkeleton,1.0f );
						
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, HeadPos, false))
						{
						
						
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, HeadPosSC, PSkeleton2,1.0f );
						}else
						
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, HeadPosSC, PSkeleton,1.0f );
                        
                        
                        } else {
				        if(!localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, false))
						{
						

						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, neck_01PoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, neck_01PoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, neck_01, false))
						{
						

						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, neck_01PoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, neck_01PoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, false))
						{
						

						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, lowerarm_rPoSC,SCOLOR2, 1.0f );
						}else
						draw->AddLine( { upper_rPoSC.x, upper_rPoSC.y }, lowerarm_rPoSC,SCOLOR, 1.0f );
						
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_r, false))
						{
						

						draw->AddLine( { lowerarm_rPoSC.x, lowerarm_rPoSC.y }, hand_rPoSC,SCOLOR2, 1.0f );
						}else
						draw->AddLine( { lowerarm_rPoSC.x, lowerarm_rPoSC.y }, hand_rPoSC,SCOLOR, 1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, lowerarm_r, false))
						{
						

						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, lowerarm_lSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { upper_lPoSC.x, upper_lPoSC.y }, lowerarm_lSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, hand_l, false))
						{
						
						
						draw->AddLine( { lowerarm_lSC.x, lowerarm_lSC.y }, hand_lPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { lowerarm_lSC.x, lowerarm_lSC.y }, hand_lPoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, thigh_l, false))
						{
						
						
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, thigh_lPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, thigh_lPoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_l, false))
						{
						
						
						draw->AddLine( { thigh_lPoSC.x, thigh_lPoSC.y }, calf_lPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { thigh_lPoSC.x, thigh_lPoSC.y }, calf_lPoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_l, false))
						{
						
						
						draw->AddLine( { calf_lPoSC.x, calf_lPoSC.y }, foot_lPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { calf_lPoSC.x, calf_lPoSC.y }, foot_lPoSC, SCOLOR,1.0f );
					    
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, calf_r, false))
						{
						
						
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, calf_rPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { thigh_rPoSC.x, thigh_rPoSC.y }, calf_rPoSC, SCOLOR,1.0f );
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, foot_r, false))
						{
						
						
						draw->AddLine( { calf_rPoSC.x, calf_rPoSC.y }, foot_rPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { calf_rPoSC.x, calf_rPoSC.y }, foot_rPoSC, SCOLOR,1.0f );
						
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, pelvis, false))
						{
						
						
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, pelvisPoSC, SCOLOR2,1.0f );
						}else
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, pelvisPoSC, SCOLOR,1.0f );
						
						
						if(!localController->LineOfSightTo(localController->PlayerCameraManager, HeadPos, false))
						{
						
						
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, HeadPosSC, SCOLOR2,1.0f );
						}else
						
						draw->AddLine( { neck_01PoSC.x, neck_01PoSC.y }, HeadPosSC, SCOLOR,1.0f );
					}}
					    
					    
					    
					    if (Config.PlayerESP.Box) {
					    
					    if (触摸对象队伍 == Player->TeamID) {
				
		
								float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
								float boxWidth = boxHeight * 0.65f;
								ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y};
								ImVec2 vEnd = {vStart.x + boxWidth, vStart.y + boxHeight};
								draw->AddRect(vStart, vEnd, IM_COL32(255,255,0,255), 1.0f);
							} else {
							float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
								float boxWidth = boxHeight * 0.65f;
								ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y};
								ImVec2 vEnd = {vStart.x + boxWidth, vStart.y + boxHeight};
								draw->AddRect(vStart, vEnd, PBox, 0.8f);
							}}
							



							
							
							        if (Config.PlayerESP.Health) {
                                int CurHP = (int) std::max(0, std::min((int) Player->Health,
                                                                       (int) Player->HealthMax));
                                int MaxHP = (int) Player->HealthMax;

                                long HPColor = IM_COL32(
                                        std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255),
                                        std::min((510 * CurHP) / MaxHP, 255), 0, 155);

                                if (Player->Health == 0.0f && !Player->bDead) {
                                    HPColor = IM_COL32(255, 0, 0, 155);

                                    CurHP = Player->NearDeathBreath;
                                    if (Player->NearDeatchComponent) {
                                        MaxHP = Player->NearDeatchComponent->BreathMax;
                                    }
                                }

                                float boxWidth = density / 1.6f;
                                boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance,
                                                     boxWidth / 2);
                                float boxHeight = boxWidth * 0.07f;


                                ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2),
                                                 HeadPosSC.y - (boxHeight * 1.9f)};

                                ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP),
                                                     vStart.y + boxHeight};
                                ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};

                                draw->AddRectFilled(vStart, vEndFilled, HPColor);
                                draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 155));
                            }
                            

                                               if (Config.PlayerESP.Health) {
                            int CurHP = (int) std::max(0, std::min((int) Player->Health, (int) Player->HealthMax));
                            int MaxHP = (int) Player->HealthMax;
                            long HPColor = IM_COL32(
                            std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min((510 * CurHP) / MaxHP, 255), 0, 155);
                            if (Player->Health == 0.0f && !Player->bDead) {
                                HPColor = IM_COL32(255, 0, 0, 155);
                                CurHP = Player->NearDeathBreath;
                                if (Player->NearDeatchComponent) {
                                    MaxHP = Player->NearDeatchComponent->BreathMax;
                                }
                            }
                           // float boxWidth = density / 1.9f;
                            float boxWidth = density / 1.6f; //Panjang
                            boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance, boxWidth / 2);
                            float boxHeight = boxWidth * 0.05f; //ori 0.02 //0.05
                            ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y - (boxHeight * 2.1f)}; //ori 7,9 //2.1
                            ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP),  vStart.y + boxHeight};
                            ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};
                            draw->AddRectFilled(vStart, vEndFilled, HPColor);
							draw->AddRect(vStart, vEndRect,HPColor);
                          //  draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 155));
                        }///血量显示
                        
                        

                        

                         if (Config.PlayerESP.Name) {
                            float boxWidth = density / 1.6f;
                            boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance, boxWidth / 2);
                            float boxHeight = boxWidth * 0.11f;
                            ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y - (boxHeight * 2.1f)}; //1.60
                            ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};
                            draw->AddRectFilled(vStart, vEndRect, GetRandomColorByIndex(Player->TeamID));				
                        }
                        
                       
                         if (Config.PlayerESP.TeamID) {
                         
                         
                                float boxWidth = density / 1.9f;
                            boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance, boxWidth / 2);
                            float boxHeight = boxWidth * 0.15f;
                            std::string s;
                            
                            if (Player->bIsAI)
                                s +="NO";//人机队伍ID
                                else
                            /*
                            if(Player->TeamID == 996)
                                s +="";//人机队伍ID
                                else*/
                            s += std::to_string(Player->TeamID);
                            if (Player->bIsAI) {    
                            draw->AddText(NULL, ((float) density / 28.0f), {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y - (boxHeight * 1.80f)}, IM_COL32(255, 255, 255, 255), s.c_str());
                            } else {
                            draw->AddText(NULL, ((float) density / 28.0f), {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y - (boxHeight * 1.80f)}, IM_COL32(255, 255, 0, 255), s.c_str());
                            }
                        }
                         if (Config.PlayerESP.Name) {
                            float boxWidth = density / 1.8f;
                                boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance,
                                                     boxWidth / 2);
                                float boxHeight = boxWidth * 0.19f;


                                std::string s;
                                if (Player->bIsAI) {
                                    s += "  BOT ";
                                    s += Player->PlayerName.ToString();
                                } else {
                                    s += Player->PlayerName.ToString();
                                }
                                if (Player->bIsAI) {
                                draw->AddText(NULL, ((float) density / 30.0f),
                                              {HeadPosSC.x - (boxWidth / 3),
                                               HeadPosSC.y - (boxHeight * 1.33f)},
                                              IM_COL32(255, 255, 255, 255), s.c_str());
} else {
draw->AddText(NULL, ((float) density / 30.0f),
                                              {HeadPosSC.x - (boxWidth / 3),
                                               HeadPosSC.y - (boxHeight * 1.33f)},
                                              IM_COL32(255, 255, 0, 255), s.c_str());
}
                            }

                        if (Config.PlayerESP.Distance) {
                            float boxWidth = density / 1.9f;
                            boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance, boxWidth / 2);
                            float boxHeight = boxWidth * 0.15f;
                            std::string s;
                            s += std::to_string((int) Distance);
                            s += "米";
                            if (Player->bIsAI) {
                            draw->AddText(NULL, ((float) density / 28.0f), {HeadPosSC.x + (boxWidth / 3), HeadPosSC.y - (boxHeight * 1.85f)}, IM_COL32(255, 255, 255, 255), s.c_str());
                            } else {
                            draw->AddText(NULL, ((float) density / 28.0f), {HeadPosSC.x + (boxWidth / 3), HeadPosSC.y - (boxHeight * 1.85f)}, IM_COL32(255, 255, 0, 255), s.c_str());
                            }
                        }
 
						  FVector2D screen (glWidth, glHeight);
                            int borders = isOutsideSafezone(location, screen);
							if (Config.PlayerESP.Alert360 && borders != 0) {
								float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
								std::string s;
								s += std::to_string((int)Distance);
								s += "M";
								float mScale = glHeight / (float) 1080;
								auto hintDotRenderPos = pushToScreenBorder(location, screen, borders, (int)((mScale * 100) / 3));
								auto hintTextRenderPos = pushToScreenBorder(location, screen, borders, -(int)((mScale * 36)));
								draw->AddCircleFilled(ImVec2(hintDotRenderPos.X, hintDotRenderPos.Y), mScale * 100, IM_COL32(255, 0, 0, 128), 0);
								draw->AddText(NULL, ((float)density / 20.0f), ImVec2(hintTextRenderPos.X, hintTextRenderPos.Y), IM_COL32(255, 255, 255, 255), s.c_str());
							}
                            
					     }
					}					
        
        
        
        if (Config.PlayerESP.LootBox) {
                            if (Actors[i]->IsA(APickUpListWrapperActor::StaticClass())) {
                            auto DeadBox = (APickUpListWrapperActor *) Actors[i];
                            auto RootComponent = DeadBox->RootComponent;
                            if (!RootComponent)
                            continue;
                            float Distance = DeadBox->GetDistanceTo(localPlayer) / 100.0f;
                            FVector2D DeadBoxPos;
                            if (W2S(DeadBox->K2_GetActorLocation(), &DeadBoxPos)) {
                            std::string s = "";
                            s += "";
                            s += std::to_string((int) Distance);
                            s += "";
                            draw->AddText(NULL, ((float) density / 30.0f), {DeadBoxPos.X, DeadBoxPos.Y}, IM_COL32(255, 000, 000, 255), s.c_str());
                            FVector BoxSize;
                            BoxSize.X = 80.f; // Height
                            BoxSize.Y = 95.f; // Front
                            BoxSize.Z = 50.f; // Height
                            Box3D(draw, DeadBox->K2_GetActorLocation(), BoxSize, IM_COL32(255, 000, 000, 255));
                        
                                                
                                            }

                            }
                            }
																	
		if (Config.PlayerESP.LootBox) {
                    if (Actors[i]->IsA(APickUpListWrapperActor::StaticClass())) {
						auto Pick = (APickUpListWrapperActor *) Actors[i];
					    if (!Pick->RootComponent)
						continue;
						auto PickUpDataList = (TArray<FPickUpItemData>)Pick->GetDataList();
						float Distance = Pick->GetDistanceTo(localPlayer) / 100.f;
						FVector2D PickUpListsPos;
						FVector origin, extends;
						if (W2S(Pick->K2_GetActorLocation(), & PickUpListsPos)) {
						std::string s = "盒子";//ICON_FA_DROPBOX
						s += "[";
						s += std::to_string((int) Distance);
						s += "M]";
						draw->AddText(NULL, ((float) density / 30.0f), {PickUpListsPos.X, PickUpListsPos.Y}, IM_COL32(255, 255, 255, 255), s.c_str());
						if (Distance < 100.0f) {
			
						if (Config.物资 || Config.物资1) {
						
						auto mWidthScale = std::min(0.1f * Distance, 35.f);
						auto boxWidth = 75.f - mWidthScale;
						auto boxHeight = boxWidth * 0.120f;
						Rect PlayerRect(PickUpListsPos.X - (boxWidth / 2), PickUpListsPos.Y, boxWidth, boxHeight);
						float posY = PickUpListsPos.Y - (PlayerRect.height * 1.00f);
						for (int j = 0; j < PickUpDataList.Num(); j++) {
						std::vector<std::string> s2;
						std::string itm;
						uint32_t tc = 0xFF000000;
						if (Config.物资) {
						for (auto & category : items_datakl) {
						for (auto & item : category["Items"]) {
						if (item["itemId"] == PickUpDataList[j].ID.TypeSpecificID) {
						tc = strtoul(item["itemTextColor"].get<std::string>().c_str(), 0, 16);
						itm += item["itemName"].get<std::string>();
						s2.push_back(itm);
						break;
						}
					    }
					    }}
					    if (Config.物资1) {
						for (auto & category : itemss_datakl) {
						for (auto & item : category["Items"]) {
						if (item["itemId"] == PickUpDataList[j].ID.TypeSpecificID) {
						tc = strtoul(item["itemTextColor"].get<std::string>().c_str(), 0, 16);
						itm += item["itemName"].get<std::string>();
						s2.push_back(itm);
						break;
						}
					    }
					    }}
						if (!s2.empty())  {
						if (PickUpDataList[j].Count > 1) {
					    s2.push_back(" * ");
						s2.push_back(std::to_string(PickUpDataList[j].Count));
					    }
						std::string s3;
						for (auto & s4 : s2)   {
						s3 += s4;
						}
						draw->AddText(NULL, ((float) density / 30.0f), {PickUpListsPos.X, posY}, tc, s3.c_str());
						posY -= PlayerRect.height * 1.00f;
						}
					}
				
			}}
		}
	}
}
                        if (Config.PlayerESP.Grenade) {
                   if (Actors[i]->IsA(ASTExtraGrenadeBase::StaticClass())) {
                      auto Grenade = (ASTExtraGrenadeBase *) Actors[i];
                      
                         auto RootComponent = Grenade->RootComponent;
                            if (!RootComponent)
                                continue;
                                
                            float Distance =
                                    Grenade->GetDistanceTo(localPlayer) / 100.f;
                            if (Distance > 50.0f) {
							
								draw->AddText(nullptr, ((float) density / 10.5f),
                                  ImVec2(glWidth / 2 - 225, 120), IM_COL32(255, 0, 0, 255),
                                  "!!小心附近投掷物!!");
                                  }
                          FVector2D GrenadePos;
                        if (W2S(Grenade->K2_GetActorLocation(), &GrenadePos)) {
                            std::string s = "投掷物";
                            s += "[";
                            s += std::to_string((int) Distance);
                            s += "米]";
                                       
                            draw->AddText(NULL, ((float) density / 25.0f), {GrenadePos.X, GrenadePos.Y}, IM_COL32(255, 0, 0, 255), s.c_str());

                                   }
                                
                            }
                       }
                       
                       
                       
                       if (空投) {
                    if (Actors[i]->IsA(AAirDropBoxActor::StaticClass())) {
                        auto DropBox = (AAirDropBoxActor *) Actors[i];

                        auto RootComponent = DropBox->RootComponent;
                        if (!RootComponent)
                            continue;
                        float Distance = DropBox->GetDistanceTo(localPlayer) / 100.f;
                        FVector2D DropBoxPos;
                        if (W2S(DropBox->K2_GetActorLocation(), &DropBoxPos)) {
                            std::string s = "空投";
                            s += " [";
                            s += std::to_string((int) Distance);
                            s += "米]";
                            draw->AddText(NULL, ((float) density / 25.0f), {DropBoxPos.X, DropBoxPos.Y}, IM_COL32(255, 255, 255, 255), s.c_str());

                        }
                    }
                }
                       
if (加速开) {
g_LocalPlayer->STPlayerController->AcknowledgedPawn->CustomTimeDilation = 4.0f;
}

                       
                       if (飞机) {
                    if (Actors[i]->IsA(AAirDropPlane::StaticClass())) {
                        auto AirDropPlane = (AAirDropPlane *) Actors[i];

                        auto RootComponent = AirDropPlane->RootComponent;
                        if (!RootComponent)
                            continue;
                        float Distance = AirDropPlane->GetDistanceTo(localPlayer) / 100.f;
                        FVector2D AirDropPlanePos;
                        if (W2S(AirDropPlane->K2_GetActorLocation(), &AirDropPlanePos)) {
                            std::string s = "飞机";
                            s += " [";
                            s += std::to_string((int) Distance);
                            s += "米]";
                            draw->AddText(NULL, ((float) density / 25.0f), {AirDropPlanePos.X, AirDropPlanePos.Y}, IM_COL32(255, 255, 255, 255), s.c_str());

                        }
                    }
                }
             /*          //自动开火

if (Config.自动开火ON) {
                   if (!localController->LineOfSightTo(Actor, {0, 0, 0}, true)) {
                    g_LocalController->bIsPressingFireBtn = false;
                         }else{
                    g_LocalController->bIsPressingFireBtn = true;
                   }
                   }*/
                       

                     
                       
             
                       
					if (Config.PlayerESP.Vehicle)
					{
						if (Actors[i]->IsA(ASTExtraVehicleBase::StaticClass()))
						{
							auto Vehicle = (ASTExtraVehicleBase *)Actors[i];
							if (!Vehicle->Mesh)
								continue;
							int CurHP = (int) std::max(0, std::min((int) Vehicle->VehicleCommon->HP, (int) Vehicle->VehicleCommon->HPMax));
                            int MaxHP = (int) Vehicle->VehicleCommon->HPMax;
                            long curHP_Color = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((510 * CurHP) / MaxHP), 255), 0, 155);
							float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
							FVector2D vehiclePos;
							if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos))
							{
								auto mWidthScale = std::min(0.10f * Distance, 50.f);
								auto mWidth = 70.f - mWidthScale;
								auto mHeight = mWidth * 0.15f;
									std::string s = GetVehicleName(Vehicle);
				     				s += " ";
						    		s += std::to_string((int)Distance);
					    			s += "米";
				     	    		draw->AddText(NULL, ((float)density / 30.0f), {vehiclePos.X - (mWidth / 2), vehiclePos.Y}, ToColor(Config.ColorsESP.Vehicle), s.c_str());
									std::string sf;
						    		sf += "油量:";
			                        sf += std::to_string((int)(100 * Vehicle->VehicleCommon->Fuel / Vehicle->VehicleCommon->FuelMax));
                                    sf += "";
		    	    		    	draw->AddText(NULL, ((float)density / 30.0f), {vehiclePos.X - (mWidth / 2), vehiclePos.Y + 15.f}, IM_COL32(255, 255, 255, 255), sf.c_str());
                                    ImVec2 vStart = {vehiclePos.X - (mWidth / 2), vehiclePos.Y - (mHeight * 1.5f)};
                                    ImVec2 vEndFilled = {vStart.x + (CurHP * mWidth / MaxHP), vStart.y + mHeight};
                                    ImVec2 vEndRect = {vStart.x + mWidth, vStart.y + mHeight};
                                    draw->AddRectFilled(vStart, vEndFilled, curHP_Color, 3.2f, 240);
                                    draw->AddRect(vStart, vEndRect, IM_COL32(255, 255, 255, 255), 3.2f, 240);
							}
						}
					}
					
					
/*					if (Actors[i]->IsA(APickUpWrapperActor::StaticClass()))
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
								for (auto &category : items_datakl)
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
								for (auto &category : itemss_datakl)
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
								s += " 距离你:";
								s += std::to_string((int)Distance);
								s += "米";
								draw->AddText(NULL, ((float)density / 25.0f), {itemPos.X, itemPos.Y}, ToColor(Config.ColorsESP.Items), s.c_str());
							}
						}
					}*/
				}
			}
		}

    
                 
/*
     ImGui::GetForegroundDrawList()->AddRectFilled({glWidth /2-50,40},{glWidth /2,80},ImColor(255, 0, 0,100));
       ImGui::GetForegroundDrawList()->AddRectFilled({glWidth /2+50,40},{glWidth /2,80},ImColor(3, 255, 40,100)); 
       sprintf(extra, "%d", totalEnemies);
       ImGui::GetForegroundDrawList()->AddText({glWidth /2-35,45}, ImColor(255,255,255), extra);
       sprintf(extra, "%d", totalBots);
      ImGui::GetForegroundDrawList()->AddText({glWidth /2+15,45}, ImColor(255,255,255), extra);*/
      
      
      
      //人数显示  NIKE PLUS
      g_LocalController = localController;
       g_LocalPlayer = localPlayer;
     
         if (totalEnemies == 0 && totalBots == 0) {
         Drive = false;
         } else {
         Drive = true;
         }
				
    int TotalCount = totalEnemies;
       ImGui::GetForegroundDrawList()->AddRectFilled({glWidth /2-100,40},{glWidth /2-50,80},ImColor(0, 0, 0, 255));
       ImGui::GetForegroundDrawList()->AddRectFilled({glWidth /2-50,40},{glWidth /2,80},ImColor(255, 0, 0, 255));
       ImGui::GetForegroundDrawList()->AddRectFilled({glWidth /2+50,40},{glWidth /2,80},ImColor(0, 255, 0, 255)); 
       ImGui::GetForegroundDrawList()->AddRectFilled({glWidth /2+100,40},{glWidth /2+50,80},ImColor(255, 255, 0, 255));
       
       sprintf(extra, "%d", oozing);
       ImGui::GetForegroundDrawList()->AddText({glWidth /2-85,45}, ImColor(255,255,255), extra);
       sprintf(extra, "%d", totalEnemies);
       ImGui::GetForegroundDrawList()->AddText({glWidth /2-35,45}, ImColor(255,255,255), extra);
       sprintf(extra, "%d", totalBots);
      ImGui::GetForegroundDrawList()->AddText({glWidth /2+15,45}, ImColor(255,255,255), extra);
      sprintf(extra, "%d", totalBots + totalEnemies);
      ImGui::GetForegroundDrawList()->AddText({glWidth /2+65,45}, ImColor(0,0,0), extra);
      
      
		fps.update();
	}
	}
	
	










// ======================================================================== //
/*
style->ScrollbarRounding = 0.2f;
//滑动条大小
style->ScrollbarSize *= 0.5f;
//窗体边框圆角
style->WindowRounding = 2.0f;
//框架圆角
style->FrameRounding = 1.0f;
//框架边界大小
style->FrameBorderSize = 0.0f;
//主题边界大小
style->WindowBorderSize = 0.0f;
//未知 边界大小
style->ChildBorderSize = 0.0f;
//选项卡圆角
style->TabRounding = 1.0f;
*/

///>/>NIKE UI AIDE C＋＋ imgui
#define IM_CLAMP(V, MN, MX)     ((V) < (MN) ? (MN) : (V) > (MX) ? (MX) : (V))
namespace Settings
{
static int Tab = 1;
}
EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface)
{
	eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
	eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
	if (glWidth <= 0 || glHeight <= 0)
		return orig_eglSwapBuffers(dpy, surface);

	if (!g_App)
		return orig_eglSwapBuffers(dpy, surface);

	screenWidth = ANativeWindow_getWidth(g_App->window);
	screenHeight = ANativeWindow_getHeight(g_App->window);
	density = AConfiguration_getDensity(g_App->config);
  if (!initImGui) {
        ImGui::CreateContext();
        

        ImGuiStyle& style = ImGui::GetStyle();
				  
				//  style.FrameBorderSize = 1.5f;
		
        

             ImGui::StyleColorsLight();
         style.ScaleAllSizes(std::max(2.5f, density / 400.0f));
          style.ScrollbarSize *= 1.0f;

        
            ImGui_ImplAndroid_Init();
            ImGui_ImplOpenGL3_Init("#version 300 es");

            ImGuiIO &io = ImGui::GetIO();

            io.ConfigWindowsMoveFromTitleBarOnly = true;
            io.IniFilename = NULL;

            static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
            ImFontConfig icons_config;

            ImFontConfig CustomFont;
            CustomFont.FontDataOwnedByAtlas = false;

            icons_config.MergeMode = true;
            icons_config.PixelSnapH = true;
            icons_config.OversampleH = 2.5;
            icons_config.OversampleV = 2.5;
           
ImFontConfig cfg;//内存字体//
cfg.SizePixels = ((float) density / 20.0f);
io.Fonts->AddFontFromMemoryTTF((void *)NIKE_data, NIKE_size, 20.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 20.0f, &icons_config, icons_ranges);

memset(&Config, 0, sizeof(sConfig));
        Config.ColorsESP.PVLine = CREATE_COLOR(0, 255, 0, 255);
        Config.ColorsESP.PVILine = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.BVLine = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.BVILine = CREATE_COLOR(255, 255, 255, 255);
   //     Config.ColorsESP.Linebot = CREATE_COLOR(333, 62, 0, 255);
        Config.ColorsESP.PVBox = CREATE_COLOR(0, 255, 0, 255);
        Config.ColorsESP.PVIBox = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.BVBox = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.BVIBox = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.PVSkeleton = CREATE_COLOR(0, 255, 0, 255);
        Config.ColorsESP.PVISkeleton = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.BVSkeleton = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.BVISkeleton = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Name = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.TeamID = CREATE_COLOR(255, 254, 0, 255);
        Config.ColorsESP.Distance = CREATE_COLOR(255, 255, 255, 255);
        Config.ColorsESP.Vehicle = CREATE_COLOR(255, 255, 255, 255); 
        Config.ColorsESP.Items = CREATE_COLOR(255, 0, 0, 255);    
        Config.ColorsESP.Itemss = CREATE_COLOR(255, 0, 0, 255);
        Config.ColorsESP.Itemsss = CREATE_COLOR(255, 0, 0, 255);
		Config.ColorsESP.Fov = CREATE_COLOR(255, 255, 255, 255);
        Config.SilentAim.Cross  = 0.0f;
        Aim10 = 13.000f;
        Aim50 = 46.561f;
        Aim100 = 135.450f;
        Aim150 = 198.942f;
        Aim200 = 304.762f;
        Aim250 = 387.302f;
        Aim300 = 399.999f;
        Config.压枪系数  = 0.0f;
         Config.X轴  = 0.0f;
          Config.Y轴  = 0.0f;
          Config.后坐力  = 0.0f;
          Config.子弹射速  = 0.0f;
          Config.Less =0.0f;
          颜色初始化();
initImGui = true;
}
//NIKE IMGUI Hack4.0
        ImGuiIO &io = ImGui::GetIO();
        
 
        
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
        ImGui::NewFrame();
        
        


	DrawESP(ImGui::GetBackgroundDrawList());
	

            
             if (!隐藏窗口) {
           
             
             			if (变色) {
static double s0 = 0.0;
ImGui::PushStyleColor(ImGuiCol_Border, ImXmas::Rainbow(s0));
}






				
				if (Slow提示) {
             if (Slow提示1) {
             if (ImGui::Begin(OBFUSCATE("作者提示"), 0, ImGuiWindowFlags_NoBringToFrontOnFocus )) {
             ImGui::Text("提示: \n  本直装为64位直装.\n  点击确定即可开始.");
             if (ImGui::Button("确定", ImVec2(100, 40))) {
             Slow提示1 = false;
             }}}}
             
             
             if (tyyuyUI) {
             if (ImGui::Begin(OBFUSCATE("UI"), 0, ImGuiWindowFlags_NoBringToFrontOnFocus )) {
             ImGui::Text("请等待更新修复");
             
          ImGui::Checkbox("滑动条大小", &Config.Crash1);
             
             ImGui::Checkbox("滑动条大小", &Config.Crash1);
             
             ImGui::Checkbox("窗体边框圆角", &Config.Crash1);
             
             ImGui::Checkbox("框架圆角", &Config.Crash1);
             
             ImGui::Checkbox("框架边界大小", &Config.Crash1);
             
             ImGui::Checkbox("主题边界大小", &Config.Crash1);
             
             ImGui::Checkbox("选项卡圆角", &Config.Crash1);
             
             }}
             
             
             
             
             
             
             if (加速) {
if (ImGui::Begin(OBFUSCATE("加速"), 0, ImGuiWindowFlags_NoBringToFrontOnFocus )) {
if (ImGui::Button("加速开", ImVec2(230 - 15, 50)))
                  加速开 = true;
ImGui::SameLine();
if (ImGui::Button("加速关", ImVec2(230 - 15, 50)))
                  加速开 = false;
                  
if (ImGui::Button("关闭面板", ImVec2(230 - 15, 50)))
                  加速 = false;
}}

if (飞天开) {
if (ImGui::Begin(OBFUSCATE("飞天"), 0, ImGuiWindowFlags_NoBringToFrontOnFocus )) {
if (ImGui::Button("飞天开", ImVec2(230 - 15, 50)))
                  飞天 = true;
ImGui::SameLine();
if (ImGui::Button("飞天关", ImVec2(230 - 15, 50)))
                  飞天 = false;
                  
if (ImGui::Button("关闭面板", ImVec2(230 - 15, 50)))
                  飞天开 = false;
}}
				
				if (show_调试) {		          
                     ImGui::Begin("自瞄[修复]",&show_调试);     
            
   //     ImGui::Text(" -| 压 枪 数 值 |- ");
   
ImGui::Text("1-28米内压枪数值");
ImGui::SliderFloat("A", &Aim10, 0.0f, 400.0f); 
ImGui::TableNextColumn();
//ImGui::Text("28-50米以内的敌人将会使用这个压枪数值！");
ImGui::Text("28-50米内压枪数值");
ImGui::SliderFloat("B", &Aim50, 0.0f, 400.0f); 
ImGui::TableNextColumn();
//ImGui::Text("50米到100米以内的敌人将会使用这个压枪数值！");
ImGui::Text("50-100米内压枪数值");
ImGui::SliderFloat("C", &Aim100, 0.0f, 400.0f); 
ImGui::TableNextColumn();
//ImGui::Text("100米到150米以内的敌人将会使用这个压枪数值！");
ImGui::TableNextColumn();
ImGui::Text("100-150米内压枪数值");
ImGui::SliderFloat("D", &Aim150, 0.0f, 400.0f);
ImGui::TableNextColumn();
//ImGui::Text("150米到200米以内的敌人将会使用这个压枪数值！");
ImGui::TableNextColumn();
ImGui::Text("150-200米内压枪数值");
ImGui::SliderFloat("E", &Aim200, 0.0f, 400.0f);
ImGui::TableNextColumn();
//ImGui::Text("200米到250米以内的敌人将会使用这个压枪数值！");
ImGui::Text("200-250米内压枪数值");
ImGui::SliderFloat("F", &Aim250, 0.0f, 400.0f);
ImGui::TableNextColumn();
//ImGui::Text("250米到300米以内的敌人将会使用这个压枪数值！");
ImGui::Text("250-300米内压枪数值");
ImGui::SliderFloat("G", &Aim300, 0.0f, 400.0f);
//ImGui::Text("Fov");
             }
	
 
//width=宽
//height=长




             

             
             if (!Login赢藏) {
             
        if (ImGui::Begin(OBFUSCATE("[PUSSY CHEAT] 卡密验证"), 0, ImGuiWindowFlags_NoBringToFrontOnFocus )) {
        
   /*     static std::string err;
        if (!showTipAlert()) {
        ImGui::Text("Login [Duplicate KEY]");
    ImGui::PushItemWidth(-1);
    ImGui::InputText("##key", s, sizeof(s));


    if (ImGui::Button("PASRE KEY", ImVec2(ImGui::GetContentRegionAvailWidth(), 30))) {
        auto key = getClipboardText();
        strncpy(s, key.c_str(), sizeof(s));
    }
    

  
         
     if (ImGui::Button("LOGIN KEY", ImVec2(ImGui::GetContentRegionAvailWidth(), 30))) {
        err = Login(getHEX(加64(s)));
        if (strstr(err.c_str(),"OK")!=0)
 
   {
            code_sock = 200;
   
        } else {
            code_sock = 401;
        }
    }

    if (ImGui::Button("UNLOCK KEY", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) { 
    Unbind(s);
     }
    
    ImGui::Text("LOGIN : %s\n", err.c_str());
    if (错误提示) {
    ImGui::Text("UNLOCK : %s\n", 提示);
    }
    ImGui::PopItemWidth();

   }else{*/
 static bool isLogin = false;	
            static std::string err;
			
           if (!isLogin) {
           if (!err.empty() && err != "OK") {
                ImGui::Text("NO: %s", err.c_str());
                Login文字 = true;
                提示内容 = err.c_str();
                if (!好心提示)
                好心提示 = true;
            } 
            if (!Login文字) {
            ImGui::Text(" Please Login [Paste Key]");
           }
            ImGui::PushItemWidth(-1);
            static char s[64];
            ImGui::InputText("##key", s, sizeof s);
            ImGui::PopItemWidth();

            ImGui::PushItemWidth(-1);
            if (ImGui::Button(" PASTE KEY  ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                auto key = getClipboardText();
                strncpy(s, key.c_str(), sizeof s);
            }
            ImGui::PopItemWidth();

            ImGui::PushItemWidth(-1);


            if (ImGui::Button(" LOGIN KEY ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                err = Login(s);
                if (err == "OK") {
                    isLogin = bValid && g_Auth == g_Token;
                }
            }
            ImGui::PopItemWidth();

          /*  if (!err.empty() && err != "OK") {
                ImGui::Text("Error: %s", err.c_str());
            }*/

                ImGui::PopItemWidth();


            } else {
            
Slow提示 = true;
Login赢藏 = true;
}}}

	if (好心提示) {
             if (ImGui::Begin(OBFUSCATE("作者提示"), 0, ImGuiWindowFlags_NoBringToFrontOnFocus )) {
             ImGui::Text("提示:%s", 提示内容.c_str());
             if (ImGui::Button("确定", ImVec2(100, 40))) {
             好心提示 = false;
             }}}

//ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.85f, (float) glHeight * 0.925f), ImGuiCond_Once);
//ImGui::TableNextColumn();代表为竖着
//ImGui::SameLine();代表为横着

ImGui::SetNextWindowSize(ImVec2((float) glWidth * 0.90f, (float) glHeight * 0.80f), ImGuiCond_Once);

if (!Slow提示1) {
if (ImGui::Begin(OBFUSCATE("[PUSSY] 返回"), 0, ImGuiWindowFlags_NoBringToFrontOnFocus )) {
{
ImGui::Columns(2);
ImGui::SetColumnOffset(1, 180);
static int tab = 1;
{
if (tab == 1) {
if (ImGui::Button(">[公告]<", ImVec2(150 ,50)))
tab = 0;
} else {
if (ImGui::Button("公告", ImVec2(150 ,50)))
tab = 1;
}
if (tab == 2) {
if (ImGui::Button(">[绘制]<", ImVec2(150 ,50)))
tab = 0;
} else {
if (ImGui::Button("绘制", ImVec2(150 ,50))) 
tab = 2;
}
if (tab == 3) {
if (ImGui::Button(">[自瞄/子追]<", ImVec2(150 ,50)))
tab = 0;
} else {
if (ImGui::Button("自瞄/子追", ImVec2(150 ,50))) 
tab = 3;
}
/*if (tab == 6) {
if (ImGui::Button(">[MEMORY]<", ImVec2(150 ,50)))
tab = 0;
} else {
if (ImGui::Button("MEMORY", ImVec2(150 ,50))) 
tab = 6;
}*/
if (tab == 5) {
if (ImGui::Button(">[内存]<", ImVec2(150 ,50)))
tab = 0;
} else {
if (ImGui::Button("内存", ImVec2(150 ,50))) 
tab = 5;
}
if (tab == 4) {
if (ImGui::Button(">[其他]<", ImVec2(150 ,50)))
tab = 0;
} else {
if (ImGui::Button("其他", ImVec2(150 ,50))) 
tab = 4;
}
if (语言 == 0) {
if (ImGui::Button("[英文/ENGLISH]", ImVec2(150 ,50)))
语言 = 1;
} else {
if (ImGui::Button("[中文/CHINESE]", ImVec2(150 ,50)))
语言 = 0;
}
if (tyyuyUI) {
if (ImGui::Button(">[UI]<", ImVec2(150 ,50)))
tyyuyUI = false;
} else {
if (ImGui::Button("UI", ImVec2(150 ,50))) 
tyyuyUI = true;
}
ImGui::SameLine();
ImGui::Spacing();
ImGui::Spacing();
ImGui::Spacing();
}
//ImGui::SameLine();
ImGui::NextColumn();
//ImGui::SameLine();

if (tab == 0) {

if (!显示提示开关) {
显示小提示 = 显示小提示 + 1;
if (显示小提示 == 17) {
显示小提示 = 0;
}}
显示提示开关 = true;
if (语言 == 0) {
ImGui::Text("提示:");
if (显示小提示 == 0)
ImGui::Text("  你知道吗? 自瞄和子追不可以同时开启\n  否则会导致闪退.");
if (显示小提示 == 1)
ImGui::Text("  游戏虽开心. 但是也要照顾身体.\n  多出去走走 锻炼锻炼身体.");
if (显示小提示 == 2)
ImGui::Text("  PUBG MOBILE的地铁逃生模式\n  也有很多人在使用外挂哦.");
if (显示小提示 == 3)
ImGui::Text("  这个内部有很多小设计等你探索哦.\n  来自[作者]的提示.");
if (显示小提示 == 4)
ImGui::Text("  直装封号在所难免 不要伤心.\n  要适当的演戏 或者是使用单绘制.");
if (显示小提示 == 5)
ImGui::Text("  你知道吗? 2.2赛季的PUBG是检测\n  最高的一个赛季 当时我都要封死了.");
if (显示小提示 == 6)
ImGui::Text("  你可以尝试一下潮流主题.\n  很符合以前M4及大多数直装UI.");
if (显示小提示 == 7)
ImGui::Text("  你可以支持直装作者 [烈川] 吗.\n  他制作这个源码有6个星期了");
if (显示小提示 == 8)
ImGui::Text("  你知道吗? 直装闪退的原因是MD5校验.\n  当时2.3还好 2.4太严重了.");
if (显示小提示 == 9)
ImGui::Text("  这些功能要么是我抠出来的.\n  要么是我收到启发研究的.");
if (显示小提示 == 10)
ImGui::Text("  你知道吗? 其实这个页面是作者的一个小彩蛋.");
if (显示小提示 == 11)
ImGui::Text("  你知道吗? 有一些很贱的人\n  作者会直接踢出内部群.");
if (显示小提示 == 12)
ImGui::Text("  你知道吗? 我的朋友是PUBG内部人员.\n  有一些功能是他泄露给我的.");
if (显示小提示 == 13)
ImGui::Text("  你觉得3合1直装怎么样\n  反正作者是觉得亏大了.");
if (显示小提示 == 14)
ImGui::Text("  你知道吗? 我们原本的定价是4元\n  只不过没人买就降价了.");
if (显示小提示 == 15)
ImGui::Text("  你知道吗? 普通防闪是如果闪退了之后才使用\n  如果没有闪退使用可能会导致追封卡顿.");
if (显示小提示 == 16) {
ImGui::Text("  8484848");
if (ImGui::Button("8484848", ImVec2(160, 40))) {
提示内容 = "\nOC8KCKL \n84848 嘿嘿 \n8484848 \n84848 嘿嘿";
好心提示 = true;
}}

/*ImGui::Text("\n\n\n");
//ImGui::Text("当前时间:%s", dqsjs.c_str());
static std::string err;
ImGui::Text("查询卡密:");
   
if (isLogin123) {
            ImGui::Text("状态: 正常");
            ImGui::Text("设备: %s", device.c_str());
            ImGui::Text("名字: %s", name.c_str());
            ImGui::Text("其他: %s", floating.c_str());
            ImGui::Text("状态: %s", status.c_str());
            ImGui::Text("到期: %s", EXP.c_str());
            } else {
            if (!err.empty() && err != "OK") {
            ImGui::Text("错误: %s", err.c_str());
            
            
            
            
            
            }}
static char sss[64];
            ImGui::InputText("##keyn", sss, sizeof sss);
            ImGui::SameLine();
            if (ImGui::Button("粘贴", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                auto keynn = getClipboardText();
                strncpy(sss, keynn.c_str(), sizeof sss);
            }
            if (ImGui::Button(" 确定 ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
            isLogin123 = false;
                err = Login(sss);
            
                if (err == "OK") {
                     isLogin123 = bValid && g_Auth == g_Token;
                }
            }*/
            

            
            

} else if (语言 == 1) {
ImGui::Text("Point out:");
if (显示小提示 == 0)
ImGui::Text("  Do you know that?/You know what? Self-aiming and sub-chasing cannot be turned on at the same time \n  Otherwise it will lead to titles.");
if (显示小提示 == 1)
ImGui::Text("  Although the game is fun, you should also take care of your health. \n  Go out and exercise more.");
if (显示小提示 == 2)
ImGui::Text("  PUBG MOBILE's subway escape mode \n  Many people are also using plug-ins.");
if (显示小提示 == 3)
ImGui::Text("  There are many small designs waiting for you to explore. \n  Tips from [the author].");
if (显示小提示 == 4)
ImGui::Text("  Direct loading of titles is inevitable. Don't be sad. \n  Act properly or use single drawing.");
if (显示小提示 == 5)
ImGui::Text("  Do you know that? PUBG in 2.2 season was the highest test season \n  and I was blocked at that time.");
if (显示小提示 == 6)
ImGui::Text("  You can try the trend theme. \n  It fits the previous M4 and most direct-installed UIs.");
if (显示小提示 == 7)
ImGui::Text("  Can you support the direct author [Cory]? \n  He has been making this source code for 6 months.");
if (显示小提示 == 8)
ImGui::Text("  Do you know that? The reason for the flashback of direct loading is MD5 verification. \n  At that time, 2.3 was fine and 2.4 was too serious.");
if (显示小提示 == 9)
ImGui::Text("  I either dug up these functions. \n  Or I was inspired to study them.");
if (显示小提示 == 10)
ImGui::Text("  Do you know that? In fact, this page is a small egg of the author.");
if (显示小提示 == 11)
ImGui::Text("  Do you know that?/You know what? There are some very cheap people \n  The author will just kick out of the inner group.");
if (显示小提示 == 12)
ImGui::Text("  Do you know that? My friend is an insider of PUBG. \n  He leaked some functions to me.");
if (显示小提示 == 13)
ImGui::Text("  What do you think of the 3-in-1 interior \n  Anyway, the author thinks it's a big loss.");
if (显示小提示 == 14)
ImGui::Text("  Do you know that? Our original price was 50 yuan \n  Only the price was reduced when no one bought it.");
if (显示小提示 == 15)
ImGui::Text("  Do you know that? Ordinary anti-flash is only used if it is flashed back \n  If it is not flashed back, it may lead to blocking.");
if (显示小提示 == 16) {
ImGui::Text("  The author died.!!!");
/*if (ImGui::Button("8484848", ImVec2(160, 40))) {
提示内容 = "\nOC8KCKL \n84848 嘿嘿 \n8484848 \n84848 嘿嘿";
好心提示 = true;
}*/}

/*ImGui::Text("\n\n\n");
//ImGui::Text("当前时间:%s", dqsjs.c_str());
static std::string err;
ImGui::Text("Consulting key:");
   
if (isLogin123) {
            ImGui::Text("Normal");
            ImGui::Text("Equipment: %s", device.c_str());
            ImGui::Text("Name: %s", name.c_str());
            ImGui::Text("Other: %s", floating.c_str());
            ImGui::Text("Condition: %s", status.c_str());
            ImGui::Text("Expiration time: %s", EXP.c_str());
            } else {
            if (!err.empty() && err != "OK") {
            ImGui::Text("Herro: %s", err.c_str());
            
            
            
            
            
            }}
static char sss[64];
            ImGui::InputText("##keyn", sss, sizeof sss);
            ImGui::SameLine();
            if (ImGui::Button(" Paste ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
                auto keynn = getClipboardText();
                strncpy(sss, keynn.c_str(), sizeof sss);
            }
            if (ImGui::Button(" Sure ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
            isLogin123 = false;
                err = Login(sss);
            
                if (err == "OK") {
                     isLogin123 = bValid && g_Auth == g_Token;
                }
            }*/

}
} else {
显示提示开关 = false;
}

if (tab == 1) {
if (语言 == 0) {
if (ImGui::Button("保存配置", ImVec2(160, 40))) {
saveCFG();
}
ImGui::SameLine();
if (ImGui::Button("加载配置", ImVec2(160, 40))) {
loadCFG();
}
ImGui::SameLine();
  //   --------------------------------   \\
ImGui::Text(" --------------------------------\n |上市版本 稳定旁路|\n |无惧检测 稳定奔放|\n --------------------------------\n");


/*if (!全局离线) {
if (ImGui::Button("全局离线[ON]", ImVec2(160, 40))) {
全局离线 = true;
}} else {
if (ImGui::Button("全局离线[OFF]", ImVec2(160, 40))) {
全局离线 = false;
}}

ImGui::Text("蓝圈开 撤离死亡关 不要忘记开");*/
ImGui::Text("版本:2.5.0 : 9.9.2");
ImGui::Spacing(); 
ImGui::Checkbox("大厅开启旁路", &大厅旁路);
ImGui::Text("一定要开 不然封号不管");
//ImGui::SameLine();
//ImGui::Checkbox("大厅全防旁路", &DobyBypass);

ImGui::Checkbox("触屏隐藏", &窗口隐藏);
ImGui::Text("点击屏幕左上角x3 显示/隐藏");
ImGui::Checkbox("窗口变色", &变色);
if (ImGui::Button("潮流主题", ImVec2(160, 40))) {
ImGuiStyle& style = ImGui::GetStyle();
            style.WindowPadding = ImVec2(8, 6);
            style.WindowRounding = 8.0f;
            style.FramePadding = ImVec2(4, 5);
            style.FrameRounding = 15.0f;
            style.WindowTitleAlign = ImVec2(0.5, 0.5);
            style.FrameBorderSize = 3.0f;
            style.WindowBorderSize = 3.0f;
            style.TabBorderSize = 3.0f;
            style.WindowMinSize = ImVec2(250, 150);
    style.WindowTitleAlign = ImVec2(0.5, 0.5);
    style.ButtonTextAlign = ImVec2(0.5,0.5); 
    style.Colors[ImGuiCol_Text]                   = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_TextDisabled]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_WindowBg]               = ImColor(255, 215, 0, 155);
    style.Colors[ImGuiCol_ChildBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_PopupBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Border]                 = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_BorderShadow]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBgHovered]         = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBgActive]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBgActive]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBgCollapsed]       = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_MenuBarBg]              = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarBg]            = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrab]          = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrabHovered]   = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrabActive]    = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_CheckMark]              = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_Button]                 = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ButtonHovered]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ButtonActive]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Header]                 = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_HeaderHovered]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_HeaderActive]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Tab]                    = ImColor(255, 215, 0, 255);
    ImGui::StyleColorsDark();
    变色 = true;



}
ImGui::SameLine();
if (ImGui::Button("仿神盾局", ImVec2(160, 40))) {
        ImGuiStyle& style = ImGui::GetStyle();
        style.WindowRounding = 8.3f;
        style.FrameRounding = 5.0f;
        style.ScrollbarRounding = 5;

        style.WindowTitleAlign = ImVec2(0.8, 0.8);
        style.WindowMinSize = ImVec2(300, 200);
        style.FramePadding = ImVec2(8, 4);
		style.WindowBorderSize = 3.3f;
		style.FrameBorderSize = 3.3f;

        style.Colors[ImGuiCol_Text]                  = ImVec4(0, 0, 0, 255);
        style.Colors[ImGuiCol_TextDisabled]          = ImColor(242, 51, 51, 255);
        style.Colors[ImGuiCol_WindowBg]              = ImColor(194, 0, 113, 255);
        style.Colors[ImGuiCol_ChildBg]               = ImColor(194, 0, 113, 255);
        style.Colors[ImGuiCol_PopupBg]               = ImColor(255, 215, 0, 255);
	
        style.Colors[ImGuiCol_Border]                = ImColor(194, 94, 0, 255);
        style.Colors[ImGuiCol_BorderShadow]          = ImColor(194, 94, 0, 255);

        style.Colors[ImGuiCol_FrameBg]               = ImColor(247, 164, 87, 255);
        style.Colors[ImGuiCol_FrameBgActive]         = ImColor(247, 164, 87, 255);
        style.Colors[ImGuiCol_FrameBgHovered]        = ImColor(247, 164, 87, 255);

        style.Colors[ImGuiCol_TitleBg]               = ImColor(222, 75, 22, 255);
        style.Colors[ImGuiCol_TitleBgActive]         = ImColor(222, 75, 22, 255);
        style.Colors[ImGuiCol_TitleBgCollapsed]      = ImColor(222, 75, 22, 130);

        style.Colors[ImGuiCol_MenuBarBg]             = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_ScrollbarBg]           = ImColor(222, 75, 22, 255);
        style.Colors[ImGuiCol_ScrollbarGrab]         = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_CheckMark]             = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_SliderGrab]            = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_SliderGrabActive]      = ImVec4(184, 180, 70, 255);

        style.Colors[ImGuiCol_Separator]             = ImColor(235, 133, 23, 255);
        style.Colors[ImGuiCol_SeparatorActive]       = ImColor(235, 133, 23, 255);
        style.Colors[ImGuiCol_SeparatorHovered]      = ImColor(235, 133, 23, 255);

        style.Colors[ImGuiCol_Button]                = ImColor(235, 23, 23, 255);
        style.Colors[ImGuiCol_ButtonActive]          = ImColor(235, 23, 23, 255);
        style.Colors[ImGuiCol_ButtonHovered]         = ImColor(235, 23, 23, 255);

        style.Colors[ImGuiCol_Header]                = ImColor(235, 23, 150, 255);
        style.Colors[ImGuiCol_HeaderActive]          = ImColor(235, 23, 150, 255);
        style.Colors[ImGuiCol_HeaderHovered]         = ImColor(235, 23, 150, 255);

        style.Colors[ImGuiCol_ResizeGrip]            = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_ResizeGripHovered]     = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_ResizeGripActive]      = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_PlotLines]             = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_PlotLinesHovered]      = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_PlotHistogram]         = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_TextSelectedBg]        = ImVec4(255, 215, 0, 255);


//           style.ScaleAllSizes(std::max(2.5f, density / 400.0f));
}
if (ImGui::Button("地铁模式", ImVec2(160, 40))) {
Config.预判 = true;
Config.AimBot.IgnoreKnocked = true;
Config.AimBot.IgnoreBot = true;
Config.自动Z = true;
Config.AimBot.开启自瞄 = true;
显示文字 = true;
Config.PlayerESP.上 = true;
Config.雷达 = true;
Config.PlayerESP.Alert360 = true;
Config.PlayerESP.Grenade = true;
Config.手持 = true;
Config.物资 = true;
Config.PlayerESP.LootBox = true;
Config.PlayerESP.开启线条 = true;
Config.PlayerESP.Vehicle = true;
Config.PlayerESP.TeamID = true;
Config.PlayerESP.Distance = true;
Config.PlayerESP.Name = true;
Config.PlayerESP.Skeleton = true;
Config.PlayerESP.Health = true;
Config.PlayerESP.Box = true;
Config.PlayerESP.ActiveEsp = true;
Config.AimBot.AINBOT = AIMBOT::NC;
Config.AimBot.Trigger = EAimTrigger::Any;
Config.圈 = true;
Config.SilentAim.Cross = 300.0f;
}
ImGui::SameLine();
if (ImGui::Button("经典模式", ImVec2(160, 40))) {
Config.预判 = true;
Config.AimBot.IgnoreKnocked = true;
Config.AimBot.IgnoreBot = true;
Config.自动Z = true;
Config.AimBot.开启自瞄 = true;
显示文字 = true;
Config.PlayerESP.上 = true;
Config.雷达 = true;
Config.PlayerESP.Alert360 = true;
Config.PlayerESP.Grenade = true;
Config.手持 = true;
Config.物资 = true;
Config.PlayerESP.LootBox = true;
Config.PlayerESP.开启线条 = true;
Config.PlayerESP.Vehicle = true;
Config.PlayerESP.TeamID = true;
Config.PlayerESP.Distance = true;
Config.PlayerESP.Name = true;
Config.PlayerESP.Skeleton = true;
Config.PlayerESP.Health = true;
Config.PlayerESP.Box = true;
Config.PlayerESP.ActiveEsp = true;
Config.HighRisk.Shake = true;
Config.AimBot.AINBOT = AIMBOT::NC;
Config.AimBot.Trigger = EAimTrigger::Any;
Config.圈 = true;
Config.SilentAim.Cross = 300.0f;
}
ImGui::Text("这些一键功能是作者自己的口味设置的\n不喜勿喷 建议自己开启功能");
if (ImGui::Combo("菜单风格", &style_idx, "紫色主题\0蓝色主题\0白色主题\0黄色主题\0")) {
                switch (style_idx) {
                        case 0:ImGui::StyleColorsClassic();
                         break;                 
            	        case 1:ImGui::StyleColorsDark();
                         break;         
   		                case 2:ImGui::StyleColorsLight();
                         break;
                        case 3:
                         ImGuiStyle& style = ImGui::GetStyle();
    style.Colors[ImGuiCol_Text]                   = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_TextDisabled]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_WindowBg]               = ImColor(255, 215, 0, 155);
    style.Colors[ImGuiCol_ChildBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_PopupBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Border]                 = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_BorderShadow]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBgHovered]         = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBgActive]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBgActive]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBgCollapsed]       = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_MenuBarBg]              = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarBg]            = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrab]          = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrabHovered]   = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrabActive]    = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_CheckMark]              = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_Button]                 = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ButtonHovered]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ButtonActive]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Header]                 = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_HeaderHovered]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_HeaderActive]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Tab]                    = ImColor(255, 215, 0, 255);
    

                         break;
                         
                      
            

  
     			   }
     			   }      				
      		
      				                	
} else if (语言 == 1) {
if (ImGui::Button("Save configuration", ImVec2(160, 40))) {
saveCFG();
}
ImGui::SameLine();
if (ImGui::Button("Load configuration", ImVec2(160, 40))) {
loadCFG();
}
ImGui::SameLine();
  //   --------------------------------   \\
ImGui::Text(" --------------------------------\n |Stable bypass|\n |Delete detection|\n --------------------------------\n");


/*if (!全局离线) {
if (ImGui::Button("Global offline[ON]", ImVec2(160, 40))) {
全局离线 = true;
}} else {
if (ImGui::Button("Global offline[OFF]", ImVec2(160, 40))) {
全局离线 = false;
}}

ImGui::Text("Don't forget to open the birth island and evacuate the death gate.");*/
ImGui::Text("Version:2.5.0 : 9.9.2");
ImGui::Spacing(); 
ImGui::Checkbox("Lobby test bypass", &大厅旁路);
ImGui::Text("You have to open it    Otherwise the ban");
//ImGui::SameLine();
//ImGui::Checkbox("Lobby bypass", &DobyBypass);

ImGui::Checkbox("Click hide", &窗口隐藏);
ImGui::Text("Click x3 in the upper left corner of the screen to show/hide.");
ImGui::Checkbox("Window discoloration", &变色);
if (ImGui::Button("Chaoliu theme", ImVec2(160, 40))) {
ImGuiStyle& style = ImGui::GetStyle();
            style.WindowPadding = ImVec2(8, 6);
            style.WindowRounding = 8.0f;
            style.FramePadding = ImVec2(4, 5);
            style.FrameRounding = 15.0f;
            style.WindowTitleAlign = ImVec2(0.5, 0.5);
            style.FrameBorderSize = 3.0f;
            style.WindowBorderSize = 3.0f;
            style.TabBorderSize = 3.0f;
            style.WindowMinSize = ImVec2(250, 150);
    style.WindowTitleAlign = ImVec2(0.5, 0.5);
    style.ButtonTextAlign = ImVec2(0.5,0.5); 
    style.Colors[ImGuiCol_Text]                   = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_TextDisabled]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_WindowBg]               = ImColor(255, 215, 0, 155);
    style.Colors[ImGuiCol_ChildBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_PopupBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Border]                 = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_BorderShadow]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBgHovered]         = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBgActive]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBgActive]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBgCollapsed]       = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_MenuBarBg]              = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarBg]            = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrab]          = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrabHovered]   = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrabActive]    = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_CheckMark]              = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_Button]                 = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ButtonHovered]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ButtonActive]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Header]                 = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_HeaderHovered]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_HeaderActive]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Tab]                    = ImColor(255, 215, 0, 255);
    ImGui::StyleColorsDark();
    变色 = true;



}
ImGui::SameLine();
if (ImGui::Button("SHIELD", ImVec2(160, 40))) {
        ImGuiStyle& style = ImGui::GetStyle();
        style.WindowRounding = 8.3f;
        style.FrameRounding = 5.0f;
        style.ScrollbarRounding = 5;

        style.WindowTitleAlign = ImVec2(0.8, 0.8);
        style.WindowMinSize = ImVec2(300, 200);
        style.FramePadding = ImVec2(8, 4);
		style.WindowBorderSize = 3.3f;
		style.FrameBorderSize = 3.3f;

        style.Colors[ImGuiCol_Text]                  = ImVec4(0, 0, 0, 255);
        style.Colors[ImGuiCol_TextDisabled]          = ImColor(242, 51, 51, 255);
        style.Colors[ImGuiCol_WindowBg]              = ImColor(194, 0, 113, 255);
        style.Colors[ImGuiCol_ChildBg]               = ImColor(194, 0, 113, 255);
        style.Colors[ImGuiCol_PopupBg]               = ImColor(255, 215, 0, 255);
	
        style.Colors[ImGuiCol_Border]                = ImColor(194, 94, 0, 255);
        style.Colors[ImGuiCol_BorderShadow]          = ImColor(194, 94, 0, 255);

        style.Colors[ImGuiCol_FrameBg]               = ImColor(247, 164, 87, 255);
        style.Colors[ImGuiCol_FrameBgActive]         = ImColor(247, 164, 87, 255);
        style.Colors[ImGuiCol_FrameBgHovered]        = ImColor(247, 164, 87, 255);

        style.Colors[ImGuiCol_TitleBg]               = ImColor(222, 75, 22, 255);
        style.Colors[ImGuiCol_TitleBgActive]         = ImColor(222, 75, 22, 255);
        style.Colors[ImGuiCol_TitleBgCollapsed]      = ImColor(222, 75, 22, 130);

        style.Colors[ImGuiCol_MenuBarBg]             = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_ScrollbarBg]           = ImColor(222, 75, 22, 255);
        style.Colors[ImGuiCol_ScrollbarGrab]         = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_CheckMark]             = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_SliderGrab]            = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_SliderGrabActive]      = ImVec4(184, 180, 70, 255);

        style.Colors[ImGuiCol_Separator]             = ImColor(235, 133, 23, 255);
        style.Colors[ImGuiCol_SeparatorActive]       = ImColor(235, 133, 23, 255);
        style.Colors[ImGuiCol_SeparatorHovered]      = ImColor(235, 133, 23, 255);

        style.Colors[ImGuiCol_Button]                = ImColor(235, 23, 23, 255);
        style.Colors[ImGuiCol_ButtonActive]          = ImColor(235, 23, 23, 255);
        style.Colors[ImGuiCol_ButtonHovered]         = ImColor(235, 23, 23, 255);

        style.Colors[ImGuiCol_Header]                = ImColor(235, 23, 150, 255);
        style.Colors[ImGuiCol_HeaderActive]          = ImColor(235, 23, 150, 255);
        style.Colors[ImGuiCol_HeaderHovered]         = ImColor(235, 23, 150, 255);

        style.Colors[ImGuiCol_ResizeGrip]            = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_ResizeGripHovered]     = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_ResizeGripActive]      = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_PlotLines]             = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_PlotLinesHovered]      = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_PlotHistogram]         = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(255, 215, 0, 255);
        style.Colors[ImGuiCol_TextSelectedBg]        = ImVec4(255, 215, 0, 255);


//           style.ScaleAllSizes(std::max(2.5f, density / 400.0f));
}
if (ImGui::Button("Subway escape mode", ImVec2(160, 40))) {
Config.预判 = true;
Config.AimBot.IgnoreKnocked = true;
Config.AimBot.IgnoreBot = true;
Config.自动Z = true;
Config.AimBot.开启自瞄 = true;
显示文字 = true;
Config.PlayerESP.上 = true;
Config.雷达 = true;
Config.PlayerESP.Alert360 = true;
Config.PlayerESP.Grenade = true;
Config.手持 = true;
Config.物资 = true;
Config.PlayerESP.LootBox = true;
Config.PlayerESP.开启线条 = true;
Config.PlayerESP.Vehicle = true;
Config.PlayerESP.TeamID = true;
Config.PlayerESP.Distance = true;
Config.PlayerESP.Name = true;
Config.PlayerESP.Skeleton = true;
Config.PlayerESP.Health = true;
Config.PlayerESP.Box = true;
Config.PlayerESP.ActiveEsp = true;
Config.AimBot.AINBOT = AIMBOT::NC;
Config.AimBot.Trigger = EAimTrigger::Any;
Config.圈 = true;
Config.SilentAim.Cross = 300.0f;
}
ImGui::SameLine();
if (ImGui::Button("Classic mode", ImVec2(160, 40))) {
Config.预判 = true;
Config.AimBot.IgnoreKnocked = true;
Config.AimBot.IgnoreBot = true;
Config.自动Z = true;
Config.AimBot.开启自瞄 = true;
显示文字 = true;
Config.PlayerESP.上 = true;
Config.雷达 = true;
Config.PlayerESP.Alert360 = true;
Config.PlayerESP.Grenade = true;
Config.手持 = true;
Config.物资 = true;
Config.PlayerESP.LootBox = true;
Config.PlayerESP.开启线条 = true;
Config.PlayerESP.Vehicle = true;
Config.PlayerESP.TeamID = true;
Config.PlayerESP.Distance = true;
Config.PlayerESP.Name = true;
Config.PlayerESP.Skeleton = true;
Config.PlayerESP.Health = true;
Config.PlayerESP.Box = true;
Config.PlayerESP.ActiveEsp = true;
Config.HighRisk.Shake = true;
Config.AimBot.AINBOT = AIMBOT::NC;
Config.AimBot.Trigger = EAimTrigger::Any;
Config.圈 = true;
Config.SilentAim.Cross = 300.0f;
}
ImGui::Text("These one-button functions are set by the author's own taste \n  If you don't like it, don't spray it. It is recommended to turn on the functions yourself.");
if (ImGui::Combo("UI", &style_idx, "Purple\0Blue\0White\0Yellow\0")) {
                switch (style_idx) {
                        case 0:ImGui::StyleColorsClassic();
                         break;                 
            	        case 1:ImGui::StyleColorsDark();
                         break;         
   		                case 2:ImGui::StyleColorsLight();
                         break;
                        case 3:
                         ImGuiStyle& style = ImGui::GetStyle();
    style.Colors[ImGuiCol_Text]                   = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_TextDisabled]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_WindowBg]               = ImColor(255, 215, 0, 155);
    style.Colors[ImGuiCol_ChildBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_PopupBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Border]                 = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_BorderShadow]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBgHovered]         = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_FrameBgActive]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBg]                = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBgActive]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_TitleBgCollapsed]       = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_MenuBarBg]              = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarBg]            = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrab]          = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrabHovered]   = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ScrollbarGrabActive]    = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_CheckMark]              = ImColor(255, 0, 0, 255);
    style.Colors[ImGuiCol_Button]                 = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ButtonHovered]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_ButtonActive]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Header]                 = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_HeaderHovered]          = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_HeaderActive]           = ImColor(255, 215, 0, 255);
    style.Colors[ImGuiCol_Tab]                    = ImColor(255, 215, 0, 255);
    

                         break;
                         
                      
            

  
     			   }
     			   }      				
}
ImGui::TableNextColumn();
                                           }

                            
                            
                            if (tab == 2) {
                            if (语言 == 0) {
if (!Config.PlayerESP.ActiveEsp) {
if (ImGui::Button("注入进程", ImVec2(160, 40))) {
Config.PlayerESP.ActiveEsp = true;
}
ImGui::SameLine();
} else {
if (ImGui::Button("关闭进程", ImVec2(160, 40))) {
Config.PlayerESP.ActiveEsp = false;
}
ImGui::SameLine();
}
if (!Feu) {
if (ImGui::Button("ESP ON", ImVec2(160, 40))) {
Feu = true;
Config.PlayerESP.Box = true;
Config.PlayerESP.Skeleton = true;
Config.PlayerESP.Vehicle = true;
Config.PlayerESP.Health = true;
Config.PlayerESP.Name = true;
Config.PlayerESP.Distance = true;
Config.PlayerESP.TeamID = true;
Config.PlayerESP.Grenade = true;
Config.PlayerESP.LootBox = true;
Config.PlayerESP.上 =true;
Config.手持 = true;
Config.动作 = true;
Config.雷达 = true;
Config.PlayerESP.Alert360 = true;
Config.物资 = true;
}} else {
if (ImGui::Button("ESP OFF", ImVec2(160, 40))) {
Feu = false;
Config.PlayerESP.Box = false;
Config.PlayerESP.Skeleton = false;
Config.PlayerESP.Vehicle = false;
Config.PlayerESP.Health = false;
Config.PlayerESP.Name = false;
Config.PlayerESP.Distance = false;
Config.PlayerESP.TeamID = false;
Config.PlayerESP.Grenade = false;
Config.PlayerESP.LootBox = false;
Config.PlayerESP.上 =false;
Config.手持 = false;
Config.动作 = false;
Config.雷达 = false;
Config.PlayerESP.Alert360 = false;
Config.物资 = false;
}}
	
			        
if (Config.PlayerESP.ActiveEsp) {
ImGui::Text("! INJECTED PROCESS !");
ImGui::Text("包名: [com.tencent.ig]");
}
ImGui::Checkbox("方框      ", &Config.PlayerESP.Box);
ImGui::SameLine();
ImGui::Checkbox("骨骼      ", &Config.PlayerESP.Skeleton);
ImGui::SameLine();
ImGui::Checkbox("血量      ", &Config.PlayerESP.Health);

ImGui::Checkbox("距离      ", &Config.PlayerESP.Distance);
ImGui::SameLine();
ImGui::Checkbox("名称      ", &Config.PlayerESP.Name);
ImGui::SameLine();
ImGui::Checkbox("队伍      ", &Config.PlayerESP.TeamID);

ImGui::Checkbox("载具      ", &Config.PlayerESP.Vehicle);
ImGui::SameLine();
ImGui::Checkbox("射线      ", &Config.PlayerESP.开启线条);
ImGui::SameLine();
ImGui::Checkbox("盒子      ", &Config.PlayerESP.LootBox);

ImGui::Checkbox("物资[地铁] ", &Config.物资);
ImGui::SameLine();
ImGui::Checkbox("物资[经典] ", &Config.物资1);
ImGui::SameLine();
ImGui::Checkbox("空投      ", &空投);

ImGui::Checkbox("飞机      ", &飞机);
ImGui::SameLine();
ImGui::Checkbox("手持      ", &Config.手持);
ImGui::SameLine();
ImGui::Checkbox("投掷物    ", &Config.PlayerESP.Grenade);

ImGui::Checkbox("隐藏人机  ", &Config.PlayerESP.NoBot);
ImGui::SameLine();
ImGui::Checkbox("动作      ", &Config.动作);
ImGui::SameLine();
ImGui::Checkbox("预警      ", &Config.PlayerESP.Alert360);

ImGui::Checkbox("雷达      ", &Config.雷达);
ImGui::SameLine();
ImGui::Checkbox("绘制队友  ", &Config.PlayerESP.Team);
ImGui::SameLine();
ImGui::Checkbox("掩体不绘制", &Config.PlayerESP.WALL);

static const char *RAD[] = {"看日版", "清者版", "DNA版"};
ImGui::Text("[雷达类型]: ");
ImGui::SameLine();
ImGui::Combo("##RADAR", (int *) &Config.PlayerESP.RadarZX, RAD, 3,-1);
ImGui::SliderFloat("雷达X轴", &Config.RadarX, 0.0f, 100.0f);
ImGui::SliderFloat("雷达Y轴", &Config.RadarY, 0.0f, 40.0f);

ImGui::Text("射线 / 设置");
//ImGui::Checkbox("测试功能", &UI1);
//ImGui::SameLine();
ImGui::Checkbox("显示文字", &显示文字);
/*ImGui::SameLine();
ImGui::Checkbox("到期时间", &显示到期时间);*/
ImGui::SameLine();
if (ImGui::Button("这有实体", ImVec2(160, 40))) {
提示内容 = "Level !\n停下来看看他们: )\n不要停，快跑，这危险！: (";
好心提示 = true;
}
if (Config.PlayerESP.开启线条) {
static int g = 2;
  ImGui::RadioButton("无", &g, 1);
  ImGui::SameLine();
  ImGui::RadioButton("顶部", &g, 2);
  ImGui::SameLine();
  ImGui::RadioButton("准心", &g, 3);
  ImGui::SameLine();
  ImGui::RadioButton("底部", &g, 4);
  switch (g) {
  case 1:
  Config.PlayerESP.上 = false;
  Config.PlayerESP.中 = false;
  Config.PlayerESP.下 = false;
  //Config.PlayerESP.开启线条 = false;
  break;
  case 2:
  Config.PlayerESP.上 = true;
  Config.PlayerESP.中 = false;
  Config.PlayerESP.下 = false;
  break;
  case 3:
  Config.PlayerESP.上 = false;
  Config.PlayerESP.中 = true;
  Config.PlayerESP.下 = false;
  break;
  case 4:
  Config.PlayerESP.上 = false;
  Config.PlayerESP.中 = false;
  Config.PlayerESP.下 = true;
  break;
  }}
  
  } if (语言 == 1) {
if (!Config.PlayerESP.ActiveEsp) {
if (ImGui::Button("Injection process", ImVec2(160, 40))) {
Config.PlayerESP.ActiveEsp = true;
}
ImGui::SameLine();
} else {
if (ImGui::Button("Close process", ImVec2(160, 40))) {
Config.PlayerESP.ActiveEsp = false;
}
ImGui::SameLine();
}
if (!Feu) {
if (ImGui::Button("ESP ON", ImVec2(160, 40))) {
Feu = true;
Config.PlayerESP.Box = true;
Config.PlayerESP.Skeleton = true;
Config.PlayerESP.Vehicle = true;
Config.PlayerESP.Health = true;
Config.PlayerESP.Name = true;
Config.PlayerESP.Distance = true;
Config.PlayerESP.TeamID = true;
Config.PlayerESP.Grenade = true;
Config.PlayerESP.LootBox = true;
Config.PlayerESP.上 =true;
Config.手持 = true;
Config.动作 = true;
Config.雷达 = true;
Config.PlayerESP.Alert360 = true;
Config.物资 = true;
}} else {
if (ImGui::Button("ESP OFF", ImVec2(160, 40))) {
Feu = false;
Config.PlayerESP.Box = false;
Config.PlayerESP.Skeleton = false;
Config.PlayerESP.Vehicle = false;
Config.PlayerESP.Health = false;
Config.PlayerESP.Name = false;
Config.PlayerESP.Distance = false;
Config.PlayerESP.TeamID = false;
Config.PlayerESP.Grenade = false;
Config.PlayerESP.LootBox = false;
Config.PlayerESP.上 =false;
Config.手持 = false;
Config.动作 = false;
Config.雷达 = false;
Config.PlayerESP.Alert360 = false;
Config.物资 = false;
}}
	
			        
if (Config.PlayerESP.ActiveEsp) {
ImGui::Text("! INJECTED PROCESS !");
ImGui::Text("包名: [com.tencent.ig]");
}
ImGui::Checkbox("Box      ", &Config.PlayerESP.Box);
ImGui::SameLine();
ImGui::Checkbox("Skeleton      ", &Config.PlayerESP.Skeleton);
ImGui::SameLine();
ImGui::Checkbox("Health      ", &Config.PlayerESP.Health);

ImGui::Checkbox("Distance      ", &Config.PlayerESP.Distance);
ImGui::SameLine();
ImGui::Checkbox("Name      ", &Config.PlayerESP.Name);
ImGui::SameLine();
ImGui::Checkbox("Team ID      ", &Config.PlayerESP.TeamID);

ImGui::Checkbox("Vehicles      ", &Config.PlayerESP.Vehicle);
ImGui::SameLine();
ImGui::Checkbox("Line      ", &Config.PlayerESP.开启线条);
ImGui::SameLine();
ImGui::Checkbox("Trophy box      ", &Config.PlayerESP.LootBox);

ImGui::Checkbox("Equipment[Subway] ", &Config.物资);
ImGui::SameLine();
ImGui::Checkbox("Equipment[Classic] ", &Config.物资1);
ImGui::SameLine();
ImGui::Checkbox("Airdrop      ", &空投);

ImGui::Checkbox("Plane      ", &飞机);
ImGui::SameLine();
ImGui::Checkbox("Hand-hold      ", &Config.手持);
ImGui::SameLine();
ImGui::Checkbox("Throwing object    ", &Config.PlayerESP.Grenade);

ImGui::Checkbox("Hide robots  ", &Config.PlayerESP.NoBot);
ImGui::SameLine();
ImGui::Checkbox("Action      ", &Config.动作);
ImGui::SameLine();
ImGui::Checkbox("Early warning      ", &Config.PlayerESP.Alert360);

ImGui::Checkbox("Radar      ", &Config.雷达);
ImGui::SameLine();
ImGui::Checkbox("Draw teammates  ", &Config.PlayerESP.Team);
ImGui::SameLine();
ImGui::Checkbox("Bunkers are not drawn", &Config.PlayerESP.WALL);

static const char *RAD[] = {"1", "2", "3"};
ImGui::Text("[Radar type]: ");
ImGui::SameLine();
ImGui::Combo("##RADAR", (int *) &Config.PlayerESP.RadarZX, RAD, 3,-1);
ImGui::SliderFloat("Radar X", &Config.RadarX, 0.0f, 100.0f);
ImGui::SliderFloat("Radar Y", &Config.RadarY, 0.0f, 40.0f);

ImGui::Text("Line / Set up");
//ImGui::Checkbox("测试功能", &UI1);
//ImGui::SameLine();
ImGui::Checkbox("Display text", &显示文字);
/*ImGui::SameLine();
ImGui::Checkbox("Expiration time", &显示到期时间);
/*ImGui::SameLine();*/
/*if (ImGui::Button("这有实体", ImVec2(160, 40))) {
提示内容 = "Level !\n停下来看看他们: )\n不要停，快跑，这危险！: (";
好心提示 = true;
}*/
if (Config.PlayerESP.开启线条) {
static int g = 2;
  ImGui::RadioButton("Without", &g, 1);
  ImGui::SameLine();
  ImGui::RadioButton("Top", &g, 2);
  ImGui::SameLine();
  ImGui::RadioButton("Ventre", &g, 3);
  ImGui::SameLine();
  ImGui::RadioButton("Bottom", &g, 4);
  switch (g) {
  case 1:
  Config.PlayerESP.上 = false;
  Config.PlayerESP.中 = false;
  Config.PlayerESP.下 = false;
  //Config.PlayerESP.开启线条 = false;
  break;
  case 2:
  Config.PlayerESP.上 = true;
  Config.PlayerESP.中 = false;
  Config.PlayerESP.下 = false;
  break;
  case 3:
  Config.PlayerESP.上 = false;
  Config.PlayerESP.中 = true;
  Config.PlayerESP.下 = false;
  break;
  case 4:
  Config.PlayerESP.上 = false;
  Config.PlayerESP.中 = false;
  Config.PlayerESP.下 = true;
  break;
  }}
  }
ImGui::EndTabItem();
ImGui::TableNextColumn();
}

                    
                           
                           if (tab == 3) {
if (语言 == 0) {


if (ImGui::Checkbox("开启自瞄", &Config.AimBot.开启自瞄)) {
Config.AimBot.开启子追 = false;
}

if (ImGui::Checkbox("开启子追", &Config.AimBot.开启子追)) {
Config.AimBot.开启自瞄 = false;
}
ImGui::Text("!只能开一个否则封号!\n!子追不稳 建议自瞄!");
if (!Config.AimBot.开启自瞄) {
Config.AimBot.AINBOT = AIMBOT::MY;
}
if (Config.AimBot.开启自瞄) {
if (自瞄接口 == 0) {
if (ImGui::Button("自瞄接口2", ImVec2(160, 40))) {
自瞄接口 = 1;
}} else if (自瞄接口 == 1) {
if (ImGui::Button("自瞄接口1", ImVec2(160, 40))) {
自瞄接口 = 0;
}}
static const char *AINBOT[] = {"360°视角", "离准心近", "漏哪打哪", "平滑移动", "强锁敌人", "自动压枪", "选择敌人", "随机部位", "没有/关闭"};
ImGui::Text("[自瞄类型]: ");
ImGui::SameLine();
ImGui::Combo("##AINBOT", (int *) &Config.AimBot.AINBOT, AINBOT, 9,-1);
//ImGui::Checkbox("360°子追", &Config.AimBot.Enable1);
//ImGui::Checkbox("自动瞄准", &Config.AimBot.Enable);
//ImGui::Checkbox("新自瞄(漏打)", &Eaimbot);
if (Config.AimBot.AINBOT == AIMBOT::LD) {
ImGui::Checkbox("开启自动漏打", &漏打);
       if (!漏打) {
                          static const char *Prioritygroup[] = {"头", "骨盆", "左手", "右手", "左脚", "右脚"};
                          static const char *Prioritygroup1[] = {"头", "骨盆", "左手", "右手", "左脚", "右脚"};
                          static const char *Prioritygroup2[] = {"头", "骨盆", "左手", "右手", "左脚", "右脚"};
                          static const char *Prioritygroup3[] = {"头", "骨盆", "左手", "右手", "左脚", "右脚"};
                          static const char *Prioritygroup4[] = {"头", "骨盆", "左手", "右手", "左脚", "右脚"};
                          static const char *Prioritygroup5[] = {"头", "骨盆", "左手", "右手", "左脚", "右脚"};
                          static int temp = 0;
                          if(temp == 0)
                          {
                              Config.SilentAim.PelvisPriority = Aimfirst::Pelvis;
                              Config.SilentAim.LhandPriority = Aimfirst::Lhand;
                              Config.SilentAim.RhandPriority = Aimfirst::Rhand;
                              Config.SilentAim.LfootPriority = Aimfirst::Lfoot;
                              Config.SilentAim.RfootPriority = Aimfirst::Rfoot;
                         
                              temp = 1;
                          }
                          ImGui::Text("[第一优先部位]: ");
                          ImGui::SameLine();                      
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger2", (int *) &Config.SilentAim.HeadPriority, Prioritygroup, 6, 300);
                          ImGui::PopItemWidth();
                          
                          ImGui::Text("[第二优先部位]: ");
                          ImGui::SameLine();
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger3", (int *) &Config.SilentAim.PelvisPriority, Prioritygroup1, 6, 300);
                          ImGui::PopItemWidth();
                          
                          ImGui::Text("[第三优先部位]: ");
                          ImGui::SameLine();
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger4", (int *) &Config.SilentAim.LhandPriority, Prioritygroup2, 6, 300);
                          ImGui::PopItemWidth();
                          
                          ImGui::Text("[第四优先部位]: ");
                          ImGui::SameLine();
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger5", (int *) &Config.SilentAim.RhandPriority, Prioritygroup3, 6, 300);
                          ImGui::PopItemWidth();
                          
                          ImGui::Text("[第五优先部位]: ");
                          ImGui::SameLine();
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger6", (int *) &Config.SilentAim.LfootPriority, Prioritygroup4, 6, 300);
                          ImGui::PopItemWidth();
                          
                          ImGui::Text("[第六优先部位]: ");
                          ImGui::SameLine();
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger7", (int *) &Config.SilentAim.RfootPriority, Prioritygroup5, 6, 300);
                          ImGui::PopItemWidth();
       }}
ImGui::SliderFloat("Metre",&自瞄距离, 0.0f, 900.0f);
if (!Config.AimBot.AINBOT == AIMBOT::SJ) {
ImGui::SliderFloat("FOV",&Config.SilentAim.Cross, 0.0f, 1500.0f);
}
ImGui::Text("[瞄准位置]: ");
static const char *targets[] = {"头部", "身体", "鸡鸡"};
ImGui::Combo("##Target", (int *) &Config.AimBot.Target, targets, 3,-1);
ImGui::Text("[瞄准状态]: ");
static const char *triggers[] = {"暂无", "开火", "开镜", "开镜&开火", "开火/开镜"};
ImGui::Combo("##Trigger", (int *) &Config.AimBot.Trigger, triggers, 5,-1);
if (!Config.AimBot.AINBOT == AIMBOT::SJ) {
ImGui::Checkbox("FOV方框", &Config.圈);
ImGui::SameLine();
}  
ImGui::Checkbox("忽视倒地", &Config.AimBot.IgnoreKnocked);
ImGui::SameLine();
ImGui::Checkbox("忽视人机", &Config.AimBot.IgnoreBot);
ImGui::SameLine();
ImGui::Checkbox("自动压枪", &Config.自动Z);
ImGui::SameLine();
ImGui::Checkbox("瞄准预判", &Config.预判);

if (!show_调试) {
if (ImGui::Button("DEBUG[ON]", ImVec2(230 - 15, 50)))
    show_调试 = true;
} else {
if (ImGui::Button("DEBUG[OFF]", ImVec2(230 - 15, 50)))
    show_调试 = false;
}}


if (!Config.AimBot.开启子追) {
Config.SilentAim.AINBOTA = AIMBOTA::MYZZ;
}
if (Config.AimBot.开启子追) {

if (ImGui::Button("[子弹追踪]", ImVec2(160, 40))) {
提示内容 = "你他妈点你妈 你是不是傻逼\n这他妈是能点的东西吗?\n你食不食油饼\n有没有树枝\n有没有荔枝.";
好心提示 = true;
}
static const char *SilentAim[] = {"离准星近", "360°子追", "没有/关闭"};
ImGui::Text("[子追类型]: ");
ImGui::SameLine();
ImGui::Combo("##SilentAim", (int *) &Config.SilentAim.AINBOTA, SilentAim, 3,-1);
ImGui::Spacing();
ImGui::Text("[子追位置]: ");
ImGui::Spacing();
static const char *targets[] = {"头", "胸部", "鸡鸡"};
ImGui::Combo("##Target", (int *) &Config.SilentAim.Target, targets, 3, -1);
ImGui::Text("[子追状态]: ");
ImGui::Spacing();
static const char *triggers[] = {"暂无", "开火", "开镜", "开镜&开火", "开火/开镜"};
ImGui::Combo("##Trigger", (int *) &Config.SilentAim.Trigger, triggers, 5, -1);
ImGui::SliderFloat("FOV",&Config.SilentAim.Cross, 0.0f, 1500.0f);
ImGui::Checkbox("FOV方框", &Config.圈);
ImGui::SameLine();
ImGui::Checkbox("忽略倒地", &Config.SilentAim.IgnoreKnocked);
ImGui::SameLine();
ImGui::Checkbox("掩体检测", &Config.SilentAim.VisCheck);
ImGui::SameLine();
ImGui::Checkbox("忽略人机", &Config.SilentAim.IgnoreBot);
}
                  

} else if (语言 == 1) {
if (ImGui::Checkbox("Starting aimbot", &Config.AimBot.开启自瞄)) {
Config.AimBot.开启子追 = false;
}

if (ImGui::Checkbox("Starting bullet", &Config.AimBot.开启子追)) {
Config.AimBot.开启自瞄 = false;
}
ImGui::Text("!Bullet ban! Suggestion Aimbot");
if (!Config.AimBot.开启自瞄) {
Config.AimBot.AINBOT = AIMBOT::MY;
}
if (Config.AimBot.开启自瞄) {
if (自瞄接口 == 0) {
if (ImGui::Button("Joggle 2", ImVec2(160, 40))) {
自瞄接口 = 1;
}} else if (自瞄接口 == 1) {
if (ImGui::Button("Joggle 1", ImVec2(160, 40))) {
自瞄接口 = 0;
}}
static const char *AINBOT[] = {"360°Visual angle", "Close to the center of sight", "Hit where it leaks", "Smooth movement", "Lock the enemy by force", "Automatic gun pressing", "Choose the enemy", "Random site", "Not have/Close"};
ImGui::Text("[Type]: ");
ImGui::SameLine();
ImGui::Combo("##AINBOT", (int *) &Config.AimBot.AINBOT, AINBOT, 9,-1);
//ImGui::Checkbox("360°子追", &Config.AimBot.Enable1);
//ImGui::Checkbox("自动瞄准", &Config.AimBot.Enable);
//ImGui::Checkbox("新自瞄(漏打)", &Eaimbot);
if (Config.AimBot.AINBOT == AIMBOT::LD) {
ImGui::Checkbox("Automatic aiming position", &漏打);
       if (!漏打) {
                          static const char *Prioritygroup[] = {"Head", "Basin", "Left hand", "Right hand", "Left crus", "Right foot"};
                          static const char *Prioritygroup1[] = {"Head", "Basin", "Left hand", "Right hand", "Left crus", "Right foot"};
                          static const char *Prioritygroup2[] = {"Head", "Basin", "Left hand", "Right hand", "Left crus", "Right foot"};
                          static const char *Prioritygroup3[] = {"Head", "Basin", "Left hand", "Right hand", "Left crus", "Right foot"};
                          static const char *Prioritygroup4[] = {"Head", "Basin", "Left hand", "Right hand", "Left crus", "Right foot"};
                          static const char *Prioritygroup5[] = {"Head", "Basin", "Left hand", "Right hand", "Left crus", "Right foot"};
                          static int temp = 0;
                          if(temp == 0)
                          {
                              Config.SilentAim.PelvisPriority = Aimfirst::Pelvis;
                              Config.SilentAim.LhandPriority = Aimfirst::Lhand;
                              Config.SilentAim.RhandPriority = Aimfirst::Rhand;
                              Config.SilentAim.LfootPriority = Aimfirst::Lfoot;
                              Config.SilentAim.RfootPriority = Aimfirst::Rfoot;
                         
                              temp = 1;
                          }
                          ImGui::Text("[1]: ");
                          ImGui::SameLine();                      
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger2", (int *) &Config.SilentAim.HeadPriority, Prioritygroup, 6, 300);
                          ImGui::PopItemWidth();
                          
                          ImGui::Text("[2]: ");
                          ImGui::SameLine();
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger3", (int *) &Config.SilentAim.PelvisPriority, Prioritygroup1, 6, 300);
                          ImGui::PopItemWidth();
                          
                          ImGui::Text("[3]: ");
                          ImGui::SameLine();
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger4", (int *) &Config.SilentAim.LhandPriority, Prioritygroup2, 6, 300);
                          ImGui::PopItemWidth();
                          
                          ImGui::Text("[4]: ");
                          ImGui::SameLine();
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger5", (int *) &Config.SilentAim.RhandPriority, Prioritygroup3, 6, 300);
                          ImGui::PopItemWidth();
                          
                          ImGui::Text("[5]: ");
                          ImGui::SameLine();
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger6", (int *) &Config.SilentAim.LfootPriority, Prioritygroup4, 6, 300);
                          ImGui::PopItemWidth();
                          
                          ImGui::Text("[6]: ");
                          ImGui::SameLine();
                          ImGui::PushItemWidth(250);
                          ImGui::Combo("##Trigger7", (int *) &Config.SilentAim.RfootPriority, Prioritygroup5, 6, 300);
                          ImGui::PopItemWidth();
       }}
ImGui::SliderFloat("Metre",&自瞄距离, 0.0f, 900.0f);
if (!Config.AimBot.AINBOT == AIMBOT::SJ) {
ImGui::SliderFloat("FOV",&Config.SilentAim.Cross, 0.0f, 1500.0f);
}
ImGui::Text("[Location]: ");
static const char *targets[] = {"Head", "Body", "Dick"};
ImGui::Combo("##Target", (int *) &Config.AimBot.Target, targets, 3,-1);
ImGui::Text("[Aimbot]: ");
static const char *triggers[] = {"Not have", "Fire", "Shooting", "Shooting&Fire", "Fire/Shooting"};
ImGui::Combo("##Trigger", (int *) &Config.AimBot.Trigger, triggers, 5,-1);
if (!Config.AimBot.AINBOT == AIMBOT::SJ) {
ImGui::Checkbox("FOV", &Config.圈);
ImGui::SameLine();
}  
ImGui::Checkbox("Ignore Beingknocked", &Config.AimBot.IgnoreKnocked);
ImGui::SameLine();
ImGui::Checkbox("Ignore robots", &Config.AimBot.IgnoreBot);
ImGui::SameLine();
ImGui::Checkbox("Automatic gun pressing", &Config.自动Z);
ImGui::SameLine();
ImGui::Checkbox("Aim and predict", &Config.预判);

if (!show_调试) {
if (ImGui::Button("DEBUG[ON]", ImVec2(230 - 15, 50)))
    show_调试 = true;
} else {
if (ImGui::Button("DEBUG[OFF]", ImVec2(230 - 15, 50)))
    show_调试 = false;
}}


if (!Config.AimBot.开启子追) {
Config.SilentAim.AINBOTA = AIMBOTA::MYZZ;
}
if (Config.AimBot.开启子追) {

/*if (ImGui::Button("[子蛋追踪]", ImVec2(160, 40))) {
提示内容 = "你他妈点你妈 你是不是傻逼\n这他妈是能点的东西吗?\n你食不食油饼\n有没有树枝\n有没有荔枝.";
好心提示 = true;
}*/
static const char *SilentAim[] = {"Close to the sight", "360°", "Not have/Close"};
ImGui::Text("[Type]: ");
ImGui::SameLine();
ImGui::Combo("##SilentAim", (int *) &Config.SilentAim.AINBOTA, SilentAim, 3,-1);
ImGui::Spacing();
ImGui::Text("[Location]: ");
ImGui::Spacing();
static const char *targets[] = {"Head", "Chest", "Dick"};
ImGui::Combo("##Target", (int *) &Config.SilentAim.Target, targets, 3, -1);
ImGui::Text("[Bullet]: ");
ImGui::Spacing();
static const char *triggers[] = {"Not have", "Fire", "Shooting", "Shooting&Fire", "Fire/Shooting"};
ImGui::Combo("##Trigger", (int *) &Config.SilentAim.Trigger, triggers, 5, -1);
ImGui::SliderFloat("FOV",&Config.SilentAim.Cross, 0.0f, 1500.0f);
ImGui::Checkbox("FOV", &Config.圈);
ImGui::SameLine();
ImGui::Checkbox("Ignore Beingknocked", &Config.SilentAim.IgnoreKnocked);
ImGui::SameLine();
ImGui::Checkbox("Observe visibility", &Config.SilentAim.VisCheck);
ImGui::SameLine();
ImGui::Checkbox("Ignore robots", &Config.SilentAim.IgnoreBot);
}
}
ImGui::EndTabItem();
ImGui::TableNextColumn();
}

if (tab == 4) {
if (语言 == 0) {
ImGui::Text("必读教学: \n 1.为什么游戏上面会有4个图标\n 那是显示人数用的\n 红色是附近真人人数\n 绿色是附近全部人机人数\n 黄色是附近所有人\n 黑色是附近可以看见你的人.\n 2.为什么开子追拿枪闪退\n 是因为没有适配IDX.\n 3.为什么会闪退\n 因为国际服有MD5检测还没过.\n 4.为什么开了加速等不可关闭\n 因为作者太懒了.\n 5.玩地铁逃生建议开什么功能\n 可以点击一键功能.");
} if (语言 == 1) {
ImGui::Text("Don't want to translate");
}
ImGui::EndTabItem();
ImGui::TableNextColumn();
}

                           
                            if (tab == 5) {
                            if (语言 == 0) {
              ImGui::Text("! 危险SDK 开了封号别找我 !");
              ImGui::Checkbox("平板视角", &WideView);
              
              ImGui::Checkbox("防抖", &Config.HighRisk.Shake);
              
              ImGui::Checkbox("聚点", &Config.HighRisk.Cross);
              
              ImGui::Checkbox("无后坐力", &Config.HighRisk.Recoil);
                  
              ImGui::Checkbox("击中特效", &Config.HighRisk.HitEffect);
                  
              ImGui::Checkbox("射速加快", &Config.HighRisk.Instant);
              
              ImGui::Checkbox("90帧", &Unlock);
                  
              if (ImGui::Button("加速面板", ImVec2(230 - 15, 50)))
                  加速 = true;
              
              if (ImGui::Button("飞天面板", ImVec2(230 - 15, 50)))
                  飞天开 = true;
                  } else if (语言 == 1) {
                  ImGui::Text("! danger !");
              ImGui::Checkbox("Flat viewing angle", &WideView);
              
              if (ImGui::Button("SDK Backless", ImVec2(230 - 15, 50)))
                  Config.HighRisk.Recoil = true;
              
              if (ImGui::Button("SDK Accumulation", ImVec2(230 - 15, 50)))
                  Config.HighRisk.Cross = true;
              
              if (ImGui::Button("SDK Do not Shake", ImVec2(230 - 15, 50)))
                  Config.HighRisk.Shake = true;
                  
              if (ImGui::Button("SDK Instantaneous hit", ImVec2(230 - 15, 50)))
                  Config.HighRisk.Instant = true;
                  
              if (ImGui::Button("SDK Killing special effect", ImVec2(230 - 15, 50)))
                  Config.HighRisk.HitEffect = true;
              
              if (ImGui::Button("90FPS", ImVec2(230 - 15, 50)))
                  Unlock = true;
                  
              if (ImGui::Button("Acceleration panel", ImVec2(230 - 15, 50)))
                  加速 = true;
              
              if (ImGui::Button("Feitian panel", ImVec2(230 - 15, 50)))
                  飞天开 = true;
                  }
/*              if (ImGui::Button("鸡你太美", ImVec2(160, 40))) {
提示内容 = "鸡你太美";
好心提示 = true;
}*/
             
                                                        
                    ImGui::EndTabItem();
              ImGui::TableNextColumn();
                         }
                         if (tab == 6) {
                         if (语言 == 0) {
                  ImGui::Text("稳定内存 最近检测别开");
                  
                  if (ImGui::Button("稳定无后", ImVec2(230 - 15, 50)))
                  无后 = true;
                  
                  if (ImGui::Button("稳定防抖", ImVec2(230 - 15, 50)))
                  防抖 = true;
                  
                  if (ImGui::Button("稳定瞬击", ImVec2(230 - 15, 50)))
                  瞬击 = true;
                  
                  if (ImGui::Button("稳定聚点", ImVec2(230 - 15, 50)))
                  聚点 = true;
                  
                  if (ImGui::Button("内存自瞄", ImVec2(230 - 15, 50)))
                  自瞄 = true;
                  
                  if (ImGui::Button("内存加速开", ImVec2(230 - 15, 50))) {
                  稳定加速开 = true;
                  稳定加速关 = false;
                  }
                  
                  if (ImGui::Button("内存加速关", ImVec2(230 - 15, 50))) {
                  稳定加速关 = true;
                  稳定加速开 = false;
                  }
                  
                  } else if (语言 == 1) {
                  ImGui::Text("Stable memory");
                  
                  if (ImGui::Button("Memory without backseat", ImVec2(230 - 15, 50)))
                  无后 = true;
                  
                  if (ImGui::Button("Memory anti-shake", ImVec2(230 - 15, 50)))
                  防抖 = true;
                  
                  if (ImGui::Button("Memory instant hit", ImVec2(230 - 15, 50)))
                  瞬击 = true;
                  
                  if (ImGui::Button("Memory aggregation point", ImVec2(230 - 15, 50)))
                  聚点 = true;
                  
                  if (ImGui::Button("Memory aimbot", ImVec2(230 - 15, 50)))
                  自瞄 = true;
                  
                  if (ImGui::Button("Memory acceleration", ImVec2(230 - 15, 50))) {
                  稳定加速开 = true;
                  稳定加速关 = false;
                  }
                  
                  if (ImGui::Button("Memory acceleration off", ImVec2(230 - 15, 50))) {
                  稳定加速关 = true;
                  稳定加速开 = false;
                  }
                  
                  }
                  
                  
                         ImGui::EndTabItem();
              ImGui::TableNextColumn();
                         }
                         
                         
                         

                         }
                         }
                         }
                         
                         
                         


             
             
//             if (彩色文字) {
//             ImGuiStyle& style = ImGui::GetStyle();
//style.Colors[ImGuiCol_Text]                   = ImColor(文字1, 文字2, 文字3, 255);
//             }
				
}

                 
                     
                //love.SBX
              //KL NIKE Mod 4.0 Pro+
              //FULL OF Brutality
                          //KL NIKE AimBot ProMax
                       
                      
				             	
			                
              
		
		

		
        ImGui::End();
        ImGui::Render();

        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        return orig_eglSwapBuffers(dpy, surface);
    }


int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);
int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent)
{
	if (initImGui)
	{
		ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float)screenWidth / (float)glWidth, (float)screenHeight / (float)glHeight});
	}
	return orig_onInputEvent(app, inputEvent);
}




#define SLEEP_TIME 1000LL / 60LL
[[noreturn]] void *maps_thread(void *) {
    while (true) {
   auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
               std::vector<sRegion> tmp;
            char line[512];
            FILE *f = fopen("/proc/self/maps", "r");;
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
        auto objs = UObject::GetGlobalObjects();
        for (int i = 0; i < objs.Num(); i++) {
            auto Object = objs.GetByIndex(i);
   if (isObjectInvalid(Object))
                continue;
if (WideView) {
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainYFOV;
}}else{
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainXFOV;
}
}


if (飞天) {
if (Object->IsA(UPhysicsSettings::StaticClass())) {
auto playerChar = (UPhysicsSettings *) Object;
playerChar->DefaultGravityZ=900.00f;
}}
        
                 
if (Unlock) {
if (Object->IsA(USTExtraGameInstance::StaticClass())) {
auto playerChar = (USTExtraGameInstance *) Object;      
playerChar->UserDetailSetting.PUBGDeviceFPSDef = 90.0f;
playerChar->UserDetailSetting.PUBGDeviceFPSLow = 90.0f;
playerChar->UserDetailSetting.PUBGDeviceFPSMid = 90.0f;
playerChar->UserDetailSetting.PUBGDeviceFPSHigh = 90.0f;
playerChar->UserDetailSetting.PUBGDeviceFPSHDR = 90.0f;
playerChar->UserDetailSetting.PUBGDeviceFPSUltralHigh = 90.0f;
}}}



auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td),SLEEP_TIME)));
}}












void *main_thread(void *) {	

	    UE4 = Tools::GetBaseAddress("libUE4.so");
        while (!UE4) {
            UE4 = Tools::GetBaseAddress("libUE4.so");
            sleep(1);
        }
        
  
        anort = Tools::GetBaseAddress("libanort.so");
        while (!anort) {
            anort = Tools::GetBaseAddress("libanort.so");
            sleep(1);
        }
      
        
        anogs = Tools::GetBaseAddress("libanogs.so");
        while (!anogs) {
        anogs = Tools::GetBaseAddress("libanogs.so");
        sleep(1);
        }
        

        
        
	while (!g_App)
	{
		g_App = *(android_app **)(UE4 + GNativeAndroidApp_Offset);
		sleep(1);
	}
	
	
	
	while (!g_App->onInputEvent)
		sleep(1);
		
    orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
	g_App->onInputEvent = onInputEvent;
		
	
		
    FName::GNames = GetGNames();
	while (!FName::GNames)
	{
		FName::GNames = GetGNames();
		sleep(1);
	}
	UObject::GUObjectArray = (FUObjectArray *)(UE4 + GUObject_Offset);
	
	



    
	orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
    g_App->onInputEvent = onInputEvent;

    plthook_t *plthook;
    if (plthook_open(&plthook, "libUE4.so") == 0) {
        plthook_replace(plthook, "eglSwapBuffers", (void *) _eglSwapBuffers, (void **) &orig_eglSwapBuffers);
        plthook_close(plthook);
    }
 
 Tools::Hook((void *) DobbySymbolResolver(OBFUSCATE("/system/lib/libEGL.so"), OBFUSCATE("eglSwapBuffers")), (void *) _eglSwapBuffers, (void **) &orig_eglSwapBuffers);
	
	
	pthread_t t;
	pthread_create(&t, 0, maps_thread, 0);
	items_datakl = json::parse(JSON_ITEMSSKL);
	itemss_datakl = json::parse(JSON_ITEMSSKL);
	itemsss_datakl = json::parse(JSON_ITEMSS);
	return 0;
}

__attribute__((constructor)) void _init() {
    pthread_t t;
//    pthread_create(&t, 0, Memory_thread, 0);
    pthread_create(&t, 0, main_thread, 0);
}



