#include<iostream>

#include "ADTPP/Array/Array.hpp"
#include "ADTPPTest.hpp"
using namespace std;

void print_search(adt::Array& arr, adt::ll element, bool linear = true, bool increasing = true)
{
  auto index = (linear) ? arr.linear_search(element) : arr.binary_search(element, increasing);
  if(index) cout << *index << " ";
  else cout << "-1 ";
}

int main(int argc, char** args)
{
  TEST("ArrayPrintTest")
  {
    adt::Array arr(3, 3);
    arr.print();
  }
  
  TEST("ArrayInsertTest")
  {
    adt::Array arr(5, 4);
    arr.insert_front(1);
    arr.insert(1,3);
    arr.insert_back(1);
    arr.print();
  }
  
  TEST("ArrayRemoveTest")
  {
    adt::Array arr{1, 2, 3, 4, 5, 7};
    arr.remove(3);
    arr.remove_front();
    arr.remove_back();
    arr.print();
  }
  
  TEST("ArrayLinearSearchTest")
  {
    adt::Array arr{1, 2, 6, 9, 3, 4, 5, 7};
    print_search(arr, 9);
    print_search(arr, 99);
  }
  
  TEST("ArrayBinarySearchTest")
  {
    adt::Array arr_inc{1, 2, 3, 4, 7, 88, 99, 123};
    print_search(arr_inc, 9, false);
    print_search(arr_inc, 99, false);

    adt::Array arr_dec{66, 54, 16, 8, 5, 3};
    print_search(arr_dec, 9, false, false);
    print_search(arr_dec, 16, false, false);
  }
  return 0;
}