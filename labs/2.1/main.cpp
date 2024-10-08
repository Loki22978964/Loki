#include <iostream>
#include <iomanip>
#include <climits>
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


    }
    {   // task 3.1
        const int r = 4, c = 4;
        int intArray[r][c] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };

        int diagonal[r];
        for (int i = 0; i < r; ++i) {
            diagonal[i] = intArray[i][i];
        }

        cout << "Integer array 4x4:\n";
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                cout << setw(4) << intArray[i][j];
            }
            cout << endl;
        }

        cout << "\nOne-dimensional array with elements of the main diagonal:\n";
        for (int i = 0; i < r; ++i) {
            cout << diagonal[i] << " ";
        }
        cout << endl;




    }
    {   // task 3.2
        const int r2 = 4, c2 = 5;
        double floatArray[r2][c2] = {
            {1.1, 2.2, 3.3, 4.4, 5.5},
            {6.6, 7.7, 8.8, 9.9, 10.1},
            {11.2, 12.3, 13.4, 14.5, 15.6},
            {16.7, 17.8, 18.9, 19.0, 20.2}
        };

        // Step 3: Create a one-dimensional array with the average values of the rows
        double averages[r2];
        for (int i = 0; i < r2; ++i) {
            double sum = 0.0;
            for (int j = 0; j < c2; ++j) {
                sum += floatArray[i][j];
            }
            averages[i] = sum / c2;
        }

        // Output the double array and the average values of the rows
        cout << "Double array 4x5:\n";
        for (int i = 0; i < r2; ++i) {
            for (int j = 0; j < c2; ++j) {
                cout << setw(6) << floatArray[i][j];
            }
            cout << endl;
        }

        cout << "\nOne-dimensional array with the average values of each row:\n";
        for (int i = 0; i < r2; ++i) {
            cout << fixed << setprecision(2) << averages[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
