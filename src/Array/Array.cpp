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

  void Array::print()
  {
    for(int i = 0; i < _length; ++i)
      std::cout << _arr[i] << " ";
  }

  Array::~Array()
  {
    if (_arr != nullptr) delete _arr;
    _length = 0;
  }
}