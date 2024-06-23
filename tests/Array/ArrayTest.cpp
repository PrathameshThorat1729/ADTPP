#include<iostream>

#include "ADTPP/Array/Array.hpp"
#include "ADTPPTest.hpp"
using namespace std;

int main(int argc, char** args)
{
  TEST("ArrayPrintTest")
  {
    adt::Array arr1(3, 3);
    arr1.print();
  }
  return 0;
}