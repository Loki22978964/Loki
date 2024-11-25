#include <iostream>

using namespace std;

int main(){
    int arr[9]{};
    int siz = size(arr);

    for (int i = 0 ; i < siz ; i++){
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0 ; i < siz ; i++){
        if (arr[i] < 0){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

