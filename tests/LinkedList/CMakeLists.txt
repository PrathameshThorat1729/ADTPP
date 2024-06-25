add_adtpp_test_exe(LinkedListTest ${CMAKE_CURRENT_SOURCE_DIR}/LinkedListTest.cpp ADT::LinkedList)

add_adtpp_test(LLPrintTest LinkedListTest "3 5 2 90 54 23")
add_adtpp_test(LLEditTest LinkedListTest "3 5 2 90 100 23")
add_adtpp_test(LLInsertTest LinkedListTest "100 3 5 2 90 100 54 23 100")
add_adtpp_test(LLRemoveTest LinkedListTest "5 2 90")
# add_adtpp_test(LinkedListRemoveTest LinkedListTest "1 2 3 5 7")
# add_adtpp_test(LinkedListLinearSearchTest LinkedListTest "3 -1")