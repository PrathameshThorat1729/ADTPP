#ifndef ADTPP_ARRAY_HPP
#define ADTPP_ARRAY_HPP

#include <iostream>
#include <optional>
#include <initializer_list>

namespace adt
{

  typedef long long int ll;
  typedef unsigned long long int ull;

  class Array
  {
    private:
      ll* _arr;
      ull _length;
    
    public:
      Array(ull size, ll element = 0);
      Array(std::initializer_list<ll> list);

      ll& operator[](ull index);

      void insert(ll element, ull index);
      void insert_front(ll element);
      void insert_back(ll element);

      void remove(ull index);

      ull length();

      std::optional<ull> linear_search(ll element);
      std::optional<ull> binary_search(ll element, bool increasing = true);

      void print();
      ~Array();
  }; // class adt::Array
} // namespace adt

#endif // ADTPP_ARRAY_HPP