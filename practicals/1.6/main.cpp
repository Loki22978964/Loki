#include <iostream>
using namespace std;

int main()
{
#include <iostream>
    using namespace std;

    int main() {

        {
            // task 1

            cout << "Task 1" << endl;

            int a;
            int mask = 1;
            int ones = 0;
            int zeroes = 0;

            cout << "Enter your number: " << endl;
            cin >> a;

            for (int i = 0; i < 8; i++)
            {
                int checkBit = a & mask;

                if (checkBit != 0)
                {
                    ones++;
                }
                else
                {
                    zeroes++;
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

            cout << endl; s
        }



    }
   