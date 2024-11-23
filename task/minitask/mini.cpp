#include <iostream>

using namespace std;
float currency_exchange( float euro ,)

int main() 
{
    double euro_rate, amount_euros;
    cout << "Enter the euro to hryvnia exchange rate: "; cin >> euro_rate;
    cout << "Enter the amount in euros: "; cin >> amount_euros;

    double amount_hryvnia = currency_exchange(euro_rate, amount_euros);
    cout << "Amount in hryvnias: " << amount_hryvnia << endl;

    return 0;
}