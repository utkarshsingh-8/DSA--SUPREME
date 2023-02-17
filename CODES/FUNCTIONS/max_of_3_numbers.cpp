#include <iostream>
using namespace std;

/*void max(int x, int y, int z)
{
    if (x > y)
    {
        if (x > z)
        {
            cout << "a is maximum";
        }
        else
        {
            cout << "c is maximum";
        }
    }
    else
    {
        if (y > z)
        {
            cout << "b is maximum";
        }
        else
        {
            cout << "c is maximum";
        }
    }
}*/

void max(int x, int y, int z)
{
    (x > y) ? ((x > z) ? cout << "a" : cout << "c") : ((y > z) ? cout << "b" : cout << "c");
}

int main()
{
    int a, b, c;
    cout << "Enter the value of a ,b and c" << endl;
    cin >> a >> b >> c;
    cout << "The number which are greater is ";

    max(a, b, c);

    return 0;
}