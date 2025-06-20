#include <iostream>

using namespace std;

// Recursive factorial function
int fibonacci(int n) {
  // Invalid value

  // Base case
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    // recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

// main function
int main() {
  int nArray[4] = {0, 1, 2, 6};
  // Call factorial function in main and store the returned value in result
  for (int i = 0; i < sizeof(nArray); i++) {
    int result = fibonacci(nArray[i]);
    cout << "fibonacci of " << nArray[i] << " = " << result << endl;
  }

  // Prints value of result
  return 0;
}