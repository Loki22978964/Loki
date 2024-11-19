#include <iostream>
using namespace std;

int main() {
    int deposit_period;
   double deposit_amount , annual_rate , desired_amount;
   cout << "deposit_amount " ; cin >> deposit_amount;
   cout << "annual_rate " ; cin >> annual_rate;
   cout << "desired_amount " ; cin >> desired_amount;

   while(deposit_amount < desired_amount){
    deposit_period= deposit_period + 1;
    deposit_amount = deposit_amount + deposit_amount * annual_rate / 100;

   }
   cout << "Dep period " << deposit_period << endl;
    return 0;
}
