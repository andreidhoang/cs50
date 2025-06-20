#include <iostream>

using namespace std;

// printArray function
void printArray(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// set_odd function
int set_odd(int* arr, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 != 0) {
      arr[i] = -1;
    }
  }
  return 0;
}

// main function
int main() {
  // Initialize size of an array
  int size = 5;
  // Declare dynamic array
  int* arr = new int[size];

  // Initialize array
  for (int i = 0; i < size; i++) {
    arr[i] = i;
  }
  // Call printArray function
  printArray(arr, size);
  // Call set_odd function
  set_odd(arr, size);
  printArray(arr, size);
  return 0;
}