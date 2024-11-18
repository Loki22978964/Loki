#include <iostream>
using namespace std;
int sum = 0;
int main() {
   for ( int i = 5 ; i <= 25 ; i++){
    if (i % 2 == 0){
        sum += i ;
    }
   }
   cout << sum<< endl;

    return 0;
}
