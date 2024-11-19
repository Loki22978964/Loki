#include <iostream>
using namespace std;

int main(){
    int b ;
    
    cout << "Enter num " ;
    cin >> b;
    for(int i = 0; i <= b; i++ ){
        if ( i % 2 != 0){
            cout << i ;
            cout << " ";
        }
        
    }

    return 0;
}
