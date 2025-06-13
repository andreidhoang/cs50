#include <iostream>
using namespace std;

// Function calculate_average
double average(double numbers[], int size) {
  double sum = 0;
  double average = 0;
  for (int i = 0; i < size; i++) {
    sum += numbers[i];
  }
  average = sum / size;

  return average;
}

// main function
int main() {
  // Initialize array size
  const int size = 8;
  // Declare variable to store output of function
  double result;
  // Initialize array
  double number[size] = {67, 89, 56, 43, 29, 15, 90, 67};
  // Call function and store its output in result
  result = average(number, size);
  // Print value of result
  cout << "average = " << result;
}