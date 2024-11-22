#include <iostream>
#include <cmath>

using namespace std;

int fibonacci (int n){
    int result;

    if ( n == 1 || n == 2){
        result = 1;
    }
    else {
        result = fibonacci(n-1) + fibonacci(n-2);
    }
    return result;
}

int main() 
{
  int n , count;
  cout << "n "; cin >> n;
  if (n < 1 ){
    cout << "Its a bad number" << endl;
  }
  else{
    count = fibonacci(n);
    cout << "fibonacci " << count << endl ;
  }
    return 0;
}