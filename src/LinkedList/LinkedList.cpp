#include "ADTPP/LinkedList/LinkedList.hpp"

namespace adt
{
  //////////// Node ////////////

  Node::Node(ll _data, Node* _next)
  {
    data = _data;
    next = _next;
  }

  //////////// LinkedList ////////////\

  LinkedList::LinkedList()
  {
    _length = 0;
    _sentinel = new Node(0, nullptr);
  }
  
  LinkedList::LinkedList(std::initializer_list<ll> list)
  {
    _length = list.size();
    _sentinel = new Node(0, nullptr);
    Node *temp = _sentinel;

    for(ll el : list)
    {
      Node *new_node = new Node(el, nullptr);
      temp->next = new_node;
      temp = temp->next;
    }
  }

  ll& LinkedList::operator[](ull index)
  {
    Node *temp = _sentinel;
    for(ull i = 0; i <= index; ++i)
    {
      temp = temp->next;
    }
    return temp->data;
  }

  void LinkedList::insert(ll element, ull index)
  {
    Node *temp = _sentinel;
    for(ull i = 0; i < index; ++i)
    {
      temp = temp->next;
    }
    Node *new_node = new Node(element, temp->next);
    temp->next = new_node;
    ++_length;
  }

  void LinkedList::insert_front(ll element) { this->insert(element, 0); }
  void LinkedList::insert_back(ll element) { this->insert(element, _length); }

  ll LinkedList::remove(ull index)
  {
    Node *temp = _sentinel;
    for(ull i = 0; i < index; ++i)
      temp = temp->next;
    Node *del_node = temp->next;
    temp->next = del_node->next;
    ll element = del_node->data;
    delete del_node;
    --_length;
    return element;
  }

  ll LinkedList::remove_front() { return this->remove(0); }
  ll LinkedList::remove_back() { return this->remove(_length - 1); }
  
  void LinkedList::print()
  {
    Node *temp = _sentinel;
    while(temp->next != nullptr)
    {
      temp = temp->next;
      std::cout << temp->data << " ";
    }
  }

  ull LinkedList::length() { return _length; }

  std::optional<ull> LinkedList::linear_search(ll element)
  {
    Node *temp = _sentinel;
    for(int i = 0; temp->next != nullptr; ++i)
    {
      temp = temp->next;

      if(temp->data == element) return i;
    }
    return std::nullopt;
  }

  LinkedList::~LinkedList()
  {
    while(_sentinel != nullptr)
    {
      Node* temp = _sentinel->next;
      delete _sentinel;
      _sentinel = temp;
    }
    _length = 0;
  }
} // namespace adt