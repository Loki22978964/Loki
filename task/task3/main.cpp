#include <iostream>

using namespace std;

double getProductOfPositiveNumbers(double arr[], int size){
    double product = 1;
    int countPositive = 0;

    for ( int i = 0 ; i < size ; i++){
        if(arr[i] > 0){
            countPositive++;
            product *= arr[i];
        }
        if(countPositive == 0){
            return 0;
        }
    }
    return product;
}



int main(){
    double arr[7]{};
    int siz = size(arr);

    for (int i = 0 ; i < siz ; i++){
        cin >> arr[i];
    }
    cout << getProductOfPositiveNumbers(arr, siz) << endl;


    

    
    return 0;
}


