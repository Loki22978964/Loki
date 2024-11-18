#include <iostream>

int main() {
    unsigned number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    unsigned n = number ;

    while (number > 2 && number % 2 == 0) {
        number /= 2; // Ділимо на 2
    }
     if (number == 2) {
        std::cout << number << "is 2 to the power of n" << std::endl;
     }
     else{
        std::cout << number << "is not a power of 2" << std::endl;
     }
    
    return 0;
}