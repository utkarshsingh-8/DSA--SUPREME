#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "odd";
    }

    return 0;
}