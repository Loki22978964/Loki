#include <iostream>
using namespace std;

int main() 
{
    
	int arrForward[7];
    const int arrSize = size(arrForward);

    cout << "Input numbers: " << endl;

    for (int i = 0; i < arrSize; i++) {
        cin >> arrForward[i];
    }

    int arrBack[arrSize];

    for (int i = 0; i < arrSize; i++){
        arrBack[arrSize - i] = arrForward[i];
        
    } 

    for (int i = 0; i < arrSize; i++) {
        cout << arrBack[i] << ' ';
    }

    return 0;
}