#include <iostream>
#include <bitset>
#define TYPE short
#define BITS sizeof(TYPE) * 8 // із байт в біт шорт 2 байта а в бітах 16

using namespace std;

int main(){
    bitset<BITS>bites;
    cin >> bites;
    unsigned TYPE number = bites.to_ulong();
    int pos;
    cin >> pos;
    bool res = number * (1 << pos);
    cout << boolalpha << res;
    return 0;

    
    
}