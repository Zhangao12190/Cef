cmake_minimum_required(VERSION 3.5)

project(browser VERSION 0.1 LANGUAGES CXX)
#set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}_build/Build/bin/${PROJECT_PLATFORM}/$<CONFIG>")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}_build/Build/lib/${PROJECT_PLATFORM}/$<CONFIG>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}_build/Build/lib/${PROJECT_PLATFORM}/$<CONFIG>")
set(CMAKE_PDB_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}_build/Build/pdb/${PROJECT_PLATFORM}/$<CONFIG>")
set(CEF_LIBRARY_DLL_PATH "${CMAKE_CURRENT_SOURCE_DIR}/3rd/cef/dll/${CMAKE_BUILD_TYPE}/")

include(three_part.cmake)

message("--------------------------curernt build cmake info--------------------------")
message("PROJECT_PLATFORM:" ${PROJECT_PLATFORM})
message("CMAKE_BUILD_TYPE:" ${CMAKE_BUILD_TYPE})
message("PROJECT_SOURCE_DIR:" ${PROJECT_SOURCE_DIR})
message("--------------------------curernt build personal info--------------------------")
message("CMAKE_RUNTIME_OUTPUT_DIRECTORY:" ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
message("CMAKE_ARCHIVE_OUTPUT_DIRECTORY:" ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})
message("CMAKE_LIBRARY_OUTPUT_DIRECTORY:" ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})
message("CMAKE_PDB_OUTPUT_DIRECTORY:" ${CMAKE_PDB_OUTPUT_DIRECTORY})
message("CEF_LIBRARY_DLL_PATH:" ${CEF_LIBRARY_DLL_PATH})


add_subdirectory(src)
