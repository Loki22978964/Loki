// #include <iostream>

// using std::cout;
// using std::endl;

// struct A {
//    char *p; /* 4 або 8 байт */
//    char c; /* 1 байт */
//    char pad [3]; /* 3 байти */
//    int x;
// };

// #pragma pack(push, 1)
// struct B {
//    char c; /* 1 байт */
//    char *p; /* 4 або 8 байт */
//    char pad [3]; /* 3 байти */
//    int x;
// };
// #pragma pack(pop)

// struct COLOR{
//    union M {int i;} u;
//    char m0, m1 , m2 , m3; 
// } ;

// int main() {
//    A a;
//    B b;
//    COLOR c;

//    cout << "Addresses:\n*p: " << &a.p << " c: " <<  (void *)&a.c << " pad: " << &a.pad << " x: " << &a.x << endl
//         << "Size of the structure: " << sizeof(a) << endl;

//    cout << "Addresses:\n*p: " << &b.p << " c: " <<  (void *)&b.c << " pad: " << &b.pad << " x: " << &b.x << endl
//         << "Size of the structure: " << sizeof(b) << endl;

//    cout << "Size of the structure: " << sizeof(c) << endl;

//    return 0;
// }






// #include <iostream>
// using namespace std;
// #include <type_traits>

// struct A {};                     // Обычная структура

// typedef union { int a; float b; } B;  // Объявление union через typedef

// struct C { B d; };               // Структура с полем типа union

// int main(void) {
//     cout << boolalpha
//          << "A:" << std::is_union<A>::value << '\n'  // Проверка для структуры A
//          << "B:" << std::is_union<B>::value << '\n'  // Проверка для union B
//          << "C:" << std::is_union<C>::value << '\n'  // Проверка для структуры C
//          << "int:" << std::is_union<int>::value << '\n';  // Проверка для int
//     return 0;
// }

#include <iostream>
using namespace std;

int i;               // ініціалізуємо глобальну змінну i
int& j = i;          // оголошуємо посилання на глобальну змінну i
// int& z; помилка

int main(void) {
    int i = 1;       // ініціалізуємо локальну змінну i
    int *const p1 = &i; // оголошуємо константний вказівник на локальну змінну i
    int& p2 = i;     // оголошуємо посилання на локальну змінну i

    cout << "Variable address: 0x" << hex << &i << '\n'
         << "Reference address: 0x" << hex << &p2 << '\n'
         << "Pointer address: 0x" << hex << &p1 << '\n'
         << "Pointed address: 0x" << hex << &*p1 << '\n';

    p2 = 10;         // використання посилання для зміни значення локальної змінної i

    return 0;
}
