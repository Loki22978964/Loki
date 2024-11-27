
#include <iostream>
using namespace std;

	double getAveragePositiveArray(double arr[], int size){
        double s = 1;
        double count = 0;

    for (int i = 0 ; i< size ; i++ ){
        if (arr[i] > 0){
            s = s + arr[i];
            count++;
        }
        if (count == 0){
            return -1;
        }
    }
    return s / count;

    }

    


int main(){
    
	double arr[6];
    int arrSize = size(arr);

    cout << "Input numbers: " << endl;

    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    cout << "Result: " << getAveragePositiveArray(arr, arrSize) << endl;


    return 0;
}