#
# Build everything in include/ directory
add_subdirectory(include)

#
# Main executable target
add_executable(cmakeDemo main.cpp)

#
# These libraries get built in include/*/, CMake will auto-set required
# compiler flags and include paths from their definitions
target_link_libraries(cmakeDemo database)
target_link_libraries(cmakeDemo match)
target_link_libraries(cmakeDemo record)
target_link_libraries(cmakeDemo spectogram)
