#include <iostream>
using namespace std;

int main()
{
    {
             // task 1

        int a;
        int mask = 1;
        int ones = 0;
        int zeroes = 0;

        cout << "Enter your number: " << endl;
        cin >> a;

        
        for (int i = 0; i < 8; i++)
        {
            int check = a & mask;

            if (check != 1)
            {
                zeroes++;
            }
            else
            {
                ones++;
            }
            mask = mask << 1;
        }

        if (ones == zeroes)
        {
            cout << "There are equal number of zeroes and ones" << endl;
        }
        else if (ones > zeroes)
        {
            cout << "There are more ones" << endl;
        }
        else
        {
            cout << "There are more zeroes" << endl;
        }

        cout << endl;
    }

    {
            // task 2

#include <iostream>
        using namespace std;

        int main()
        {
            const int size = 5;
            int A[size], B[size], C[size];

            cout << "Enter " << size << " elements for sequence A (only 0 or 1): " << endl;
            for (int i = 0; i < size; i++) {
                cin >> A[i];
                if (A[i] != 0 && A[i] != 1) {
                    cout << "Invalid input. Please enter only 0 or 1." << endl;
                    return 1;
                }
            }

            cout << "Enter " << size << " elements for sequence B (only 0 or 1): " << endl;
            for (int i = 0; i < size; i++) {
                cin >> B[i];
                if (B[i] != 0 && B[i] != 1) {
                    cout << "Invalid input. Please enter only 0 or 1." << endl;
                    return 1;
                }
            }

            for (int i = 0; i < size; i++) {
                if (A[i] == B[i]) {
                    C[i] = 0;
                }
                else {
                    C[i] = 1;
                }
            }

            cout << "Result of XOR operation (sequence C): " << endl;
            for (int i = 0; i < size; i++) {
                cout << C[i] << " ";
            }
            cout << endl;

            return 0;
        }
    }
}