// #include <iostream>
// using namespace std;

// template <class T , class T2 , class ma> 
// ma dis(T a , T2 a2){
//     cout<< sizeof(a) << " " << a << endl;;
//      cout<< sizeof(a2) << " " << a2;
// };

// int main(){
//     dis<int,int , void>(4 , 5);
// }




// #include <iostream>

// template <class T, class T1> // прототип FT
// T min(T value, T1 value1, const char*);

// struct A {
//     bool operator <(A& ) { return true; }
// };

// std::ostream& operator<< (std::ostream& s, A&) {
//     s << "Wow";
//     return s;
// }

// int main() {
//     int j = 2; 
//     float f = 0.5; 
//     char c = 'a'; 
//     A a, b; 
//     const char* mes = "Min value is: "; 

//     // використання з даними різних типів 
//     min(f, i, mes); 
//     min(f, c, mes); 
//     min(a, b, mes); 
//     min<double, double>(f, c, mes); 
// }

// // оголошення FT
// template <class T, class T1>  
// T min(T value, T1 value1, const char* mes) { 
//     // використання в тілі шаблонного типу 
//     T v = (T)value1; 
//     if (value<value1) v = value; 
//     std::cout << mes << v << "\n"; 
//     return v;
// }


// #include <iostream>

// template <class T, class T1> // прототип FT
// T min(T value, T1 value1, const char*);

// struct A {
//     bool operator <(A& ) { return true; }
// };

// std::ostream& operator<< (std::ostream& s, A&) {
//     s << "Wow";
//     return s;
// }

// int main() {
//     int j = 2; 
//     float f = 0.5; 
//     char c = 'a'; 
//     A a, b; 
//     const char* mes = "Min value is: "; 

//     // використання з даними різних типів 
//     min(f, j, mes); 
//     min(f, c, mes); 
//     min(a, b, mes); 
//     min<double, double>(f, c, mes); 
// }

// // оголошення FT
// template <class T, class T1>  
// T min(T value, T1 value1, const char* mes) { 
//     // використання в тілі шаблонного типу 
//     T v = (T)value1; 
//     if (value<value1) v = value; 
//     std::cout << mes << v << "\n"; 
//     return v;
// }




// #include <iostream>

// template <class T, class T1>
// T min(T v, T1 v1, char p = 'M') {
//   std::cout << typeid(T).name() << " "
//     << typeid(T1).name() << " "
//     << p << "\n";
//   return v;
// };

// // явне інстанціювання
// template char min(char, char, char);

// int main() { // неявне інстанціювання
// //   // call double min<double, char>(double, char, char);
// //   min(double(3), '1');
// //   // call char min<char, char>(char, char, char);
// //   min('3', '1', 'W');
// //   // call float min<float, float>(float, float, char);
// //   min((float)3, (float)1);
//   // call float min<float, int>(float, int, char);
//   min<float>((float)3, (int)1);
// //   // call float min<float, int>(float, int, char);
// //   min<float, int>((float)3, (int)1);
// //   return 1;
// }




#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {3, 2, 1};
    for (int i = 0 ; i < 5 ; i++){
    std::prev_permutation(vec.begin(), vec.end());
    
    
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";
    }
    std::cout << "????????????" << std::endl;
     std::vector<int> vec1 = {1, 2, 3};
     
    for (int i = 0 ; i < 5 ; i++){
    std::next_permutation(vec1.begin(), vec1.end());
    
    
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";
    }
    
    
    return 0;
}