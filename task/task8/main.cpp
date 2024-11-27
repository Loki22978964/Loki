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

    for (int i = 0; i < arrSize; i++) {
        arr[i] = - arr[i];
    }

    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}