// #include <iostream>
// using namespace std ;

// int main(){
//     unsigned short result = 0;

//     for (int i = 0 ; i < 16 ; i++){
//         char c;
//         cin >> c;
//         c = c -'0';
//         if (c != '0'){
//             result = result << 1;
//         }
//         else{
//             result = result;
//         }
//         result = result | c;
//     }
//     cout << result;
//     return 0;
// }

#include <iostream>
#include <bitset>
int main()
{
// Створити 16-бітний std::bitset і зчитати в нього значення.
// Кількість біт задається в кутніх дужках. Символів може бути
// менше ніж 16 - відповідні старші біти будуть занулені.
std::bitset<16> bits;
std::cin >> bits;
// Конвертувати std::bitset в unsigned long (32 або 64 біти)
// і присвоїти unsigned short (16 біт). Біти unsigned long
// після 16 будуть відкинуті, але вони все одно занулені.
unsigned short result = bits.to_ulong();
std::cout << result << std::endl;
return 0;
}