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


class O {
    public:
        O() { std::cout << "O constructor" << std::endl; }
    };
    class A :public O{
    public:
        A(char c) { std::cout << "A constructor: " << c << std::endl; }
    };

    class B :public O{
    public:
        B(char c) { std::cout << "B constructor: " << c << std::endl; }
    };
    class C : public A, public B {
    public:
        C(char c1, char c2, char c3) : B(c1), A(c2) {
            std::cout << "C constructor" << c3 << std::endl;
        }
    };
    int main(){
        C c('x' , 'y' , 'z');
        
        return 0;
    }