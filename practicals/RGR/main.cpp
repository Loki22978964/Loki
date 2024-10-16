#include <iostream>
#include <string>
using namespace std;

bool isValidString(const string& l) {
    if (l.empty() || (l[0] != '_')) { // only _ in 0 position
        return false;
    }
    if (l.size() < 2 || (l[1] != '+' && l[1] != '-')) { // + OR -
        return false;
    }

    for (size_t i = 2; i < l.size(); ++i) {
        // from 0 to 5 
        if (!((isdigit(l[i]) && l[i] >= '0' && l[i] <= '5') ||
            (l[i] >= 'A' && l[i] <= 'K'))) { // from A to K
            return false;
        }
    }

    return true;
}

int main() {
    string input;
    cout << "Enter to approve: ";
    cin >> input;

    if (isValidString(input)) {
        cout << "good" << endl;
    }
    else {
        cout << "not good" << endl;
    }

    return 0;
}
