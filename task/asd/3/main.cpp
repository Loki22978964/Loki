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

// #include <iostream>
// #include <bitset>
// int main()
// {

// std::bitset<16> bits;
// std::cin >> bits;

// unsigned short result = bits.to_ulong();
// std::cout << result << std::endl;
// return 0;
// }




// int main() {
// 	unsigned short res = 0;
// 	// Ви можете вводити рядок, як 0000000000001110, тому що наша програма зчитує символи з консолі по одному,
//     // і кожен символ розглядається окремо. Це дозволяє користувачу вводити значення по черзі,
//     // навіть якщо воно має формат двійкового числа.


// 	for (int i = 0; i < 16; i++) {
// 		char c;
// 		cin >> c;
// 		if (c == '1' || c == '0') {
// 			c = c - '0';
// 			res = res << 1;
// 			res = res | c;
// 		}
// 		else{
// 			cout << " go to hell ";
// 		    break;
// 		}
// 	}


// 	cout << res;


// 	return 0;
// }
