#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a = 356;
    int b = 35;
    double c = 157.27;
    int d = 12;
    int e = 57;
    int result;

    result = (a | ~b) / c > (d + e) << (sizeof(float) * 8);

    std::cout << "Result: " << result << std::endl;

    return 0;
}