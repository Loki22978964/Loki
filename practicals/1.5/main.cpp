#include <iostream>
#include <cstdlib>
using namespace std;

void initRandomizer()
{
    srand(time(NULL));
}

int getP()
{
    int p;
    cout << "Enter number P from 0 to 10 that you want to find: " << endl;
    cin >> p;

    if (p > 10 || p < 0)
    {
        cout << "P is out of range" << endl;
        getP();
    }
    return p;
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
        //Task 2

        
    }

    {
       //Task 2
    }
}