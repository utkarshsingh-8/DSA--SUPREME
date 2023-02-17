#include <iostream>
using namespace std;

int main()
{
    int num, i = 2;
    cout << "Enter the value of num" << endl;
    cin >> num;

    while (i < num)
    {
        if (num % i == 0)
        {
            cout << "Not Prime Number"<<endl;
        }
        i = i + 1;
    }
    

    return 0;
}