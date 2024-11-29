#include <iostream>
using namespace std;

int get_length( const char* string){
    int l = 0;
    while(string[l] != '\0'){
        l++;
    }
    return l;
}

int main(){
    const int text_size = 256;
    char text[text_size];
    cin.getline(text , text_size);


    int l = get_length(text);

    for (int i = l ; i >= 0 ; i--){
        cout << text[i] << " ";
    }

    return 0;

}