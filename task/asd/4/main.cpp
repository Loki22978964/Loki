#include <iostream>
using namespace std;

int main(){
    unsigned short n;
    cin >> n;

    for ( int i = 15 ; i != -1 ; i--){
        if ( n & (1 << i)){
            cout << '1';
        }
        else{
            cout << '0';
        }
    }
    return 0;

}


// int main() {
// 	unsigned short num;
// 	cin >> num; 
// 	for (int i = 15; i > -1; i--) {
// 		/*if (i == 15) {
// 			if (num & (1 << i)) {
// 				cout << '1';
// 			}
// 			else {
// 				cout << '0';
// 			}
// 		}
// 		else {
// 			if (num & (1 << i)){
// 				cout << '1';
// 			}
// 			else {
// 				cout << '0';
// 			}
// 		}*/
// 		if (num & (1 << i)) {
// 			cout << '1';
// 		}
// 		else {
// 			cout << '0';
// 		}
// 	}

// 	return 0;
// }