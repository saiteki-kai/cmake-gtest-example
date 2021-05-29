add_executable(main main.cpp)

add_subdirectory(lib1)
add_subdirectory(lib2)

target_link_libraries(main PRIVATE library1 library2)
