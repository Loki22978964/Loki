#include <iostream>
static int counter = 0;
void print_b() {
    ++counter;
    std::cout << "print_b call counter: " << counter << std::endl;
}
