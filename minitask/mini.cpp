#include <iostream>
using namespace std;

int main(){
    int a , b , c;
    cout << "enter a "; cin >> a; 
    cout << "enter b "; cin >> b; 
    cout << "enter c "; cin >> c; 

    while(a <= b){
        if (a % c == 0){
            cout << a ;
            cout << " ";
        }
        
        a = a + 1;
        
    }
    return 0;
}
