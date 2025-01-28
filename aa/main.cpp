// #include <iostream>
// using namespace std;

// class Point{
//     private:

//     int x;
//     int y;

//     public:
//     Point() :  x(0) , y (0){
//          cout << "Parameterized constructor called" << endl;
//     }

//     Point (int x ,int y){
//         this->x = x;
//         this->y = y;
//     }

//     Point(const Point& other){
//         this->x = 2 + other.x;
//         this->y =4 + other.y;
//         cout << "copy" << " ";
//     }

//     Point( Point&& other) noexcept{
//         this->x = other.x;
//         this->y = other.y;
//         other.x = 0; // Обнуляємо "переміщений" об'єкт
//         other.y = 0;
//         cout << "move" << " ";
//     }

//     void Print(){
//         cout << x << " " << y << endl;
//     }
//     void Paste(){
//         x = 2;
//         y = 8;
//         cout << "Paste ";
//     }
// };

// int main(){
//     Point s;
//     Point a(2 , 8);
//     a.Print();
//     Point b(a);
//     b.Print();
//     Point c(std::move(a));
//     c.Print();
//     // a.Paste(); метод для заповнення після переміщення
//     a.Print();


//     return 0;
// }

// #include <iostream>
// #include <string>

// struct smartstring : public std::string {
//     // Перевантаження оператора []
//     unsigned operator[](char letter) const {
//         for (unsigned i = 0; i < this->size(); ++i) {
//             if ((*this)[i] == letter) {  // порівнюємо символи
//                 return i;  // якщо знайдено, повертаємо індекс
//             }
//         }
//         return this->size();  // якщо не знайдено, повертаємо розмір рядка
//     }
// };

// int main() 
// {
//     smartstring string;
//     char letter;
//     // Зчитати рядок і букву, яку потрібно знайти.
//     std::cout << "Enter the string and the letter: ";
//     std::cin >> string >> letter;
//     // Знайти букву і вивести повідомлення.
//     unsigned i = string[letter];
//     std::cout << "Letter " << letter;
//     if (i < string.size()) {
//         std::cout << " is found at " << i;
//     } else {
//         std::cout << " is not found";
//     }
//     std::cout << std::endl;
  
//     return 0;  
// }




#include <iostream>
#include <stdexcept>
using namespace std;

void InnerFunction() {
    throw runtime_error("Виняток із InnerFunction");
}

void OuterFunction() {
    try {
        InnerFunction(); // Генерація винятку
    } catch (const exception& ex) {
        cout << "Обробка у OuterFunction: " << ex.what() << endl;
        throw; // Перевикидання винятку
    }
}

int main() {
    try {
        OuterFunction(); // Виклик функції, де відбувається перевикидання
    } 
    catch (const exception& ex) {
        cout << "Обробка у main: " << ex.what() << endl;
    }
    return 0;
}
