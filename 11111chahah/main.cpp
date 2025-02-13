// // #include <iostream>

// // int main() 
// // {
// //     int size;
// //     int* original;
// //     int* reversed;


// //     std::cout << "Enter the size: ";
// //     std::cin >> size;
// //     std::cout << "Enter the numbers: ";
// //     original = new int[size];
// //     for (int i = 0; i < size; ++i) {
// //         std::cin >> original[i];
// //     }
    
// //     reversed = new int[size];

// //     for (int i = 0 ; i < size ; i++){
// //         reversed[i] = original[(size - 1)- i];
// //     }

    


// //     std::cout << "Reversed:";
// //     for (int i = 0; i < size; ++i) {
// //         std::cout << ' ' << reversed[i];
// //     }
// //     std::cout << std::endl;

// //     delete[] original;
// //     delete[] reversed;

// //     return 0;
// // }





// // #include <iostream>

// // struct Complex{
// //     float a;
// //     float b;
// // };


// // int main() 
// // {
// //     Complex v1;
// //     Complex v2;
// //     std::cout << "Enter the first number: ";
// //     std::cin >> v1.a >> v1.b;
// //     std::cout << "Enter the second a: ";
// //     std::cin >> v2.a >> v2.b;

// //     Complex result;
// //     result.a = v1.a + v2.a;
// //     result.b = v1.b + v2.b;


// //     std::cout << "Result: ";
// //     std::cout << result.a << " + " << result.b << 'i' << std::endl;
   
// //     return 0;
// // }

// #include <iostream>
// struct Pixel{
//     int r;
//     int g;
//     int b;
//     int a;
// };

// int main() 
// {
//     std::cout << "RGBA pixel (dec): ";
//     Pixel pixel;
//     int channels[4];
//     std::cin >> channels[0] >> channels[1] >> channels[2] >> channels[3];
//     pixel.r = channels[0];
//     pixel.g = channels[1];
//     pixel.b = channels[2];
//     pixel.a = channels[3];

//     std::cout << "RGBA pixel (hex): #";
//     const char hex[] = "0123456789ABCDEF";

//     // Виведіть поля pixel згідно умови
//     // PUT YOUR CODE HERE
//     for(int i = 0 ; i < 4 ; i++){
//         std::cout << hex [channels[i]];
//     }

//     std::cout << std::endl;

//     return 0;
// }



// #include <iostream>
// #include <string>

// struct Book{
//     int year;
//     std::string name;
// };

// int main() 
// {
//     Book books[5];
//     Book result;
//     for (int i = 0; i < 5; ++i) {
//         std::cout << "Enter book " << i + 1 << ": ";
//         std::cin >> books[i].year;
//         std::cin.get();
//         std::getline(std::cin, books[i].name);
//     }

//     result.year = books[0].year;

//     for (int i = 0 ; i < 5 ; i++){
//         if (result.year < books[i].year){
//             result.year = books[i].year;
//             result.name = books[i].name;
//         }
//     }

//     std::cout << "Newest: ";
//     std::cout << '"' << result.name << '"' << ' ';
//     std::cout << '(' << result.year << ')' << std::endl;

//     return 0;
// }


// #include <iostream>
// #include <string>
// struct Book{
//     int year;
//     std::string name;
// };

// int main() 
// {
//     Book books[5];
//     Book result;
//     for (int i = 0; i < 5; ++i) {
//         std::cout << "Enter book " << i << ": ";
//         std::cin >> books[i].year;
//         std::cin.get();
//         std::getline(std::cin, books[i].name);
//     }


//    result.year = books[0].year;
//    result.name = books[0].name;

//     for (int i = 0 ; i < 5 ; i++){
//         if (result.year < books[i].year){
//             result.year = books[i].year;
//             result.name = books[i].name;
//         }
//     }


//     std::cout << "Newest: ";
//     std::cout << '"' << result.name << '"' << ' ';
//     std::cout << '(' << result.year << ')' << std::endl;
  
//     return 0;  
// }


//         #include <iostream>
// #include <string>
// struct Book{
//     int year;
//     std::string name;
// };

// int main() 
// {
//     Book books[5];
//     Book result;
//     for (int i = 0; i < 5; ++i) {
//         std::cout << "Enter book " << i << ": ";
//         std::cin >> books[i].year;
//         std::cin.get();
//         std::getline(std::cin, books[i].name);
//     }


//    result.year = books[0].year;
//    int p;

//     for (int i = 0 ; i < 5 ; i++){
//         if (result.year < books[i].year){
//             result.year = books[i].year;
//             p = i;
//         }
//     }
//     result.name = books[p].name;


//     std::cout << "Newest: ";
//     std::cout << '"' << result.name << '"' << ' ';
//     std::cout << '(' << result.year << ')' << std::endl;
  
//     return 0;  
// }



// #include <iostream>

// int main() 
// {
//     int h, w;
//     double** matrix;
//     std::cout << "Enter height: ";
//     std::cin >> h;
//     std::cout << "Enter width: ";
//     std::cin >> w;

//     matrix = new double*[h];
//     for (int i = 0; i < h; i++) {
//         matrix[i] = new double[w];
//     }

//     std::cout << "Enter matrix:" << std::endl;
//     for (int i = 0; i < h; i++) {
//         for (int j = 0; j < w; j++) {
//             std::cin >> matrix[i][j];
//         }
//     }
//     double result = 0;
//      std::cout << "Enter matrix:" << std::endl;
//     for (int i = 0; i < h; i++) {
//         for (int j = 0; j < w; j++) {
//            result = result + matrix[i][j];
//         }
//     }
//     result = result / (w * h);

//     std::cout << "Average: " << result << std::endl;

//     for (int i = 0; i < h; i++) {
//         delete[] matrix[i];
//     }
//     delete[] matrix;

//     return 0;
// }




// #include <iostream>

// int main() 
// {
//     int h, w;
//     double** arr;
//     std::cout << "Enter height: ";
//     std::cin >> h;
//     std::cout << "Enter width: ";
//     std::cin >> w;
//     arr = new double* [h];
//     for (int i = 0 ; i < h ; i++){
//         arr[i] = new double[w];
//     }
//     std::cout << "Enter matrix:" << std::endl;
//     for (int i = 0 ; i < h; i++){
//         for (int j = 0 ; j < w; j++){
//             std::cin >> arr[i][j];
//         }
//     }
//     double res = 0;
//     for (int i = 0 ; i < h; i++){
//         for (int j = 0 ; j < w; j++){
//             res +=  arr[i][j];
//         }
//     }
//     res = res / (h*w);
//     std::cout <<res;

//         for (int i = 0; i < h; i++) {
//         delete[] arr[i];
//     }
//     delete[] arr;
//     return 0; 

    
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int row;
//     int cols;
//     cout<<"row "; cin >> row;
//     cout << "cols "; cin >> cols;
//     double **arr;
//     arr = new double*[row];

//     for(int i = 0; i < row; i++){
//         arr[i] = new double[cols];
//     }

//     for(int i = 0; i < row; i++){
//         for(int j = 0 ; j< cols ; j++){
//             cout << "Enter ";
//             cin >> arr[i][j] ;
//         }
//     }

//     for(int i = 0; i < row; i++){
//         for(int j = 0 ; j< cols ; j++){
//             cout << arr[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     double r = 0;
//     for(int i = 0; i < row; i++){
//         for(int j = 0 ; j< cols ; j++){
//             r += arr[i][j] ;
//         }
//     }
//     r = r / (row * cols);

//    cout << r << endl;

//   return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int row, cols;
//     cout << "Rows "; cin >> row;
//     cout << "Cols "; cin >> cols;
//     int **arr = new int*[row];

//     for (int i = 0 ; i < row ; i++){
//         arr[i] = new int[cols];
//     }
//     for(int i = 0 ; i < row; i++){
//         for (int j = 0 ; j < cols; j++){
//             arr[i][j] = rand()%20;
//         }
//     }
//     for(int i = 0 ; i < row; i++){
//         for (int j = 0 ; j < cols; j++){
//             cout << arr[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     return 0;

// }


// #include <iostream>
// using namespace std;

// int fib(int n){
//     int rez;
//     if (n == 1){
//         rez = 1;
//     }
//     else if ( n == 0){
//         rez = 0;
//     }
//     else{
//         rez = fib(n - 1) + fib(n - 2); 
//     }
//     return rez;
// }

// int main()
// {
//     for (int count=0; count < 20; ++count)
//         std:: cout << fib(count) << " ";
 
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
//     const int s = 50;
//     int arr[s]{};
    
//     srand(time(NULL));
 
//  for(int i = 0; i < s; )
//  {
//  arr[i] = 1 + rand() % 100; 
//  if (arr[i] % 2 == 0){
//     cout << i + 1<<". " << arr[i] << endl;
//     i++;
//  }
//  }
//     return 0;
// }


// #include <iostream>
// #include <string>
// struct Book{
//     int year;
//     std::string name;
// };

// int main() 
// {
//     Book books[5];
//     Book result;
//     for (int i = 0; i < 5; ++i) {
//         std::cout << "Enter book " << i << ": ";
//         std::cin >> books[i].year;
//         std::cin.get();
//         std::getline(std::cin, books[i].name);
//     }


//    result.year = books[0].year;
//    int p;

//     for (int i = 0 ; i < 5 ; i++){
//         if (result.year < books[i].year){
//             result.year = books[i].year;
//             p = i;
//         }
//     }
//     result.name = books[p].name;


//     std::cout << "Newest: ";
//     std::cout << '"' << result.name << '"' << ' ';
//     std::cout << '(' << result.year << ')' << std::endl;
  
//     return 0;  
// }

// #include <iostream>
// #include <string>

// struct Book {
//     int year;
//     std::string name;
// };

// int main() 
// {
//     Book books[5];
//     Book result;

//     // Введення даних про книги
//     for (int i = 0; i < 5; ++i) {
//         std::cout << "Enter book " << i << ": ";
//         std::cin >> books[i].year;
//         std::cin.get(); // Видалення символу нового рядка після введення року
//         std::getline(std::cin, books[i].name);
//     }

//     // Ініціалізуємо результат першою книгою
//     result = books[0];

    
//     for (int i = 1; i < 5; ++i) { 
//         if (books[i].year > result.year) {
//             result = books[i]; 
//         }
//     }

//     // Виведення найновішої книги
//     std::cout << "Newest: ";
//     std::cout << '"' << result.name << '"' << ' ';
//     std::cout << '(' << result.year << ')' << std::endl;

//     return 0;  
// }


// #include <iostream>
// using namespace std;

// #define OUT cout << " main -\t::i = " << ::i << " i = " << i << " j = " << j << '\n';

// int i = 10;

// int& f() {
//     static int s = 0;
//     int i = -10;
//     s++;
//     i++;
//     ::i++;
//     cout << " f -\t::i = " << ::i << " i = " << i << " s = " << s << '\n';
//     return s;
// }

// int main() {
//     int i = 15;
//     int& j = f();
//     OUT;
//     f();
//     OUT;
//     i++;
//     ::i++;
//     f();
//     OUT;

    
// }



// #include <iostream>
// using namespace std;


// int main(){

//     int h , w;
//     cout << "enter h "; cin >> h;
//     cout << "enter w "; cin >> w;

//     float **arr = new float*[h];

//     for (int i = 0 ; i < h ; i ++){
//         arr[i] = new float[w];
//     }
// //

//     float** p2 = arr;

//     for (int i = 0 ; i < h ; i++){
//         for (int j = 0 ; j < w ; j++){
//             arr[i][j] = rand()%20;
//         }
//     }

//     float sum = 0, sum1 = 0, sum2 = 0;

//     for (int i = 0 ; i < h ; i++){
//         for (int j = 0 ; j < w ; j++){
//             sum += arr[i][j];
//             sum2 += *(*(p2 + i) +j );
//         }

//     }

//     cout << sum << "\n" << sum2;



// //
//     for (int i = 0 ; i < h ; i ++){
//         delete[] arr[i];
//     }

//     delete[] arr;

//     return 0;
// }

// #include <iostream>
    
//     using namespace std;

//     int a = 10;         // звичайна змінна
//     const int b = 20; 


// void check_const(int& var) {
//     if constexpr (std::is_const_v<std::remove_reference_t<T>>) {
//         std::cout << "const" << std::endl;
//     } else {
//         std::cout << "" << std::endl;
//     }
// }

// void f(const int);
// void f(int i) {}

// int main() {
//       // константна змінна

//     f(a);  // Виклик функції з не-const аргументом
//     f(b);  // Виклик функції з const аргументом
//     cout << check_const(a) << endl;
//     cout << check_const(b) << endl;
//     cout << check_const(f(a)) << endl;
//     cout << check_const(f(b)) << endl;

//     return 0;
// }


// #include <iostream>

// #define MF(N) void N(){ std::cout << "Виклик функції "#N << "\n"; }

// MF(a);
// MF(b);
// MF(c);
// MF(d);

// void(*mf[])() = { a, b, c, d };

// int main() {
//     while (1) {
//         std::cout << " Input: from a to d \n";
//         char c;
//         std::cin >> c;
//         if (c == 'q') break;
//         if ((c >= 'a') && (c <= 'd'))
//             (*mf[c - 'a'])();
//     }
// }  



// #include <iostream>
// #include <cstdarg>

// void f(int i, ...) {
//     std::va_list goo;
//     va_start(goo,i);

//      va_list goo2;
//     va_copy(goo2 , goo);

//     for(int j = 0; j < i ; j++){
//         std::cout << va_arg(goo, int) << " ";
//     }
//     std::cout << std::endl;
//     va_end(goo);
    
//     int sum = 0;
//     for(int j = 0; j < i ; j++){
//         sum += va_arg(goo2, int);
//     }
//     std::cout << sum << std::endl;
//     va_end (goo2);
// }

// int main() {
//     f(1, 1);       // Виклик з 1 аргументом
//     std::cout << std::endl; 
//     f(2, 1, 2);    // Виклик з 2 аргументами
//     std::cout << std::endl; 
//     f(3, 1, 2, 3); // Виклик з 3 аргументами
//     std::cout << std::endl; 

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Оголошення функцій
// void f(int  , int, int);         // Функція без дефолтних значень
// void f(int, int, int = 8);     // Функція з дефолтним значенням для третього параметра
// void f(int = 6, int = 7, int); // Функція з дефолтними значеннями для другого і третього параметра



// int main() {
//     f(1, 2, 3);   // Виклик з явними значеннями
//     f(1, 2);      // Виклик з дефолтним значенням для третього параметра
//     f(1);
//     f();         // Виклик з дефолтними значеннями для другого і третього параметра
//     // f(); // Цей виклик викликає помилку, бо немає функції f() без параметрів
// }

// // Реалізація функції f
// void f(int a, int b, int c) {
//     cout << a << " " << b << " " << c << endl;
// }



//  #include <iostream>

// int f(int, int);  
// int f(int, int = 8);  

// void g(int a = f(1)) { 
//     std::cout << a ; 
// }  

// int main() {  
//     g();  
// }  

// int f(int a, int c) { 
//     return 1; 
// }



// #include <iostream>

// int main() {
//     int x = 10, y = 20;
//     auto lambda = [x , y]() {
//         return x * y;
//     };
//     std::cout << lambda() << std::endl; // Виведе: 40
//     std::cout << "x: " << x << ", y: " << y << std::endl; // Виведе: x: 15, y: 25
//     return 0;
// }



// #include <iostream>

// int main() {
//     int x = 10, y = 20;
//     auto lambda = [x, &y]() {
//         y += x;
//         return y;
//     };
//     std::cout << lambda() << std::endl; // Виведе: 30
//     std::cout << "y: " << y <<  "x: " << x << std::endl; // Виведе: y: 30
//     return 0;
// }


// #include <iostream>

// int main() {
//     int x, y;

//     auto i = [&x, y](int k) {
//         x = 10;
//         k = 20;
//         std::cout << x + y + k ;
//         return x + y + k;
//     }(x);

//     // до С++14 не можна використовувати auto у списку параметрів
//     // auto l = [](auto first, auto second) { return first + second; };

//     int (*l)(int, int) = [](int first, int second) {
//         return first + second;
//     };

//     auto f = [](int first, int second) {
//         return first + second;
//     };

//     i = l(1, 2);
//     i = f(1, 2);
// }



// #include <iostream>

// int main() {
//     int x = 10, y = 5;

//     // Лямбда з захопленням, параметрами та явним поверненням
//     auto result = [x, &y](int a, int b) -> int {
//         y += b; // Можна змінювати y, бо захоплено за посиланням
//         return x + y + a; // x використовується за значенням
//     }(5, 10); // Передаємо аргументи: a = 3, b = 2

//     std::cout << "result: " << result << std::endl; // Виведе: result: 20
//     std::cout << "y: " << y << std::endl; // Виведе: y: 7
//     return 0;
// }


// #include <cmath>
// #include <iostream>
// using namespace std ;

// double s(double d1){
//     cout << "1 function" << endl;
//     return 3.14 * d1 * d1;
// }

// double s(double d1 , double d2){
//     cout << "2 function" << endl;
//     return  d1 * d2;
// }

// double s ( double d1 , double d2 , double d3){
//     cout << "3 function " << endl;
//         double p = (d1 + d2 + d3) / 2;
//     return sqrt(p * (p - d1) * (p - d2) * (p - d3));
// }

// int main(){

//     cout << s(1) << endl;
//     cout << s(1 , 2) << endl;
//     cout << s(4 , 2 ,3) << endl;

//     return 0;
// }


// #include <iostream>

// void print(int x) {
//     std::cout << "Це ціле число: " << x << std::endl;
// }

// void print(double x) {
//     std::cout << "Це число з плаваючою комою: " << x << std::endl;
// }

// int main() {
//     print(5);    // Викликає функцію print(int)
//     print(5.5);  // Викликає функцію print(double)
//     print('b');  // Аргумент типу char! Неявно викликає print(int), бо 'a' перетворюється на код ASCII.
//     return 0;
// }






// #include <iostream>
// #include <vector>

// int main() {
//     // Масив чисел
//     const int s = 5;
//     int numbers [s] = {1, 2, 3, 4, 5};

    
//     // for (auto num : numbers) {
//     //     auto square = [](int x) { return x * x; };
//     //     std::cout << square(num) << " ";  // Вивести квадрат числа
//     // }

//     for (int i = 0 ; i < s ; i++) {
//         auto num = numbers[i];
//         auto square = [](int x) { return x * x; };
//         std::cout << square(num) << " ";  
//     }

//     return 0;
// }





// #include <iostream>

// const unsigned sz = 7;

// int callback_f(int *m, unsigned len, int(*comparator)(int, int)) {
//     int r = m[0];
//     for (unsigned i = 1; i < len; ++i) {
//         r = comparator(r, m[i]);
//     }
//     return r;
// }

// int max(int i, int j) {
//     return i < j ? j : i;
// }

// int min(int i, int j) {
//     return i > j ? j : i;
// }

// int main() {
//     int data[sz] = {3, 2, 1, 0, -1, -2, -3};

