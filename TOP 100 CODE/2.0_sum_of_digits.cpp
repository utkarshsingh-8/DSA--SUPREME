#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number:" << endl;
    cin >> num;

    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    cout << "The sum of the digits of the number is :" << sum;

    return 0;
}