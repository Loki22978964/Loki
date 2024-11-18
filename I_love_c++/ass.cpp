#include <iostream>
using namespace std;

int main() {
   for ( int i = 1000; i <= 9999 ; i++){
    int n4 = i % 10 ;
    int n3 = (i / 10) % 10 ;  
    int n2 = (i / 100) % 10 ;
    int n1 = i / 1000;
    if (n1 + n2 + n3 + n4 == 15){
        cout << i << endl;
    }
   }

    return 0;
}
