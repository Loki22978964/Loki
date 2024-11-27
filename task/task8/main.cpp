#include <iostream>
using namespace std;

	double getMinOfArray(double arr[], int size){
        double min = arr[0]; 
        for(int i = 0 ; i < size ; i++){
            if(min > arr[i]){
                min = arr[i];
            }
        }
        return min;
    }

int main() 
{
    
	double arr[6];
    int arrSize = size(arr);

    cout << "Input numbers: " << endl;

    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    cout << "min: " << getMinOfArray(arr, arrSize) << endl;


    return 0;
}
