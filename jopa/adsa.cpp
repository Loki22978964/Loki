
#include <iostream>

using namespace std;


 bool triangle_check (double side1 ,double side2 , double side3){
  return (side1 < side2 + side3);
 }

 int main(){
  double a , b ,c;
  cout << "Enter a "; cin >> a;
  cout << "Enter b "; cin >> b;
  cout << "Enter c "; cin >> c;
  bool rez1, rez2 , rez3;
  rez1 = triangle_check(a , b , c);
  rez2 = triangle_check(b , a , c );
  rez3 = triangle_check(c , a , b );
  
  if (rez1 && rez2 && rez3){
    cout << "True " << endl;
  }
  else{
    cout << "False " << endl;
  }
  return 0;
 }