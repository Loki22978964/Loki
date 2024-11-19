// #include <iostream>
// using namespace std;

// int main(){
//     int b ;
    
//     cout << "Enter num " ;
//     cin >> b;
//     for(int i = 0; i <= b; i++ ){
//         if ( i % 2 != 0){
//             cout << i ;
//             cout << " ";
//         }
        
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int b ;
    
    cout << "Enter num " ;
    cin >> b;
    for(int i = 1; i <= b; i = i + 2 ){
        
        cout << i ;
        cout << " ";
        
        
    }

    return 0;
}