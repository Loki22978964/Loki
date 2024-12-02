#include <iostream>
#include <string>
using namespace std;
string numbersInWord(string text){
    string monght[]{"January", "February", "March", "April", 
                  "May", "June", "July", "August", "September",
                   "October", "November", "December"};

    for ( std::string::iterator it = text.begin(); it != text.end();){
        if (*it >= '0' && *it <= '9'){
      
            string mo = monght[*it - '0'];
            it = text.erase(it);
            it = text.insert(it , mo.begin(), mo.end());
            it += mo.length();
        }
    
        
        else{
            it++;
        }
    }
    return text;
    
}


int main()
{
  string number;
    
    cout << "Input monght: ";
    getline(cin , number);
    

    cout << "Result: " << numbersInWord(number) ;


}