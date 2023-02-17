#include <iostream>
using namespace std;

int main()
{
    int radius;
    cout << "Enter the value of radius:" << endl;
    cin >> radius;
    float area = 3.14 * radius * radius;
    cout << "The area of circle is :" << area;
    return 0;
}