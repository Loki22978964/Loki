#include <iostream>
using namespace std;

int getLength(const char* lineOfText) 
{
    int length = 0;

    while (lineOfText[length] != '\0')
        length++;

    return length;
}

int main() 
{
    const int textSize = 256;
    char text[textSize];
    
    cout << "Please input a text: ";
    cin.getline(text, textSize);

    int l = getLength(text);
    for(int i = 0 ; i < l ; i++ ){
        if (text[i] >= 'A' && text[i] <= 'Z' ){
            text[i] = text[i] + 32;
        }
    }
    
    cout << "Result: " << text << endl;


    return 0;
}


// #include <iostream>
// using namespace std;

// int getLength(const char* lineOfText) 
// {
//     int length = 0;

//     while (lineOfText[length] != '\0')
//         length++;

//     return length;
// }

// int main() 
// {
//     const int textSize = 256;
//     char text[textSize];
    
//     cout << "Please input a text: ";
//     cin.getline(text, textSize);

//     int l = getLength(text);
//     for(int i = 0 ; i < l ; i++ ){
//         if (text[i] >= 65 && text[i] <= 90 ){
//             text[i] = text[i + 32];
//         }
//     }
    
//     cout << "Result: " << text << endl;


//     return 0;
// }