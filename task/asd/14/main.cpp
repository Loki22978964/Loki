// #include <bitset>  // Для зчитування/виведення числа у двійковій системі.
// #include <iostream>

// using namespace std;

// int main() {
//     unsigned short flags;

// 	bitset<8> value;
// 	cout << "Enter the flags: ";
// 	cin >> value;
// 	flags = value.to_ullong();

//     bool r = true, w = true, x = true; // Явне присвоєння значень змінним.

//     if ( (flags & (1 << 3)) == r){
//         cout << "w";
//     }
//     else{
//         cout << "-"; 
//     }
//     if ( (flags & (1 << 2)) == w){
//         cout << "w";
//     }
//     else{
//         cout << "-"; 
//     }
//     if ( (flags & (1 << 1)) == x){
//         cout << "x";
//     }
//     else{
//         cout << "-"; 
//     }

    

// 	cout << endl;
//     return 0;
// }

// #include <bitset>  // Для зчитування/виведення числа у двійковій системі.
// #include <iostream>

// using namespace std;

// int main() {
//     unsigned short flags;

//     bitset<8> value;
//     cout << "Enter the flags: ";
//     cin >> value;
//     flags = value.to_ullong();

//     if ((flags & (1 << 2)) != 0) {
//         cout << "r";
//     } else {
//         cout << "-"; 
//     }
//     if ((flags & (1 << 1)) != 0) {
//         cout << "w";
//     } else {
//         cout << "-"; 
//     }
//     if ((flags & (1 << 0)) != 0) {
//         cout << "x";
//     } else {
//         cout << "-"; 
//     }

//     cout << endl;
//     return 0;
// }


// #include <bitset>  // Для зчитування/виведення числа у двійковій системі.
// #include <iostream>

// using namespace std;

// int main() {
//     unsigned short flags;

//     bitset<8> value;
//     cout << "Enter the flags: ";
//     cin >> value;
//     flags = value.to_ullong();

//     if ((flags & (1 << 2)) != 0) {
//         cout << "r";
//     } else {
//         cout << "-"; 
//     }
//     if ((flags & (1 << 1)) != 0) {
//         cout << "w";
//     } else {
//         cout << "-"; 
//     }
//     if ((flags & (1 << 0)) != 0) {
//         cout << "x";
//     } else {
//         cout << "-"; 
//     }

//     cout << endl;
//     return 0;
// }



#include <bitset>  // Для зчитування/виведення числа у двійковій системі.
#include <iostream>

using namespace std;

int main() {
    unsigned short flags;

    bitset<8> value;
    cout << "Enter the flags: ";
    cin >> value;
    flags = value.to_ullong();

    char read = (flags & 0b100)? 'r' : '-';
    char write = (flags & 0b010)? 'w' : '-';
    char execute = (flags & 0b001)? 'x' : '-';

    cout << read << write << execute << endl;
    return 0;
}