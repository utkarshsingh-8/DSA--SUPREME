#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, rem;
    cout << "Enter a number :" << endl;
    cin >> num;

    int arm_sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        arm_sum += (rem * rem * rem);
        num /= 10;
    }

    cout << arm_sum;

    return 0;
}