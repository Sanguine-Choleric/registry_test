cmake_minimum_required(VERSION 3.29)
project(cpp_test)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_test
    main.cpp
    OptSchedTarget.h
    OptSchedTargetRegistry.h
    TargetA.cpp
    TargetA.h
        OptSchedRegistry.h
        bstuff/TargetB.h
        bstuff/TargetB.cpp)
