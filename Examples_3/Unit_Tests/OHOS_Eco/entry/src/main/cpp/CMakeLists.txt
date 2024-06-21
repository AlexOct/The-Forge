cmake_minimum_required(VERSION 3.16.0 FATAL_ERROR)

project(Unit_Tests LANGUAGES CXX C)

set(FORGEROOT D:/DevEcoThrid/the-forgeSupport/The-Forge)
# MARK: -  Sub-projects
add_subdirectory(Libraries/Tools/SpirvTools)
add_subdirectory(Libraries/OS)
add_subdirectory(Libraries/Renderer)

add_subdirectory(01_Transformations)


