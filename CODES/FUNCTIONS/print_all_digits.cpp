#include <iostream>
using namespace std;

void print_digit(int num)
{
    int digit,dig;

    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        dig=
    }
}

int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;
    cout << "The digits of the given num are :" << endl;
    print_digit(num);

    return 0;
}