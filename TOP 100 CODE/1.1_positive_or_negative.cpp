#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << " Enter a number:" << endl;
    cin >> number;

    if (number > 0)
    {
        cout << "+ve Number";
    }
    else
    {
        cout << "-ve Number";
    }

    return 0;
}