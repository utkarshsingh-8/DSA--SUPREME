#include <iostream>
using namespace std;

int reverse_integer(int num)
{
    int rev = 0, digit;

    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        rev = (rev * 10) + digit;
    }
    return rev;
}

int main()
{
    int num, rev = 0, digit;
    cout << "Enter the value of num" << endl;
    cin >> num;
    cout << "The Reverse of the given number is :" << reverse_integer(num);

    return 0;
}