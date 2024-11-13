// #include <iostream>
// #include <cmath>  

// using namespace std;

// int main() {
//   double a, b, c;
//     cin >> a >> b >> c;
//     double numbers[3] = {a, b, c};

//     for ( int i = 1 ; i < 3 ; i++ ){
//       if (fabs (numbers[0] - numbers[i] ) >= 0.1){
//         cout << 0 << endl;
//       }
      
//     }
//     cout << 1 << endl;
//     return 0;
// }
#include <iostream>

int main() {
    double a;
    double b;
    double c;
    std::cin >> a >> b >> c;
    // N чисел еквівалентні з заданою точністю тоді і тільки тоді, коли
    // найбільше і найменше з них еквівалентні з цією точністю.
    // В даному випадку - треба визначити найбільше і найменше з трьох,
    // знайти їх різницю, і порівняти з 0.1.
    // Спочатку відсортуємо a та b так, що a - більше, b - менше з двох.
    if (a < b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    // Тепер гарантується, що a >= b. Потрібно визначити, яким є значення
    // с відносно a та b. Залежно від цього, можна одразу вивести результат.
    if (c >= a) {
        // c >= a >= b
        std::cout << ((c - b) < 0.1);
    }
    else if (c >= b) {
        // a >= c >= b
        std::cout << ((a - b) < 0.1);
    }
    else {
        // a >= b >= c
        std::cout << ((a - c) < 0.1);
    }
    std::cout << std::endl;
    return 0;
}