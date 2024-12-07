#include <iomanip> // std::fixed, std::setprecision.
#include <iostream> // std::cin, std::cout.
 using namespace std;

 int main(){
    double n;
    cout << "Enter tne number: "; cin >> n;
    int precision;
    cout << "Enter tne precision: "; cin >> precision;

    cout << std::fixed <<std::setprecision(precision) ;
    cout << n;
    return 0;
    
 }