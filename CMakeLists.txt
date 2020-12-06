cmake_minimum_required(VERSION 3.17)
project(cpp_classes)

set(CMAKE_CXX_STANDARD 17)

if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX /Od /Zi /EHsc)
else ()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif ()

include_directories(.)

add_executable(cpp_classes
        introduction-into-cpp--stolyarov/2_1-member-function.cpp)
