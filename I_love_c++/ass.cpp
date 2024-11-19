#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int weight , real_weight;
    cout << "enter waight ";
    cin >> weight;
    real_weight = weight;
    while (real_weight < 101){
        count++;
        cout << "enter waight ";
        cin >> weight;
        real_weight = real_weight + weight;
        if (real_weight == 100){
            real_weight++;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
