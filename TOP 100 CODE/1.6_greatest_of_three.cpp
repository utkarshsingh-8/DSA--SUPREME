#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the value of a , b and c:" << endl;
    cin >> a >> b >> c;

    // if (a > b && a > c)
    // {
    //     cout << "A is greater";
    // }
    // else if (b > a && b > c)
    // {
    //     cout << "B is greater";
    // }
    // else
    // {
    //     cout << "C is greater";
    // }

    (a > b) ? ((a > c) ? cout << "A is greater" : cout << "C is greater")
            : ((b > c) ? cout << "B is greater" : cout << "C is greater");

    int maxi = max(a, max(b, c));
    cout << "Maxi is :" << maxi;

    return 0;
}