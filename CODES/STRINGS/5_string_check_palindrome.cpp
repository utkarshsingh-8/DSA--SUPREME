#include <iostream>
#include <vector>
using namespace std;

bool checkPalindrome(string &str)
{
    int start = 0, end = str.size() - 1;

    while (start <= end)
    {
        if (str[start++] != str[end--])
            return false;
    }

    return true;
}

int main()
{
    string str;
    cout << "Enter the String: " << endl;
    cin >> str;

    if (checkPalindrome(str))
        cout << "String is Palindrome";

    else
        cout << "Not Palindrome";

    return 0;
}