#include <iostream>
using namespace std;

double getMax(double arr[], int size){
    double max = arr[0];

    for(int i = 1 ; i < size ; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int main(){

    double arr[12];
    int siz = size(arr);
    for ( int i = 0 ; i < siz ; i++){
        cin >> arr[i];
    }
    double max = getMax(arr , siz);

    int count = 0;
    for ( int i = 0 ; i < siz ; i++){
        if ( arr[i] >= max * 0.7)
        count++;
    }
    cout << max << endl;
    cout << count << endl;
    return 0;
}

