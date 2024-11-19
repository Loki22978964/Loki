#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "Enter energy: ";
    cin >> count;

    double traffic = 7.80; // Цена за единицу энергии
    double price = traffic * count; // Общая стоимость
    cout << "Total price: " << price << endl;

    double cash = 0.0, rest = 0.0, total = 0.0;

    while ( total < price){
        cout << "Enter cash: ";
        cin >> cash;
        total += cash;

        if ( total < price){
            cout << "Not enough money" << price - total << endl;
        }
        else{
            rest = total - price;
            if (rest > 0){
                cout << "Change: " << rest << endl;
            }
        }
    }

    cout << "Payment complete. Thank you!" << endl;
    return 0;
}
