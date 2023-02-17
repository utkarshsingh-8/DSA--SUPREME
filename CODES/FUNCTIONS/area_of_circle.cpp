#include <iostream>
using namespace std;

float area(int radius)
{
    float area = 3.14 * radius * radius;
    return area;
}

int main()
{
    int radius;
    cout << "Enter the value of radius of circle" << endl;
    cin >> radius;

    cout << "The Area of Circle is :" << area(radius);
    return 0;
}