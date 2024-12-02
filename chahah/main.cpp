#include <iostream> 
#include <string>

using namespace std;

int main(){
    string monght[]{"January", "February", "March", "April", 
                  "May", "June", "July", "August", "September",
                   "October", "November", "December"};


    string str;
    getline(cin , str);
    int k = stoi(str);

    if ( k >= 0 && k <= 9){
        cout << monght[k - 1];
    }

    return 0;
}