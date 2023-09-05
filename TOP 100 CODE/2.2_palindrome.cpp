#include <iostream>
using namespace std;

int palindrome(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }

    int rem = num % 10;
    rev = rev * 10 + rem;

    return palindrome(num / 10, rev);
}

int main()
{
    int num;
    cout << "Enter a Number:" << endl;
    cin >> num;

    int number = num, rev = 0;

    if (number == palindrome(num, rev))
    {
        cout << "Number is palindrome";
    }
    else
    {
        cout << "Number is not palindrome";
    }

    return 0;
}