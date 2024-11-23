#include <iostream>
using namespace std;

double deposit (float dep , float rate, float year){
    double sum = dep + dep * rate / 100 * year;
    return sum;
}

int main(){
    float n , p , m;
    cout << "Enter dep "; cin >> n;
    cout << "Enter rate "; cin >> p;
    cout << "Enter year "; cin >> m;

    double res = deposit(n , p , m);
    cout << res << endl;
    return 0;
}