cmake_minimum_required(VERSION 3.26)
project(408_algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(408_2011 2011/solution.cpp)
add_executable(408_2012 2012/solution.cpp 2012/solution.h)
add_executable(408_2013 2013/solution.cpp)
add_executable(408_2014 2014/solution.cpp 2014/solution.h)
add_executable(408_2015 2015/solution.cpp 2015/solution.h)
add_executable(408_2016 2016/solution.cpp 2016/solution.h)
add_executable(408_2017 2017/solution.cpp 2017/solution.h)
add_executable(408_2018 2018/solution.cpp 2018/solution.h)
add_executable(408_2019 2019/solution.cpp 2019/solution.h)


add_executable(binary_search
        binary_search/704_binary_search/BinarySearch.cpp
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
        linkedlist/143_reorder_list/ReorderList.h
        linkedlist/83_remove_duplicates_from_sorted_list/remove_duplicates_from_list.h
)

add_executable(merge
        merge/88_merge_sorted_array/merge_sorted_array.cpp)

add_executable(sort sort/912_sort_an_array/sort.cpp
        sort/912_sort_an_array/sort.cpp
        sort/912_sort_an_array/sort.h)
add_executable(array array/217_contains_duplicate/contains_duplicate.h
        array/217_contains_duplicate/contains_duplicate.cpp)

add_executable(tree tree/589_nary_tree_preorder_traversal/nary_tree_preorder_traversal.cpp tree/589_nary_tree_preorder_traversal/nary_tree_preorder_traversal.h
        tree/Node.h)

