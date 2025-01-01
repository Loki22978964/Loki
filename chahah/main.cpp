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