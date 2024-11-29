#include <iostream>


using namespace std;
float min3 (float a , float b , float c){
    float res;
    if (a <= b && a <= c){
        res = a;
    }
    else if( b <= a && b <= c ){
        res = b;
    }
    else{
        res = c;
    }
    return res;
}

int main() 
{
    double number1, number2, number3;
    cout << "Enter three numbers: "; cin >> number1 >> number2 >> number3;

    cout << "min = " << min3(number1, number2, number3) << endl;

    return 0;
}