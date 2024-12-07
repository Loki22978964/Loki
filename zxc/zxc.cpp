#include <iostream>
// Якщо FLAGS не визначений через опції компілятора, то задаємо йому значення
// за замовчуванням 0 - вимкнути все.
#ifndef FLAGS
#define FLAGS 0
#endif
// Для покращення якості коду, створюємо окремий макрос для кожного біта.
#define FLAG_CHECK   (1 << 0) // Біт 0 - Перевірка ділення на 0.
#define FLAG_DOUBLE  (1 << 1) // Біт 1 - Використовувати double.
#define FLAG_VERBOSE (1 << 2) // Біт 2 - Виводити повідомлення.
// Визначаємо макрос "calc_t" в залежності від FLAG_DOUBLE.
// На відміну від інших макросів, "calc_t" записаний малими літерами, щоб
// візуально бути схожим на стандартні імена типів.
#if FLAGS & FLAG_DOUBLE
#define calc_t double
#else
#define calc_t int
#endif

int main() {
   // Оголошуємо змінні для операндів і результату.
   calc_t a;
   calc_t b;
   calc_t result;
   // Зчитуємо операнди. Виводимо запит, якщо встановлено біт FLAG_VERBOSE.
#if FLAGS & FLAG_VERBOSE
   std::cout << "Enter the operands for division: ";
#endif
   std::cin >> a >> b;
   // Виконуємо ділення. Перевіряємо на 0, якщо встановлено біт FLAG_CHECK.
#if FLAGS & FLAG_CHECK
   if (!b) {
       std::cout << "Divisor is 0." << std::endl;
       return 0;
   }
#endif
   result = a / b;
   // Виводимо результат. Виводимо вираз, якщо встановлено біт FLAG_VERBOSE.
#if FLAGS & FLAG_VERBOSE
   std::cout << a << " / " << b << " = ";
#endif
   std::cout << result << std::endl;
   return 0;
}