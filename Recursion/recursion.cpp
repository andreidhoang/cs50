#include <iostream>

using namespace std;

// Recursive factorial function
int factorial(int n) {
  // Invalid value
  if (n < 0) {
    return -1;
  }
  // Base case
  if (n == 1 || n == 0) {
    return 1;
  }

  // recursive case
  return n * factorial(n - 1);
}

// main function
int main() {
  int n = 5;
  int result;
  // Call factorial function in main and store the returned value in result
  result = factorial(n);
  // Prints value of result
  cout << "Factorial of " << n << " = " << result << endl;
  return 0;
}