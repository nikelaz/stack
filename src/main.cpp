#include <iostream>
#include "memory.h"
#include "Stack.h"

int main() {
  Stack<int> stackInstance;
  
  std::cout << "Pushing 1, 2 and 3 to the stack.." << std::endl;  

  stackInstance.push(1);
  stackInstance.push(2);
  stackInstance.push(3);

  std::cout << "Top of the stack: " << stackInstance.top() << std::endl;

  std::cout << "Popping the top element of the stack.." << std::endl;

  stackInstance.pop();

  std::cout << "Top of the stack: " << stackInstance.top() << std::endl;

  std::cout << "Stack instance size: " << stackInstance.getSize() << std::endl;

  return 0;
}
