// Створити масив, який складатиметься з 8 значень дійсного типу. Організувати введення
// цього масиву з клавіатури. Поміняти місцями максимальний та мінімальний елементи
// списку.

#include <iostream>
using namespace std;

int main(){
    double arr[8];
    int siz = size(arr);

    for(int i = 0 ; i < siz ; i++){
        cin >> arr[i];
    }

    double max = arr[0] ,min = arr[0];
    int imax = 0, imin = 0;

    for(int i = 0 ; i < siz ; i++){

        if(max < arr[i] ){
            max = arr[i];
            imax = i;
        }

        if(min > arr[i] ){
            min = arr[i];
            imin = i;
        }

    }
    arr[imax] = min;
    arr[imin] = max;

    for(int i = 0 ; i < siz ; i++){
        cout << arr[i] << "  ";
    }

    return 0;
}

// 1.4 -7 1.3 8.2 14 -1-2 8
