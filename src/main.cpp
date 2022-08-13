#include <iostream>
#include "memory.h"
#include "Stack.h"
#include <stack>

int main() {
  /*
   * Standard Library Stack 
   */
  std::cout << "Standard Library Stack" << std::endl << "======================================" << std::endl;

  std::stack<int> stdStackInstance;

  std::cout << "Pushing 1, 2 and 3 to the stack.." << std::endl;

  stdStackInstance.push(1);
  stdStackInstance.push(2);
  stdStackInstance.push(3);

  std::cout << "Top of the stack: " << stdStackInstance.top() << std::endl;

  std::cout << "Popping the top element of the stack.." << std::endl;

  stdStackInstance.pop();

  std::cout << "Top of the stack: " << stdStackInstance.top() << std::endl;

  std::cout << "Stack instance size: " << stdStackInstance.size() << std::endl;


  /*
   * Custom Stack Class  
   */
  std::cout << std::endl << "Custom Stack Class" << std::endl << "======================================" << std::endl;

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

  std::cin.get();

  return 0;
}
