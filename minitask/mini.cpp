#include <iostream>

using namespace std;
float convert_miles_to_km(float mill){
    float res = mill * 1.6;
    return res;
}

int main() 
{
    double miles_count;
    cout << "Input miles_count: "; cin >> miles_count;

    double result = convert_miles_to_km(miles_count);
    cout << result << endl;

    return 0;
}