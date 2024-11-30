#include <iostream>
using namespace std;

int getLength(const char* lineOfText) 
{
    int length = 0;

    while (lineOfText[length] != '\0')
        length++;

    return length;
}

int countSymbol(const char* lineofText , char symbol){
    int count = 0;
    for (int i = 0 ; i < getLength(lineofText) ; i++ ){
        if( lineofText[i] == symbol){
            count++;
        }
    }
    return count;
}

int main() 
{
	const int textSize = 256;
    char text[textSize];
    char symbol;

    cout << "Please input a text: ";
    cin.getline(text, textSize);
    cout << "Please input a symbol: ";
    cin >> symbol;

    int count = countSymbol(text, symbol);

    cout << "Result: " << count << endl;

    return 0;
}