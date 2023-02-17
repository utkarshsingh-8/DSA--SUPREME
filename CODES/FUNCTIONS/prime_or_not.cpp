#include <iostream>
using namespace std;

void prime(int num)
{
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count = count + 1;
        }
    }
    (count > 0) ? cout << "Not Prime" : cout << "Prime";
}

int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    prime(num);
    return 0;
}