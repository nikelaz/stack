#pragma once
#include <memory.h>
#include "LinkedList.h"

template <class T>
class Stack
{
  private:
    std::shared_ptr<LinkedList<T>> list;
    unsigned int size;

  public:
    Stack();
    void push(T);
    void pop();
    T top();
    bool isEmpty();
    unsigned int getSize();
};

template <class T>
Stack<T>::Stack() {
  std::shared_ptr<LinkedList<T>> newList(new LinkedList<T>());
  list = newList;
  size = 0;
}

template <class T>
void Stack<T>::push(T inputData) {
  list->push(inputData);
  size += 1;
}

template <class T>
void Stack<T>::pop() {
  if (isEmpty()) return;

  list->pop();
  size -= 1;
}

template <class T>
T Stack<T>::top() {
  if (isEmpty()) return NULL;

  return list->getHead()->getData();
}

template <class T>
bool Stack<T>::isEmpty() {
  return size == 0;
}

template <class T>
unsigned int Stack<T>::getSize() {
  return size;
}
