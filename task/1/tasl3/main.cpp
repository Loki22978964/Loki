#include <iostream>
using namespace std;

int main(){
    float arr[7]{};
    int siz = size(arr);

    for(int i = 1 ; i < siz ; i++){
        cout << i << " "; cin >> arr[i];

    }

    float max = arr[0];

    for(int i = 1 ; i < siz ; i++){
        if (max < arr[i]){
            max = arr[i];
        }

    }
    cout << max << endl;
    return 0;
}

// 4
// 3.8
// 8.5
// -9
// 6.7
// 7.1
