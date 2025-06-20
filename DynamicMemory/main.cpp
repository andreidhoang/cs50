#include <iostream>
using namespace std;

int main() {
  // Declare pointer ptr
  int* ptr = nullptr;
  // Store the starting address of dynamically reserved 4 bytes in ptr
  ptr = new int;
  // Store 100 in dynamic space
  *ptr = 100;
  // Print value pointed by ptr
  cout << *ptr;
  // Free the space pointed by pointer ptr
  delete ptr;

  // Initialize a varible a
  int a = 70;
  // Store the address of a in ptr
  ptr = &a;
  // Prints the value pointed by the ptr
  cout << *ptr;

  return 0;
}