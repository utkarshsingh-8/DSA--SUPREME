#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b :" << endl;
    cin >> a >> b;

    cout << "Sum of 2 numbers is :" << add(a, b);
    return 0;
}