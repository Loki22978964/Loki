// #include <iostream>
// #include <string>

// struct smartstring : public std::string {
//     unsigned operator[](char ch){
        
//         for(unsigned p = 0 ; p < std::string::size(); p++){
//             // if(ch == this->at(p)){
//             //     return p;    
//             // }
//             if(ch == (*this)[p] ){
//                 return p;   
//             }
//         }
        

//         return this->size();
        


//     }
// };

// int main() {
//     smartstring string;
//     char letter;
//     // Зчитати рядок і букву, яку потрібно знайти.
//     std::cout << "Enter the string and the letter: ";
//     std::cin >> string >> letter;
//     // Знайти букву і вивести повідомлення.
//     unsigned i = string[letter];
//     std::cout << "Letter " << letter;
//     if (i < string.size()) {
//         std::cout << " is found at " << i;
//     } else {
//         std::cout << " is not found";
//     }
//     std::cout << std::endl;
//     return 0;
// }







#include <iostream>
#include <string>
using namespace std;

class A : public std::string{
    public:
    void showSIZE(){
        int siz = this->size();
        cout << siz;
    }
};

int main(){
    A a;
    cin >> a;
    a.showSIZE();

    return 0;
}