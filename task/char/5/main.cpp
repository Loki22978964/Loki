#include <iostream>
using namespace std;

unsigned l(const char* t){
    int count = 0;
    while(t[count] != '\0'){
        count++;
    }
    return count;
}

   
 int main(){
        const int size = 256; 
        const int ssize = 10; 
        char text[size]; 
        char string[ssize];
        bool res = false;

        cout << "Enter text ";   cin.getline(text, size);
        cout << "Enter string "; cin.getline(string, ssize);

        int ltext = l(text);
        int lstr = l(string);

        for( int i = 0 ; i <= ltext - lstr ; i++){
            if (text[i] == string [0]){
                for (int j = 1 ; j <= lstr - 1 ; j++){
                    if (text[i + j] != string[j]){
                        break;
                    }
                    if ( j == lstr - 1 ){
                        res = true;
                        break;
                    }
                }
            }
        }

    
        cout << "Search string was" << (!res ? " not " : " ") << "found" << endl;
        return 0;
  }
