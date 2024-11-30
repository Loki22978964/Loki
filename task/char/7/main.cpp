#include <iostream>
using namespace std;

int getLength(const char* lineOfText) 
{
    int length = 0;

    while (lineOfText[length] != '\0')
        length++;

    return length;
}


void replace_char(char* lineOfText, char old_symb, char new_symb){
    int length = getLength(lineOfText);
    for( int i = 0 ; i < length ; i++){
        if ( lineOfText[i] == old_symb){
            lineOfText[i] = new_symb;
        }
}
}

int main() 
{
	const int textSize = 256;
    char text[textSize];
    char symbolBad, symbolNew;

    cout << "Please input a text: ";
    cin.getline(text, textSize);
    cout << "Input the character you want to replace: ";
    cin >> symbolBad;
    cout << "Input a new character: ";
    cin >> symbolNew;

    

    replace_char(text, symbolBad , symbolNew);

    

    cout << "Result: " << text << endl;

    return 0;
}