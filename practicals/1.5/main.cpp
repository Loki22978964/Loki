#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void initRandomizer()
{
    srand(time(NULL));
}


int main()
{
    {
        //Task 1

        int n, p;
        cout << "Enter the length of the sequence: ";
        cin >> n;
        cout << "input number from 0 to 100: ";
        cin >> p;

        int* arr = new int[n];
        // Populate the array with random values
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 100;
        }

        // cout the array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        //int min = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] == p) {
                cout << "we found index P " << i;
            }

        }
        //   cout << "The minimum value in the sequence is: " << min << endl;
        delete[] arr;
        arr = nullptr;
    }

    {
        initRandomizer();
        //Task 2

        int n;
        cout << "Enter the length of the sequence: ";
        cin >> n;

        int* arr = new int[n];
        // Populate the array with random values
        for (int i = 0; i < n; i++) {
            arr[i] = (rand() % 200) - 100;
        }

        // cout the array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";

        }
        cout << endl;
        //1
        int arrMin = arr[0];

        for (int i = 0; i < n; i++) {
            if (arrMin < 0) {
                arrMin = arr[i];
            }
            if (arr[i] < arrMin && arr[i] > 0) {
                arrMin = arr[i];
            }
        }
        cout << arrMin << endl;

        delete[] arr;
        arr = nullptr;
    }

    {
       //Task 3
        int main() {
            initRandomizer();
            int n;

            cout << "Enter the length of the sequence: ";
            cin >> n;
            int* arr = new int[n];

            for (int i = 0; i < n; i++) {
                arr[i] = (rand() % 200) - 100;
            }

            // Виводимо масив
            cout << "Array: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            int minIndex = -1; // Для індексу мінімального від'ємного
            int maxIndex = -1; // Для індексу максимального позитивного
            int arrMin = INT_MAX; // Максимально можливе значення
            int arrMax = INT_MIN; // Мінімально можливе значення

            for (int i = 0; i < n; i++) {
                if (arr[i] < 0 && arr[i] < arrMin) {
                    arrMin = arr[i];
                    minIndex = i;
                }
            }
            for (int i = 0; i < n; i++) {

                if (arr[i] > arrMax) {
                    arrMax = arr[i];
                    maxIndex = i;
                }
            }

            // Виводимо мінімальне та максимальне значення
            if (minIndex != -1) {
                cout << "Minimum negative value: " << arrMin << " at index " << minIndex << endl;
            }
            else {
                cout << "No negative values found." << endl;
            }

            if (maxIndex != -1) {
                cout << "Maximum positive value: " << arrMax << " at index " << maxIndex << endl;
            }
            else {
                cout << "No positive values found." << endl;
            }

            // Обмін значеннями
            if (minIndex != -1 && maxIndex != -1) {
                int temp = arr[minIndex];
                arr[minIndex] = arr[maxIndex];
                arr[maxIndex] = temp;
            }
            else {
                cout << "No suitable values found for swapping." << endl;
            }

            // Виводимо масив після обміну
            cout << "Array after swap: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;

            delete[] arr;
            arr = nullptr;

            return 0;
        }
}