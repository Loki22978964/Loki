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
        //Çàäàíî ïîñë³äîâí³ñòü çíà÷åíü À[n] ³ äåÿêå çíà÷åííÿ P. Çíàéòè ³íäåêñ ïåðøîãî âõîäæåííÿ Ð ó ïîñë³äîâí³ñòü À[n].

        cout << "Task 1" << endl;

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
        //Çàäàíî ïîñë³äîâí³ñòü çíà÷åíü À[n]. Çíàéòè íàéìåíøå çíà÷åííÿ ñåðåä äîäàòíèõ åëåìåíò³â ïîñë³äîâíîñò³ À[n].

        cout << "Task 2" << endl;

        int n;

        cout << "Enter number of iterations: " << endl;
        cin >> n;

        int* arr = new int[n];
        int arrMin = arr[0];

        //generate array
        for (int i = 0; i < n; i++)
        {
            arr[i] = (rand() % 200) - 100; //substracting 100 to allow random generation of negative numbers
        }

        //cout the array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        //finding min positive number
        for (int i = 0; i < n; i++)
        {
            //check if arrmin is positive
            if (arrMin < 0)
            {
                arrMin = arr[i];
            }

            //change min number
            if (arr[i] > 0 && arrMin > arr[i])
            {
                arrMin = arr[i];
            }
        }

        cout << "Lowest positive number: " << arrMin << endl;
        cout << " " << endl;

        delete[] arr;
        arr = nullptr;
    }

    {
        //Çàäàíî ïîñë³äîâí³ñòü çíà÷åíü À[n]. Çíàéòè íàéá³ëüøå ³ íàéìåíøå çíà÷åííÿ òà ïîì³íÿòè ¿õ ì³ñöÿìè.
        cout << "Task 3" << endl;

        initRandomizer();

        int n;

        cout << "Enter number of iterations: " << endl;
        cin >> n;

        int* arr = new int[n];
        int minIndex = 0;
        int maxIndex = 0;

        //generate array
        for (int i = 0; i < n; i++)
        {
            arr[i] = (rand() % 200) - 100; //substracting 100 to allow random generation of negative numbers
        }

        int arrMin = arr[0];
        int arrMax = arr[0];

        //cout the array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        //finding min and max number
        for (int i = 1; i < n; i++)
        {

            //change min number
            if (arrMin > arr[i])
            {
                arrMin = arr[i];
                minIndex = i;
            }

            if (arrMax < arr[i])
            {
                arrMax = arr[i];
                maxIndex = i;
            }
        }
        //swapping numbers
        arr[minIndex] = arrMax;
        arr[maxIndex] = arrMin;

        //cout the array again
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr;
        arr = nullptr;
    }
}