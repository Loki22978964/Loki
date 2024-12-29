#include <iostream>
using namespace std;

class Point{
    private:

    int x;
    int y;

    public:
    Point() :  x(0) , y (0){
         cout << "Parameterized constructor called" << endl;
    }

    Point (int x ,int y){
        this->x = x;
        this->y = y;
    }

    Point(const Point& other){
        this->x = 2 + other.x;
        this->y =4 + other.y;
        cout << "copy" << " ";
    }

    Point( Point&& other) noexcept{
        this->x = other.x;
        this->y = other.y;
        other.x = 1; // Обнуляємо "переміщений" об'єкт
        other.y = 1;
        cout << "move" << " ";
    }

    void Print(){
        cout << x << " " << y << endl;
    }
};

int main(){
    Point s;
    Point a(2 , 8);
    a.Print();
    Point b(a);
    b.Print();
    Point c(std::move(a));
    c.Print();
    a.Print();


    return 0;
}