add_adtpp_test_exe(ArrayTest ${CMAKE_CURRENT_SOURCE_DIR}/ArrayTest.cpp ADT::Array)

add_adtpp_test(ArrayPrintTest ArrayTest "3 3 3")
add_adtpp_test(ArrayInsertTest ArrayTest "1 4 4 1 4 4 4 1")
add_adtpp_test(ArrayRemoveTest ArrayTest "2 3 5")
add_adtpp_test(ArrayLinearSearchTest ArrayTest "3 -1")
add_adtpp_test(ArrayBinarySearchTest ArrayTest "-1 6 -1 2")