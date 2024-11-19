#include <iostream>
using namespace std;

int main() {
   int b;
   double def = 1;
   cout << "enter b ";
   cin >> b;
   for (int i = 1 ; i <= b ; i++){
    def = def * i;
   }
   cout << def ;

    return 0;
}
