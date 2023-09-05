#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the value of the num:" << endl;
    cin >> num;

    bool isPrime = true;
    if (num < 2)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i < sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
            }
        }
    }

    if (isPrime)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not Prime Number";
    }

    return 0;
}