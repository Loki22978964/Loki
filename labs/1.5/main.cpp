/**
* Student Name: Bobro Mykola
* Student Group: 123
* Lab 1.5
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    {
        int a = 6;
        int b = 2;
        int c = 7;
        int d = 14;
        //  empty (  !    (a == b)    ^   (   !   (c != d))) 
        bool res1 = (!(a == b) ^ (!(c != d)));
        cout << "res1: " << boolalpha << res1 << endl;
    }
    {
        int a = 7;
        int b = 7;
        int c = 24;
        int d = 1;

        //  empty (  !    (a == b)    ^   (   !   (c != d))) 
        bool res2 = (!(a == b) ^ (!(c != d)));
        cout << "res2: " << boolalpha << res2 << endl;
    }
    {
        int a = 356;
        int b = 35;
        double c = 157.27;
        int d = 12;
        int e = 57;
        int result;

        result = (a | ~b) / c > (d + e) << (sizeof(float) * 8);

        std::cout << "Result: " << result << std::endl;
    }
}
