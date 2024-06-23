#ifndef ADTPP_ARRAY_HPP
#define ADTPP_ARRAY_HPP

#include <iostream>

namespace adt
{
  
  class Array
  {
    private:
      int* _arr;
      int _length;
    
    public:
      Array(int size, int el);
      void print();
      ~Array();
  };
}

#endif // ADTPP_ARRAY_HPP