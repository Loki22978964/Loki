#include <iostream>
using namespace std;

int main() {
    int age , start;
    cout << "Enter age "; cin >> age;
     if (age % 2 == 0){
        start = 0;
     }
     else{
        start = 1;
     }
     for (int i = start ; i <= age ; i = i + 2){
        if ( i != 0){
            cout << i << "";
        }   
     }
    return 0;
}
