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


#include <iostream>
using namespace std;

void example() {
    int x = 10;
    auto lambda = [&]() { return x + 30 ; };  // x захоплюється за посиланням
    cout << lambda() << endl;  // Виведе 10

    x = 20;  // Змінюємо x
    cout << lambda() << endl;  // Виведе 20, тому що lambda захопила посилання на x
}

int main() {
    example();  // Викликаємо функцію example
    return 0;
}
