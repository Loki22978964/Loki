
#include <iostream>

using namespace std;


 int sum (int num1 , int num2 , int num3){
    int suma;
    if (num1 == num2 || num1 == num3 || num2 == num3){
      suma = 0;
    }
    else{
      suma = num1 + num2 + num3;
    }
    return suma;     
 }

 int main(){
  int a , b ,c;
  cout << "Enter a "; cin >> a;
  cout << "Enter b "; cin >> b;
  cout << "Enter c "; cin >> c;

  int res;
  res = sum(a , b , c);
  cout << res << endl;
  return 0;


 }
