#include "ADTPP/Array/Array.hpp"

namespace adt
{
  Array::Array(ull size, ll element)
  {
    _arr = new ll[size];
    _length = size;
    for(ull i = 0; i < _length; ++i)
      _arr[i] = element;
  }
  
  Array::Array(std::initializer_list<ll> list)
  {
    _length = list.size();
    _arr = new ll[_length];
    int i = 0;
    for(ll element : list)
    {
      _arr[i++] = element;
    }
  }

  ll& Array::operator[](ull index) { return _arr[index]; }

  void Array::insert(ll element, ull index)
  {
    ll *temp_arr = new ll[++_length];
    for(ull i = 0; i < index; ++i)
      temp_arr[i] = _arr[i];
    temp_arr[index] = element;
    for(ull i = index + 1; i < _length; ++i)
      temp_arr[i] = _arr[i - 1];
    delete[] _arr;
    _arr = temp_arr;
  }

  void Array::insert_front(ll element) { this->insert(element, 0); }
  void Array::insert_back(ll element) { this->insert(element, _length); }

  ll Array::remove(ull index)
  {
    ll element = _arr[index];
    ll* temp_arr = new ll[--_length];
    for(ull i = 0; i < index; ++i)
      temp_arr[i] = _arr[i];
    for(int i = index; i < _length; ++i)
      temp_arr[i] = _arr[i + 1];
    delete[] _arr;
    _arr = temp_arr;
    return element;
  }

  ll Array::remove_front() { return this->remove(0); }
  ll Array::remove_back() { return this->remove(_length - 1); }

  std::optional<ull> Array::linear_search(ll element)
  {
    for(ull i = 0; i < _length; ++i)
      if(_arr[i] == element) return i;
    return std::nullopt;
  }
  
  std::optional<ull> Array::binary_search(ll element, bool increasing)
  {
    ll s = 0, e = _length - 1;

    while(s <= e)
    {
      ll mid = (s + e) / 2;
      if(_arr[mid] == element) return mid;
      else if(_arr[mid] > element && increasing == true) e = mid-1;
      else if(_arr[mid] < element && increasing == false) e = mid-1;
      else s = mid+1;
    }

    return std::nullopt;
  }

  ull Array::length() { return _length; }

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
} // namespace adt