//     std::cout << "Max is  " << callback_f(data, sz, max) << '\n';
//     std::cout << "Min is  " << callback_f(data, sz, min) << '\n';

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int c (int * m , int sz, int(*fu)(int,int)){
//      int r = m[0];
//     for (int i = 1 ; i < sz ; i++){
//         r = fu(r , m[i]);
//     }
//     return r;
// }


// int max(int i , int j){
//     return i > j ? i : j;
// }

// int min(int i , int j){
//     return i < j ? i : j;
// }

// int main(){
//      int data[] = { 3, 2, 1, 0, -1, -2, -3 };
//       int sz = sizeof(data) / sizeof(data[0]);

//      cout << c(data , sz , max) << endl;
//      cout << c ( data , sz , min) << endl;
     
//      return 0;
// }




// #include <iostream>
// using namespace std;

// int f ( const int i){
   
//     return i; 
// }

// int main(){
//     int m = 5;

//     int p = f(m);

//     cout << p;

//     return 0;
// }




// #include <iostream>

// using namespace std;

// int main(){
//     auto  p = [](int x) { return x * x; };
// }
// #include <iostream>
// #include <functional>
// // Глобальна функція
// int add(int a, int b) {
//     return a + b;
// }
// int main() {
//     auto add_five = std::bind(add, 5, std::placeholders::_1);
//     return 0;
// }

// 
#include <iostream>
// #include <functional>       // Підключення заголовочного файлу
// using namespace std;        // Використання простору імен std
// using namespace std::placeholders;  // Використання std::placeholders для плейсхолдерів (_1, _2, ...)

// // Функція, яка приймає три аргументи і повертає їх суму
// double f(int i, char c, double d) { 
//     cout << i << endl;
//     cout << c << endl;
//     cout << d << endl;
//     return i + c + d; 
// }

// int main() {
//     auto bn = bind(f, _1 , 'c' , 4);  // Зв'язування функції f з фіксованими аргументами
//     double d = bn(7 );                 // Виклик зв'язаного об'єкта bn як функції
// }


// #include <iostream>
// using namespace std;

// void example() {
//     int x = 10;
//     auto lambda = [&]() { return x + 30 ; };  // x захоплюється за посиланням
//     cout << lambda() << endl;  // Виведе 10

//     x = 20;  // Змінюємо x
//     cout << lambda() << endl;  // Виведе 20, тому що lambda захопила посилання на x
// }

// int main() {
//     example();  // Викликаємо функцію example
//     return 0;
// }


// #include <type_traits>
// #include <iostream>
// using namespace std;

// auto f(char) -> int(*)() { 
//     return nullptr; 
// }

// int main() {
//     cout << boolalpha; // Для виведення булевих значень як true/false
//     cout << is_invocable<int()>::value << '\n'; // Перевірка, чи можна викликати функцію типу int()
//     cout << is_invocable_r<int, int()>::value << '\n'; // Перевірка, чи можна викликати функцію типу int() і отримати int
//     cout << is_invocable_r<void, void(int), int>::value << '\n'; // Перевірка, чи можна викликати функцію void(int) з параметром int і отримати void
//     cout << is_invocable_r<int(*)(), decltype(f), char>::value << '\n'; // Перевірка, чи можна викликати функцію f(char) та отримати тип int(*)()
    
//     return 0;
// }



// #include <iostream>
// #include <type_traits>



// int main() {
//     std::cout << std::boolalpha;
//     std::cout << "F: " << std::is_same<int(*)(int), std::decay<int(int)>::type>::value << '\n';

//     auto f1 = [](int) { return 1; };
//     std::cout << f1(5);
// }



#include <iostream>
// #include <type_traits>

// int main() {
//     int x = 5;
//     const int& y = x;

//     // Використовуємо std::decay для перетворення типів
//     std::cout << "Decay of int: " << typeid(std::decay<int>::type).name() << std::endl;
//     std::cout << "Decay of const int&: " << typeid(std::decay<const int&>::type).name() << std::endl;

//     return 0;
// }



// #include <iostream>
// #include <functional>
// using namespace std;

// // Константа, що визначає розмір масиву
// const unsigned sz = 7;

// // Функція з callback (вказівником на функцію), яка обчислює результат відповідно до переданого компаратора
// int callback_f(int *m, unsigned len, int (*comparator)(int , int) ) {
//     int result = m[0]; // Початкове значення
//     for (unsigned i = 1; i < len; ++i) {
//         result = comparator(result, m[i]); // Виклик функції comparator
//     }
//     return result;
// }

// // Функція для порівняння: повертає максимум з двох чисел
// int max(int i, int j) { 
//     return i < j ? j : i; 
// }

// // Функція для порівняння: повертає мінімум з двох чисел
// int min(int i, int j) { 
//     return i > j ? j : i; 
// }

// int main() {
//     // Вихідний масив
//     int data[sz] = { 3, 2, 1, 0, -1, -2, -3 };

//     // Використання callback_f з функцією max
//     std::cout << "Max is " << callback_f(data, sz, max) << '\n';

//     // Використання callback_f з функцією min
//     std::cout << "Min is " << callback_f(data, sz, min) << '\n';

//     return 0;
// }



// #include <iostream>
// #include <functional>


// void print_result(int result) {
//     std::cout << "The result is: " << result << std::endl;
// }

// void do_operation(int x, int y, std::function<void(int)> callback) {
//     int result = x + y;
//     callback(result);
// }
// int main(){
// do_operation(4, 5, print_result);

// return 0;
// }



// #include <iostream>

// int min (int *m , int size){
//     int res = m[0];
//     for(int i = 0 ; i < size; i++){
//         if ( res > m[i]){
//             res = m[i];
//         }
//     }
//     return res;
// }

// int main() {
//     // Зчитати розмір масиву.
//     int size;
//     std::cout << "Enter the size: ";
//     std::cin >> size;
//     // Зчитати масив.
//     std::cout << "Enter the numbers: ";
//     int* numbers = new int[size];
//     for (int i = 0; i < size; ++i) {
//         std::cin >> numbers[i];
//     }
//     // Вивести мінімальне.
//     std::cout << "Minimum: " << min(numbers, size) << std::endl;
//     delete[] numbers;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int min(int* n , int s){
//     int res = n[0];
//     for (int i = 1 ; i < s; i++){
//         if (res > n[i]){
//             res = n[i];
//         }
//     }
//     return res;
// }


// int main(){
//     int size;
//     cout << "Enter size: "; cin >> size;

//     int * num = new int[size];
//     for(int i = 0 ; i < size; i++){
//         cout << "Enter " << i + 1 <<" "; cin >> num[i];
//     }
//     int res = min(num, size);
//     cout << "Min " << res;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int rows, cols;
//     cout << "Enter rows "; cin >> rows;
//     cout << "Enter cols "; cin >> cols;

//     // 
//     int * arr = new int[rows];
//     for (int i = 0 ; i < rows ; i++){
//         arr[i] = i + 1;
//     }
//     for (int i = 0 ; i < rows ; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     delete[] arr;
//     //
//     int** arr2 = new int*[rows];

//     for ( int i = 0; i < rows ; i++){
//         arr2[i] = new int[cols]; 
//     }

//     for ( int i = 0; i < rows ; i++){
//         for(int j = 0 ; j < cols ; j++){
//             arr2[i][j] = 2 * i * j;
//         }
//     }

//     for ( int i = 0; i < rows ; i++){
//         for(int j = 0 ; j < cols ; j++){
//             arr2[i][j] = 2 * i * j;
//         }
//     }

//     for ( int i = 0; i < rows ; i++){
//         for(int j = 0 ; j < cols ; j++){
//            cout <<  arr2[i][j] <<'\t';
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < rows; i++) {
//     delete[] arr2[i];  // Звільнення пам'яті для i-го рядка
// }
//     delete[] arr2;
// }

// #include <iostream>

// void div(int d1, int d2, int& q, int& r){
//     q = d1 / d2;
//     r = d1 % d2;
// }

// int main() {
//     // Зчитати операнди.
//     int dividend; // Ділене.
//     int divisor; // Дільник.
//     std::cout << "Enter the operands: ";
//     std::cin >> dividend >> divisor;
//     // Обчислити частку і остачу.
//     int quotient = -1; // Частка.
//     int remainder = -1; // Остача.
//     div(dividend, divisor, quotient, remainder);
//     // Вивести результат.
//     std::cout << dividend << " / " << divisor << " = "
//              << quotient << " (" << remainder << ')' << std::endl;
//     return 0;
// }



// #include <iostream>
// #include <string>

// void print(int num){
//     std::cout << num;
// }
// void print(std::string num){
//     std::cout << '"' << num << '"';
// }

// int main() {
//     // Зчитати вхідні дані.
//     std::cout << "Enter the value: ";
//     std::string value;
//     std::cin >> value;
//     // Викликати print залежно від вхідних даних.
//     std::cout << "Formatted value: ";
//     if (isdigit(value[0])) {
//        print(std::stoi(value));
//     } else {
//        print(value);
//     }
//     std::cout << std::endl;
//     return 0;
// }




// #include <iostream>

// void call(double o1 , double o2, double(*a)(double, double)){
//     std::cout << a(o1, o2);
// }

// int main() {
//     // Зчитати операцію і операнди.
//     char operation; // Операція.
//     double o1;  // Лівий операнд.
//     double o2;  // Правий операнд.
//     std::cin >> o1 >> operation >> o2;
//     // Викликати call з відповідною операцією.
//     switch (operation) {
//     case '+':
//         call(o1, o2, [](double o1, double o2) { return o1 + o2; });
//         break;
//     case '-':
//         call(o1, o2, [](double o1, double o2) { return o1 - o2; });
//         break;
//     case '*':
//         call(o1, o2, [](double o1, double o2) { return o1 * o2; });
//         break;
//     case '/':
//         call(o1, o2, [](double o1, double o2) { return o1 / o2; });
//         break;
//     }
//     std::cout << std::endl;
//     return 0;
// }



// #include <iostream>

// int find(int* numbers, int size, bool (*f)(int, int)) {
//    int result = numbers[0];
//    for (int i = 1; i < size; ++i) {
//        if (f(numbers[i], result)) {
//            result = numbers[i];
//        }
//    }
//    return result;
// }

// int main() {
//     // Зчитати операцію і кількість чисел.
//    std::string operation;
//    int size;
//    std::cin >> operation >> size;
//    // Зчитати числа.
//    int* numbers = new int[size];
//    for (int i = 0; i < size; ++i) {
//        std::cin >> numbers[i];
//    }
//    int result;
//    if (operation == "min") {
//        auto m =[](int a , int b) -> bool {
//             return a < b;
//        };
//         result = find(numbers, size, m);
//    } 
//    else {
//         auto m = [](int a , int b) -> bool {
//             return a > b;
//         };
//         result = find(numbers, size, m);
//    }
//    // Вивести результат і звільнити виділену пам'ять.
//    std::cout << result << std::endl;
//    delete[] numbers;
//    return 0;
// }



// #include <iostream>
// #include <string>

// std::string modify_curly_brackets(const std::string& text) {
//     return std::string("{") + text + std::string("}");
// }

// std::string modify_square_brackets(const std::string& text) {
//     return std::string("[") + text + std::string("]");
// }

// std::string modify_round_brackets(const std::string& text) {
//     return std::string("(") + text + std::string(")");
// }

// std::string modify_duplicate(const std::string& text) {
//    return text + text;
// }

// int main() {
//    // PUT YOUR CODE HERE

//    // Зчитати слово і модифікації.
//    std::cout << "Enter the word: ";
//    std::string word;
//    std::cin >> word;
//    std::cout << "Enter the pattern: ";
//    std::string pattern;
//    std::cin >> pattern;
//    // Перетворити текст і вивести результат.
//    for (unsigned i = 0; i < pattern.size(); ++i) {
//        word = modifications[pattern[i] - '0'](word);
//    }
//    std::cout << word << std::endl;
//    return 0;
// }




// #include <iostream>
// #include <string>

// std::string modify_curly_brackets(const std::string& text) {
//     return std::string("{") + text + std::string("}");
// }

// std::string modify_square_brackets(const std::string& text) {
//     return std::string("[") + text + std::string("]");
// }

// std::string modify_round_brackets(const std::string& text) {
//     return std::string("(") + text + std::string(")");
// }

// std::string modify_duplicate(const std::string& text) {
//    return text + text;
// }

// int main() {
//    // PUT YOUR CODE HERE
//     std::string (*modifications[])(const std::string&){ 
//         modify_curly_brackets,
//         modify_square_brackets,
//         modify_round_brackets,
//         modify_duplicate};
//    // Зчитати слово і модифікації.
//    std::cout << "Enter the word: ";
//    std::string word;
//    std::cin >> word;
//    std::cout << "Enter the pattern: ";
//    std::string pattern;
//    std::cin >> pattern;
//    // Перетворити текст і вивести результат.
//    for (unsigned i = 0; i < pattern.size(); ++i) {
//        word = modifications[pattern[i] - '0'](word);
//    }
//    std::cout << word << std::endl;
//    return 0;
// }


// #include <iostream>
// class A {
//     long lx;
// public:
//     int x;
//     int F(int x) {
//     lx = A::x + 2;
//     return A::x + x + lx;
// }
// };



// int main() {
//     A a;
//     a.x = 1;
//     std::cout << a.F(2);
//     return 0;
// }






// #include <iostream>
// class A {
//     long lx;
// public:
//     int x;
//     int F(int);
// };

// int A::F (int x){
//     A::lx = A::x + 2;
//     return A::x + x + A::lx;
// }



// int main() {
//     A a;
//     a.x = 1;
//     std::cout << a.F(2);
//     return 0;
// }



// #include <iostream>
// #define OUT std::cout << " " << long(&p) << " " << (long)p << " " << p->i << "\n"


// struct A {
//     int i;
//     void set(int j) { this->i = j; }
//     ~A() { std::cout << " Wow. I'm killed\n"; }
// };

// int main() {
//     A* p = new A;
//     p->set(100);
//     OUT;

//     delete p;
    
//     p->set(100);
//     OUT;
    
//     p->i++;
//     OUT;

//     return 0;
// }


// #include <iostream>

// struct A {
//     int i;
    
//     // Визначення методу всередині класу (якщо це inline метод)
//     inline int f(int j) {
//         i = j;
//         return j;
//     }
// };

// int main() {
//     A a;
//     a.f(2);  // Викликаємо метод f з аргументом 2
//     return 0;
// }

// struct A {
//     int i;
//     inline int f(int j);
// };

// inline int A::f(int j) {
//     i = j;
//     return j;
// }

// int main() {
//     A a;
//     a.f(2);
//     return 0;
// }



// #include <iostream>
// class A {
//     long lx;
// public:
//     int x ;
//     int F (int x)
//     {
//     A::lx = this->x + 2;
//     return this->x + x + A::lx;
//     }
// };





// int main() {
//     A a;
//     a.x = 1;
//     std::cout << a.F(2);
//     return 0;
// }




// #include <iostream>
// using namespace std;

// class A {
//     public:
//     A (){
//         cout << "L got you idiot" << endl; 
//     }

// }a;


// int main(){
//     a;// визве конструктор два рази тому що екзимпляр а створено
    
//     A b {}; // створення екземпляру б ы визов конструктора класу А

    
//     A();
//     A{};
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A{
//     private:
//     int x;
//     public:
//     A(int x){
//         A::x = x + 2;
//         cout << A::x << endl;
//     }
// }a(21);

// int main(){
//     A b(8);
//     A a(4);

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class A{
//     private:
//     int i;
//     public:
//     A(int x){
//         A::i = x ;
//         cout << A::i << endl;
//     }
//     A (int x , int y){
//         this->i = x + y;
//         cout << A::i << endl;
//     }

// };

// int main(){
//     A b(8);
//     b = 88; // приведення
//     A a(4 , 4);
//     A* p = new A(5 , 8);
//     cout << p;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class D{
//     int i;
//     public:
//     explicit D(int i){
//         this->i = i;
//     }
// };

// int main(){
//     setlocale "ru";
//     D b(8);
//     // b(4); // error тому що ми юзаємо explicit

//     return 0 ;
// }


// #include <iostream>
// using namespace std;

// class A{
//     public:
//     A(double x){ cout << x << " double " << endl;}
//     A(int x) : A ((double) x) {cout << x <<" int" ;}
// };


// int main(){
//     A a(5);
//     // A b (5.5);
//     return 0;
// }









// #include <iostream>
// using namespace std;

// class A{
//     private:
//     double v;
    
//     public:
//     A(double x){
//         v = x;
//         cout << v << " double origin" << endl;
//     }
//     A(const A& a){
//         v = a.v;
//         cout << v << " copy constructor" << endl; 
//     }

//     double getValue() const {
//         return v;
//     }
// };

// void CC(const A& original){
//     A copy = original;
//     // A copy(original);
//     cout << "Copy inside Foo: " << copy.getValue() << endl;
// }

// int main(){
//     A a(5);
    
//     CC(a);
//     return 0;
// }




// #include <iostream>
// #include <utility>
// using namespace std;

// class MyClass {
// public:
//     MyClass() {
//         cout << "Constructor called" << endl;  // Викликається при створенні об'єкта
//     }

//     ~MyClass() {
//         cout << "Destructor called" << endl;  // Викликається при знищенні об'єкта
//     }

//     // Конструктор переміщення
//     MyClass(MyClass&&) noexcept {
//         cout << "Move constructor called" << endl;  // Викликається, коли об'єкт переміщається
//     }
// };

// int main() {
//     MyClass obj1;  // Створюється об'єкт obj1, викликається конструктор
//     MyClass obj2 = std::move(obj1);  // Переміщаємо об'єкт obj1 в obj2, викликається конструктор переміщення
    
//     // Програма продовжує виконання
//     return 0;  // Коли ми доходимо до return, об'єкти obj1 і obj2 виходять з області видимості
// }





// #include <iostream>
// using namespace std;
// class A{
//     int i;
//     public:
//     A() {i = 0;}
//     A(int j){i = j;
//     cout << "created" << endl;
//     }
//     A (A& other){
//         this->i = other.i;
//         cout << "copy ";
//     }
//     void show();
//     ~A(){
//         cout << "DESTRUCTED " << endl;
//     }
// };

// void A::show(){
//     cout<< "i= " << i << endl; 
// }
// void f (A a){ // тут ми беремо по значенню + у нас своя область вид. і через це створюється копія А а в А а
//     a.show(); // але якщо ми зробимо (A& a) то буде юзатися вже існуюча адресе даного елемента (копія не треба)
// }

// int main(){
//     A a(1);
//     f(a);
//     // A a1(a);
//     return 0 ;
// }




// #include <iostream>
// using namespace std;

// class A{
//     private:
//     ~A(){
//         cout << "Destructor";
//     }
//     public:
//     A(double x){ cout << x << " double " << endl;}
//     A(int x) : A ((double) x) {cout << x <<" int" ;}
//     void destruct() { delete this; }
//     // friend void destruct(A*) ;
// };

// void destruct(A* ptr) { delete ptr; }

// int main(){
//     A* a = new A(5.5) ;
//     a->destruct();
//     // destruct(a);
    
//     // A b (5.5);
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     // constexpr int runtime_value = 10;
//     constexpr int x = 10;  // Помилка: runtime_value не є константним

//     return 0;

// }



// #include <iostream>
// using namespace std;
// class A{
//     int i;
//     public:
//     A() {i = 0;}
//     A(int j){i = j;
//     cout << "created" << endl;
//     }
//     A (A& other){
//         this->i = other.i;
//         cout << "copy " << endl;
//     }
//     void show();
//     ~A(){
//         cout << "DESTRUCTED " << endl;
//     }
// };

// void A::show(){
//     cout<< "i= " << i << endl; 
// }
// void f (A a){
//     cout << "func "; // тут ми беремо по значенню + у нас своя область вид. і через це створюється копія А а в А а
//     a.show(); // але якщо ми зробимо (A& a) то буде юзатися вже існуюча адресе даного елемента (копія не треба)
// }

// int main(){
//     A a(1);
//     f(a);
//     A a1(a);



//     cout << "?????????????"<< endl << "?           ?" << endl << "?           ?" << endl << "?????????????" << endl;
//     return 0 ;
// }





// #include <iostream>
// using namespace std;

//     class dyomka{
//         private:
//         static int i;
//         public:

//         dyomka(int p){
//             i++;
//             // cout << i << endl;
//         }
//         void show(){
//             cout << dyomka::i << endl;
//         }
       
//     };

//     int dyomka::i = 0;

//     int main(){
//         dyomka a (1);
//         dyomka a1(2);
//         dyomka a2(3);
//         dyomka ar(3);
//         dyomka aww(3);
//         dyomka aw3(3);


//         a.show() ;
//         return 0;
//     }





// #include <iostream>
// using namespace std;

//     class ID{
//         private:
        
//         static int count;
//         // int id;
//         public:
//         int id;
//         ID(){
//             count++;
//             id = count;
//             cout << id << endl;
//         }

//     };

//     int ID::count = 0 ;

    
//     int main(){
//         ID a;
//         ID b;
//         ID c;
//         ID d;
//     cout << a.id +b.id + c.id + d.id << endl; 
//         return 0;
//     }




// #include <iostream>
// using namespace std;

//     class ID{
//         private:
//         static int count;
//         // int id;
//         public:
//         int id;
//         ID(){
//             count++;
//             id = count;
//             cout << id << endl;
//         }

//     };

//     int ID::count = 0 ;

    
//     int main(){
//         ID a;
//         ID b;
//         ID c;
//         ID d;
//     cout << a.id +b.id + c.id + d.id << endl; 
//         return 0;
//     }



// #include <iostream>
// #include <thread>
// #include <vector>
// #include <mutex> // Для mutex

// std::mutex mtx; // М'ютекс для синхронізації виведення

// void incrementCounter(int threadNum) {
//     // thread_local змінна для кожного потоку
//     thread_local int counter = 0;

//     // Інкрементуємо лічильник
//     ++counter;

//     // Блокування м'ютексу для синхронізованого виведення
//     std::lock_guard<std::mutex> lock(mtx);
//     std::cout << "Thread " << threadNum << " -> counter: " << counter << std::endl;
// }

// int main() {
//     const int numThreads = 99999999999999999;  // Кількість потоків
//     std::vector<std::thread> threads;

//     // Створюємо та запускаємо потоки
//     for (int i = 0; i < numThreads; ++i) {
//         threads.push_back(std::thread(incrementCounter, i + 1));
//     }

//     // Очікуємо завершення роботи всіх потоків
//     for (auto& t : threads) {
//         t.join();
//     }

//     return 0;
// }


// #include <iostream>
//     using namespace std;
// namespace { int i = 22;}
// namespace A { int i = 1;}

// int main(){
//     cout << ::i << " " << A::i << endl;

//     ::i = 55;
//     A::i = 22;

//     cout << ::i << " " << A::i << endl;

//     return 0;
// }




// #include <iostream>

// class MyClass {
// public:
//     void greet() {
//         std::cout << "Hello from MyClass!" << std::endl;
//     }

//     void displayMessage(std::string message) {
//         std::cout << "Message: " << message << std::endl;
//     }
// };

// int main() {
//     MyClass obj;

//     MyClass* p = &obj.greet;
//     p;

//     return 0;
// }




// #include <iostream>
// #include <string_view>
// using namespace std;

// constexpr std::string_view M = "It's happiness from Global\n";

// void LocalShow() {
//     string m("It's happiness from LocalShow\n");
//     cout << m;
//     static string m1{"sfsf"};
//     class Lclass {
//     public:
//         void out() {
//             cout << M << m1;
//             cout << "It's happiness from LClass\n";
//         }
//         int i, j = 10;
//         Lclass() { cout << "lclass ctor\n"; }
//     } lcl;

//     lcl.out();
//     std::cout << "Wow! Where is Initialization - " << lcl.i << " " << lcl.j << "\n";
// }

// int main() {
//     LocalShow();
// }





// #include <iostream>
// using namespace std;

// struct A {
//     int i;
//     int f(int j) { i = j; return i + j; }
// };

// int A::*p1 = &A::i;

// void F(A& a) {
//     // оголошення вказівника на поле даних класу
//     int A::*p1 = &A::i;
//     a.*p1 = 2; // присвоєння значення через вказівник
//     cout << "In F: " << a.i << "\n";

//     // оголошення вказівника на функцію-член
//     int (A::*p2)(int) = &A::f;
//     (a.*p2)(3); // виклик функції через вказівник
//     cout << "In F: " << a.i << "\n";
// }

// int main() {
//     F(a);
//     int A::*m1 = &A::i;
//     A a, b;
//     a.*m1 = 10;
//     b.*m1 = 30;
//     cout << "In main : " << a.i << "  " << b.i << "\n";
//     cout << "sizeof(A) - " << sizeof(A) << "\n";
// }



// #include <iostream>
// using namespace std;

// class B{
//     public: 
//     int c ;
//     int d ;
//     union{
//         int a ;
//     };
//     union{
//         int b ;
//     };

//     B *p;


//     int res1 ;
//     int res2;

//     B(int n, int m) {
//         c = n;
//         d = m;
//         p = this;  // Вказуємо p на поточний об'єкт

//         p->a = 2;  // Ініціалізуємо 'a'
//         p->b = 4;  // Ініціалізуємо 'b'

//         res1 =c + a;   // Використовуємо 'b'
//         res2 = d + b;  // Використовуємо 'a'
//     }

//     void show(){
//         cout << res1 << endl << res2;
//     }

// };




// int main(){
//     B b(4,2);
//     b.show();
//     return 0;

// }




// #include <iostream> 
// using namespace std;
// #define ctorD(M) M() {std::cout <<  \
// "Default Ctor "#M << " \n" ; M::i = 0;}  
// #define ctorP(M, N) M(int N) { std::cout << \
// "Parametrized Ctor "#M <<"\n" ; M::i = N;}  

// struct B {   
//     int i;  
//     ctorD(B);     // ctor - B1  
//     ctorP(B, j);    // ctor - B2  
// };  

// struct C {   
//     int i;  
//     ctorD(C);     // ctor - C1  
//     ctorP(C, j);    // ctor - C2  
// };  

// struct A {  // оголошення основного класу  
//     int i;  
//     B b1;    // об'єкт-член класу A  
//     C c1;    // об'єкт-член класу A  
//     ctorD(A);   // ctor - A0  
//     ctorP(A, j);    // ctor - A1  
//     A(int i, int j): b1(j) { i = i; }// ctor - A2  
//     A(int, int, int);               // ctor - A3  
// };  

// A::A(int i, int j, int w):  
//     i(4), b1(j), c1(w) {i = i;}  

// int main() {
    
//     // A a0 , a1(1) , a2(1, 2), a3(1, 2, 'c');    
//     cout << " 1 " << endl;
//     A a0;
//     cout << " 2 " << endl;
//     A a1(1);
//     cout << " 3 " << endl;
//     A a2(1, 2);
//     cout << " 4 " << endl;
//     A a3(1, 2, 'c');  
// }



// #include <iostream>
// using namespace std;
// class A{
//     int i;
//     public:
//     A() {i = 0;}
//     A(int j){i = j;
//     cout << "created" << endl;
//     }
//     A (A& other){
//         this->i = other.i;
//         cout << "copy ";
//     }
//     void show();
//     ~A(){
//         cout << "DESTRUCTED " << endl;
//     }
// };

// void A::show(){
//     cout<< "i= " << i << endl; 
// }
// void f (A a){ // тут ми беремо по значенню + у нас своя область вид. і через це створюється копія А а в А а
//     a.show(); // але якщо ми зробимо (A& a) то буде юзатися вже існуюча адресе даного елемента (копія не треба)
// }

// int main(){
//     A a(1);
//     f(a);
//     // A a1(a);
//     return 0 ;
// }



// #include <iostream>
// using namespace std;
// class A{
//     public:
//     int i = 0;
//     A() : i(0){}
//     A (int  j) : i(j) {}
    
//     A (A&& p){
//         cout << i << " " << p.i << endl;
//         i = std::move(p.i);
//         p.i = 0;
//         cout << i << " " << p.i << endl;
//     }
//     ~A(){
//         cout << "DESTRUCTED " << endl;
//     }
// };



// int main(){
    
//    A a(20);
  
//     A b = std::move(a);


//     return 0 ;
// }


// #include <iostream>
// using namespace std;
// class A{
//     public:
//     int i = 0;
//     A() : i(0){}
//     A (int  j) : i(j) {}
    
//     // A (A&& p){
//     //     cout << i << " " << p.i << endl;
//     //     i = std::move(p.i);
//     //     p.i = 0;
//     //     cout << i << " " << p.i << endl;
//     // }
//     ~A(){
//         cout << "DESTRUCTED " << endl;
//     }
// };



// int main(){
    
//    A a(20);
  
//     A b = std::move(a);
//     cout << a.i << " " << b.i;


//     return 0 ;
// }

// #include <iostream>
// using namespace std;

// struct B {
//     int i;
//     B() { i = -1; }
//     B(int j) { i = j; }
// };

// struct A {
//     int i;      // член даних класу A
//     B* b = nullptr; // вказівник-член класу
//     A() { b = new B(10); }
//     A(B* p, int j) {
//         b = new B;
//         *b = *p;
//         cout << i << " " << j;
//         i = j;
//         cout << i << " " << j;
//     }
//     ~A() { if (b) delete b; }
// };

// int main() {
//     B b(3);
//     B* p = &b;
//     A a(p, 3); // створення об'єкта
// }



// #include <iostream>
// using namespace std;

// struct A{
    
//     void( A::*f)();

//     void happy(){
//         cout << " All is good" << endl;
//     };

//     void sad(){
//         cout << " All is bad" << endl;
//     };

//     void behappy(bool yes){
//         f =(yes)? &A::happy : &A::sad;
//     }

//     A(bool yes){
//         behappy(yes);
//     }

// };


// int main(){
//      std::cout << sizeof(A) << "\n";
//     A a(true);
//     (a.*(a.f))();

//     A* p = new A(false);
//     (p->*(p->f))();

//     return 0;
// }



// #include<iostream>
// #define MES(s) { std::cout << s << "\n"; }

// struct A {
//     void(*p)(void);  // Вказівник на функцію

//     static void happyNotice(void) MES("Wow");
//     static void sadNotice(void) MES("Ups");

//     // Дефолтна ініціалізація вказівника
//     A() { behappy(&A::happyNotice); }

//     // Ініціалізатор вказівника
//     void behappy(void(*f)(void)) { p = *f; }

//     // Виклик через вказівник
//     void show(void) { (this->p)(); }
// };

// // Зовнішня функція
// void sadNotice_All(void) MES("UPPPPPs");

// int main() {
//     A a;
//     a.show(); // запуск статичної функції

//     a.behappy(sadNotice_All); // зміна функції на зовнішню
//     a.show(); // запуск зовнішньої функції
// }



// #include <iostream>
// struct A {
//     int x;
//     A() { x = 0; }
//     A(int x) { this->x = x; }
//     int getValue() { return x; }
// };

// A* d[3];
// A* f[3] = { new A(1), new A(2), new A(3) };

// int main() {
//     for (int i = 0; i<3; i++)
//         d[i] = new A(i) ;
//     std::cout << f[0]->getValue() << " " << f[1]->getValue() << " " << f[2]->getValue() << std::endl;
//     std::cout << d[0]->getValue() << " " << d[1]->getValue() << " " << d[2]->getValue() << std::endl;
// }


// #include <iostream>
// using namespace std;

// typedef void(*T)();

// class A{
//     public:
//     static int x1;
//     static void f(){
//         cout << "Class A" << endl;
//     };
// };

// class B{
//     public:
//  static int x2;
//  static void f(){
//         cout << "Class B" << endl;
//     };
// };

// class C{
//     public:
//     static int x3;
//     static void f(){
//         cout << "Class C" << endl;
//     };
// };
// int A::x1 = 1;
// int B::x2 = 2;
// int C::x3 = 3;

// int* m[] = {&A::x1 , &B::x2 , &C::x3};
// T n[] = {A::f , B::f , C::f};

// int main(){
//     n[0]();

//     return 0;
// }



// #include <iostream>

// class Display {
//    private: 
//    Display() = default;
//    ~Display() = default;


//     // Display(const Display& other) = delete;
//     // Display(const Display&& other) = delete;


//    public:
//    int w = 1920;
//    int h = 1080;
//    int f = 120;

//    static Display& instance( ){
//         static Display obj;
//         return obj;
//    }

// };



// int main() {
//    std::cout << Display::instance().w << 'x'
//              << Display::instance().h << '@'
//              << Display::instance().f << std::endl;

//    return 0;
// }














// #include <iostream>

// class s {
// /////////
//    private:
//    static s* instance;
//    s() = default;
//    ~s() = default;

//    s(const s& other) = delete;
//    s(const s&& other) = delete;

// /////////
//    public:
//    int w = 1920;
//    int h = 1080;
//    int f = 144;

//    static s* get_instance(){
//       if ( instance == nullptr){
//          instance = new s(); // s instance; instance.a; .....
//       }
//    return  instance ;
//   }

// };

// s* s::instance = nullptr;



// int main() {
//    std::cout << s::get_instance()->w << 'x'
//              << s::get_instance()->h << '@'
//              << s::get_instance()->f << std::endl;

//    return 0;
// }



// #include <iostream>

// class s {
// /////////
//    private:
   
//    s() = default;
//    ~s() = default;

//    s(const s& other) = delete;
//    s(const s&& other) = delete;

// /////////
//    public:

   
//    int w = 1920;
//    int h = 1080;
//    int f = 144;

//    static const s& get_instance(){
//       static s obj;
//    return  obj ;
//   }

// };





// int main() {
   
//    std::cout << s::get_instance().w << 'x'
//              << s::get_instance().h << '@'
//              << s::get_instance().f << std::endl;

   
//    return 0;
// }



// #include <iostream>

// struct Point{
//    int x;
//    int y;
//    Point (const int& x , const int& y){
//       this->x = x;
//       this->y =y;
//    }

//    void print()const{
//       std::cout << "(" << x << ", " << y << ")";
//    }
// };

// int main() {
//     // Зчитати вхідні дані.
//     std::cout << "Enter the coordinates: ";
//     int x;
//     int y;
//     std::cin >> x >> y;
//     // Створити об'єкт Point і вивести його на екран.
//     const Point point {x, y};
//     point.print();
//     std::cout << std::endl;
//     return 0;
// }


// #include <iostream>

// class Object{
//    private:
//    int id;
//    public:
//    Object(int id){
//       this->id = id;
//       std::cout <<"Object created: " << this->id << std::endl;
//    }

//    ~Object(){
//       std::cout <<"Object destroyed: " << this->id << std::endl;
//    }
// };

// int main() {
//     std::cout << "Enter the ID: ";
//     int id;
//     std::cin >> id;
//     Object object { id };
//     return 0;
// }


// #include <cmath>
// #include <iomanip>
// #include <iostream>

// struct Point{
//    double x;
//    double y;
//    friend class Line;
// };

// class Line{
//    private:
//    Point a;
//    Point b;
//    public:
//    Line(Point a , Point b){
//       this->a.x = a.x;
//       this->a.y = a.y;
//       this->b.x = b.x;
//       this->b.y = b.y;
//    }

//    double length()const{
//       const double len = std::sqrt(std::pow((a.x - b.x), 2) + std::pow((a.y - b.y) , 2));
//       return len;
//    }
// };

// int main() {
//     // Зчитати лінію.
//     std::cout << "Enter the line: ";
//     Point a;
//     Point b;
//     std::cin >> a.x >> a.y >> b.x >> b.y;
//     const Line line { a, b };
//     // Вивести довжину лінії.
//     std::cout << std::fixed << std::setprecision(1);
//     std::cout << "Length: " << line.length() << std::endl;
//     return 0;
// }

// #include <iostream>

// class Evaluator{
//    private:
//    int result = 0;

//    public:
   
//    int eval(char oper , int value ){
//       if (oper == '+'){
//          this->result += value;
//       }
//       else{
//          this->result -= value;
//       }
//       return result;
//    }
//    int eval(char oper ){
//       return result;
//    }

// };

// int main() {
//     char oper;
//     int value;
//     Evaluator evaluator;
//     // Зчитати символ операції, це може одразу бути '='.
//     std::cin >> oper;
//     // Зчитувати в циклі операнд і символ наступної операції.
//     while (oper != '=') {
//         std::cin >> value;
//         evaluator.eval(oper, value);
//         std::cin >> oper;
//     }
//     // Вивести результат, oper має значення '='.
//     std::cout << evaluator.eval(oper) << std::endl;
//     return 0;
// }



// #include <iostream>

// int main() {

//     const int size = 'z' - 'a' + 1;
//     int count[size];
  
//     for (int i = 0; i < size; ++i) {
//         count[i] = 0;
//     }

//     for (char c = std::cin.get(); c != '\n'; c = std::cin.get()) {

//         ++count[c - 'a'];
//     }

//     for (int i = 0; i < size; ++i) {
//         if (count[i]) {
//             std::cout << char('a' + i) << ' ' << count[i] << std::endl;
//         }
//     }
//     return 0;
// }

////// 001101111010101101010
// #include <iostream>

// int main() {
//    int capacity = 0; // Фактичний розмір (місткість) масиву.
//    int size = 0;     // Поточна кількість елементів (розмір) масиву.
//    int* array = nullptr;
//    while (true) {
//        std::cout << "Enter array: ";
//        // Зчитати лише розмір масиву.
//        std::cin >> size;
//        // Вийти з програми, якщо розмір 0.
//        if (size == 0) {
//            delete[] array;
//            return 0;
//        }
//        // Перевиділити пам'ять, якщо поточної недостатньо.
//        if (size > capacity) {
//            std::cout << "Reallocation" << std::endl;
//            delete[] array;
//            capacity = size;
//            array = new int[capacity];
//        }
//        // Зчитати елементи масиву.
//        for (int i = 0; i < size; ++i) {
//            std::cin >> array[i];
//            array[i] = array[i];
//        }
//        // Вивести зчитаний масив.
//        std::cout << "Origin:";
//        for (int i = 0; i < size; ++i) {
//            std::cout << ' ' << array[i];
//        }
//        // Відсортувати масив.
//        std::cout << std::endl;
//        for (int i = 0; i < size - 1; i++) {
//            for (int j = 0; j < size - i - 1; j++) {
//                if (array[j] < array[j + 1]) {
//                    std::swap(array[j], array[j + 1]);
//                }
//            }
//        }
//        // Вивести відсортований масив.
//        std::cout << "Sorted:";
//        for (int i = 0; i < size; ++i) {
//            std::cout << ' ' << array[i];
//        }
//        std::cout << std::endl;
//    }
// }


// #include <cmath>
// #include <iomanip>
// #include <iostream>

// struct Point {
//     double x;
//     double y;
// };

// class Shape {
//     int size;
//     Point* points;
// public:
//     Shape(int size){
//       this->size = size;
//       points = new Point[size];
//     }
//    ~Shape(){
//       delete[] points;
//     }
//     double perimeter() const{
//       double res = 0;
//       for (int i = 0 ; i < size ; i++){
//          if (i < size - 1){
//          res =std::sqrt(std::pow((points[i].x - points[i + 1].x), 2) + std::pow((points[i].y - points[i + 1].y) , 2)) + res;
//          }
//       else{
//          res =std::sqrt(std::pow((points[i].x - points[0].x), 2) + std::pow((points[i].y - points[0].y) , 2)) + res;
//       }
//       }
//       return res;
//     }


//     void read() {
//         for (int i = 0; i < size; ++i) {
//             std::cin >> points[i].x >> points[i].y;
//         }
//     }
// };

// int main() {
//     // Створити фігуру з заданою кількістю вершин.
//     std::cout << "Enter the number of points: ";
//     int size;
//     std::cin >> size;
//     Shape shape = Shape { size };
//     // Зчитати координати вершин.
//     std::cout << "Enter the coordinates:" << std::endl;
//     shape.read();
//     // Вивести периметр фігури.
//     std::cout << std::fixed << std::setprecision(1);
//     std::cout << "Perimeter: " << shape.perimeter() << std::endl;
//     return 0;
// }






// #include <iostream>

// class Stack{
//    private:
//    int size = 0;
//    int data[5];

//    public:
//    void push(int value){
//       if (size >= 5){
//          std::cout << "Cannot push." << std::endl;
//       }
//       else{
//          data[size] = value;
//          size++;
//       }
//    }

//    void pop(){
//       if (size == 0){
//          std::cout << "Cannot pop." << std::endl;
//       }
//       else{
//          size -= 1;
//       }
//    }
//    void print()const{
//       std::cout << "Sack: ";
//       for(int i = 0 ; i < size ; i++ ){
//          // std::cout << data[i] << " ";
//          if (i > 0) {
//             std::cout << " ";  // Додаємо пробіл перед елементами, окрім першого
//         }
//         std::cout << data[i];
//       }
//       std::cout << std::endl;
//    }
// };

// int main() {
//     char oper;
//     int value;
//     Stack stack;
//     // Зчитати символ операції, це може одразу бути '='.
//     std::cin >> oper;
//     while (oper != '=') {
//         // Видалити чи додати елемент, залежно від символа.
//         if (oper == '-') {
//             stack.pop();
//         } else {
//             std::cin >> value;
//             stack.push(value);
//         }
//         // Завжди виводити на екран стан стеку.
//         stack.print();
//         // Зчитати наступний символ.
//         std::cin >> oper;
//     }

//     return 0;
// }

// rec

// #include <iostream>

// int main() {
//     unsigned number;
//     std::cout << "Enter the number: ";
//     std::cin >> number;

//     // PUT YOUR CODE HERE
//     for (unsigned no = 1, n = 0 ;; no *= 2 , n++) {
//         if (no == number) {
//             std::cout << number << " is 2 to the power of " << n << std::endl;
//             break;
//         }
//         if (no > number) {
//             std::cout << number << " is not a power of 2" << std::endl;
//             break;
//         }
//     }
   

//     return 0;
// }

// #include <iostream>

// class O {
// protected:
//     int o_pr;
// public:
//     // функція базового класу
//     void F(int i) { o_pr = i; }
// };

// class A : public O {
// protected:
//     int a_pr;
// public:
//     // функція проміжного класу
//     void F(int i) { a_pr = i; }
// };

// class B : public A {
// protected:
//     int b_pr;
// public:
//     void F(int i) { b_pr = i; }

//     // доступ до члена базового класу
//     void F1(int i) {
//         F(i);
//         A::F(i);
//         A::O::F(i);
//         O::F(i);
//     }
// };

// int main() {
//     B b, *p = new B;

//     // доступ до члена базового класу
//     b.O::F(1); b.A::F(1); b.F(1); b.F1(1);

//     p->A::O::F(2); p->A::F(2); p->F(2); p->F1(2);
// }



// #include <iostream>

// class Base {
// public:
//     Base() { std::cout << "Base constructor\n"; }
// };

// class Derived : public Base {
// public:
//     Derived() { std::cout << "Derived constructor\n"; }
// };

// int main() {
//     Derived d;  // Спочатку викликається конструктор Base, потім конструктор Derived
// }



// #include <iostream>
// #define MESCtor(s) std::cout << " ctor " << s << '\n';
// #define MESDtor(s) std::cout << " dtor " << s << '\n';
// #define CtorBody(O)  { O::c = c; MESCtor(c); }
// #define DtorBody  { MESDtor(c); }

// struct A {
//     char c;
//     A(char c) CtorBody(A);
//     ~A() DtorBody;
// };

// struct B : public A {
//     char c;
//     B(char c, char c1) : A(c1) CtorBody(B);
//     ~B() DtorBody;
// };

// struct C : public B {
//     char c;
//     C(char c, char c1, char c2) : B(c1, c2)
//     CtorBody(C);
//     ~C() DtorBody;
// };

// int main()  {
//     C* c = new C('C', 'B', 'A');
//     delete c;
// }


// #include <iostream>

// struct A {
//     A() { std::cout << "Constructor of A\n"; }
//     A(int x) { std::cout << "Constructor of A with parameter " << x << "\n"; }
// };

// struct B : public A {
//     B() { std::cout << "Constructor of B\n"; }
//     B(int x) { std::cout << "Constructor of B with parameter " << x << "\n"; }
// };

// int main() {
//     B b1;           // Викликається конструктор A() і B()
//     B b2(10);        // Викликається конструктор A(10) і B(10)
// }


// struct A {
//     A() { std::cout << "Constructor of A\n"; }
//     A(int x) { std::cout << "Constructor of A with parameter " << x << "\n"; }
// };

// struct B : public A {
//     B() { std::cout << "Constructor of B\n"; }
//     B(int x) { std::cout << "Constructor of B with parameter " << x << "\n"; }
// };

// int main() {
//     B b1;        // Викликається A() і B()
//     B b2(10);    // Викликається A(10) і B(10)
// }



// #include <iostream>

// struct A {
//     A() { std::cout << "Constructor of A\n"; }
//     ~A() { std::cout << "Destructor of A\n"; }  // Тіло деструктора базового класу
// };

// struct B : public A {
//     B() { std::cout << "Constructor of B\n"; }
//     ~B() { 
//         std::cout << "Destructor of B\n";  // Тіло деструктора похідного класу
//     }
// };

// int main() {
//     B b;  // Створюється об'єкт B
// }



// #include <iostream>
// using namespace std;

// class A{
//     private:
//     int res;
//     public:
//     A() {
//         cout << "1" << endl;
//     };
//     A (int){ cout << "2 ";};
// };
// class B: public A{
//     private:
//     int res;
//     public:

//     B(int x) : A(x){ cout << "3";};
// };

// int main(){
//     B a(10);
//     return 0;
// }


// class A{
//     public:
//     A (int){ cout << "2 ";};
// };
// class B: public A{
//     public:

//     B() : A(10) { cout << "3";};// B() { cout << "3";}; nima konstructora v A A ()){}};
// };

// int main(){
//     B a;
//     return 0;
// }



// #define CTORS(DC, BC) DC() { set(0); } \
//     DC(DC& c) : BC(c) { set(0); }

// class Line {
//     double d;
// protected:
//     void set(Line& p) { set(p.d); }
//     void set(double p) { d = p; }
//     double get() { return d; }
// public:
//     Line() { set((double)0); }
//     Line(Line& p) { set(p); }
// };

// class Circle : public Line {
// public:
//     void set_radius(double r) { set(r); }
//     double get_radius() { return get(); }
//     double square() { double r = get(); return 3.14 * r * r; }
//     CTORS(Circle, Line)
// };

// class Quadrate : public Line {
// public:
//     void set_side(double a) { set(a); }
//     double get_side() { return get(); }
//     double square() { double a = get(); return a * a; }
//     CTORS(Quadrate, Line)
// };

// int main() {
//     Quadrate q; q.set_side(10);
//     // auto b = q.square();
//         auto b = q.get_side();
//     Circle c; c.set_radius(100);
    
//     std::cout << b;
// }



// #include <iostream>
// #define Out(S){std::cout << S << std::endl;}

// class A{
//     public:
//     A(){Out("A+")}
//     ~A(){
//         Out("-a")
//     }
// };

// class B{
//     public:
//     B(){Out("B+")}
//     ~B(){
//         Out("-b")
//     }
// };

// class C : public B ,public A{
//     public:
//     C(){
//         Out("C+");
//     }
//     ~C(){
//         Out("-c")
//     }
// };

// int main (){
//     C c;

//     return 0;
// }


// class O {
//     public:
//         O() { std::cout << "O constructor" << std::endl; }
//     };
//     class A :public O{
//     public:
//         A(char c) { std::cout << "A constructor: " << c << std::endl; }
//     };

//     class B :public O{
//     public:
//         B(char c) { std::cout << "B constructor: " << c << std::endl; }
//     };
//     class C : public A, public B {
//     public:
//         C(char c1, char c2, char c3) : B(c1), A(c2) {
//             std::cout << "C constructor" << c3 << std::endl;
//         }
//     };
//     int main(){
//         C c('x' , 'y' , 'z');
        
//         return 0;
//     }


// #include <iostream>
// #define OUT(S) { std::cout << S << "\n"; }

// struct O {
//     // виконується першим
//     O() OUT(" ctor O ");
//     O(int) OUT(" ctor O(int) ");
//     // виконується останнім
//     ~O() OUT(" dtor O ");
// };

// struct A : public O {
//     A() OUT(" ctor A ");
//     A(int) OUT(" ctor A(int) ");
//     ~A() OUT(" dtor A ");
// };

// struct B {
//     B() OUT(" ctor B ");
//     // B(int) OUT(" ctor B(int) ");
//     ~B() OUT(" dtor B ");
// };

// struct C : public A, public B {
//     // виконується останнім
//     C() : B(), A() OUT(" ctor C ");
//     C(int) : A(1)  OUT(" ctor C(int) ");
//     // виконується першим
//     ~C() OUT(" dtor C ");
// };

// int main() {
//     C* c1 = new C;
//     delete c1;
//     std::cout << std::endl;
//     C* c2 = new C(1);
//     delete c2;
// }


// #include <iostream>
// using namespace std;

// struct A {
//     void out() { cout << "class A" << endl; }
// };

// struct B : public A {
//     // переозначена функція базового класу
//     void out() { cout << "class B" << endl; }
// };

// void F(A a_f) { a_f.out(); } // Функція для A
// void F(A* p) { p->out(); }   // Функція для A
// void FF(B* p) { p->out(); }  // Функція для B
// void FF(B& a_f) { a_f.out(); } // Функція для B

// int main() {
//     A a1;   B b1;
//     F(a1); F(&a1);  F(b1); F(&b1); // дозволені виклики
//     A* p = &a1; p->out();
//     p = &b1;    p->out();
    
//     FF(&b1); FF(b1); FF((B*)&a1); // дозволені виклики FF
//     //FF(&a1); FF(a1); заборонені виклики функції FF
//     return 1;
// }

// #include <iostream>
// using namespace std;

// class PoweredDevice {
// public:
//     int a = 0;
// };

// class Scanner : virtual public PoweredDevice {
// public:
//     Scanner(int i) {
//         a = i;
//     }
// };

// class Printer : virtual public PoweredDevice {
// public:
//     void get() {
//         cout << a;
//     }
// };

// class Copier : public Scanner, public Printer {
// public:
//     Copier(int i) : Scanner(i) {}
// };

// int main() {
//     Copier copier(4);
//     copier.get(); // Використовує спільну змінну `a` з `PoweredDevice`

//     return 0;
// }




// #include <iostream>
// using namespace std;

// class PoweredDevice {
// public:
//     int a = 0;
// };

// class Scanner : virtual public PoweredDevice {
// public:
//     Scanner(PoweredDevice& base) {
//         a = base.a;
//     }
// };

// class Printer : virtual public PoweredDevice {
// public:
//     void get() {
//         cout << a;
//     }
// };



// int main() {
//     PoweredDevice dev;
//     dev.a = 50;
//     Scanner sca(dev);

//     Printer  print;
//     print.a = sca.a;
//     print.get();
    
    

//     return 0;
// }




// #include <iostream>
// using namespace std;

// class A{
//     public:
//     A(){cout << " A ";}
//     ~A(){ cout << " -a ";}
// };

// class B : virtual public A{
//     public:
//     B(){cout << " B ";}
//     ~B(){ cout << " -b ";}
// };

// class C : virtual public A{
//     public:
//     C(){cout << " C ";}
//     ~C(){ cout << " -c ";}
// };

// class D : public B , public C{
//     public:
//     D(){cout << " D ";}
//     ~D(){cout << " -d ";}
// };


// int main(){
//     D d; 
//    return 0;
// }



//     #include <iostream>
// using namespace std;

// class A {
// public:
//     A() { cout << "A "; }
//     ~A() { cout << "-a "; }
// };

// class B : virtual public A {
// public:
//     B() { cout << "B "; }
//     ~B() { cout << "-b "; }
// };

// class C : virtual public A {
// public:
//     C() { cout << "C "; }
//     ~C() { cout << "-c "; }
// };

// int main() {
//     B b;  // Створюємо об'єкт класу B
//     C c;  // Створюємо об'єкт класу C
//     cout << endl;
//     return 0;
// }


// (a > b) ? a : b;
// // ==
// if (a > b) {
    
// }



// #include <iostream>
// using namespace std;

// struct A {
//     void out() { 
//         cout << "class A" << endl; 
//     }
// };

// struct B : public A {
//     // переозначена функція базового класу
//     void out() { 
//         cout << "class B" << endl; 
//     }
// };

// void F(A a_f) { 
//     a_f.out(); 
// } // Функція для A

// void F(A* p) { 
//     p->out(); 
// } // Функція для A

// void FF(B* p) { 
//     p->out(); 
// } // Функція для B

// void FF(B& a_f) { 
//     a_f.out(); 
// } // Функція для B

// int main() {
//     A a1;
//     B b1;

//     // дозволені виклики функцій F
//     F(a1); 
//     F(&a1);  
//     F(b1); 
//     F(&b1);

//     // робота з вказівниками
//     // A* p = &a1; 
//     // p->out();
//     // p = &b1;    
//     // p->out();

//     // дозволені виклики функцій FF
//     FF(&b1); 
//     FF(b1); 
//     FF((B*)&a1);

//     // заборонені виклики функцій FF
//     // FF(&a1); 
//     // FF(a1);

//     return 1;
// }




// #include <iostream>
// using namespace std;

// class A {
// public:
//     virtual void out() { cout << "class A" << endl; }
// };

// class B : public A {
// public:
//     void out() override { cout << "class B" << endl; }
// };

// void callBase(A& a) {
//     a.out(); // Викликає метод базового класу або дочірнього класу
// }

// int main() {
//     B b;
//     b.out();           
//     callBase(b);

//     return 0;
// }




// #include <iostream>
// #define OUT(S)  { std::cout << S << "\n";}

// struct A {  void show() OUT('A') };

// struct B : virtual public A {};

// struct C : virtual public A {};

// struct D : public B, public C {
//     void show() OUT('C')
// };

// void f_1(A a) { a.show(); }
// void f_2(A& a) { a.show(); }
// void f_3(A* a) { a->show(); }
// void F(B b) { b.show(); }

// int main() {
//     D d1;
//     d1.show();
//     f_1(d1);
//     f_1(B(d1));
//     // f_2(B(d1));
//     f_2((B&)d1);
    
//     f_3((B*)&d1);
//     F(d1);
//     A *p_a = (B*) new D; f_1(*p_a);
//     D *p_d = new D; F((B)*p_d);
//     f_3((B*)p_d);
//     return 1;
// }



// #include <iostream>
// using namespace std;

// struct A {
//     char c_A;
//     A(char i) { c_A = i; }
//     // член базового класу
//     void show() { cout << " -> "; cout << c_A; }
// };

// struct B : public A {
//     char c_B;
//     B(char j, char i) :A(i) {
//         c_B = j; cout << "Ієрархія класів : ";
//     }
//     void show();// член похідного класу
// };

// // перевизначення функції базового класу
// // і розширення члена батьківського класу
// void B::show() {
//     cout << c_B;
//     A::show();
// }

// int main() {
//     B b1('B', 'A');
//     b1.show();
//     return 1;
// }



// #include <iostream>
// using namespace std;

// struct A {
//     char c_A;
//     A(char i) { c_A = i; }
//     // член базового класу
//     virtual void show() { cout << " -> "; cout << c_A; }
// };

// struct B : public A {
//     char c_B;
//     B(char j, char i) : A(i) {
//         c_B = j; cout << "Ієрархія класів : ";
//     }
//     void show() override ; 
//     // void show() {
//     // cout << c_B;
//     // A::show();
// // } // член похідного класу
// };

// // перевизначення функції базового класу
// // і розширення члена батьківського класу
// void B::show() { 
//     cout << c_B;
//     A::show();
    
// }

// int main() {
//     B b1('B', 'A');
//     // A* ptr = new B(b1) ;
//     // ptr->show();
//     b1.show();
//     return 1;
// }



// #include <iostream>
// using namespace std;

// void MARK() { cout << "(Single class)"; }

// struct A {
//     char c_A;
//     A(char i) { c_A = i; }
//     // член базового класу
//     void show() {
//         cout << "\nBase clas is " << c_A;
//         MARK();
//     }
// };

// struct B : public A {
//     char c_B;
//     B(char j, char i) : A(i) { c_B = j; }
//     void show() {   // перевизначення функції
//                     // базового класу - обмеження члена
//         cout << "\nBase clas is " << c_A;
//     }
// };

// int main() {
//     A a1('A'); a1.show();
//     B b1('B', 'A'); b1.show();
//     return 0;
// }




// #include <iostream>
// using namespace std;

// struct A {
//     int value_A;

//     A(int v) : value_A(v) {}

//     // Функція, що повертає значення
//     int getValue() {
//         return value_A;
//     }
// };

// struct B : public A {
//     int value_B;

//     B(int v1, int v2) : A(v1), value_B(v2) {}

//     // Перевизначена функція, яка сумує значення з обох класів
//     int getValue()  {
//         return value_B +  A::getValue();
//     }
// };

// int main() {
//     B b1(5, 10);
//     cout << "Value from class B: " << b1.getValue() << endl;  // Викликається перевизначена функція getValue() з класу B
//     return 0;
// }



// #include <type_traits>
// class A { };
// class B : A { };
// class C  { };
// // . . .

//   int main(){
// std::cout << std::boolalpha << std::is_base_of<A, B>::value << '\n'
//           << std::is_base_of<B, A>::value << '\n' << std::is_base_of<C, B>::value << '\n';

//           return 0;
// }


// #include <iostream>
// #include <string>

// class Transport {
// protected:
//     int speed;
//     int passengers;

// public:
//     Transport(int spd, int pass) : speed(spd), passengers(pass) {}

//     virtual void drive() {
//         std::cout << "Транспорт рухається зі швидкістю " << speed << " км/год і перевозить " << passengers << " пасажирів." << std::endl;
//     }

//     virtual ~Transport() {}
// };

// class Car : public Transport {
// protected:
//     std::string registrationNumber;

// public:
//     Car(int spd, int pass, const std::string& regNumber) 
//         : Transport(spd, pass), registrationNumber(regNumber) {
//         registerCar();
//     }

//     void registerCar() {
//         std::cout << "Автомобіль зареєстровано в МРЕО. Реєстраційний номер: " << registrationNumber << std::endl;
//     }

//     void drive() override {
//         std::cout << "Автомобіль з реєстраційним номером " << registrationNumber << " рухається." << std::endl;
//         Transport::drive();
//     }
// };

// class Hatchback : public Car {
// public:
//     Hatchback(int spd, int pass, const std::string& regNumber)
//         : Car(spd, pass, regNumber) {}

//     void drive() override {
//         std::cout << "Хетчбек ";
//         Car::drive();
//     }
// };

// class Bus : public Transport {
// public:
//     Bus(int spd, int pass) : Transport(spd, pass) {}

//     void drive() override {
//         std::cout << "Автобус рухається." << std::endl;
//         Transport::drive();
//     }
// };

// class Bicycle : public Transport {
// public:
//     Bicycle(int spd, int pass) : Transport(spd, pass) {}

//     void drive() override {
//         std::cout << "Велосипед рухається." << std::endl;
//         Transport::drive();
//     }
// };

// int main() {
//     Hatchback hatchback(120, 5, "AB1234CD");
//     hatchback.drive();

//     Car car(150, 4, "XY5678Z");
//     car.drive();

//     Bus bus(80, 30);
//     bus.drive();

//     Bicycle bicycle(20, 1);
//     bicycle.drive();

//     return 0;
// }


// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void show(){
//         cout << " Its A!!! " << endl;
//     }
// };

// class B : public A{
//     public:
//     void show(){
//         cout << " Its B!!! " << endl;
//     }
// };

// int main(){
//     B b;
//     b.show();
//     A *ptr = new B(b);
//     ptr->show();
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class A{
//     public:
//     virtual void show(){
//         cout << " Its A!!! " << endl;
//     }
// };

// class B : public A{
//     public:
//     void show() override  {
//         cout << " Its B!!! " << endl;
//     }
//     void pop(){
//         A::show();
//     }
// };

// int main(){
//     B b;
//     b.show();
//     A *ptr = new B(b);
//     ptr->show();
//     b.show();
//     b.pop();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class A{
//     public:
//     virtual void show(){
//         cout << " Its A!!! " << endl;
//     }
// };

// class B : public A{
//     public:
//     void show() override  {
//         cout << " Its B!!! " << endl;
//     }
// }

// int main(){
//     B b;
//     b.show();
//     A *ptr = new B(b);
//     ptr->show();
//     b.show();
    
//     return 0;
// }




// #include <iostream>
// using namespace std;

// class A {
// public:
//     virtual void show() {
//         cout << " Its A!!! " << endl;
//     }
// };

// class B : public A {
// public:
//     void show() override {
//         cout << " Its B!!! " << endl;
//     }

//     void showBase() {
//         // Виклик методу show() базового класу A
//         A::show();
//     }
// };

// int main() {
//     B b;

//     cout << "Виклик B::show(): ";
//     b.show();
//     ((A)b).show();
//     cout << "Виклик A::show() через об'єкт B: ";
//     b.showBase(); // Виклик базового методу show() через B

//     A* ptr = new B(b);
//     cout << "Виклик через вказівник типу A: ";
//     ptr->show();

//     delete ptr;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class A {
// public:
//     virtual void show() {
//         cout << " Its A!!! " << endl;
//     }
// };

// class B : public A {
// public:
//     void show() override {
//         cout << " Its B!!! " << endl;
//     }

//     void showBase() {
//         // Виклик методу show() базового класу A
//         A::show();
//     }
// };

// int main() {
//     B b;
//     A* ptr = new B(b);
    
//     ptr->show();      // B
//     ptr->A::show();  // A

//     delete ptr;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// struct A{
//     virtual void show(){
//         cout << " A ";
//     }
// };

// struct B : A{
//     void show() final {
//         cout << " B ";
//     }
// };

// struct C : B{
//     // void show()  {
//     //     cout << " C ";
//     // } pomilka tomy scho v bat class ye metod z finale
// };
// struct C1 : B{
//     virtual void show(int i) {
//         cout << " C ";
//     }
// };


// int main(){


//     return 0;
// }



// #include <iostream>
// using namespace std;

// #define SHOW(M,s) { cout << M << s << "\n"; }

// struct A {
//     int i;
//     virtual void f() SHOW(" Virt fun from ", "A");
//      void f1() SHOW(" FFun from ", "A");
//     A(int j) { i = j; }
// };

// struct B : A {
//     int i;
//     void f() override SHOW(" Virt fun from ", "B");
//     void f1()  SHOW(" FFun from ", "B");
//     B(int j1, int j2): A(j2) { i = j1; }
// };

// int main() {
//     A a1(1); // Створення об’єкта класу А
//     B b1(2, 3); // Створення об’єкта класу В
//     a1.f(); 
//     a1.f1();
    
//     ((A*)&b1)->f();
//     ((A*)&b1)->f1();
//     // B b2(2 , 3);
//     // b2.A::f1();
//     // b2.B::f1();
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class A {
//     int x;
// public:
//     A(int val) : x(val) {}
//     virtual void show(A &a) {
//         cout << "Value of A's x: " << a.x << endl;
//     }
//     // Оголошуємо клас B як дружній
//     friend class B;
// };

// class B {
// public:
//     // Ось віртуальна функція, яка є членом класу B і дружньою до класу A
//     // virtual void show(A &a) {
//     //     cout << "Value of A's x: " << a.x << endl;
//     // }
// };

// int main() {
//     A a(10);
//     B b;
//     b.show(a);  // Викликаємо віртуальну функцію show, що має доступ до приватних членів класу A
    
//     return 0;
// }


// #include <iostream>
// #define SHOW(S)   { std::cout << " class - " << S << '\n'; }

// struct A { virtual void show() {} };

// struct B: public A {};
// struct D: public A { void show()SHOW("D"); };
// struct C: public B { void show()SHOW("C"); };

// void Show1(A* a1) { a1->show(); }

// int main() {
//     Show1(new C);
// }



// class Base { 
//     virtual void method() = 0; 
//     };

//  class Constant : virtual public Base { 
//     virtual void method() const {} 
//     };

//   class Variable : virtual public Base {
//      virtual void method() {} 
//      };
//    class Derived : public Constant, public Variable {};

//    int main(){
//     // Base b;
//     // Constant a;
//     Variable c;
//     Derived d;
//     return 0;
//    }


// #include <iostream>
// #define SHOW(S) {std::cout << "class - " << S << '\n';}

// class A{
//    public:
//    virtual void show() = 0;
//    void Show1(){A::show();};
// };

// void A::show() SHOW("C");

// class B : public A{
//    public:
//    void show(){ A::show();};
// };

// int main(){
//    B* p = new B;
//    p->show();
//    p->Show1();

//    return 0;
// }



// class Ancestor { 
//   public:
//    Ancestor(){std::cout << " Ancestor";}
//  };
//     class Progenitor {
      
//       public:
//       Progenitor(){std::cout << " Progenitor";}
//     };
//     class Parent : Ancestor {
//       public:
//       Parent(){std::cout <<" Parent";}
//       };
//     class Genitor : Progenitor {
//       public:
//       Genitor(){std::cout <<" Genitor";}
//       };
//     class Child : Genitor, Parent {
//       public:
//       Child(){std::cout << " Child";}
//       };

//     int main(){
//       Child a;
//       return 0;
//     }

//  #include <iostream>
    
    

    

//     class Base {
//     public:
//        virtual void method() {
//            std::cout << "Base" << std::endl;
//        }
//     };
//     class Derived : public Base {
//     public:
//        virtual void method() {
//            std::cout << "Derived" << std::endl;
//        }
//     };
//     int main() {
//        Derived o;
//        Base* ptr = &o;
//        Base& ref = o;
//        Base obj = o;
//        ptr->method();
//        ref.method();
//        obj.method();
//        return 0;
//     }

// #include <iostream>
// struct Point2 {
//     int x;
//     int y;

//     void print() const {
//         std::cout << '(' << this->x << ','
//                   << ' ' << this->y << ')';
//     }
// };

// struct Point3{
//   int x; 
//   int y; 
//   int z;
//   void print() const {
//     std::cout << '(' << this->x << ','
//       << ' ' << this->y << ',' << ' ' <<
//        this->z << ')';
//   }
// };

// // PUT YOUR CODE HERE

// int main() {
//     // Зчитати вхідні дані.
//     std::cout << "Enter the coordinates: ";
//     int x;
//     int y;
//     int z;
//     std::cin >> x >> y >> z;
//     // Створити об'єкт Point3 і вивести його на екран.
//     const Point3 point { x, y, z };
//     point.print();
//     std::cout << std::endl;
//     return 0;
// }

// #include <iostream>
// struct Point {
//     int size;
//     int* array;

//     Point(int size)
//         : size(size)
//         , array(new int[size]) {
//     }

//     ~Point() {
//         delete[] array;
//     }

//     void print() const {
//         std::cout << '(';
//         for (int i = 0; i < size - 1; ++i) {
//             std::cout << array[i] << ',' << ' ';
//         }
//         std::cout << array[size - 1] << ')';
//     }
// };

// // PUT YOUR CODE HERE
// struct Point2 : Point{
//   int& x;
//   int& y;
  
//   Point2() : x(array[0]) , y(array[1]) , Point(2){}

// };

// int main() {
//    // Створити об'єкт Point2 і зчитати вхідні дані напряму в поля.
//     std::cout << "Enter the coordinates: ";
//     Point2 point;
//     std::cin >> point.x >> point.y;
    
//     // Вивести Point2 на екран, використовуючи унаслідуваний метод.
//     point.print();
//     std::cout << std::endl;
//     return 0;
// }


// #include <iostream>
// struct Point {
//    int x;
//    int y;

//    void print() const {
//        std::cout << '(' << this->x << ','
//                  << ' ' << this->y << ')';
//     }
// };

// class Shape {
// protected:
//     int size;
//     Point* array;

// public:
//     // Конструктор за замовчуванням, коли кількість точок спочатку невідома.
//     Shape(): size(0) , array(nullptr) { }

//     // Конструктор з параметром для нащадків, коли кількість точок наперед відома.
//     Shape(int size)
//         : size(size)
//         , array(new Point[size]) {
//     }

//     virtual ~Shape() {
//         delete[] array;
//     }

//     void input() {
//         // Зчитати кількість точок, якщо вона невідома.
//         // Алокувати масив точок відповідного розміру.
//         if (array == nullptr) {
//             std::cin >> size;
//             array = new Point[size];
//         }
//         // Зчитати координати точок, тут їх кількість точно відома.
//         for (int i = 0; i < size; ++i) {
//             std::cin >> array[i].x >> array[i].y;
//         }
//     }

//     void print() const {
//         // Вивести фігуру на екран: ім'я і точки через пробіл.
//         std::cout << name();
//         for (int i = 0; i < size; ++i) {
//             std::cout << ' ';
//             array[i].print();
//         }
//     }

//     virtual const char* name() const {
//         // Ім'я фігури - має відповідати імені класу.
//         return "Shape";
//     }
// };

// class Square : public Shape{
//   public:
//   Square () : Shape(2){}

//   const char* name()  const override{
//         // Ім'я фігури - має відповідати імені класу.
//         return "Square";
//   };
// };

// class Triangle :public Shape{
//   public:
//   Triangle () : Shape(3){}
//   const char* name() const override {
//         // Ім'я фігури - має відповідати імені класу.
//         return "Triangle";
//   };
// };

// int main() {
//      // Прочитати ім'я фігури.
//     std::cout << "Input a shape (name, points):" << std::endl;
//     std::string name;
//     std::cin >> name;
//     // Створити відповідну фігуру.
//     Shape* shape;
//     if (name == "Triangle") {
//         shape = new Triangle();
//     } else if (name == "Square") {
//         shape = new Square();
//     } else {
//         shape = new Shape();
//     }
//     // Прочитати координати фігури.
//     shape->input();
//     // Вивести фігуру на екран.
//     shape->print();
//     std::cout << std::endl;
//     // Звільнити пам'ять.
//     delete shape;
//     return 0;
// }


// #include <cmath>
// #include <iomanip>
// #include <iostream>
// #include <string>

// struct Point {
//     double x;
//     double y;

//     void print() const {
//         std::cout << '(' << this->x << ','
//                   << ' ' << this->y << ')';
//     }

//     static double length(const Point& a, const Point& b) {
//         return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
//     }
// };

// struct Shape {
//     int size;
//     Point* array;
//     std::string name;

//     // Конструктор з параметром, кількість точок наперед відома.
//     Shape(int size)
//         : size(size)
//         , array(new Point[size]) {
//     }

//     virtual ~Shape() {
//         delete[] array;
//     }

//     void input() {
//         for (int i = 0; i < size; ++i) {
//             std::cin >> array[i].x >> array[i].y;
//         }
//     }

//     void print() const {
//         // Вивести фігуру на екран: ім'я і точки через пробіл.
//         std::cout << name;
//         for (int i = 0; i < size; ++i) {
//             std::cout << ' ';
//             array[i].print();
//         }
//     }
    
//     // Оголосіть абстрактний метод area().
//     virtual double area() const = 0;
//     // PUT YOUR CODE HERE
// };

// // Визначте класи Circle та Square 
// // PUT YOUR CODE HERE
// class Circle : public Shape{
//   public:
//   Circle() : Shape(2){}
//   double area() const{
//     double side = Point::length(array[0], array[1]);
//     return 3.1415 * side * side;
//   };


// };

// class Square : public Shape{ 
//   public:
//   Square() : Shape(2){}
//   double area() const{
//         double side = Point::length(array[0], array[1]);
//     return 0.5 * side * side;
//   };

  
//   };

// int main() {
//     // Прочитати ім'я фігури.
//     std::cout << "Input a shape (name, points):" << std::endl;
//     std::string name;
//     std::cin >> name;
//     // Створити відповідну фігуру.
//     Shape* shape;
//     if (name == "Circle") {
//         shape = new Circle();
//     } else if (name == "Square") {
//         shape = new Square();
//     }
//     shape->name = name;
//     // Прочитати координати фігури.
//     shape->input();
//     // Вивести фігуру та її площу на екран.
//     std::cout << std::fixed << std::setprecision(1) << "Area of ";
//     shape->print();
//     std::cout << std::setprecision(2) << " = " << shape->area() << std::endl;
//     // Звільнити пам'ять.
//     delete shape;

//     return 0;
// }


// #include <iostream>
// #include <string>

// class Movable {
// public:
//     virtual ~Movable() = default;

//     void move() {
//         std::cout << name() << " is moved." << std::endl;
//     }

//     void focus() {
//         std::cout << name() << " is not focusable." << std::endl;
//     }

//     virtual const char* name() const = 0;
// };

// class Focusable {
// public:
//     virtual ~Focusable() = default;

//     void move() {
//         std::cout << name() << " is not movable." << std::endl;
//     }

//     void focus() {
//         std::cout << name() << " is in focus." << std::endl;
//     }

//     virtual const char* name() const = 0;
// };

// // PUT YOUR CODE HERE
// class Button : public Focusable {
//     public:
//     const char* name() const{
//         return "Button";
//     };
// };
// class Slider : public Movable , public Focusable {
//     public:
//     const char* name() const{
//         return "Slider";
//     };
//     void move() {
//         std::cout << name() << " is moved." << std::endl;
//     }

//     void focus() {
//         std::cout << name() << " is not focusable." << std::endl;
//     }
// };

// int main() {
//     // Зчитати віджет і команду.
//     std::string widget;
//     std::string command;
//     std::cin >> widget >> command;
//     // Виконати команду над віджетом.
//     if (widget == "Button") {
//         if (command == "focus") {
//             Button().focus();
//         } else {
//             Button().move();
//         }
//     } else if (widget == "Slider") {
//         if (command == "focus") {
//             Slider().focus();
//         } else {
//             Slider().move();
//         }
//     }
//     return 0;
// }



// #include <iostream>
// #include <string>

// class Widget {
// public:
//     virtual ~Widget() = default;
//     virtual const char* name() const = 0;
//      virtual void focus() {
//         std::cout << name() << " is not focusable." << std::endl;
//     }
//     virtual void move() {
//         std::cout << name() << " is not movable." << std::endl;
//     }

//     // Перемістити методи з Movable та Focusable
//     // PUT YOUR CODE HERE
// };

// //Внести зміни в опис класу згідно умови задачі 
// class Movable : virtual public Widget {
// public:
//     virtual ~Movable() = default;
//     virtual void move() {
//         std::cout << name() << " is moved." << std::endl;
//     }
// };

// //Внести зміни в опис класу згідно умови задачі 
// class Focusable : virtual public Widget {
// public:
//     virtual ~Focusable() = default;
//     virtual void focus() {
//         std::cout << name() << " is in focus." << std::endl;
//     }

    
// };

// // Визначити Image
// // PUT YOUR CODE HERE

// class Button : public Focusable {
//     const char* name() const {
//         return "Button";
//     }
// };

// class Slider : public Movable, public Focusable {
// public:
//     const char* name() const {
//         return "Slider";
//     }
// };
// class Image : public Widget{
//     public:
//     virtual const char* name() const{
//         return "Image";
//     };
// };

// int main() {
//     // Зчитати віджет і команду.
//     std::string name;
//     std::string command;
//     std::cin >> name >> command;
//     // Створити віджет.
//     Widget* widget = nullptr;
//     if (name == "Button") {
//         widget = new Button();
//     } else if (name == "Slider") {
//         widget = new Slider();
//     } else if (name == "Image") {
//         widget = new Image();
//     }
//     // Виконати команду.
//     if (command == "focus") {
//         widget->focus();
//     } else {
//         widget->move();
//     }
//     // Видалити віджет.
//     delete widget;
//     return 0;
// }

// #include <iostream>

// class A{
//     public:
//     int f(int){return 1;};
//     double f( double){return 1;};
//     void f(){};
// };


// int main(){
//     A a;
//     a.f();
//     a.f(1);
//     a.f((double)3.1458);

//     return 0;
// }


// #include <iostream>

// struct A{
//     int i;
//     A() { i = 0; std::cout << " 000 " << std::endl; }
//     A(int i) { this->i = i; std::cout << " int " << std::endl;}
//     A(double d ) { i =(int)d; std::cout << " double " << std::endl;}
// } a1;
// void f(A a) {   std::cout << " A is created \n" ;  }
// int main(){
//     std::cout << " *******1 " << std::endl;
//     f(1);
//     std::cout << " *******2 " << std::endl;
//     f((A)5);
//     std::cout << " *******3 " << std::endl;
//     f(3.14);
//     std::cout << " *******4 " << std::endl;
//     f(a1);

//     return 0;
// }

// #include <iostream>

// struct A {
//     int i;
//     A() { i = 0; }
//     A(int i) { this->i = i; }
//     A(double d) { i = (int)d; }
//     A(const A&) = default;
// };

// struct B {
//     int i;
//     B() { i = 0; }
//     B(A& a) { i = a.i; };
// };

// void f(B b) { std::cout << "B is created \n"; }

// int main() {
//     A a1;
//     f(a1);
//     A a2 = 1;
//     B b = (B)a2;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// struct user{
//     string name;
//     string soname;
//     int id;
    
// };

// void bubbleSort(user* words, int n) {
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = 0; j < n - 1 - i; ++j) {
//             if (words[j].soname > words[j + 1].soname) {
//                 user temp = words[j];
//                 words[j] = words[j + 1];
//                  words[j + 1] = temp;
//             }
//         }
//     }
// }

// int main(){
//     int size;
//     cout << "Enter size of list members: " ; cin >> size;
//     user* ptr = new user[size];
//     for(int i =0 ; i < size ; i++){
//         cout << i+1 << "_____________________________________" << endl;
//         cout << "Enter name: "; cin >> ptr[i].name;
//         cout << "Enter soname: "; cin >> ptr[i].soname;
//         cout << "Enter id: "; cin >> ptr[i].id;
//     }

//      bubbleSort(ptr, size);

//      for(int i =0 ; i < size ; i++){
//         cout << i + 1 << ". " << ptr[i].soname  << " " << ptr[i].name << " " <<ptr[i].id << endl;
//      }

//     delete[] ptr;
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// struct user{
//     string name;
//     string soname;
//     int id;
    
// };

// void bubbleSort(user** words, int n) {
//     for (int i = 0; i < n - 1; ++i) {
//         for (int j = 0; j < n - 1 - i; ++j) {
//             if (words[j]->soname > words[j + 1]->soname) {
//                 user* temp = words[j];
//                 words[j] = words[j + 1];
//                  words[j + 1] = temp;
//             }
//         }
//     }
// }

// int main(){
//     int size;
//     cout << "Enter size of list members: " ; cin >> size;
//     user** ptr = new user*[size];
//     for(int i = 0; i < size ; i++){
//         ptr[i] = new user;
//     }
//     for(int i =0 ; i < size ; i++){
//         cout << i+1 << "_____________________________________" << endl;
//         cout << "Enter name: "; cin >> ptr[i]->name;
//         cout << "Enter soname: "; cin >> ptr[i]->soname;
//         cout << "Enter id: "; cin >> ptr[i]->id;
//     }

//      bubbleSort(ptr, size);

//      for(int i =0 ; i < size ; i++){
//         cout << i + 1 << ". " << ptr[i]->soname  << " " << ptr[i]->name << " " <<ptr[i]->id << endl;
//      }
//     for (int i = 0; i < size; i++){
//         delete ptr[i];
//     }

//     delete[] ptr;
//     return 0;
// }




// #include <iostream>
// #include <string>

// // Клас для прикладу
// class MyClass {
// private:
//     int value; // Деяке значення
// public:
//     // Конструктори
//     MyClass(int v = 0) : value(v) {}

//     // Метод для отримання значення
//     int getValue() const { return value; }

//     // Друзі для доступу до приватних полів
//     friend MyClass operator+(const MyClass& lhs, const MyClass& rhs);
// };

// // Глобальне перевизначення оператора +
// MyClass operator+(const MyClass& lhs, const MyClass& rhs ) {
//     // Об'єднання значень двох об'єктів
//     return MyClass(lhs.value + rhs.value );
// }

// int main() {
//     MyClass a(10);
//     MyClass b(20);
//     MyClass g(10);

//     // Використання перевизначеного оператора
//     MyClass c = a + b + g;
//     int z = 5;
//     int v = 8;

//     std::cout << "Result: " << c.getValue() << " " << z + v <<std::endl;

//     return 0;
// }



// #include <iostream>
// class A {
//     int i;
// public:
//     int get() { return i; }
//     A() : i(0) {}
//     A(int j) : i(j) {}
//     void show() { std::cout << i << "\n"; }
//     friend bool operator==(A, int);
// };

// bool operator==(A a, int i) {
//     return (a.i == i);
// }

// A operator+(A a, A b) {
//     return A(a.get() + b.get());
// }

// int main() {
//     A a2, a1(1);
//     (a2 == 1) ? std::cout << "TRUE\n" : std::cout << "FALSE\n";
//     a2 = a1 + 10;
//     a2 = 10 + a1;
//     a2.show();
// }



// #include <iostream>
// class A {
//     int i;
// public:
//     int get() { return i; }
//     A() : i(0) {}
//     A(int j) : i(j) {}
//     void show() { std::cout << i << "\n"; }
//     friend bool operator==(A, int);
//     int operator+(A& b) {
//     return (this->get() + b.get());}
// };
// A operator+(A a, A b) {
//     return A(a.get() + b.get());
// }
// bool operator==(A a, int i) {
//     return (a.i == i);
// }



// int main() {
//     A a2, a1(1 );
//     (a2 == 1) ? std::cout << "TRUE\n" : std::cout << "FALSE\n";
//     a2 = a1 + 15;
//     a2.show();
//     a2 = 10 + a1;
//     a2.show();
// }


// #include <iostream>
// using namespace std;

// class A{
//     public:
//     int i;
//     A(int a) : i(a){}
//     A operator+(int a){
//         i = a + i;
//         return i;
//     }
//     void get(){
//         cout << this-> i ;
//     }
// };

// int main(){
//     A a(5);

//     A a2 = a + 1;
//   //A a2 = 1 + a; error first come what is already in this type,
//  //and then what can be converted implicitly
//     a2.get();
//     return 0;
// }






// #include <iostream>
// using namespace std;

// class A{
//     public:
//     int i;
//     A(int a) : i(a){}
//     A operator+( A& a){  // A& a te same bude , ale mona (A)1 + (A)8
//         this->i = a.i + i;
//         return this->i;
//     }
// };

// int main(){
//     A a(1);
//     A a3 =  (A)1 + a;
//     // A a3 =  (A)1 + (A)8; error becouse A& a 
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A {
//     public:
//     int a;
//     A(int s) : a(s) {}
//     // int A::*ptr = &A::a;
// };


// int main(){
//     A a1(44);
//     A a2(16);

//     // int A::*ptr = &A::a;

//     cout << a1.*ptr << " " << a2.*ptr;

//     return 0;
// }


// #include <iostream>

// class A {
// public:
//     int value;

//     void show() {
//         std::cout << "Value: " << value << std::endl;
//     }

//     void setValue(int val) {
//         value = val;
//     }
// };

// int main() {
//     A obj;
//     obj.value = 42;

//     // Вказівник на поле даних класу
//     int A::*valuePtr = &A::value;

//     // Вказівник на метод класу без аргументів
//     void (A::*showPtr)() = &A::show;

//     // Вказівник на метод класу з аргументом
//     void (A::*setValuePtr)(int) = &A::setValue;

//     // Використання вказівника на поле даних класу з оператором .*
//     std::cout << "Value using .*: " << obj.*valuePtr << std::endl;

//     // Виклик методу через вказівник на метод
//     (obj.*showPtr)();

//     // Виклик методу через вказівник на метод з аргументом
//     (obj.*setValuePtr)(100);

//     // Виклик методу show знову через вказівник на метод
//     (obj.*showPtr)();

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class A{
//     public:
//     void f (){
//         cout << " A " ;
//     };
// };

// class B: public A{
//     public:
//     void f(){
//         cout << " B ";
//     }
// };

// int main(){
//     B b;
//     A* ptr = new B;
//     ptr = &b;
//     ptr->f();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A{
//     public:
//     int i;
//     A(int a) : i(a){
//         cout << " asda ";
//     }
//     A operator+( A& a){
//         return a.i + this->i;
//     }
// };
// //  int operator+(A a , A& b){
// //     return a.i + b.i;
// //  }

// int main(){
//     A a(1);
//     A a3 =  (A)1 + a;
//     // A a3 =  (A)1 + (A)8; error becouse A& a 
//     return 0;
// }



// #include <iostream>
// #include <utility>

// struct A {
//     int i;
//     A(): i(0) { }
//     A(int j) : i(j) { }
//     A& operator= (A& a){
//         i = 2*a.i;
//         return *this;
//     }
//     A& operator= (int j) {
//         i = 0;
//         return *this;
//     }
//     A& operator= (A&& a) {
//         std::cout << "Wow\n";
//         i = a.i + 2;
//         return *this;
//     }

//     void show() { std::cout << " i = " << i << "\n"; }
// };

// int main() {
//     A a2, a1(10);
//     a2 = a1 ;                 a2.show();
//     a2.operator= (100);       a2.show();
//     a2 = std::move(A(1000));  a2.show();
// }

// // expre_Expressions_with_Pointer_Member_Operators2.cpp
// // C2440 expected
// class BaseClass {
// public:
//    BaseClass(); // Base class constructor.
//    void Func1();
// };

// // Declare a pointer to member function Func1.
// void (BaseClass::*pmfnFunc1)() = &BaseClass::Func1;

// class Derived : public BaseClass {
// public:
//    Derived();  // Derived class constructor.
//    void Func2();
// };

// // Declare a pointer to member function Func2.
// void (Derived::*pmfnFunc2)() = &Derived::Func2;

// int main() {
//    BaseClass ABase;
//    Derived ADerived;

//    (ABase.*pmfnFunc1)();   // OK: defined for BaseClass.
//    (ABase.*pmfnFunc2)();   // Error: cannot use base class to
//                            // access pointers to members of
//                            // derived classes.

//    (ADerived.*pmfnFunc1)();   // OK: Derived is unambiguously
//                               // derived from BaseClass.
//    (ADerived.*pmfnFunc2)();   // OK: defined for Derived.

//    return 0;
// }



// #include <iostream>
// struct A {
//     int i;
//     A() : i(0) {}
//     A(int j) : i(j) {}
//     A operator()(int i){ return A((int)i); }

//     int operator() (int i, int j) { 
//         return (this->i + i + j); 
//     }
//     void show() { 
//         std::cout << " i=" << i << "\n"; 
//     }
// } ;

// int main() {
//     A a1(1);
//     a1.show();
//     (a1(4)).show();
//     a1.show();
//     std::cout << "overloaded operator: result - " << a1(3, 4) << '\n';
// }



// #include <iostream>
// using namespace std;

// class A{
//     public:

//     void Method(){
//         cout << " hello " << endl;
//     }
//     A& operator() (int s) {
//         for(int i = 0 ; i < s ; i++){
//         this->Method();
//         };
//         return *this;
//     };
// };


// int main(){
//     A a;
//     a(4).Method(); // TRIBA CHO a(4) povertalo A&
    
//     a.Method();
// }



// #include <iostream>
// using namespace std;

// class A{
//     private:
//     int i;
//     public:
//     A() : i(0){}
//     A(int j) : i(j){}
//     int operator[](int i){return (this->i += i);}
//     void show(){
//         cout << i << endl;
//     }
// };

// int main(){
//     A a;
//     a.show();
//     int i = a[10];
//     a.show();
//     cout << i;

// }


// #include <iostream>
// using namespace std;

// class Matrix {
//     int data[20][10]; // Внутрішній двовимірний масив
// public:
//     int* operator[](int index) { // Повертаємо посилання на рядок
//         return data[index];
//     }
// };

// int main() {
//     Matrix a;
//     a[10][5] = 42; // неможливо[][]
//     cout << "Value: " << a[10][5] << endl; // неможливо [][]

//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     // int i = 0;
    
//     // // Постфіксна форма (i++)
//     // int a = i++ ;  // Спочатку a = 5 + 3, потім i змінюється на 6
//     // cout << "a: " << a << ", i: " << i << endl;  // Виведе: a: 8, i: 6
    
//     // i = 0;  // Повертаємо i до 5

//     // // Префіксна форма (++i)
//     // int b = ++i;  // Спочатку i змінюється на 6, потім b = 6 + 3
//     // cout << "b: " << b << ", i: " << i << endl;  // Виведе: b: 9, i: 6
//     for(int i = 0 ; i < 5; ++i){
//         cout << i << " ";
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// struct A {
//     int i; // Поле для збереження значення

//     // Конструктор за замовчуванням
//     A() : i(0) {}

//     // Конструктор з параметром
//     A(int j) : i(j) {}

//     // Постфіксна форма оператора ++ (i++)
//     int operator++(int) {
//         int temp = i;  // Зберігаємо поточне значення
//         i++;           // Збільшуємо значення
//         return temp;   // Повертаємо початкове значення
//     }

//     // Префіксна форма оператора ++ (++i)
//     int operator++() {
//         i++;           // Збільшуємо значення
//         return i;      // Повертаємо нове значення
//     }

//     // Метод для виводу значення поля i
//     void show() const {
//         cout << "A::i = " << i << "\n";
//     }
// };

// int main() {
//     A a1(5); // Створення об'єкта з початковим значенням i = 5

//     // Постфіксна форма: a1++
//     int j = a1++;
//     cout << "j = " << j << "\n"; // Виведе старе значення i = 5
//     a1.show();                   // Виведе A::i = 6

//     // Скидаємо значення i назад до 5
//     a1.i = 5;

//     // Префіксна форма: ++a1
//     j = ++a1;
//     cout << "j = " << j << "\n"; // Виведе нове значення i = 6
//     a1.show();                   // Виведе A::i = 6

//     return 0;
// }




// #include <iostream>
// using namespace std;

// struct A {
//     int i;
//     A() : i(0) {}
//     A(int j) : i(j) {}
//     A& operator++(int) {
//         int i = this->i;
//         this->i++;
//         return *this;
//     }
//     int operator++() {
//         i++;
//         return i;
//     }
//     void show() {
//         std::cout << "A::i=" << i << "\n";
//     }
// };

// int main() {
//     A a1(5);

//     a1.show();
//     a1.i = 5;
//     int j;
//     j = ++a1;
//     std::cout << "j=" << j;
//     a1.show();
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int i = 0;

//     cout << i++ << endl; // 0
//     cout << i << endl; // 1

//     i = 0;
//     cout << ++i << endl; // 1
//     cout << i << endl; // 1
// }

// #include <iostream>
// using namespace std;

// class A{
//     public:
//     int i;
//     A() : i(0) {}
//     A(int j) : i(j) {}
//     operator int(){
//         cout << " int " << i << endl;
//         return i;
//     }
//     operator int* (){
//         cout << " *int " << i << endl;
//         return &i;
//     }
// };


// int main(){
//     A a(5);

//     int b = a;
//     int* c = a;
//     cout << b << " " << *c;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A{
//     public:
//     int i;
//     A() : i(0) {}
//     A(int j) : i(j) {}
//     A* operator->(){
//         cout << " this->";
//         return this;
//     }
//     void show(){
//         cout << "show(){pop}" << endl;
//     }
// };


// int main(){
//     A a;
//     a->show();
//     int b = a->i; cout << b;
// }


// #include <iostream>
// using namespace std;
// #define OUT(M) cout << "Overloaded comma operator - " << M << " of class \n";

// struct A {
//     int i;
//     A() : i(0) { cout << "ctor A() \n "; }
//     A(int j) : i(j) { cout << "ctor A(int) \n "; }
//     void show() { cout << "\tclass A: i = " << i << '\n'; }
//     bool operator<=(A a) {
//         return (i <= a.i) ? true : false;
//     }
//     A& operator,(A& a) {
//         i = a.i;
//         OUT("inside")
//         return *this;
//     }
//     A& operator++(int) { // постфіксна форма
//         this->i++;
//         return *this;
//     }
// };

// // перевантажений оператор не як метод
// A& operator,(A& a, const int b) {
//     a.i = b;
//     OUT("outside")
//     return a;
// }

// int main(void) {
//     A a(5), b;
//     for (a, 1; a <= (A)10; b, a++)
//         a.show();
// }


// #include <iostream>
// struct A {
//     int i;
//     A() : i(0) {}
//     A(int j) : i(j) {}
    
//     void* operator new(size_t size) {  
//         std::cout << " Memory allocated ";  
//         return malloc(size); 
//     }

//     void operator delete(void* p) {   
//         std::cout << " memory free";    
//         free(p);   
//     }

//     void show() {  
//         std::cout << "\tclass A: i = "<<i << '\n';  
//     }
// };

// int main() {  
//     A * a = new A(5);    
//     a->show();  
//     delete a;  
// }


// #include <iostream>
// using namespace std;

// class A{
//     public:
//     A() {}

//     void show(){
//         cout << " 0 " ;
//     }

//     void operator()(int i){
//         for (int j = 0 ; j < i ; j++){
//             show();
//         }
//     }
// };

// int main(){
//     A a;
//     a(5);

//     return 0;
// }


// #include <iostream>
// #include <typeinfo>

// using namespace std;

// class Base{
//     public:
//     virtual void f(){};
// };

// class D1 : public Base{
//     public:
//     virtual void f(){};
// };

// class D2: public Base {
//     virtual void f(){};
// };


// int main(){
//     int a;
//     Base *p , b;
//     D1 d11;
//     D2 d22;

//     cout << "Типом змінної а є ";
//     cout << typeid(a).name() << endl;
//     p = &b;
//     cout << "р ВКАЗУЄ на обєкт типу ";
//     cout << typeid(*p).name() << endl;
//     p = &d11;
//     cout << "р ВКАЗУЄ на обєкт типу ";
//     cout << typeid(*p).name() << endl;
//     p = &d22;
//     cout << "р ВКАЗУЄ на обєкт типу ";
//     cout << typeid(*p).name() << endl;

//     return 1;
// }



// #include <iostream>
// #include <typeinfo>

// class Base {
// public:
//     virtual ~Base() = default; // Поліморфізм вимагає віртуального методу
// };

// class Derived1 : public Base {};
// class Derived2 : public Base {};

// int main() {
//     Base* obj1 = new Derived1();
//     Base* obj2 = new Derived2();

//     std::cout << "Тип obj1: " << typeid(*obj1).name() << std::endl;
//     std::cout << "Тип obj2: " << typeid(*obj2).name() << std::endl;

//     delete obj1;
//     delete obj2;

//     return 0;
// }


// #include <iostream>
// #include <typeinfo>

// void printTypeInfo(const std::type_info& info) {
//     std::cout << "Ім'я типу: " << info.name() << std::endl;
// }

// int main() {
//     int a = 5;
//     double b = 3.14;

//     printTypeInfo(typeid(a)); // Передача об'єкта type_info як параметра
//     printTypeInfo(typeid(b));

//     return 0;
// }



// #include <iostream>
// #include <typeinfo>

// class Base {
// public:
//     virtual ~Base() = default; // Поліморфізм вимагає віртуального методу
// };

// class Derived1 : public Base {};
// class Derived2 : public Base {};

// int main() {
//     Base* obj1 = new Derived1();
//     Base* obj2 = new Derived2();

//     std::cout << "Тип obj1: " << typeid(*obj1).name() << std::endl;
//     std::cout << "Тип obj2: " << typeid(*obj2).name() << std::endl;

    

//     delete obj1;
//     delete obj2;

//     return 0;
// }








// #include <iostream>
// #include <typeinfo>

// class Base {
// public:
//     virtual ~Base() = default; // Поліморфізм вимагає віртуального методу
// };

// class Derived1 : public Base {};
// class Derived2 : public Base {};

// int main() {
//     Base* obj1 = new Derived1();
//     Base* obj2 = new Derived2();
//     Base* obj11 = new Derived1();
//     Base* obj22 = new Derived2();

//     std::cout << "Тип obj1: " << typeid(*obj1).name() << std::endl;
//     std::cout << "Тип obj2: " << typeid(*obj2).name() << std::endl;

//     std::cout << (typeid(*obj1) == typeid(*obj2) ?"Типи obj1 та obj2 однакові! " : "Типи obj1 та obj2 різні! ") << std::endl; 
//     std::cout << (typeid(*obj1) == typeid(*obj11) ?"Типи obj1 та obj11 однакові! " : "Типи obj1 та obj11 різні! ") << std::endl; 
//     std::cout << (typeid(*obj2) == typeid(*obj22) ?"Типи obj2 та obj22 однакові! " : "Типи obj2 та obj22 різні! ") << std::endl; 
//     // std::cout <<  << std::endl;

//     std::cout << (typeid(*obj1).before(typeid(*obj2)) ? "Тип obj1 перед obj2" : "Тип obj1 не перед obj2") << std::endl;
//     std::cout << (typeid(*obj11).before(typeid(*obj22)) ? "Тип obj11 перед obj22" : "Тип obj11 не перед obj22") << std::endl;


//     delete obj1;
//     delete obj2;

//     return 0;
// }



// #include <iostream>
// #include <typeinfo>
// #include <string.h>
// void my(char** s) {
//     std::cout << "char* function. Agr is " 
//               << typeid(s).name() << ": " << *s << "\n";
//     char* p1 = new char[4]; strcpy(p1, "Wow\0");
//     *s = p1;
// }
// void my(int* i) {
//     std::cout << "int* function (begin). Agr is " 
//               << typeid(i).name() << ": " << *i << "\n";
//     *i = 99;
//     std::cout << "int* function (end). Agr is " 
//               << typeid(i).name() << ": " << *i << "\n";
// }
// #define OUTT(s, s2) std::cout << s2 << " is type - " << typeid(s).name() << ": " << s << "\n";
// #define OUT(s) OUTT(s, #s)

// int main() {
//     int n = 20; OUT(n); const int& m = n; OUT(m);
//     const_cast<int&> (m) = 60;
//     int& p = const_cast<int&> (m);
//     OUTT(n, "n new = "); OUTT(m, " m new = ");

//     const int nn = 100;
//     c mm = &nn;
//     OUT(nn); OUT(*mm); OUT(mm);
//     int* p1 = const_cast<int*> (mm);
//     if (p1)
//         my(p1);
//     OUT(nn); OUT(*mm); OUT(mm);
//     my(const_cast<int*> (&nn));
//     OUT(nn);

//     const char* const p2 = "My pointer";
//     OUT(p2); my(const_cast<char**> (&p2)); OUT(p2);
// }




// #include <iostream>
// #include <typeinfo>
// #include <string.h>
// void my(char** s) {
//     std::cout << "char* function. Agr is " 
//               << typeid(s).name() << ": " << *s << "\n";
//     char* p1 = new char[4]; strcpy(p1, "Wow\0");
//     *s = p1;
// }
// void my(int** s) {
//     std::cout << "char* function. Agr is " 
//               << typeid(s).name() << ": " << *s << "\n";
//     int* p1 = new int[4]; 
//     *s = p1;
// }
// void my(int* i) {
//     std::cout << "int* function (begin). Agr is " 
//               << typeid(i).name() << ": " << *i << "\n";
//     *i = 99;
//     std::cout << "int* function (end). Agr is " 
//               << typeid(i).name() << ": " << *i << "\n";
// }
// #define OUTT(s, s2) std::cout << s2 << " is type - " << typeid(s).name() << ": " << s << "\n";
// #define OUT(s) OUTT(s, #s)

// int main() {
//     const int i = 52;
//     const int* const pipa = &i;
//     int* p1 = const_cast<int*>(pipa);
//     my(p1);
//     const int pop = 163;
//     const int* const popa = &pop;
//     // const int* const p3 = &popa;
//     my(const_cast<int**> (&popa));

//     const int lala = 8;
//     const int* const pp = &lala;
//     my(const_cast<int**>(&pp));

//     const int apa = 666;
//     const int* const ipi = &apa;
//     int* opo = const_cast<int*>(ipi);
//     my(opo);
   
//     const char* const p2 = "My pointer";
//     OUT(p2); my(const_cast<char**> (&p2)); OUT(p2);
// }



// #include <limits>
// void func(int) {}
// int main() {
//     // Максимальне додатне значення
//     int i = std::numeric_limits<int>::max();
//     long l;
//     float f;
//     // (1) Типові автоматичні приведення:
//     l = i; f = i;
//     // Можуть бути виконані
//     l = static_cast<long>(i);
//     f = static_cast<float>(i);
//     // (2) Перетворення із втратою інформації
//     i = l;   // Можлива втрата даних
//     i = f;   // Можлива втрата даних
//     // Небезпечне перетворення
//     i = static_cast<int>(l);
//     i = static_cast<int>(f);
//     char c = static_cast<char>(i);
//     // (3) Примусове перетворення void*
//     void* vp = &i;

//     // Небезпечний спосіб
//     float* fp = (float*)vp;
//     // Інший спосіб (також небезпечний)
//     fp = static_cast<float*>(vp);

//     // (4) Неявне приведення типу
//     double d = 0.0;
//     int x = d;         // Автоматичне приведення типу
//     x = static_cast<int>(d); // Явне приведення типу
//     func(d);         // Автоматичне приведення типу
//     func(static_cast<int>(d)); // Явне приведення типу
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int a = 5;
//     double b = 10;

//     double c = static_cast<double>(a);
//     int c1 = static_cast<int>(b);

//     void* ptr = new int(10); //static_cast only void* can transfot yo another type pointer
//     int* ptr2 = static_cast<int*>(ptr);




//     delete ptr;
// }




// #include <iostream>
// using namespace std;

// enum class A{
//     Up = 1,
//     Right,
//     Left,
//     Down
// };

// void Move(const A& der){
//     switch(der){
//         case A::Up:
//             std::cout<< " move Up";
//             break;
//         case A::Right:
//             cout<< " move Right";
//             break;
//         case A::Left:
//             cout<< " move Left";
//             break;
//             case A::Down:
//             cout<< " move Down";
//             break;
//             default:
//             cout<< " nit nit";
//             break;

//     }
// }


// int main(){
//     cout << " enterUp = 1 , Right = 2 , Left = 3 , Down = 4 " << endl;
//     int idmove; cin >> idmove;
//     A pop = static_cast<A>(idmove);
//     Move(pop);

//     return 0;
// } 

// #include <iostream>


// class A{
//     private:
//     int INTa;
//     public:
//     void metodA(){
//         std::cout << " metodA was created" << std::endl;
//         INTa = 55;
//     }
// };

// class B : public A{
//     private:
//     int INTb;
//     public:
//     void metodB(){
//         std::cout << " metodB was created" << std::endl;
//         INTb =5;
//     }
// };


// int main(){
//     // A obj1;
//     // B obj2;

//     // A* ptr = &obj2;
//     // B* ptr2 = static_cast<B*>(ptr);

//     // ptr2->metodB();
//     // ptr2->metodA();

//     A objj;
//     A* ptrr = &objj;
//     B* ptrB = static_cast<B*>(ptrr);
//     ptrB->metodB();
// }




// #include <iostream>
// const int sz = 3;

// struct X {
//     int a[sz] = {1, 2, 3};
// };

// void print(X* x0) {
//     std::cout << '\n' << "1 - ";
//     for (int i = 0; i < sz; i++)
//         std::cout << x0->a[i];
// }

// int main() {
//     X x1;                         // Ініціалізація структури X, масив `a` містить {1, 2, 3}
//     print(&x1);                   // Виклик функції `print`, яка виводить значення масиву `a`

//     int* xp = reinterpret_cast<int*>(&x1);  // Приведення вказівника на структуру X до int*
//     std::cout << '\n' << "2 - ";
//     for (int i = 0; i < sz; i++)            // Обхід елементів масиву через xp[i]
//         std::cout << xp[i];

//     std::cout << '\n' << "3 - ";
//     for (int* i = xp; i < xp + sz; i++)     // Обхід елементів масиву через арифметику вказівників
//         std::cout << *i;

//     return 1;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]= {1 , 2 , 3};

//     int a = 52;
//     double b = static_cast<double>(a);
//     cout << b << endl;

//     double d = 155;
//     int c = static_cast<int>(d);
//     cout << c << endl;


// }



// int main(){
// double arr[3] = {0, 0, 0};
// int* ptr = static_cast<int*>(arr);  
// for(int i = 0 ; i < 3 ; i++ ){
//     std::cout << ptr[i] << " ";
// }
// return 0;
// }



// #include <iostream>
// #include <string>

// struct smartstring : public std::string {
    
//     bool isEmpty() const {
//         return this->empty();
//     }
// };

// using string_t = smartstring;

// int main() 
// {
//     string_t sides;
//     string_t w;
//     string_t h;
//     // Зчитати вхідний рядок - розширення у форматі WxH.
//     std::cout << "Enter the resolution: ";
//     std::getline(std::cin, sides);
//     // Розділити розширення на ширину і висоту.
//     unsigned i = 0;
//     for (; i < sides.size() && sides[i] != 'x'; ++i) {
//         w += sides[i];
//     }
//     for(++i; i< sides.size(); ++i) {
//         h += sides[i];
//     }
//     // Вивести повідомлення.
//     std::cout << "Width:  " << w << std::endl << "Height: " << h << std::endl;
//     if (w.isEmpty() || h.isEmpty()) {
//         std::cout << "Warning: Both dimensions should be set." << std::endl;
//     }
//     return 0;  
// }



// #include <iostream>
// #include <string>

// struct smartstring : public std::string {
//     unsigned operator[](char ch){
        
//         for(unsigned p = 0 ; p < std::string::size(); p++){
//             // if(ch == this->at(p)){
//             //     return p;    
//             // }
//             if(ch == (*this)[p] ){
//                 return p;   
//             }
//         }
        

//         return this->size();
        


//     }
// };

// int main() {
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


// #include <iostream>

// class Array {
// public:
//     Array() : size(0), values(nullptr) {}
//     Array(int size) : size(size), values(new int[size]) {}
//     ~Array() { delete[] values; }

//     Array& operator=(const Array& other) {
//         if (this == &other) {
//             return *this;
//         }

//         this->size = other.size;
//         delete[] this->values;
//         if (size > 0) {
//             this->values = new int[size];
//             for (int p = 0; p < size; p++) {
//                 this->values[p] = other.values[p];
//             }
//         } else {
//             this->values = nullptr;
//         }
//         return *this;
//     }

//     void input() {
//         for (int i = 0; i < size; ++i) std::cin >> values[i];
//     }

//     void print() {
//         std::cout << '[' << size << "] ";
//         for (int i = 0; i < size; ++i) std::cout << ' ' << values[i];
//     }

// private:
//     int size;
//     int* values;
// };

// int main() {
//     // Зчитати.
//     int size;
//     std::cin >> size;
//     Array* arr1 = new Array{size};
//     arr1->input();
    
//     // Скопіювати перший масив в другий.
//     Array arr2;
//     arr2 = *arr1;
    
//     // Вивести і видалити оригінальний.
//     std::cout << "Real: ";
//     arr1->print();
//     delete arr1;
    
//     // Вивести копію.
//     std::cout << std::endl << "Copy: ";
//     arr2.print();
    
//     // Скопіювати "в себе".
//     arr2 = arr2;
//     std::cout << std::endl << "Self: ";
//     arr2.print();
//     std::cout << std::endl;

//     return 0;
// }



// #include <iostream>
// class Array {
// public:
//     Array() : size(0), values(nullptr) {}
//     Array(int size) : size(size), values(new int[size]) {}
//     ~Array() { delete[] values; }

//     Array& operator=( Array&& other){
//         if(this == &other){
//             return *this;
//         }
//         delete[] values;
//         size = other.size;
//         values = other.values;
//         other.size = 0;
//         other.values = nullptr;
//         return *this;

//     }

//     void input() {
//         for (int i = 0; i < size; ++i) std::cin >> values[i];
//     }

//     void print() {
//         std::cout << '[' << size << "]";
//         for (int i = 0; i < size; ++i) std::cout << ' ' << values[i];
//     }
// private:
//     int size;
//     int* values;
// };

// int main() {
//     // Зчитати.
//     int size;
//     std::cin >> size;
//     Array* arr1 = new Array{size};
//     arr1->input();
//     // Вивести оригінальний.
//     std::cout << "Real: ";
//     arr1->print();
//     // Вивести переміщений.
//     Array arr2;
//     arr2 = std::move(*arr1);
//     delete arr1;
//     std::cout << std::endl << "Move: ";
//     arr2.print();
//     // Перемістити "в себе".
//     arr2 = std::move(arr2);
//     std::cout << std::endl << "Self: ";
//     arr2.print();
//     std::cout << std::endl;

//     return 0;
// }


// #include <iostream>
// #include <string>

// struct Wchar {
//    char bytes[4];

//     int compare(const Wchar& other){
//         for(int i = 3; i >= 0; --i){
//             if(bytes[i] < other.bytes[i]){
//                 return -1;
//             }
//             if(bytes[i] > other.bytes[i]){
//                 return 1;
//             }
//         }
//         return 0;
//     }

//     bool operator<(const Wchar& other){
//         return compare(other) < 0;
//     }
//     bool operator>(const Wchar& other){
//         return compare(other) > 0;
//     }
//     bool operator<=(const Wchar& other){
//         return compare(other) <= 0;
//     }
//     bool operator>=(const Wchar& other){
//         return compare(other) >= 0;
//     }
//     bool operator==(const Wchar& other){
//         return compare(other) == 0;
//     }
//     bool operator!=(const Wchar& other){
//         return compare(other) != 0;
//     }
// };

// void read(int index, Wchar& w) {
//    std::cout << "Enter bytes for wchar" << index << ": ";
//    for (int i = 3; i >= 0; --i) {
//        int c;
//        std::cin >> c;
//        w.bytes[i] = c;
//    }
// }

// #define print_compare(symbol) std::cout \
//    << "wchar1 " #symbol " wchar2 = " \
//    << (wchar1 symbol wchar2) << std::endl

// int main() {
//    Wchar wchar1;
//    Wchar wchar2;
//    read(1, wchar1);
//    read(2, wchar2);
//    print_compare(<);
//    print_compare(>);
//    print_compare(<=);
//    print_compare(>=);
//    print_compare(==);
//    print_compare(!=);
//    return 0;
// }

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// void Bar() {
//     throw runtime_error("Виняток з Bar");
// }

// void Foo() {
//     Bar(); // Проброс винятку
// }

// int main() {
//     try {
//         Foo();
//     } catch (const exception& ex) {
//         cout << "Оброблено: " << ex.what() << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;


// void Foo(int value){
//     if (value < 0){
//         // throw logic_error("sadasd as"); //ok
//         // throw logic_error("sadasd as"); //ok
//         // throw exeption("sadasd as");//nit , ne ok
//         throw  value;
//     }
    


    
//     cout << " PEREMENIYA= " << value << endl;
// }

// int main(){
//     try{
//     Foo(-55);
//     }
//     catch(const int ex){
//         // catch(const exception ex)
//         //  cout << "Mi poymali " << ex.what() << endl;
//         cout << "Mi poymali " << ex << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;


// void Foo(int value){
//     if (value < 0){
//         // throw logic_error("sadasd as"); //ok
//         // throw logic_error("sadasd as"); //ok
//         // throw exeption("sadasd as");//nit , ne ok
//         throw;
//     }
    


    
//     cout << " PEREMENIYA= " << value << endl;
// }

// int main(){
//     try{
//     Foo(-55);
//     }
//     catch(){
//         cout << "Mi poymali " << endl;
//     }
//     return 0;
// }




// #include <iostream>

// int F(int i) {
//     if (i == 1) throw "exception int"; // генерація виключень типу char*
//     if (i > 10) throw char(20);         // генерація виключень типу char
//     if (i == 0) throw double(10);      // генерація виключень типу double
//     else throw i;                      // генерація виключень типу int
//     return 10; // ніколи не виконається
// }

// int main() {
    
//     F(0); // згенерується неявно виключення "exception int" типу char*
//     return 1;
// }



// #include <iostream>
// using namespace std;

// class A{
//     public:
//     virtual void show(){ cout << "A "; }
//     virtual void show_() { cout << "A1 "; }
// };

// class B : virtual public A {
//     public:
//     void show() override { cout << "B "; }
//     void show_() override { cout << "B1 "; }
// };
// class C : virtual public A {
//     public:
//     void show() override { cout << "B "; }
//     void show_() override { cout << "B1 "; }
// };
// class D : public B , public C{
//     public:
//     void show() override{cout << "Ban";}
//      void show_() override { cout << "Ban2"; }
// };

// int main(){
//     B b;
//     A* ptr = new B(b);
//     ptr->show();
//     ptr->show_();

//     // B b1;
//     // A* ptr = new B(b1);
//     // B* ptr2 =  dynamic_cast<B*>(ptr);
//     // ptr2->show();
//     // ptr2->show_();


//     return 0;
// }



// #include <iostream>
// #include <stdexcept>

// void validate(const char* buffer) {
//    if (!buffer[0]) {
//        throw "The string is empty.";
//    } else if (buffer[0] == '-') {
//        throw -1;
//    }
// }

// int main() {
//    try {
//        std::cout << "Enter the number: ";
//        char buffer[100];
//        std::cin.getline(buffer, sizeof(buffer));
//        validate(buffer);
//        std::cout << "No error." << std::endl;
//    }
//    catch( const char* ex){
//     std::cout<< ex;
//    }
//    catch (...) {
//        std::cout << "Unknown error." << std::endl;
//    }
//    return 0;
// }



// #include <iostream>
// #include <stdexcept>

// void divide(
//    int dividend,
//    int divisor,
//    int& quotient,
//    int& remainder) {
//    if(dividend > 1000){
//         throw std::domain_error("Dividend must be less than 1000.");
//    }
//    if(divisor > 1000){
//          throw std::domain_error("Divisor must be less than 1000.");
//    }
//    if(divisor == 0){
//         throw std::invalid_argument("Divisor is 0.");
//    }
//    quotient = dividend / divisor;
//    remainder = dividend % divisor;
// }

// int main() {
//    int dividend;
//    int divisor;
//    int quotient;
//    int remainder;
//    std::cout << "Enter the operands: ";
//    std::cin >> dividend >> divisor;
//    try {
//        divide(dividend, divisor, quotient, remainder);
//        std::cout << dividend << " / " << divisor << " = "
//                  << quotient << " (" << remainder << ")" << std::endl;
//    }
//    catch (const std::domain_error& e) {
//        std::cout << "Domain error: " << e.what() << std::endl;
//    }
//    catch (const std::invalid_argument& e) {
//        std::cout << "Invalid argument: " << e.what() << std::endl;
//    }
//    catch (const std::exception& e) {
//        std::cout << "Unknown exception: " << e.what() << std::endl;
//    }
//    return 0;
// }





// #include <iostream>
// #include <stdexcept>

// struct code_exception : public std::exception{
//     std::string name;
//     int line;
//     code_exception(std::string nam , int lin) : name(nam) , line(lin)   {}

//      virtual  const char* what()const throw(){
//         static std::string message = name + "(" + std::to_string(line) + "):Error.";
//         // std::cout << name << "(" << line << "):Error." << std::endl;
//         return message.c_str();
//     }

// };

// int main() {
//    std::string file;
//    int line;
//    std::cout << "Enter file: ";
//    std::cin >> file;
//    std::cout << "Enter line: ";
//    std::cin >> line;
//    try {
//        throw code_exception{file, line};
//    }
//    catch (const std::exception& e) {
//        std::cout << e.what() << std::endl;
//    }
//    catch (...) {
//        std::cout << "Unknown error." << std::endl;
//    }
//    return 0;
// }


// #include <iostream>
// using namespace std;

// template <class T>
// class A{
//     private:
//     T value;
//     public:
//     A(T num) : value(num) {}
//     ~A(){
//         cout << "Delete!!!";
//     }

// };

// int main(){
//     int b = 5;
//     A a1(b);

//     A a2(13);
// }



// #include <iostream>
// #include <vector>
// #include <list>
// #include <forward_list>
// #include <iterator>

// using namespace std;

// #define ITER_CALL template< class iter > \
// void iter_call(iter, iter, 

// ITER_CALL std::bidirectional_iterator_tag) { 
//     std::cout << "Bidirec. iterator is used\n";
// }

// ITER_CALL std::random_access_iterator_tag) { 
//     std::cout << "Random iterator is used\n";
// }

// ITER_CALL std::forward_iterator_tag) { 
//     std::cout << "Forward iterator is used\n"; 
// }

// template< class Iter >
// void iter_call(Iter first, Iter last) { 
//     iter_call(first, last, 
//     typename std::iterator_traits<Iter>:: 
//     iterator_category()); 
// }

// int main() { 
//     std::vector<int> v; 
//     iter_call(v.begin(), v.end()); 

//     std::list<int> l; 
//     iter_call(l.begin(), l.end()); 

//     std::forward_list<int> q; 
//     iter_call(q.begin(), q.end()); 

//     return 0; 
// }



// #include <iostream>
// #include <map>

// int main() {
    //** 1 */ 
        // std::map<int, std::string> myMap = { {1 , "one"}, {2 , "two"} };
    // std::map<int, std::string> myMapp = { {3 , "three"}, {4 , "four"} };
    
    // myMap.merge(myMapp);

    // for (const auto& [key, value] : myMap) {
    //     std::cout << key << ": " << value << std::endl;
    // }


    //** 2 */

//     std::map<int, std::string> myMap = {{1, "one"}, {3, "three"}, {4, "four"}};
// auto it = myMap.lower_bound(4);
// if (it != myMap.end()) {
//     std::cout << "Lower bound: " << it->second << std::endl;
// }



    //** 3 */

//     std::map<int, std::string> myMap = {{1, "one"}, {2, "two"}, {3, "three"}};
// auto range = myMap.equal_range(2);
// for (auto it = range.first; it != range.second; ++it) {
//     std::cout << "Equal range: " << it->second << std::endl;
// }



//     std::map<int, std::string> myMap = { {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"} };

//     // Змінюємо значення елементів з ключами 2 та 3
//     auto it1 = myMap.find(2);
//     auto it2 = myMap.find(3);

    
//     std::swap(it1->second, it2->second);


//     // Виведення зміненого вмісту мапи
//     for (const auto& [key, value] : myMap) {
//         std::cout << key << ": " << value << std::endl;
//     }

//     return 0;



// }





// #include <iostream>
// #include <map>
// #include <string>
// #include <utility>

// using namespace std;

// typedef map<int, char*, less<int>> MAP;
// #define MIter MAP::iterator
// #define PRNElemnts(w) cout << "(" << (*w).first << "," << (*w).second << ") ";

// void print(string s, MAP &M) {
//     cout << "\n" << s;
//     if (M.empty()) {cout << "Map is empty";}
//     else
//         for (auto&& n : M){
//             cout << "(" << n.first << "," << n.second << ") ";
//         }

// }

// int main() {
//     char* NUMBERS[] = { "One", "Two", "Three", "Four", "Five" };
//     MAP M1, M2; // Порожні словники

//     for (int i = 0; i < sizeof(NUMBERS) / sizeof(char*); i++) {
//         M1.insert(MAP::value_type(i, NUMBERS[i]));
//         M2.emplace(make_pair(i, NUMBERS[i]));
//     }

//     print(" M1 - ", M1);
//     print(" M2 - ", M2);

//     cout << "\n M1 is reverse form - ";
//     for (auto i = M1.rbegin(); i != M1.rend(); i++)
//         PRNElemnts(i)

//     cout << "\n #size - M1 : " << M1.size()
//          << ", M2 : " << M2.size()
//          << "\n #max size - M1 : " << M1.max_size()
//          << ", M2 : " << M2.max_size()
//          << "\n #count '5' - M1 : " << M1.count(5)
//          << ", M2 : " << M2.count(4);

//     M1.erase(M1.find(3));
//     print(" Delete '3' element in M1 - ", M1);

//     M1.erase(M1.find(2), M1.end());
//     print(" Delete 2 last element in M1 - ", M1);

//     M1.clear();
//     print(" Clear M1 - ", M1);
// }



// #include <iostream>
// #include <map>
// #include <string>
// #include <utility>

// using namespace std;

// typedef map<int, char*, less<int> > MAP;
// #define MIter MAP::iterator
// #define PRNElemnts(w) cout << "(" << (*w).first << "," << (*w).second << ") ";

// void print(string s, MAP &M) {
//     cout << "\n" << s;
//     if (M.empty()) cout << "Map is empty";
//     else
//         for (auto&& n : M)
//             cout << "(" << n.first << "," << n.second<<") ";
// }

// int main() {
//     char* NUMBERS[] = { "One", "Two", "Three", "Four", "Five" };
//     MAP M1, M2; // Порожні словники

//     for (unsigned i = 0; i < 10; i++) {
//         if (i < 2) M1.insert(MAP::value_type(2, "Two"));
//         if (i < 2 && i < 5) M1.insert(MAP::value_type(7, "Seven"));
//         if (i > 5) M1.insert(MAP::value_type(10, "Ten"));
//     }

//     print(" New created M1 -", M1);
//     swap(M1, M2);
//     print(" Swap M1 - ", M1);
//     print(" Swap M2 - ", M2);

//     cout << "\n M2 range of '10' elements -";
//     for (MIter where = M2.lower_bound(10); where != M2.end(); where++)
//         PRNElemnts(where)

//     cout << "\n M2 range of '2' elements -";
//     for (MIter where = M2.begin(); where != M2.upper_bound(2); where++)
//         PRNElemnts(where)

//     cout << "\n M2 range of '0' elements -";
//     for (MIter where = M2.equal_range(2).first; where != M2.equal_range(10).second; where++)
//         PRNElemnts(where)

//     cout << "\n operator [ ] & M2 - ";
//     for (MIter where = M2.begin(); where != M2.end(); where++)
//         cout << "(" << (*where).first << "," << M2[(*where).first] << ") ";

//     if (M1 <= M2) cout << "\n M1 <= M2";
// }




// #include <iostream>
// #include <stack>
// #include <vector>
// #include <deque>
// #include <list>
// #include <string>
// #include <algorithm>
// #include <initializer_list>
// #include <cstring>
// #include <functional>
// #include <memory>

// using namespace std;

// int main() {
//     stack< char > v;
//     for (unsigned i = 0; i < 3; ++i) {
//         v.push(char('a' + i));
//         cout << " v added: " << char('a' + i) << " ";
//     }
//     stack< char > v1(v);
//     deque< char > s2{ 'a','b','c' };
//     stack< char > v2(s2);
//     deque< char >&& s3{ 'a','b','c' };
//     stack< char > v3(s3);
//     stack< char > v4(deque< char >{'a', 'b', 'c'});
//     stack< char > v5(deque< char >
//         (initializer_list< char > {'a', 'b', 'c'}));
//     char *p = &s2[0];
//     cout << endl << " *p = " << *p << " s[0] = " << s2[0] << endl
//          << " *(p+2) = " << *(p+2) << " v2 top: " << v2.top() << " s[2] = " << s2[2];
//     *(p+2) = '*';
//     cout << endl << " *(p+2) = " << *(p+2) << " v2 top: " << v2.top();
//     char& p2 = std::ref(v2.top());
//     p2 = 'z';
//     cout << endl << " v2 top: " << v2.top() << s2[3] << '*' << '\n';
//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <list>
// #include <functional>
// #define ALL(v) v.begin(), v.end()
// #define END << endl;
// using namespace std;

// struct __is_odd {
//     bool operator()(const int x) const
//     { return (x % 2 == 0); }
//     bool operator()(const int x, const int y) const
//     { return ((x + y) % 2 == 0); }
// };

// bool in(const int& i) { return i > 1; }

// template <class T = int > bool IN1(const T& i)
// { return (i >= 1) && (i <= 10); }

// auto fn = [](int i)->bool {return (i % 3 == 0); };

// int main() {
//     int a[] = { 3, 2, 5 };
//     vector <int> b = { 1, 1, 5 };
//     list <int> c = { 0, 1, 5 };
//     cout << " кiлькiсть непарних елементiв - "
//          << count_if(a,  a + sizeof(a) / sizeof(int),
//          __is_odd())END
//     cout << " індекс елемента бiльшого за 1 - "
//          << distance(b.begin(), find_if( ALL(b), in)) END
//     cout << " індекс елемента більшого за 1 - "
//          << distance(b.begin(), find_if(ALL(b), ref(in))) END

//     auto k1 = function<bool(int, int)>(__is_odd());
//     auto k2 = function<bool(int)>(__is_odd());
//     cout << " кількість парних елементів - "
//          << count_if(a, a + sizeof(a) / sizeof(int), k2) END
//     cout << " кількість елементів з [1,10] - " << count_if( ALL(c), IN1<int>) END
//     cout << " кількість із значенням 5 - " << count_if( ALL(c), [](int i)->bool {return i == 5; } ) END
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int size;
//     cout << " Enter size" ; cin >> size;
//     int* arr = new int[size];
    
//     for(int i = 0 ; i < size ; i++){
//         cin >> arr[i];
//     }

   
//     for(int j = 0 ; j < size ; j++){
//         for(int i = 0 ; i <size - j; i++){
//             if(i + 1 != size && arr[i] > arr[i+1]){
//                 int p = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = p;;
//             }
//         }
//     }


//     for(int i = 0 ; i < size ; i++){
//         cout<< arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main() {
//     std::vector<int> v1 = {1, 2, 3, 4};
//     std::vector<int> v2 = {5, 6, 2, 8};
//     auto it = std::find_first_of(v1.begin(), v1.end(), v2.begin(), v2.end());
//     if (it != v1.end() && (*it % 2 == 0)) {
//         std::cout << "Found even number: " << *it << std::endl;  // Выведет 2
//     }

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main() {
//     std::vector<int> v = {1, 2, 3, 4, 2, 3, 5};
//     std::vector<int> sub = {2, 3};

//     // std::find шукає ОДИН ЕЛЕМЕНТ (перше входження "3")
//     auto it_find = std::find(v.begin(), v.end(), 3);
//     if (it_find != v.end()) {
//         std::cout << "Find: " << std::distance(v.begin(), it_find) << std::endl;
//     }

//     // std::search шукає ПІДПОСЛІДОВНІСТЬ (перше входження {2, 3})
//     auto it_search = std::search(v.begin(), v.end(), sub.begin(), sub.end());
//     if (it_search != v.end()) {
//         std::cout << "Search: " << std::distance(v.begin(), it_search) << std::endl;
//     }
// }



// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <iterator>

// using namespace std;

// vector<int> v{ 1,1,1,3,3,4,4,6,7,7,9,10 };

// #define ALL v.begin(), v.end()
// #define OUT(s, it) cout << s << "\n - Index: " << \
//     it - v.begin() << " Value: " << *it << "\n";

// #define OUT_Pair cout << \
//     "\n - First Index: " << p.first - v.begin() << \
//     " Value: " << *p.first << "\n - Last Index: " << \
//     p.second - v.begin() << " Value: " << *p.second << "\n";

// #define IS_EMPTY (p.first == p.second) ? \
//     cout << " \n - range is empty" << \
//     endl : OUT_Pair

// struct Comparator {
//     bool operator() (int& s, int i) { cout << "Bm "; return s < i; }
//     bool operator() (int i, int& s) { cout << "Nit "; return i < s; }
// };

// bool cmp(const int& a, const int& b) {
//     return a + b < 4;
// }

// int main() {
//     cout << " In vector: ";
//     copy(ALL, ostream_iterator<int>(cout, ", "));
//     cout << "\n";

//     auto it = lower_bound(ALL, 1);
//     OUT(" lower_bound >= 1", it)

//     it = lower_bound(ALL, 2);
//     OUT(" lower_bound >= 2", it)

//     it = upper_bound(ALL, 4);
//     OUT(" upper_bound > 4", it)

//     it = upper_bound(ALL, 5);
//     OUT(" upper_bound > 5", it)
//     ////////////////////////////////////////////

//     it = lower_bound(ALL, 2, cmp);
//     OUT(" lower_bound (Comp = a + 2 < 4)", it);

//     cout << " equal_range = 7";
//     auto p = std::equal_range(ALL, 7);
//     IS_EMPTY

//     cout << " equal_range = 8";
//     p = std::equal_range(ALL, 8);
//     IS_EMPTY

//     cout << " equal_range by Comparator = 1";
//     p = std::equal_range(ALL, 1, Comparator());
//     IS_EMPTY

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main() {
//     std::vector<int> v = {1, 2, 3};
    
//     do {
//         for (int x : v) std::cout << x << " ";
//         std::cout << "\n";
//     } while (std::next_permutation(v.begin(), v.end()));
// }




// #include <iostream>
// #include <algorithm>
// #include <iterator>
// #include <vector>

// using namespace std;

// #define ALL(v) v.begin(), v.end()
// #define OUT(v, s) cout <<"\n" << s; copy( ALL(v), ostream_iterator<int>(cout, ", "));
// #define POS(v, p) cout << "\n value - \'" << *(p) << "\' position - " << p - v.begin() << ":";

// int main() {
//     // vector<int> v = { -1, 1, -2, -1, 3, 1, 2, 1,-1, 4 };
//     // OUT(v,"input: ");
//     // POS(v, v.begin() + 2);
//     // nth_element(v.begin(), v.begin() + 2, v.end());
//     // OUT(v,"ordered: ");

//     // v = { -1, 1, -2, -1, 1, 1, 2, 3,-1, 4 };
//     // OUT(v, "input: ");
//     // POS(v, v.end() - 1);
//     // nth_element(v.begin(), v.end() - 1, v.end());
//     // OUT(v, "ordered: ");

//     vector<int> v = { -1, 1, -2, -1, 1, 1, 2, 3,-1, 4 };
//     OUT(v, "input: ");
//     POS(v, v.begin());
//     nth_element(v.begin(), v.begin(), v.end());
//     OUT(v, "ordered: ");

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main() {
//     std::vector<int> v = {1, 2, 3, 4, 3, 5};
//     std::vector<int> result;

//     // Копіювання всіх елементів, що не дорівнюють 3
//     auto p =std::remove(v.begin(), v.end(), 3);
    
//     v.erase(p, v.end());
//     for (int num : v) {
//         std::cout << num << " ";  // 1 2 4 5
//     }

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main() {
//     std::vector<int> v = {1, 2, 3, 2, 4};
//     std::vector<int> result;

//     // Копіюємо елементи з заміною всіх 2 на 5
//     std::replace_copy(v.begin(), v.end(), std::back_inserter(result), 2, 5);

//     for (int num : result) {
//         std::cout << num << " ";  // 1 5 3 5 4
//     }

//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include <vector>

// int main() {
//     std::vector<int> v = {1, 2, 3, 4};

//     std::iter_swap(v.begin(), v.begin() + 2);

//     for (int num : v) {
//         std::cout << num << " ";  // 4 2 3 1
//     }

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cstdlib>

// int main() {
//     std::vector<int> v = {1, 2, 3, 4, 5};

//     std::random_shuffle(v.begin(), v.end());

//     for (int num : v) {
//         std::cout << num << " ";  // Випадковий порядок
//     }
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <random>

// int main() {
//     std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     std::vector<int> result(3);  // Виділяємо місце для 3 випадкових чисел

//     std::random_device rd;
//     std::mt19937 gen(rd());  // Генератор випадкових чисел

//     std::sample(v.begin(), v.end(), result.begin(), 3, gen);

//     for (int num : result) {
//         std::cout << num << " ";  // Випадкові 3 числа з вектора
//     }
// }



// #include <iostream>
// #include <algorithm>
// #include <iterator>
// #include <vector>

// using namespace std;

// #define ALL v.begin(), v.end()
// #define OUT copy(ALL, ostream_iterator<int>(cout, ", "));
// #define OUTALLM(s) cout << "\n " << s; \
// OUT; cout << " v.size: " << v.size();

// bool pr(int &i) {
//     return i == 1;
// }

// vector<int> v = {-1, 1, -2, -1, 1, 1, 2, 3, -1, 6};

// void vout(vector<int>::iterator pp, char *s) {
//     cout << s;
//     for (auto it = v.begin(); it != v.end(); ++it)
//         cout << *it << ((it == pp) ? "(*)" : "") << ",";
// }

// int main() {
//     OUTALLM("\n v: ")
//     auto p2 = remove(ALL, 1);
//     vout(p2, "\n\n 2. v(remove: 1): ");
//     cout << "\n v.size: " << v.size() << "\n"
//          << " *p2: " << *p2 << "\n" << " index: "
//          << p2 - v.begin() << "\n" << " last:"
//          << *(v.end() - 1);

    // v = {-1, 1, -2, -1, 1, 1, 2, 3, -1, 4};
    // p2 = remove_if(ALL, pr);
    // v.resize(p2 - v.begin());
    // OUTALLM("\n 3. v(resize & remove_if: 1) : ");
    
    // v = {-1, 1, -2, -1, 1, 1, 2, 3, -1, 4};
    // v.erase(std::remove(ALL, 1), v.end());
    // OUTALLM("\n 4. v(erase & remove: 1): ");

    // v = {-1, 1, -2, -1, 1, 1, 2, 3, -1, 4};
    // cout << "\n\n 5. v(remove_copy: 1): ";
    // remove_copy(v.begin(), v.end(), ostream_iterator<int>(std::cout), 1);
    // OUTALLM(" v is preserved: ");

    // v = {-1, 1, -2, -1, 1, 1, 2, 3, -1, 4};
    // cout << "\n\n 6. v(remove_copy_if: 1): ";
    // remove_copy_if(v.begin(), v.end(), ostream_iterator<int>(std::cout), [&](int &i) {
    //     return i == 1;
    // });
    // OUTALLM(" v is preserved: ");
// }



// #include <iostream>
// #include <algorithm>
// #include <iterator>
// #include <vector>
// using namespace std;

// #define ALL(v) v.begin(), v.end()
// #define OUT(v, s) cout <<"\n" << s; copy( ALL(v), ostream_iterator<int>(cout, ", "));



// vector<int> v = { 1, 6, 9, 3, 4, 5, 6 };
// vector<int> v1 = { 1, 1, 3, 3, 4, 5, 6 };
// vector<int> v2 = { 4, 5, 6, 6, 7, 7, 8, 9 };

// int main() {
//     OUT(v, "input: ");
//     inplace_merge(v.begin(), v.begin() + 3, v.end());
//     OUT(v, "inplace_merge - output: ");
    
//     v.clear();
//     OUT(v1, "input 1: ");
//     OUT(v2, "input 2: ");
    
//     set_symmetric_difference(ALL(v1), ALL(v2), std::back_inserter(v));
//     OUT(v, "set_symmetric_difference - output: ");
    
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include <iterator>
// #include <vector>
// #include <list>
// #include <numeric>
// using namespace std;

// #define ALL(v) v.begin(), v.end()
// #define OUT(v, s) cout <<"\n" << s; \
// copy( ALL(v), ostream_iterator<int>(cout, ", "))
// #define OUTM(v, sz, s) cout <<"\n" << s; \
// copy(v, v + sz , \
// ostream_iterator<int>(cout, ", "))

// int main() {
//     const int sz = 7;
//     int m[sz] = { 1, 3, 4, 5, 7, 8, 9 };
//     OUTM(m, sz, "input arr m - ");
//     list<int> l(m, m+sz);
//     list<int> l_res(l.size());
//     adjacent_difference(l.begin(), l.end(),
//     l_res.begin());
//     OUT(l_res, "adjacent_difference list l_res -");
//     int m_res[sz];
//     vector< int> v(m, m+sz);
//     vector< int> v2(v.size());
//     OUT(v, "input vector v - ");
//     partial_sum(m, m + sz, m_res);
//     OUTM(m_res, sz, "partial sum arr m - ");
//     partial_sum(v.begin(), v.end(), v2.begin());
//     OUT(v2, "partial sum vector v2 -");
// }



// #include <iostream>
// using namespace std;
// class A{
//     int x , y;
//     public:
//     A(int i , int p) : x(i) , y(p){}
//     friend ostream& operator<<(ostream& , A&);


//     friend istream& operator>>(istream& , A&);
// };

// ostream& operator<<(ostream& s, A& a){
//     s << a.x << " " << a.y << endl;
//     return s;
// }

// istream& operator>>(istream& s , A& a){
//     s >> a.x >> a.y;
//     return s;
// }

// int main(){

//     A c(1 , 1) , b(5 , 8);
//     cout << c << b << endl;
//     cin >> c >> b;
//     cout << "SSSSSSSSSSSSSSSS" << endl;
//     cout << c << b << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     ios::fmtflags f;
//     f = cout.flags(ios::right);
    

//     if (f && ios::left){
//         cout << "left-mask is switch on\n";
//     } 
//     else{
//         cout << "left-mask is switch off\n";
//         cout.setf(ios::left);
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    ios::fmtflags f;
    f = cout.flags();
    // f &= ~ios::left;

    if (f & ios::left) // перевірка left маски
        cout << "left-mask is switch on\n";
    else {
        cout << "left-mask is switch off\n";
        cout.setf(ios::left);  // встановлення left маски
    }
    cout.setf(ios::dec | ios::showpos); // встановлення ще двох масок через setf
    ios::fmtflags t = ios::showpoint | ios::skipws;
    cout.flags(t); // встановлення ще двох масок через flags
    return 0;
}
