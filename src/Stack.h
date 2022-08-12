#pragma once
#include <memory.h>
#include <forward_list>

template <class T>
class Stack
{
  private:
    std::shared_ptr<std::forward_list<T>> list;
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
  list = std::shared_ptr<std::forward_list<T>>(new std::forward_list<T>());
  size = 0;
}

template <class T>
void Stack<T>::push(T inputData) {
  list->push_front(inputData);
  size += 1;
}

template <class T>
void Stack<T>::pop() {
  if (isEmpty()) return;

  list->pop_front();
  size -= 1;
}

template <class T>
T Stack<T>::top() {
  if (isEmpty()) return NULL;

  return list->front();
}

template <class T>
bool Stack<T>::isEmpty() {
  return size == 0;
}

template <class T>
unsigned int Stack<T>::getSize() {
  return size;
}
