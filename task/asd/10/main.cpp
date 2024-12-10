#include <iostream>
#include <string> // Для std::string

struct S {
    int data; // Доданий прикладовий член структури
};

struct S1 {
    char a[2];    // Масив з 2 елементів типу char
    char c;       // Звичайна змінна типу char
    const char* s;      // Вказівник на тип char
    S* p;         // Вказівник на структуру типу S
    short i;      // Змінна типу short
} z = { "a", 'b', "&qwerty", new S{42} }; // Приклад ініціалізації


int main() {
    cout << sizeof(S1);
    return 0;
}

