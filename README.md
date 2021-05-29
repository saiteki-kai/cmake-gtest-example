# CMake GTest Example

## Project Structure

```
project
├── CMakeLists.txt             # include subdirectories src and tests 
├── src
│   ├── CMakeLists.txt         # add executable main.cpp and link libraries
│   ├── lib1
│   │   ├── CMakeLists.txt     # add library1
│   │   ├── lib1.cpp           # contains simple sum function
│   │   └── lib1.h
│   ├── lib2
│   │   ├── CMakeLists.txt     # add library2
│   │   ├── lib2.cpp           # contains simple mult function
│   │   └── lib2.h
│   └── main.cpp               # include lib1.h and lib2.h
└── tests
    ├── CMakeLists.txt         # link libraries library1, library2 and gtest
    ├── lib1.test.cpp          # include lib1.h and perform test on it
    ├── lib2.test.cpp          # include lib2.h and perform test on it
    └── main.test.cpp          # test entry point 
```

## Build and Execution

```bash
mkdir build
cd build
cmake ..
make
```

```bash
./src/main      # run main
./tests/tests   # run tests
```