#ifndef ADTPP_STACK_HPP
#define ADTPP_STACK_HPP

#include "ADTPP/LinkedList/LinkedList.hpp"
#include "ADTPP/ADTTypedef.hpp"

namespace adt
{
  class Stack : private LinkedList
  {
  public:

    void push(ll element);
    ll pop();
    ll top();
    ll peek(ull index);

    using LinkedList::length;
  }; // class Stack
} // namespace adt

#endif // ADTPP_STACK_HPP
