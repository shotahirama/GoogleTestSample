project(gtestsample)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

find_package(GTest REQUIRED)

if(GTEST_FOUND)
  include_directories(${GTEST_INCLUDE_DIRS})
  add_executable(sampletest src/sampletest.cpp)
  target_link_libraries(sampletest ${GTEST_BOTH_LIBRARIES})
  enable_testing()
else()
  message("NOT FOUND GTEST")
endif()
