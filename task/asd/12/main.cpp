#include <bitset>  // Для зчитування/виведення числа у двійковій системі.
#include <iostream>

using namespace std;

int main() {
    unsigned short number;
	unsigned short result;

	// Зчитати number у двійковій системі за допомогою std::bitset.
	bitset<16> value;
	cout << "Enter the number: ";
	cin >> value;
	number = value.to_ullong();

    result = ~ number;
 
	// Вивести result у двійковій системі за допомогою std::bitset.
	cout << bitset<16>{result} << endl;

    return 0;
}