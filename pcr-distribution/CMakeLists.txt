# cmake minimum
CMAKE_MINIMUM_REQUIRED(VERSION 3.1)
# project name
project(pcrDistribution)
# cmake version
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE "DEBUG")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
# opencv 可视化需求?
find_package(OpenCV REQUIRED)
if(NOT OpenCV_FOUND)
    find_package(OpenCV 2.4.3 QUIET)
    if(NOT OpenCV_FOUND)
        message(FATAL_ERROR "OpenCV > 2.4.3 not found.")
    endif()
endif()

# 查找当前目录下的所有源文件,并将名称保存到 DIR_SRCS 变量
aux_source_directory(source DIR_SRCS)

include_directories(${OpenCV_INCLUDE_DIR})
include_directories(include)

add_executable(pcrDistribution ${DIR_SRCS} sample.cpp)
target_link_libraries(pcrDistribution ${OpenCV_LIBS})
