#include "ADTPP/Array/Array.hpp"

namespace adt
{
  Array::Array(int size, int el)
  {
    _arr = new int[size];
    _length = size;
    for(int i = 0; i < _length; ++i)
      _arr[i] = el;
  }
  Array::~Array()
  {
    if (_arr != nullptr) delete _arr;
    _length = 0;
  }
}