#include <iostream>

using namespace std;
// function definition
// The function should take two values of type int in its input parameters and
// return nothing in the output*/
void minimum(int &number1, int &number2) {
  if (number1 > number2) {
    number2 = -1;
  } else if (number1 < number2) {
    number1 = -1;
  } else {
    number1 = -1;
    number2 = -1;
  }
}

int main() {
  int number1 = 6;
  int number2 = 2;
  minimum(number1, number2);
  std::cout << number1 << " " << number2 << endl;

  return 0;
}