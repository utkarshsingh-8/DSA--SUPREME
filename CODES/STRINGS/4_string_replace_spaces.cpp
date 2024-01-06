#include <iostream>
#include <vector>
using namespace std;

void removeSpaces(string &str)
{
    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
            str[i] = '@';
    }
}

int main()
{
    string str;
    cout << "Enter the String: " << endl;
    getline(cin, str);

    removeSpaces(str);
    cout << "The Reverse of the string is: " << str;
    return 0;
}