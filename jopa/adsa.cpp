#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
using namespace std;


  double cylinder_volume (double r, double h){
    double volume;
    volume = M_PI * h * r * r;
    return volume;
  }

  int main(){
    double r1 ,r2 , h1 , h2;
    cout << "r1 "; cin >> r1;
    cout << "r2 "; cin >> r2;
    cout << "h1 "; cin >> h1;
    cout << "h2 "; cin >> h2;

    double vol1 , vol2;

    vol1 = cylinder_volume(r1 , h1);
    vol2 = cylinder_volume(r2, h2);

    if ( vol1 > vol2){
      cout << "The first cylinder is larger" << endl;
    }
    else{
      cout << "The second cylinder is larger " << endl;
    }

    return 0;


  }