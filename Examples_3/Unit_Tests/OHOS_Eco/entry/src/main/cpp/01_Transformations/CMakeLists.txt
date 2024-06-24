ADD_DEFINITIONS(-DVK_USE_PLATFORM_OHOS=1)
add_library(entry SHARED
"../../../../../../../../Examples_3/Unit_Tests/src/01_Transformations/01_Transformations.cpp"
"../module.cpp"
)

target_link_libraries(entry PRIVATE
Renderer
)
