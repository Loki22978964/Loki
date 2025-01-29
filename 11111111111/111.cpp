// #include <iostream>
// #include <type_traits>

// class A{
//     public:
//     // virtual void f(){}
//     A& operator=(A&&) = default;
// };

// class B : virtual public A{
//     public:
    
    
// };


// int main(){
//     // B a;
//     // B b;
//     // a = std::move(b);;

//     std::cout << (std::is_trivially_move_assignable<B>::value ? "Yes" : "No" ) << '\n';
//     std::cout << (std::is_move_assignable<B>::value ? "Yes" : "No" ) << '\n';
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



// #include <iostream>

// class A {
// private:
// 	int a = 10;
// public:
// 	void show()const { std::cout << "a= " << a << std::endl; }
// 	void chang() { a = 5; }

// };


// int main() {
// 	const A pop;
// 	const A* ptr = &pop;
// 	A* ptr2 = const_cast<A*>(ptr);

// 	ptr2->show();
// 	ptr2->chang();
// 	ptr2->show();


// 	const A pro;
// 	pro.show();
// 	const A* o1 = &pro;
// 	A* o2 = const_cast<A*>(o1);

// 	o2->chang();
// 	o2->show();


// 	A pipa;
// 	std::cout << " ___________________________" << std::endl;
	
// 	pipa.show();
// 	pipa.chang();
// 	pipa.show();

// 	return 0;
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

// struct Struct {
//    static int method(int);
//    static double method(int  );
//    static double method(double);
//    static std::string method(std::string);
// };
// static char method(char);
// static bool method(bool, bool); 

// int main(){
//     Struct a;
//     return 0;
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

// // PUT YOUR CODE HERE
// struct smartstring : public std::string {
//     using std::string::string;

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
//     for (++i; i < sides.size(); ++i) {
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

// void func1() {
//     throw std::runtime_error("Error in func1");  // Викидається виключення
// }

// int F2(int i) throw {  // Функція може передавати виключення, але не генерувати нові
//     try {
//         func1();  // Викликається func1, яка викидає виключення
//     } catch (const std::runtime_error& e) {
//         // Тут ми просто передаємо виключення далі
//         throw;  // Передаємо виключення далі
//     }
//     return i;
// }

// int main(){
//     try {
//         F2(5);  // F2 викликає func1, яка викидає виключення
//     } catch (const std::runtime_error& e) {
//         std::cout << "Caught exception: " << e.what() << std::endl;
//     }
//     return 0;
// }



// #include <iostream>
// class DivideByZero{};

// double f (double x) throw (DivideByZero) {
//     if (x == 5)
//         throw DivideByZero();
//     else
//         return (x+5)/(x-5);
// }

// int main(){
//     try {
//         double y = f(5);
//         std::cout << " y = " << y;
//         return 0;
//     }
//     catch (DivideByZero) {
//         std::cout << "f call is aborted";
//         return 1;
//     }
// }


// #include <iostream>

// class DivideByZero {};

// double f(double x) throw (DivideByZero) {
//     if (x == 5)
//         throw DivideByZero();  // Генерація виключення
//     else{
//         std::cout << " num = " << x;
    
//         return (x + 5) / (x - 5);
//         }// Виконується тільки для x != 5
// }

// int main() {
//     try {
//         double y = f(8);  // Генерується виключення, оскільки x == 5
//         std::cout << " y = " << y;
//     }
//     catch (const DivideByZero&) {  // Коректне перехоплення виключення
//         std::cout << "f call is aborted";  // Виконується, якщо x == 5
//     }

//     return 0;  // Завершення програми без помилок
// }



#include <iostream>
using namespace std;

void F(int i) { // генератор виключень
    switch (i) {
    case 0: throw "string Exсeption"; break;
    case 1: throw double(i); break;
    case 2: throw i; break;
    }
}

int main() {
    try {
        try { F(2); }
        // обробник внутрішнього блока try
        catch (const char* c) {
            cout << "inside TRY-Bloсk " << "\n" <<
                c << "\n";
        }
        // генерація КС у зовнішньому блоці
        throw 1;
    }
    // обробники зовнішнього блока try
    catch (double) {
        cout << "outside TRY-Bloсk " << "\n" <<
            "double Exсeption" << "\n";
    }
    catch (int) {
        cout << "outside TRY-Bloсk " << "\n " <<
            "int Exсeption" << "\n";
    }
    catch (...) {
        cout << "outside TRY-Bloсk " << "\n " <<
            "ALL Exсeption" << "\n";
    }
}
