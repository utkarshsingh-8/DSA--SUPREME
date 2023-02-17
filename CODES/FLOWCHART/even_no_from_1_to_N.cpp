#include <iostream>
using namespace std;

int main()
{
    int num, i = 0;
    cout << "Enter the value of num" << endl;
    cin >> num;

    while (i <= num)
    {
        cout << i << " ";
        i = i + 2;
    }
    return 0;
}