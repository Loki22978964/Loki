#include <iostream>

using namespace std;
bool is_adult (int age){
    if (age >= 18){
        return true;
    }
    else {
        return false;
    }
}

int main() 
{
    double years_count;
    cout << "Enter the number of years: "; cin >> years_count;

    if (is_adult(years_count))
        cout<< "This is an adult"<<endl;
    else
        cout << "This is a minor" << endl;

    return 0;
}