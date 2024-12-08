// #include <bitset>  // Для зчитування/виведення числа у двійковій системі.
// #include <iostream>

// using namespace std;

// int main() {
//     short shift;
// 	unsigned short number;
// 	unsigned short result;

// 	// Зчитати number у двійковій системі за допомогою std::bitset.
// 	bitset<16> value;
// 	cout << "Enter the number: ";
// 	cin >> value;
// 	number = value.to_ullong();
// 	// Зчитати shift.
// 	cout << "Enter the shift: ";
// 	cin >> shift;
//      if (shift >= 0) {
//         result = number << shift;
//     } else {
//         result = number >> (-shift);
//     }

// 	// Вивести result у двійковій системі за допомогою std::bitset.
// 	cout << bitset<16>{result} << endl;

//     return 0;
// }

#include <bitset>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int shift;  // Змінений тип shift на int для підтримки від'ємних значень.
    unsigned short number;
    unsigned short result = 0;

    // Зчитування number у двійковій системі за допомогою std::bitset.
    bitset<16> value;
    cout << "Enter the number: ";
    cin >> value;
    number = value.to_ullong();

    // Зчитування shift.
    cout << "Enter the shift: ";
    cin >> shift;


    if (shift >= 0) {
        result = (number << shift)|(number >> (16 - shift));
    } 
    else {
       result = (number >> (-shift))|(number << (16 - (-shift)));
        }
    

    // Виведення результату у двійковій системі.
    cout << bitset<16>{result} << endl;

    return 0;
}
