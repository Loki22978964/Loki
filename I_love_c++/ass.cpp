#include <iostream>
#include <cmath>  

using namespace std;

int main() {
  double a, b, c;
    cin >> a >> b >> c;
    double numbers[3] = {a, b, c};

    for ( int i = 1 ; i < 3 ; i++ ){
      if (fabs (numbers[0] - numbers[i] ) >= 0.1){
        cout << 0 << endl;
      }
      
    }
    cout << 1 << endl;
    return 0;
}
    