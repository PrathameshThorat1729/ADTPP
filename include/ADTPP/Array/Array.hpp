#ifndef ADTPP_ARRAY_HPP
#define ADTPP_ARRAY_HPP

#include <iostream>
#include <optional>
#include <initializer_list>

#include "ADTPP/ADTTypedef.hpp"

namespace adt
{
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

      ll remove(ull index);
      ll remove_front();
      ll remove_back();

      ull length();

      std::optional<ull> linear_search(ll element);
      std::optional<ull> binary_search(ll element, bool increasing = true);

      void print();
      ~Array();
  }; // class adt::Array
} // namespace adt

#endif // ADTPP_ARRAY_HPP