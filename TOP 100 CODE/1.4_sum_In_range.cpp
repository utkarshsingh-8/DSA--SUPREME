#include <iostream>
using namespace std;

int calRange(int a, int b)
{
    if (a > b)
    {
        return 0;
    }

    return a + calRange(a + 1, b);
}

int main()
{
    int n1, n2;
    cout << "Enter the lower limit and upper limit of the range" << endl;
    cin >> n1 >> n2;

    // int sum = 0;
    // for (int i = n1; i <= n2; i++)
    // {
    //     sum += i;
    // }

    int sum = calRange(n1, n2);
    cout << "Sum of the numbers in the given range are: " << sum;

    return 0;
}