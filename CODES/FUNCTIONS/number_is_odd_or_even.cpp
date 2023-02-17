#include <iostream>
using namespace std;

void check_odd_or_even(int num)
{
    if (num % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}

int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;
    check_odd_or_even(num);

    return 0;
}