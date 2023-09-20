cmake_minimum_required(VERSION 3.26)
project(408_algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(408_algorithm
        "2011/1. merge_sort/optimized.cpp"
        "2011/1. merge_sort/2011_merge_sort_solution.cpp"
        2011/median_in_two_sorted_array.cpp
        include/print.h
        merge/88_merge_sorted_array/merge_sorted_array.exe
        merge/88_merge_sorted_array/merge_sorted_array.cpp)

add_executable(merge_sorted_array merge/88_merge_sorted_array/merge_sorted_array.cpp)
add_executable(solution "2011/1. merge_sort/2011_merge_sort_solution.cpp")
add_executable(2011_merge_sort_solution "2011/1. merge_sort/2011_merge_sort_solution.cpp")