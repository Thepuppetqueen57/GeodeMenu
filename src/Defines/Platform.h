#include <Geode/Geode.hpp>

#define QOLMOD_VERIFYHACK
#define QOLMOD_AUTOSONG
#define QOLMOD_NOJUSTDONT

#ifdef GEODE_IS_ANDROID
#define QOLMOD_PULSINGMENU
#define QOLMOD_SHOWLAYOUT
#endif

#ifdef GEODE_IS_WINDOWS
#define QOLMOD_TPS_BYPASS_HOOK
#endif

#ifndef GEODE_IS_ARM_MAC
#define QOLMOD_EDITOR_WAVE_TRAIL
#endif

#ifndef GEODE_IS_IOS
#define QOLMOD_ALL_MODES_PLATFORMER
#define QOLMOD_NO_SPIDER_DASH
#endif