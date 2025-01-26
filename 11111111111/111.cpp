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



#include <iostream>
#include <typeinfo>
#include <string.h>
void my(char** s) {
    std::cout << "char* function. Agr is " 
              << typeid(s).name() << ": " << *s << "\n";
    char* p1 = new char[4]; strcpy(p1, "Wow\0");
    *s = p1;
}
void my(int** s) {
    std::cout << "char* function. Agr is " 
              << typeid(s).name() << ": " << *s << "\n";
    int* p1 = new int[4]; 
    *s = p1;
}
void my(int* i) {
    std::cout << "int* function (begin). Agr is " 
              << typeid(i).name() << ": " << *i << "\n";
    *i = 99;
    std::cout << "int* function (end). Agr is " 
              << typeid(i).name() << ": " << *i << "\n";
}
#define OUTT(s, s2) std::cout << s2 << " is type - " << typeid(s).name() << ": " << s << "\n";
#define OUT(s) OUTT(s, #s)

int main() {
    const int i = 52;
    const int* const pipa = &i;
    int* p1 = const_cast<int*>(pipa);
    my(p1);
    const int pop = 163;
    const int* const popa = &pop;
    // const int* const p3 = &popa;
    my(const_cast<int**> (&popa));

    const int lala = 8;
    const int* const pp = &lala;
    my(const_cast<int**>(&pp));

    const int apa = 666;
    const int* const ipi = &apa;
    int* opo = const_cast<int*>(ipi);
    my(opo);
   
    const char* const p2 = "My pointer";
    OUT(p2); my(const_cast<char**> (&p2)); OUT(p2);
}



#include <iostream>

class A {
private:
	int a = 10;
public:
	void show()const { std::cout << "a= " << a << std::endl; }
	void chang() { a = 5; }

};


int main() {
	const A pop;
	const A* ptr = &pop;
	A* ptr2 = const_cast<A*>(ptr);

	ptr2->show();
	ptr2->chang();
	ptr2->show();


	const A pro;
	pro.show();
	const A* o1 = &pro;
	A* o2 = const_cast<A*>(o1);

	o2->chang();
	o2->show();


	A pipa;
	std::cout << " ___________________________" << std::endl;
	
	pipa.show();
	pipa.chang();
	pipa.show();

	return 0;
}