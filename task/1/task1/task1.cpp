#include <iostream>

using namespace std;

int f(int num){
    int rez;
    if ( num < 1){
        rez = -1;
    }
    else if ( num == 1){
        rez = 1;
    }
    else{
        rez = f(num-1) + num + num - 1;
    }
    return rez;
}

int main() 
{
    int n;
    cout << "Enter a positive number n: "; cin >> n;
    int result = f(n);
    switch (result)
    {
    case -1:
        cout << "You did not enter a positive number";
        break;
    default:
        cout << result;
        break;
    }

    return 0;
}