#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    if (num > 0)
    {
        cout << "Positive";
    }
    else
    {
        if (num < 0)
        {
            cout << "Negative";
        }
        else
        {
            cout << "Equal to Zero";
        }
    }

    return 0;
}