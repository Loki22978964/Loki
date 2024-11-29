#include <iostream>
using namespace std;

int main() {
    const int string_size = 256;
    char string[256];
    int total_count = 0;
    int count_letters = 0;
    int count_digits = 0;
    int count_others =0;

    cout << "Please input a string: ";
cin.getline(string, string_size);



    for ( int i = 0; string[i] != '\0'; i++){
        total_count++;
        if( (string[i] >= 'A' && string[i] <= 'Z' ) || 
        (string[i] >= 'a' && string[i] <= 'z' )){
            count_letters++;
        }
        else if (string[i] >= '0' && string[i] <= '9'){
            count_digits++;
        }
        else{
            count_others++;
        }
    }
    cout << "You input " << total_count << " symbols" << endl;
    cout << "You input " << count_letters << " letter" << endl;
    cout << "You input " << count_digits << " digits" << endl;
    cout << "You input " << count_others << " other symbols" << endl;

    return 0;
}
