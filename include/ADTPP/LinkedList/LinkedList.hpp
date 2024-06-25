#ifndef ADTPP_LINKED_LIST_HPP
#define ADTPP_LINKED_LIST_HPP

#include <iostream>
#include <initializer_list>

#include "ADTPP/ADTTypedef.hpp"

namespace adt
{
  struct Node
  {
    ll data;
    Node* next;

    Node(ll _data, Node* _next);
  }; // class Node

  class LinkedList
  {
  private:
    Node* _sentinel;
    ull _length;

  public:
    LinkedList();
    LinkedList(std::initializer_list<ll> list);

    ll& operator[](ull index);

    void insert(ll element, ull index);
    void insert_front(ll element);
    void insert_back(ll element);

    ll remove(ull index);
    ll remove_front();
    ll remove_back();

    void print();

    ~LinkedList();
  }; // class LinkedList
} // namespace adt

#endif // ADTPP_LINKED_LIST_HPP