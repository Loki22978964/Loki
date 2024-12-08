#include <iostream>
static int counter = 0;
void print_a() {
    ++counter;
    std::cout << "print_a call counter: " << counter << std::endl;
}
