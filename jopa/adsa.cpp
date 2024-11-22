#include <iostream>
using namespace std;


  double max_two ( double a , double b ){
    double max;
    if (a >= b){
        max = a;
    }
    else {
        max = b;
    }
    return max;
  }

  int main(){
    double num1 , num2 , num3 , num4;
    cout << "Enter num1 "; cin >> num1;
    cout << "Enter num2 "; cin >> num2;
    cout << "Enter num3 "; cin >> num3;
    cout << "Enter num4 "; cin >> num4;
    
    double one , two , res;
    one = max_two(num1 ,num2);
    two = max_two(num3 ,num4);
    res = max_two(one , two);
    cout << res<< endl;


  }