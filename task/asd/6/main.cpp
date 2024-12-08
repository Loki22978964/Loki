#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main(){
    string c;
    cin >> c ;
    bitset<8> bites;
    cin >> bites;
    unsigned short res = bites.to_ulong();

    for(int i = 0 ; i < 16 ; i++){
        c[i] = c[i] ^ res;
    }
    cout << c;
    return 0;
}