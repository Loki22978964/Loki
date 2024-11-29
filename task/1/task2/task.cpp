#include <iostream>
using namespace std;

int sum(int arr[], int size){
    int sum = 0;
    for (int i = 0 ; i < size ; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[10];
    int siz  = size(arr);

    for (int i = 0; i < siz; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < siz; i++){
        cout << arr[i] << " ";
    }
    cout << "Sum of elements: " << sum(arr , siz) << endl;
    return 0;
}