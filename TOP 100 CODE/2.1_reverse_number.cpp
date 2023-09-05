#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number:" << endl;
    cin >> num;

    int reversed = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    cout << "THe reverse number is :" << reversed;

    return 0;
}