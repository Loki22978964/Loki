#include <iostream>
#include <string>
using namespace std;

string numbersInWord(string text) {
    string num[]{"zero", "one", "two", "three", "four",
                 "five", "six", "seven", "eight", "nine", "dot"};

    // Використання ітератора для проходження рядка
    for (std::string::iterator it = text.begin(); it != text.end(); ) {
        if (*it >= '0' && *it <= '9') {
            string replacement = num[*it - '0']; // Перетворюємо цифру у текст
            replacement.append( " ");
            it = text.erase(it); // Видаляємо поточну цифру
            it = text.insert(it, replacement.begin(), replacement.end()); // Вставляємо текст замість цифри
            it += replacement.length(); // Переміщуємо ітератор після вставленого тексту

        } else if (*it == '.') {
            string replacement = num[10]; 
            replacement.append (" ");
            it = text.erase(it); 
            it = text.insert(it, replacement.begin(), replacement.end()); 
            it += replacement.length(); 
            
        }
        else{
            if ( ((*it >= 'A' && *it <= 'Z')||(*it >= 'a' && *it <= 'z') || (*it  = ',')) )
            return "It's not a number";
        }
    }
    return text; 
}

int main() {
    string number;
    
    cout << "Input number: ";
    getline(cin, number);

    cout << "Result: " << numbersInWord(number) ;

    return 0;
}
