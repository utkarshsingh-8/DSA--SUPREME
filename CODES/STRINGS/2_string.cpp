#include <iostream>
#include <vector>
using namespace std;

int stringLength(string str)
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        i++;
        count++;
    }

    return count;
}

int main()
{
    string str;

    cout << "Enter the String: " << endl;
    cin >> str;

    cout << "The Length of the string is: " << stringLength(str);

    return 0;
}