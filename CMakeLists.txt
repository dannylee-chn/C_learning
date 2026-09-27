cmake_minimum_required(VERSION 4.3)
project(function C)
set(CMAKE_C_STANDARD 11)

# 头文件搜索目录
include_directories("include")

# 1. 将factorial.c编译成静态库，只编译一次
add_library(factorial_lib src/factorial.c)

# 2. 收集根目录所有 .c
file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")

# 3. 循环：每个c文件，单独生成一个exe，只包含自己这一个c文件！
foreach(file ${files})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
    target_link_libraries(${name} factorial_lib)
    target_compile_definitions(${name} PUBLIC DEBUG)
endforeach()
