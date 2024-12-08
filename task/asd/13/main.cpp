#include <bitset>  // Для зчитування/виведення числа у двійковій системі.
#include <iostream>

using namespace std;

int main() {
    unsigned short number;
	unsigned short index;
	unsigned short result;
    cin >> index;

    bitset<16> value;
    cin >> value;
    number = value.to_ulong();
     result = number | (1 << index);
     cout << bitset<16>{5} << endl;

    return 0;
}