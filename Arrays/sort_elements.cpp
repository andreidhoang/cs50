#include <iostream>
using namespace std;

// sort_elements ({10, 67, 98, 31}, 4 );
//  --> {98, 67, 31, 10}

// biggest = 10

void sort_elements(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int max_idx = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] > arr[max_idx]) {
        max_idx = j;
      }
    }
    // Swap arr[i] and arr[max_idx]
    int temp = arr[i];
    arr[i] = arr[max_idx];
    arr[max_idx] = temp;
  }
}

// Function to print values of an array
void print_array(int arr[], int size) {
  // Traverse array
  for (int i = 0; i < size; i++) {
    // Print value at index i
    cout << arr[i] << " ";
  }
  cout << endl;
}

// main function
int main() {
  // Initialize size of an array
  const int size = 4;
  // Initialize array elements
  int arr[size] = {10, 67, 98, 31};

  cout << "Array before sorting: " << endl;
  // Call print_array function
  print_array(arr, size);

  // Call sort_elements function
  sort_elements(arr, size);

  cout << "Array after sorting: " << endl;
  // Call print_array function
  print_array(arr, size);

  return 0;
}