#include <iostream>

int main() {
  unsigned number;

  std::cout << "Enter the number: ";
  std::cin >> number;

  for (unsigned power = 0; ; power++, number /= 2) {
    if (number == 1) {
      std::cout << "number is 2 to the power of " << power;
      break;
    }

    if (number % 2 != 0) {
      std::cout << "number is not a power of 2";
      break;
    }
  }
  return 0;
}