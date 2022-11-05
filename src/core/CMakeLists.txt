set(TARGET_NAME cef_core)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-DCEF_CORE_LIB)

file(GLOB_RECURSE COMPILE_FILES src/*.*)


add_library(${TARGET_NAME} SHARED ${COMPILE_FILES})

target_link_directories(${TARGET_NAME}
    PRIVATE
    ${CEF_LIBRARY_DLL_PATH})

file(GLOB_RECURSE LIB_FILES ${CEF_LIBRARY_DLL_PATH}/*.lib)

target_link_libraries(${TARGET_NAME}
    PRIVATE
    ${LIB_FILES}
)

