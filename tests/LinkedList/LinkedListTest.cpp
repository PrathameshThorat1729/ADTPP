#include<iostream>

#include "ADTPP/LinkedList/LinkedList.hpp"
#include "ADTPPTest.hpp"
using namespace std;

// void print_search(adt::LinkedList& arr, adt::ll element, bool linear = true, bool increasing = true)
// {
//   auto index = (linear) ? arr.linear_search(element) : arr.binary_search(element, increasing);
//   if(index) cout << *index << " ";
//   else cout << "-1 ";
// }

int main(int argc, char** args)
{
  TEST("LLPrintTest")
  {
    adt::LinkedList ll({3, 5, 2, 90, 54, 23});
    ll.print();
  }
  
  TEST("LLEditTest")
  {
    adt::LinkedList ll({3, 5, 2, 90, 54, 23});
    ll[4] = 100;
    ll.print();
  }
  
  TEST("LLInsertTest")
  {
    adt::LinkedList ll({3, 5, 2, 90, 54, 23});

    ll.insert(100, 4);
    ll.insert_front(100);
    ll.insert_back(100);

    ll.print();
  }
  
  TEST("LLRemoveTest")
  {
    adt::LinkedList ll({3, 5, 2, 90, 54, 23});

    ll.remove(4);
    ll.remove_front();
    ll.remove_back();

    ll.print();
  }
  return 0;
}