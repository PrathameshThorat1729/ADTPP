add_adtpp_test_exe(StackTest ${CMAKE_CURRENT_SOURCE_DIR}/StackTest.cpp ADT::Stack)

add_adtpp_test(StackSampleTest StackTest "90 45 43 23")
