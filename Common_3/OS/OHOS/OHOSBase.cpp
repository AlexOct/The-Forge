#include "../../Renderer/RendererConfig.h"

#include <ctime>
#include <napi/native_api.h>

#include "../Core/CPUConfig.h"

#include "../Interfaces/IOperatingSystem.h"
#include "../Interfaces/ILog.h"
#include "../Interfaces/ITime.h"
#include "../Interfaces/IThread.h"
#include "../Interfaces/IProfiler.h"
#include "../Interfaces/IApp.h"
#include "../Interfaces/IFileSystem.h"

#include "../Interfaces/IScripting.h"
#include "../Interfaces/IFont.h"
#include "../Interfaces/IUI.h"

#include "../../Renderer/IRenderer.h"

#include "../Interfaces/IMemory.h"


static IApp *pApp = NULL;
static CpuInfo gCpu;
extern IApp *pWindowAppRef;
Timer gdeltaTimer;
/************************************************************************/
// MARK: - Windows Extern
/************************************************************************/
extern void getDisplayMetrics(napi_env env, napi_callback_info info);

/************************************************************************/
// MARK: - CreateSystem
/************************************************************************/
napi_value CreateSystemCB(napi_env env, napi_callback_info info)
{
	napi_value returnCode;
	typedef struct OHOSPlatFormData
	{
		napi_env env;
		napi_callback_info info;
	}OHOSPlatFormData;

	OHOSPlatFormData data{env, info};
	FileSystemInitDesc fsDesc = {};
	fsDesc.pPlatformData = &data;
	fsDesc.pAppName = pApp->GetName();
	if (!initFileSystem(&fsDesc))
	{
		LOGF(LogLevel::eERROR, " the-forge-app Error initFileSystemCB");
		napi_create_int32(env, 1, &returnCode);
		return returnCode;
	}
	else
	{
		fsSetPathForResourceDir(pSystemFileIO, RM_DEBUG, RD_LOG, "");
		initLog(pApp->GetName(), DEFAULT_LOG_LEVEL);
		getDisplayMetrics(env, info);

		// OncreatedSurface
		IApp::Settings *pSettings = &pApp->mSettings;
		RectDesc rect = {};
		getRecommendedResolution(&rect);
		pSettings->mWidth = getRectWidth(&rect);
		pSettings->mHeight = getRectHeight(&rect);
		napi_create_int32(env, 0, &returnCode);
		return returnCode;
	}
}

/************************************************************************/
// MARK: - ReleaseSystem
/************************************************************************/
napi_value ReleaseSystemCB(napi_env env, napi_callback_info info)
{
	pApp->Exit();

	exitLog();
	
	exitFileSystem();

	exitMemAlloc();

	napi_value succesCode;
	napi_create_int32(env, 0, &succesCode);
	return succesCode;
}

/************************************************************************/
// MARK: - RegisterWindow
/************************************************************************/
extern bool RegisterWindow(napi_env env, napi_value exports);

/************************************************************************/
// MARK: - OHOSMain
/************************************************************************/
int OHOSMain(void *env_, void *exports_, IApp *app)
{
	initCpuInfo(&gCpu);
	initTimer(&gdeltaTimer);
	napi_env env = static_cast<napi_env>(env_);
	napi_value exports = static_cast<napi_value>(exports_);

	if (!initMemAlloc(app->GetName()))
	{
		LOGF(LogLevel::eERROR, " the-forge-app Error starting application");
		return EXIT_FAILURE;
	}

	napi_property_descriptor desc[] = {
		{"CreateSystem", nullptr, CreateSystemCB, nullptr, nullptr, nullptr, napi_default, nullptr},
		{"ReleaseSystem", nullptr, ReleaseSystemCB, nullptr, nullptr, nullptr, napi_default, nullptr},
	};
	napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
	RegisterWindow(env, exports);

	pApp = app;
	pWindowAppRef = app;
	return 0;
}
