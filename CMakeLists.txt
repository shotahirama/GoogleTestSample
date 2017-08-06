project(gtestsample)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

find_package(GTest REQUIRED)

if(GTEST_FOUND)
  include_directories(${GTEST_INCLUDE_DIRS})
  enable_testing()
else()
  message(SEND_ERROR "NOT FOUND GTEST")
endif()

add_executable(sampletest src/sampletest.cpp)
target_link_libraries(sampletest ${GTEST_BOTH_LIBRARIES})

add_executable(mathtest src/mathtest.cpp)
target_link_libraries(mathtest ${GTEST_BOTH_LIBRARIES})
