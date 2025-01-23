#include <iostream>
#include <type_traits>

class A{
    public:
    A& operator=(A&&) = delete;
};

class B :  public A{
    public:
    
};


int main(){

    std::cout << (std::is_trivially_move_assignable<B>::value ? "Yes" : "No" ) << '\n';
}