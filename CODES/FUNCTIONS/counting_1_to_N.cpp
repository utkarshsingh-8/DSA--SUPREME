#include <iostream>
using namespace std;

void countprint(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    cout << "The Counting from 1 to N :" << endl;
    countprint(num);
    return 0;
}