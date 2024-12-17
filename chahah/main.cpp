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



#include <iostream>
using namespace std;


int main(){

    int h , w;
    cout << "enter h "; cin >> h;
    cout << "enter w "; cin >> w;

    float **arr = new float*[h];

    for (int i = 0 ; i < h ; i ++){
        arr[i] = new float[w];
    }
//

    float** p2 = arr;

    for (int i = 0 ; i < h ; i++){
        for (int j = 0 ; j < w ; j++){
            arr[i][j] = rand()%20;
        }
    }

    float sum = 0, sum1 = 0, sum2 = 0;

    for (int i = 0 ; i < h ; i++){
        for (int j = 0 ; j < w ; j++){
            sum += arr[i][j];
            sum2 += *(*(p2 + i) +j );
        }

    }

    cout << sum << "\n" << sum2;



//
    for (int i = 0 ; i < h ; i ++){
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}