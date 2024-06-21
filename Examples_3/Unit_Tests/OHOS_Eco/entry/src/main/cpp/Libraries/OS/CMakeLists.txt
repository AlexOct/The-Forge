set(PROJECT_NAME OS)

add_library(${PROJECT_NAME} STATIC "")

target_link_libraries(${PROJECT_NAME} PRIVATE
libace_napi.z.so
hilog_ndk.z
librawfile.z.so
ace_ndk.z
)

target_sources(${PROJECT_NAME} PRIVATE
# MARK: -  OS
    "${FORGEROOT}/Common_3/OS/Core/Config.h"
# MARK: - OS__Math
    "${FORGEROOT}/Common_3/OS/Math/MathTypes.h"
# MARK: - OS__Interfaces
    "${FORGEROOT}/Common_3/OS/Interfaces/IApp.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/ICameraController.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/IFileSystem.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/IFont.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/IInput.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/ILog.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/IMemory.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/IMiddleware.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/IOperatingSystem.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/IProfiler.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/IScripting.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/IThread.h"
    "${FORGEROOT}/Common_3/OS/Interfaces/IUI.h"
# MARK: - Dependencies__EASTL
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/EASTL/assert.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/EASTL/fixed_pool.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/EASTL/hashtable.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/EASTL/intrusive_list.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/EASTL/numeric_limits.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/EASTL/red_black_tree.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/EASTL/string.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/EASTL/thread_support.cpp"
# MARK: - OS__Logging
    "${FORGEROOT}/Common_3/OS/Logging/Log.c"
    "${FORGEROOT}/Common_3/OS/Logging/Log.h"
# MARK: - Dependencies__minizip__brg
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/aes.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/aescrypt.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/aeskey.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/aesopt.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/aestab.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/aestab.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/brg_endian.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/brg_types.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/hmac.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/hmac.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/sha1.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/sha1.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/sha2.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/lib/brg/sha2.h"
# MARK: - Dependencies__minizip
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_crypt.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_crypt.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_crypt_brg.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_os.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_os.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_strm.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_strm_raw.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_strm_wzaes.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_strm_wzaes.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_strm_zlib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_strm_zlib.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_zip.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/mz_zip.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/minizip/zip.h"
# MARK: - Dependencies__minizip__libzip28zip29
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/zip/miniz.h"
# MARK: - OS__FileSystem
    "${FORGEROOT}/Common_3/OS/FileSystem/FileSystem.cpp"
    "${FORGEROOT}/Common_3/OS/FileSystem/SystemRun.cpp"
    "${FORGEROOT}/Common_3/OS/FileSystem/UnixFileSystem.cpp"
    "${FORGEROOT}/Common_3/OS/FileSystem/ZipFileSystem.c"
# MARK: - OS__MemoryTracking
    "${FORGEROOT}/Common_3/OS/MemoryTracking/MemoryTracking.c"
    "${FORGEROOT}/Common_3/OS/MemoryTracking/NoMemoryDefines.h"
# MARK: - Dependencies__EASTL__FORGEEXT
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/EASTL/allocator_forge.cpp"
# MARK: - Dependencies__cpu_features
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/cpu_features/src/hwcaps.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/cpu_features/src/impl_aarch64_linux_or_android.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/cpu_features/src/impl_x86_linux_or_android.c"
# MARK: - Dependencies__EASTL__EAStdC
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/EASTL/EAStdC/EAMemory.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/EASTL/EAStdC/EASprintf.cpp"
# MARK: - Dependencies__LUA
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lapi.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lauxlib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lbaselib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lbitlib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lcode.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lcorolib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lctype.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/ldblib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/ldebug.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/ldo.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/ldump.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lfunc.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lgc.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/linit.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/liolib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/llex.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lmathlib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lmem.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/loadlib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lobject.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lopcodes.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/loslib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lparser.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lstate.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lstring.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lstrlib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/ltable.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/ltablib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/ltm.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lundump.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lutf8lib.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lvm.c"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/lua-5.3.5/src/lzio.c"
# MARK: - Dependencies__basisu
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/basis_universal/transcoder/basisu_transcoder.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/basis_universal/zstd/zstddeclib.c"
# MARK: - OS__Dependencies_Core
    "${FORGEROOT}/Common_3/OS/Core/Atomics.h"
    "${FORGEROOT}/Common_3/OS/Core/CPUConfig.cpp"
    "${FORGEROOT}/Common_3/OS/Core/GPUConfig.h"
    "${FORGEROOT}/Common_3/OS/Core/RingBuffer.h"
    "${FORGEROOT}/Common_3/OS/Core/Timer.c"
# MARK: - OS__Platform
    "${FORGEROOT}/Common_3/OS/OHOS/OHOSBase.cpp"
    "${FORGEROOT}/Common_3/OS/OHOS/OHOSFileSystem.cpp"
    "${FORGEROOT}/Common_3/OS/OHOS/OHOSLog.c"
    "${FORGEROOT}/Common_3/OS/OHOS/OHOSThread.c"
    "${FORGEROOT}/Common_3/OS/OHOS/OHOSTime.c"
    "${FORGEROOT}/Common_3/OS/OHOS/OHOSWindow.cpp"
# MARK: - Dependencies__imgui
    "${FORGEROOT}/Common_3/OS/Fonts/stbtt.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/imgui/imconfig.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/imgui/imgui.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/imgui/imgui.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/imgui/imgui_demo.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/imgui/imgui_draw.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/imgui/imgui_internal.h"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/imgui/imgui_widgets.cpp"
# MARK: - OS__Fonts__Shaders__FSL
    "${FORGEROOT}/Common_3/OS/Fonts/Shaders/FSL/resources.h"
# MARK: - OS__Fonts
   # "${FORGEROOT}/Common_3/OS/Fonts/FontSystem.cpp"
    "${FORGEROOT}/Common_3/OS/Fonts/stbtt.cpp"
# MARK: - OS__UI
    "${FORGEROOT}/Common_3/OS/UI/UI.cpp"
# MARK: - OS__WindowSystem
    "${FORGEROOT}/Common_3/OS/WindowSystem/WindowSystem.cpp"
# MARK: - OS__Profiler
    "${FORGEROOT}/Common_3/OS/Profiler/GpuProfiler.cpp"
    "${FORGEROOT}/Common_3/OS/Profiler/GpuProfiler.h"
    "${FORGEROOT}/Common_3/OS/Profiler/ProfilerBase.cpp"
    "${FORGEROOT}/Common_3/OS/Profiler/ProfilerBase.h"
    "${FORGEROOT}/Common_3/OS/Profiler/ProfilerHTML.h"
# MARK: - OS__Input
   # "../../../../../Common_3/OS/Input/InputSystem.cpp"
# MARK: - OS__Scripting
    "${FORGEROOT}/Common_3/OS/Scripting/LuaManager.cpp"
    "${FORGEROOT}/Common_3/OS/Scripting/LuaManagerImpl.cpp"
    "${FORGEROOT}/Common_3/OS/Scripting/LuaSystem.cpp"
# MARK: - OS__Core
    "${FORGEROOT}/Common_3/OS/Core/Screenshot.cpp"
    "${FORGEROOT}/Common_3/OS/Core/ThreadSystem.cpp"
    "${FORGEROOT}/Common_3/OS/Core/ThreadSystem.h"
# MARK: - OS__Camera
    "${FORGEROOT}/Common_3/OS/Camera/CameraController.cpp"
# MARK: - OS__Input
    #"../../../../../Common_3/OS/Input/InputSystem.cpp"
)
