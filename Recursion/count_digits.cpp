// inputs
// count_digits (2436);
// count_digits (1);
// count_digits (-1234);

// output
// digits = 4
// digits = 1
// digits = 4

/* Write your recursive function count_digits here
The function should take the value of type int in its input parameters
and return int value in the output*/

#include <iostream>

using namespace std;

// Recursive count_digits function
int count_digits(int number) {
  // Base Case
  if (abs(number) / 10 == 0) {
    return 1;
  }
  // Recursive Case
  else {
    return 1 + count_digits(number / 10);
  }
}

// main function
int main() {
  int n = 5001;
  int result;
  // Call count_digits function in main and store the returned value in result
  result = count_digits(n);
  // Prints value of result
  cout << "# digits of " << n << " = " << result << endl;
  return 0;
}