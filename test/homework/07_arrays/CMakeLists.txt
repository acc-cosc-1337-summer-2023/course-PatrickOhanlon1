add_executable(hw_07_tests "07_arrays_tests.cpp")
target_link_libraries(hw_07_tests hw_07_library)
add_test(NAME hw_07_tests COMMAND hw_07_tests -s)
