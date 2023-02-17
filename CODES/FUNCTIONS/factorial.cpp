#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}



int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    cout << "The factorial of the num is :" << factorial(num);
    return 0;
}