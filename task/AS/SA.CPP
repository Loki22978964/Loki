#include <iostream>

using namespace std;

double factorial(double num){
    double res = 1;
    for (int i = 1 ; i <= num ; i++ ){
         res =res * i;
    }
    return res;
} 
    

int main() 
{
    int n, factorial_n;
    cout << "Enter a positive number n: "; cin >> n;
    factorial_n = factorial(n);
    switch (factorial_n)
    {
    case -1:
        cout << "You entered a negative number";
        break;
    case 0:
        cout << "You entered 0";
        break;
    default:
        cout << n << "! = " << factorial_n;
        break;
    }

    return 0;
}