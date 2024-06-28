#include <iostream>

#include "ADTPP/Stack/Stack.hpp"
#include "ADTPPTest.hpp"
using namespace std;

int main(int argc, char **args)
{
  TEST("StackSampleTest")
  {
    adt::Stack stk;
    stk.push(23);
    stk.push(67);
    stk.push(87);
    stk.pop();
    stk.push(66);
    stk.pop();
    stk.pop();
    stk.push(43);
    stk.push(45);
    stk.push(90);
    adt::ull len = stk.length();
    for (adt::ull i = 0; i < len; ++i)
    {
      cout << stk.top() << " ";
      stk.pop();
    }
  }

  return 0;
}
