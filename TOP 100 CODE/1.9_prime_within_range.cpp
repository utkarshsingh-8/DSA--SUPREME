#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter the interval lower and upper limit" << endl;
    cin >> n1 >> n2;

    cout << "The Prime Numbers between interval " << n1 << "and " << n2 << "is:" << endl;

    for (int i = n1; i <= n2; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            cout << i<< " ";
        }
    }

    return 0;
}