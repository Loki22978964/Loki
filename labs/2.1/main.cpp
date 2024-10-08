#include <iostream>
using namespace std;

int main() {
    {            //task 1

        int arr1[7];


        for (int i = 0; i < 7; i++) {
            if (i % 2 == 0) {
                arr1[i] = i * i + 1;
            }
            else {
                arr1[i] = (i - 8);
            }
        }


        int size = 7;
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr1[j] > arr1[j + 1]) {
                    int temp = arr1[j];
                    arr1[j] = arr1[j + 1];
                    arr1[j + 1] = temp;
                }
            }
        }


        for (int i = 0; i < size; i++) {
            cout << arr1[i] << " ";
        }
        cout << endl;
    }


    {             // task 2

        int arr1[10];
        int arr2[10];
        int arr3[10];


        for (int i = 0; i < 10; i++) {
            arr1[i] = 117 + i;
        }


        for (int i = 0; i < 10; i++) {
            arr2[i] = 127 - 2 * i;
        }

        int k = 0;


        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (arr1[i] == arr2[j]) {
                    arr3[k] = arr1[i];
                    k++;
                    break;
                }
            }
        }


        if (k > 0) {
            cout << "Identical elements of arrays arr1 and arr2:";
            for (int i = 0; i < k; i++) {
                cout << arr3[i] << " ";
            }
            cout << endl;
        }
        else {
            cout << "There are no identical elements between arr1 and arr2." << endl;
        }


        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for (int i = 0; i < 10; i++) {
            if (arr1[i] < min1) {
                min2 = min1;
                min1 = arr1[i];
            }
            else if (arr1[i] < min2 && arr1[i] != min1) {
                min2 = arr1[i];
            }
        }


        cout << "The first minimum of arr1: " << min1 << endl;
        cout << "Second minimum with arr1: " << min2 << endl;
        cout << "The sum of the two minimum elements from arr1:" << (min1 + min2) << endl;

        return 0;
    }
}