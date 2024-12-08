#include <iostream>
using namespace std;

int main(){
    const char digits[] = "0123456789ABCDEF";
    unsigned int number;
    cin >> number;

    for (int i = 7 ; i >= 0 ; i--){
        unsigned int c;
        c = number >> (i * 4);
        c = c & 0b1111;
        cout << digits[c];
    }
    cout << endl;

    return 0;
}