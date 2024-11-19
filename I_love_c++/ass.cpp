#include <iostream>
using namespace std;

int main() {
   int  count;
   cout << "enter enregy" ;
   cin >> count;  
   double trafic = 7.80;
   double price = trafic * count;
   cout << price << endl;

   double cash , rest;
   cout << "Enter cash " ;
   cin >> cash;
   do{
    cout << "Enter cash " ;
    rest = cash - price;
    if (rest < 0 ) {
        cout << "Nit enough money" << endl;
    }

   }while (rest < 0);
   cout << rest << endl;
   

    return 0;
}
