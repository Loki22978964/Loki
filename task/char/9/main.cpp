#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name, surname, fullname;
    
    cout << "Input name: ";
    getline(cin, name);
    cout << "Input surname: ";
    getline(cin, surname);

    fullname = name[0] + string(". ") + surname;
   
    cout << "Fullname: " << fullname;


    return 0;
}