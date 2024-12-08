#include <iostream>
#include <bitset>

using namespace std;

int main(){
    bitset<16>bites;
    cin >> bites;
    unsigned short number = bites.to_ulong();
    int pos;
    cin >> pos;
    bool res = number * (1 << pos);
    cout << boolalpha << res;
    return 0;

    
    
}