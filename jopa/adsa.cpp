#include <iostream>

int main() {
    unsigned number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    unsigned original = number; // Початкове значення для виводу результату
    unsigned power = 0;         // Лічильник степеня

    // PUT YOUR CODE HERE
    while (number > 1) {
        if (number % 2 != 0) { 
             std::cout << "yes" << std::endl ;
             
            break;      
        }
        else{
            std::cout << "yes" << std::endl ;
            break;  
        }
        number /= 2;   // Ділимо на 2
        power++;       // Рахуємо степінь
    }

    

    return 0;
}
