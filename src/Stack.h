#pragma once
#include <memory.h>
#include <forward_list>
#include <exception>

class UnderflowException : public std::exception {
public:
  char* what() {
    return "An underflow exception occured.";
  }
};

template <class T>
class Stack
{
  private:
    std::unique_ptr<std::forward_list<T>> container;
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
  container = std::unique_ptr<std::forward_list<T>>(new std::forward_list<T>());
  size = 0;
}

template <class T>
void Stack<T>::push(T inputData) {
  container->push_front(inputData);
  size += 1;
}

template <class T>
void Stack<T>::pop() {
  if (isEmpty()) {
    throw UnderflowException();
  }

  container->pop_front();
  size -= 1;
}

template <class T>
T Stack<T>::top() {
  if (isEmpty()) return NULL;

  return container->front();
}

template <class T>
bool Stack<T>::isEmpty() {
  return size == 0;
}

template <class T>
unsigned int Stack<T>::getSize() {
  return size;
}
