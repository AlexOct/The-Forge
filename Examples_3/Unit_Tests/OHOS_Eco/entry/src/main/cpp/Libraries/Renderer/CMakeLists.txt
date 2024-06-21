
set(SHADERC_PATH ${FORGEROOT}/Common_3/ThirdParty/OpenSource/shaderc_ohos)
set(PROJECT_NAME Renderer)

add_library(${PROJECT_NAME} STATIC "")

target_include_directories(${PROJECT_NAME} PRIVATE ${SHADERC_PATH}/include)

target_link_libraries(${PROJECT_NAME} PRIVATE
    OS
    SpirvTools
    vulkan
    ${SHADERC_PATH}/libs/${OHOS_ARCH}/$<CONFIG>/libshaderc_combined.a
)

target_sources(${PROJECT_NAME} PRIVATE
# MARK: -  meshoptimizer
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/meshoptimizer/src/allocator.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/meshoptimizer/src/indexgenerator.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/meshoptimizer/src/overdrawoptimizer.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/meshoptimizer/src/vcacheoptimizer.cpp"
    "${FORGEROOT}/Common_3/ThirdParty/OpenSource/meshoptimizer/src/vfetchoptimizer.cpp"

# MARK: -  Interface
#    "${FORGEROOT}/Common_3/Renderer/IRay.h"
    "${FORGEROOT}/Common_3/Renderer/IRenderer.h"
    "${FORGEROOT}/Common_3/Renderer/IResourceLoader.h"
    "${FORGEROOT}/Common_3/Renderer/IShaderReflection.h"
    "${FORGEROOT}/Common_3/Renderer/RendererConfig.h"

# MARK: -  Renderer
    "${FORGEROOT}/Common_3/Renderer/CommonShaderReflection.cpp"
    "${FORGEROOT}/Common_3/Renderer/Renderer.cpp"
    "${FORGEROOT}/Common_3/Renderer/ResourceLoader.cpp"

# MARK: -  Vulkan
    "${FORGEROOT}/Common_3/Renderer/Vulkan/Vulkan.cpp"
    "${FORGEROOT}/Common_3/Renderer/Vulkan/VulkanCapsBuilder.h"
    "${FORGEROOT}/Common_3/Renderer/Vulkan/VulkanConfig.h"
    "${FORGEROOT}/Common_3/Renderer/Vulkan/VulkanRaytracing.cpp"
    "${FORGEROOT}/Common_3/Renderer/Vulkan/VulkanShaderReflection.cpp"
)
