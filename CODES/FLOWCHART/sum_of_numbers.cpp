#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0;
    cout << "Enter the value of num" << endl;
    cin >> num;

    while (i <= num)
    {
        sum = sum + i;
        i = i + 1;
    }

    cout << "Sum of N numbers is : " << sum;

    return 0;
}