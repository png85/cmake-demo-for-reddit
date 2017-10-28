add_library(record STATIC record.cpp record.h)

#
# this makes sure we have compiler flags that allow class::class() = default (>= C++11)
target_compile_features(record PUBLIC cxx_defaulted_functions)

target_include_directories(record PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
