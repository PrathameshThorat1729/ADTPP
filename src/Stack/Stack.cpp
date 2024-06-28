#include "ADTPP/Stack/Stack.hpp"

namespace adt
{
  void Stack::push(ll element)
  {
    this->insert_front(element);
  }

  ll Stack::pop()
  {
    return this->remove_front();
  }

  ll Stack::top()
  {
    return _sentinel->next->data;
  }

  ll Stack::peek(ull index)
  {
    return this->operator[](index);
  }
} // namespace adt
