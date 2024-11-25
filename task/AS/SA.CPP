#include <iostream>

using namespace std;

int main(){
   const double price = 7.98;
   int gas_volume[] = {10, 12, 65, 34, 132, 76, 23, 12, 22, 31};
   const int N = size(gas_volume);
   double gas_cost[N]{};

   for (int i = 0 ; i < N ; i++){
    gas_cost[i] = price * gas_volume[i];
   }
   for (int i = 0 ; i < N ; i++){
    cout << "Cloent number " << i << " = "<<gas_cost[i] << endl;
   }
    return 0;
}