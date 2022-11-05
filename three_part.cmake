set(THREE_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/3rd)

file(GLOB_RECURSE THREE_INCLUDE_FILES ${THREE_INCLUDE_DIR}/*.*)

include_directories(${THREE_INCLUDE_DIR})

include(cef.cmake)
#message("cef include:" ${THREE_INCLUDES})
