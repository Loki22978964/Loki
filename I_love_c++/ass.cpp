#include <iostream>

int main() {
    unsigned number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    // PUT YOUR CODE HERE
    for (unsigned no = 1, n = 0;; no *= 2, n++) {
        if (no == number) {
            std::cout << number << " is 2 to the power of " << n << std::endl;
            break;
        }
        if (no > number) {
            std::cout << number << " is not a power of 2" << std::endl;
            break;
        }
    }
   

    return 0;
}
