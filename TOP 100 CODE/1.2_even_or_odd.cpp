#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int number;
    cout << " Enter a number:" << endl;
    cin >> number;

    // if (number % 2 == 0)
    // {
    //     cout << "Even Number";
    // }
    // else
    // {
    //     cout << "Odd Number";
    // }

    number & 1 ? cout << "Odd" : cout << "even";
    return 0;
}