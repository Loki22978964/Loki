#include <iostream>
using namespace std ;

int main(){
    unsigned short result = 0;

    for (int i = 0 ; i < 16 ; i++){
        char c;
        cin >> c;
        c = c -'0';
        if (c != '0'){
            result = result << 1;
        }
        else{
            result = result;
        }
        result = result | c;
    }
    cout << result;
    return 0;
}