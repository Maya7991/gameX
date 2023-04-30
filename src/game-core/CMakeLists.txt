set(LIB_NAME core)

add_library(${LIB_NAEM} SHARED
    player.cpp
    player.hpp
)


# set_target_properties(${LIB_NAME} PROPERTIES 
#     LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/build/lib"
# )