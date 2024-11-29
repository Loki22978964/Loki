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
    
    cin.getline(text, text_size);

    int text_length = get_length(text);

    cout << text_length << endl ;
    return 0;
}
