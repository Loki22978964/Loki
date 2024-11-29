#include <iostream>
using namespace std;
int main() {
    const int size = 256;
    char text[size];
    char res[size];
    char f ;

    cin.getline(text , size);
    cout << "Enter symbole " ; cin >> f;

    for ( int i = 0 ; text[i] != '\0' ; i++){
        if (text[i] != f){
            res[i] = text[i];
        }
        else {
            res[i] = '*';
        }
    }

    for (int i = 0 ; res[i] != '\0' ; i++){
        cout << res[i] ;
    }

    return 0;
}
