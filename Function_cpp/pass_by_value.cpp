#include <iostream>

using namespace std;
// function definition
void passReference(int &number) {
  // Multiply the number by 10
  number = number * 10;
  cout << "Value of number inside the function = " << number << endl;
}

void passByValue(int number) {
  number = number * number * number;
  cout << "number = " << number << endl;
}

int main() {
  int number = 5;
  passByValue(number);
  passReference(number);
  cout << "number = " << number << endl;

  return 0;
}