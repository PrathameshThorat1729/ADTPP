set(StackFileList
  ${CMAKE_CURRENT_SOURCE_DIR}/Stack.cpp)

add_adtpp_library(Stack ${StackFileList})

target_link_libraries(adt_Stack PRIVATE ADT::LinkedList)
