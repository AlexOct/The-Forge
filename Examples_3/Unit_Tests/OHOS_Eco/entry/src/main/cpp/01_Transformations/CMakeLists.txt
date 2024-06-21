set(PROJECT_NAME entry)
ADD_DEFINITIONS(-DVK_USE_PLATFORM_OHOS=1)

add_library(${PROJECT_NAME} SHARED
"${FORGEROOT}/Examples_3/Unit_Tests/src/01_Transformations/01_Transformations.cpp"
"../module.cpp"
)

target_link_libraries(${PROJECT_NAME} PRIVATE
Renderer
)
