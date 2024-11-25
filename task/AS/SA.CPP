#include <iostream>

using namespace std;

int max_array( int arr[], const int size){
    if (size == 0){
        return 0;
    }

    int max = arr[0];

    for (int i = 0 ; i < size ; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int positive_count( int arr[], const int size){
    int b = 0;

    for (int i = 0 ; i < size; i++){
        if (arr[i] > 0){
            b = b + 1;

        }
    }
    return b;
}

double average_temperature( int arr[], const int size){
    double sum;

    for ( int i = 0; i < size ; i++){
        sum = sum + arr[i];
    }
    return sum / size;
}

int main(){
    const int day_count = 7;
    int temperatures[day_count]{3, 5, -1, -3, -2, 1, 3};
    
    int max, pos ;
    double sum;

    max = max_array(temperatures , day_count);
    pos = positive_count(temperatures , day_count);
    sum = average_temperature(temperatures , day_count);

    cout << max << endl;
    cout << pos << endl;
    cout << sum << endl;
    return 0;

}