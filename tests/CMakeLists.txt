find_package(GTest REQUIRED)

add_executable(tests main.test.cpp lib1.test.cpp lib2.test.cpp)

target_include_directories(tests PRIVATE ${PROJECT_SOURCE_DIR}/src ${GTEST_INCLUDE_DIRS})

target_link_libraries(tests PRIVATE library1 library2 ${GTEST_LIBRARIES} pthread)
