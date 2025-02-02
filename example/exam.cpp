#include <iostream>
using namespace std;

class A{
    public:
    virtual void show(){ cout << "A "; }
    virtual void show_() { cout << "A1 "; }
};

class B : virtual public A {
    public:
    void show() override { cout << "B "; }
    void show_() override { cout << "B1 "; }
};
class C : virtual public A {
    public:
    void show() override { cout << "B "; }
    void show_() override { cout << "B1 "; }
};
class D : public B , public C{
    public:
    void show() override{cout << "Ban";}
     void show_() override { cout << "Ban2"; }
};

int main(){
    B b;
    A* ptr = new B(b);
    ptr->show();
    ptr->show_();

    // B b1;
    // A* ptr = new B(b1);
    // B* ptr2 =  dynamic_cast<B*>(ptr);
    // ptr2->show();
    // ptr2->show_();


    return 0;
}