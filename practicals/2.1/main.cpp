// Bobro Nick 123 - 1
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    srand(time(0));

    cout << "Enter number of arrays and their size" << endl;
    int c, r;
    cin >> r;
    cin >> c;
    int** arr = new int* [r];

    for (int i = 0; i < r; i++) {
        arr[i] = new int[c];
    }



    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = rand() % 20 - 10;
        }
    }


    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    {
        //task 1
        cout << endl;
        cout << "Task 1" << endl;

        int min = arr[0][0];

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (arr[i][j] <= min)
                {
                    min = arr[i][j];
                }
            }
        }
        cout << "Lowest number: " << min << endl;

        cout << "Indexes of lowest numbers are: " << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (min == arr[i][j])
                {
                    cout << "A[" << i << "," << j << "] ";
                }
            }
        }
        cout << endl;
    }

    {
        //task 2 
        cout << endl;
        cout << "Task 2" << endl;
        int maxnum = ~1;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (arr[i][j] > maxnum && arr[i][j] < 0)
                {
                    maxnum = arr[i][j];
                }
            }
        }
        cout << "Biggest negative number: " << maxnum << endl;
    }

    {

        cout << endl;
        cout << "Task 3" << endl;
        int minPos = (unsigned int)arr[0][0];

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (arr[i][j] < minPos && arr[i][j] > 0)
                {
                    minPos = arr[i][j];
                }
            }
        }
        cout << "Smallest positive number: " << minPos << endl;
    }
}
