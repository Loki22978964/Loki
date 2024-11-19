#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n ";
    cin >> n;
    int p;
    double sum = 0;
    
   for(int i = 1 ; i <= n ;i++){
    cout << "Enter point " << i  << " ";
    cin >> p;
    sum = sum + p;
   }
   sum = sum / n;
   cout << sum << endl;

    return 0;
}
