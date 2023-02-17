#include <iostream>
using namespace std;

float cel_2_fah(float cel)
{
    float fah = (cel * 9) / 5.0 + 32;
    return fah;
}

int main()
{
    float cel;
    cout << "Enter the value of temperature in celsius:" << endl;
    cin >> cel;
    cout << "The Temperature in Fahrenheit is:" << endl
         << cel_2_fah(cel);

    return 0;
}