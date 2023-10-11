cmake_minimum_required(VERSION 3.26)
project(408_algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(408_algorithm
        2011/solution.cpp
        include/print.h
        2013/solution.cpp
)

add_executable(binary_search
        binary_search/704_binary_search/binary_search.cpp
)

add_executable(cskaoyan
        cskaoyan/exam/q1/polynomial.h
        cskaoyan/exam/q1/Solution.cpp
        cskaoyan/exam/q1/Solution.h)

add_executable(linkedlist
        linkedlist/listnode.h
        linkedlist/206_reverse_linked_list/reverse_linked_list.cpp
        linkedlist/234_palindrome_linked_list/palindrome_linked_list.cpp
        linkedlist/876_middle_of_the_linked_list/middle_of_the_linked_list.cpp
        linkedlist/237_delete_node_in_a_linked_list/delete_node_in_a_linked_list.cpp
        linkedlist/141_linked_list_cycle/linked_list_cycle.h
        linkedlist/143_reorder_list/reorder_list.h
)

add_executable(merge
        merge/88_merge_sorted_array/merge_sorted_array.cpp)

add_executable(sort sort/912_sort_an_array/sort.cpp
        sort/912_sort_an_array/sort.cpp
        sort/912_sort_an_array/sort.h)
