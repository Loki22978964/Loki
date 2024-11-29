#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int siz = size(arr);

    int ind = 1;

    for(int i = 0 ; i < siz ; i++){
        cin >> arr[i];
    }

   while(arr[ind] % 3 != 0){
    ind = ind + 2;
   }
   int max = arr[ind];

   for ( int i = ind ; i < 10 ; i = i + 2){
    if (arr[i] > max && arr[i] % 3 == 0){
        max = arr[i];
   }
   }
    cout << max;
    return 0;

}