#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int siz = size(arr);

    int a , d;
    cout << "Enter a "; cin >> a;
    cout << "Enter d "; cin >> d;
    arr[0] = a;

    for ( int i = 1 ; i < 10; i++){
        arr[i] = arr[i - 1] + d;

    }
    int sum = 0;
    for ( int i = 0 ; i < 10; i++){
        sum += arr[i];

    }
    cout << sum;
    return 0;
}