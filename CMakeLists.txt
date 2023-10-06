cmake_minimum_required(VERSION 3.5.0)
project(CeeRPC VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CEERPC_INCLUDE_DIR "src/include")
set(CEERPC_UTIL_DIR "src/util")

include_directories(
  "./"
  "${CEERPC_INCLUDE_DIR}"
  "${CEERPC_UTIL_DIR}"
)

file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(CeeRPC main.cpp ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
