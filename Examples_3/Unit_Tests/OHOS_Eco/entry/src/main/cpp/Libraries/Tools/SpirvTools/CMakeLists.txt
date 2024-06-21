
set(PROJECT_NAME SpirvTools)
add_library(${PROJECT_NAME} STATIC "")
target_sources(${PROJECT_NAME} PRIVATE
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv.hpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv_cfg.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv_cfg.hpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv_common.hpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv_cpp.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv_cross.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv_cross.hpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv_cross_parsed_ir.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv_cross_util.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv_glsl.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv_parser.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/SPIRV_Cross/spirv_reflect.cpp"

    "${FORGEROOT}/Common_3/Tools/SpirvTools/SpirvTools.cpp"
    "${FORGEROOT}/Common_3/Tools/SpirvTools/SpirvTools.h"
)
