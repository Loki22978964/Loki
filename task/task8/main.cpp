#include <iostream>
using namespace std;

	double arrayProduct (double arr[], int size){
         double s = 1;
    for ( int i = 0 ; i < size ; i++){
        s = s * arr[i];
    }
    return s;
    }
   

int main() 
{
    
	double arr[5];
    int arrSize = size(arr);

    cout << "Input numbers: " << endl;

    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    cout << "Product: " << arrayProduct(arr, arrSize) << endl;

    return 0;
}