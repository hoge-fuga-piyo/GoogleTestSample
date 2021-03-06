cmake_minimum_required(VERSION 3.8)

###############################
# For unit test
###############################
# Google Test
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# GMock
find_library(GMock_LIBRARY NAMES gmock)
find_library(GMockMain_LIBRARY NAMES gmock_main)

###############################
# Sources
###############################
set(PROJ_SHARED_DIR ${CMAKE_SOURCE_DIR}/src)
file(GLOB PROJ_SHARED_SOURCE ${PROJ_SHARED_DIR}/*.cpp)
file(GLOB PROJ_SHARED_INCLUDE ${PROJ_SHARED_DIR}/*.h ${PROJ_SHARED_DIR}/*.hpp)

###############################
# Test
###############################
set(PROJ_TEST_DIR ${CMAKE_SOURCE_DIR}/test)
add_subdirectory(${PROJ_TEST_DIR})