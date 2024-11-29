#include <iostream>
using namespace std;

int main() 
{
    
	int arr[7];
    int arrSize = size(arr);

    cout << "Input numbers: " << endl;

    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    int ind = 0;
    while(arr[ind] < 0){
        ind = ind + 1;
    }

    int min = arr[ind];
    for(int i = 0 ; i < arrSize ; i++){
        if (arr[i] > 0 && min > arr[i]){
            min = arr[i];
        }
        if (arr[i] <= 0){
            arr[i] = min;
        }
    }

    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}
