#include <iostream>
using namespace std;

int sum_N(int num)
{
    if (num == 0)
    {
        return num;
    }

    return num + sum_N(num - 1);
}

int main()
{
    int num;
    cout << "Enter the value of Num upto you want sum" << endl;
    cin >> num;

    // int sum = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     sum += i;
    // }
    int sum = sum_N(num);
    cout << "The sum of 1st N natural numbers are:" << sum << endl;

    return 0;
}