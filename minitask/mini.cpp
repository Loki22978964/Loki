#include <iostream>
using namespace std;

double max2( double a , double b){
    double max;
    if ( a > b){
        return a;
    }
    else{
        return b;
    }
}

double max3 (double a , double b ,  double c){
    double max = max2(max2( a , b ) , c);
    return max;
}
int main(){
    double a , b ,c , d , e ,f;
    cout << "a "; cin >> a;
    cout << "b "; cin >> b;
    cout << "c "; cin >> c;
    cout << "d "; cin >> d;
    cout << "e "; cin >> e;
    cout << "f "; cin >> f;

    double result = max3(a , b , c) + max3(d , e, f);
    cout << result << endl;
    return 0;
}