#include <iostream>
#include <type_traits>

class A{
    public:
    // virtual void f(){}
    A& operator=(A&&) = default;
};

class B : virtual public A{
    public:
    
    
};


int main(){
    // B a;
    // B b;
    // a = std::move(b);;

    std::cout << (std::is_trivially_move_assignable<B>::value ? "Yes" : "No" ) << '\n';
    std::cout << (std::is_move_assignable<B>::value ? "Yes" : "No" ) << '\n';
}
