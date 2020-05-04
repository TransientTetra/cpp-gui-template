cmake_minimum_required(VERSION 3.13)
set(BINARY ${CMAKE_PROJECT_NAME}_tst)

set(CMAKE_CXX_STANDARD 17)
find_package(Boost REQUIRED COMPONENTS thread system unit_test_framework)

set(
        TST
        test.cpp)
set(TST ${TST})
include_directories(BINARY ../include)
add_executable(${BINARY} ${TST})
add_test(NAME ${BINARY} COMMAND ${BINARY})
target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib ${Boost_LIBRARIES})