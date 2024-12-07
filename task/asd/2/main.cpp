#include <iostream>

using namespace std;



int main(){
    char value;
    cout << "Enter chsr: "; cin >> value;

    if ( value < '0' || value > '9'){
        cout << "its not digit";
        return 1;
    }
    value = value - '0';
    cout << value * value;
    return 0;
}