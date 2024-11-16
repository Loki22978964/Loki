#include <iostream>
using namespace std ;

int main(){

    long double sum = 0 ; 
    long double addition = 1 ; 

    for(int i = 1 ; i <= 64 ; i++){
        sum = sum + addition;
        addition = addition * 2;
    }
    cout << sum << endl ; 
    return 0;
}