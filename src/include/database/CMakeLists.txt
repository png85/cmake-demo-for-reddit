#
# Build static library
add_library(database database.cpp database.h)

#
# Add current directory to include path for anything that links to this lib
target_include_directories(database PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
