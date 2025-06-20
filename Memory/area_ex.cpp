#include <iostream>

using namespace std;
// area function
void area(double* length, double* width, double* result) {
  *result = *length * *width;
}

// main function
int main() {
  // Initialize variables length and width
  double length = 8.9, width = 2.1;
  // Initialize variable result
  double result = 0;
  // Print value of result before function call
  cout << "Before calling function area:" << endl;
  cout << "result = " << result << endl;
  // Call function area and pass the address of variables
  area(&length, &width, &result);
  // Print value of result after function call
  cout << "After calling function area:" << endl;
  cout << "result = " << result << endl;
  return 0;
}