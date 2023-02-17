#include <iostream>
using namespace std;

int sum_of_even(int num)
{
    int sum = 0;
    for (int i = 2; i <= num; i += 2)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    cout << "The Sum of even from upto N:" << sum_of_even(num);

    return 0;
}