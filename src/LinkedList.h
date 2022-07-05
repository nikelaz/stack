#pragma once
#include <memory.h>
#include "Node.h"

template <class T>
class LinkedList
{
  private:
    std::shared_ptr<Node<T>> head;
  public:
    LinkedList();
    void push(T);
    void pop();
    std::shared_ptr<Node<T>> getHead();
};

template <class T>
LinkedList<T>::LinkedList() {
  head = nullptr;
}

template <class T>
void LinkedList<T>::push(T data) {
  std::shared_ptr<Node<T>> newNode(new Node<T>(data, head));
  head = newNode;
}

template <class T>
void LinkedList<T>::pop() {
  if (head == nullptr) return;
  head = head->getNext();
}

template <class T>
std::shared_ptr<Node<T>> LinkedList<T>::getHead() {
  return head;
}
