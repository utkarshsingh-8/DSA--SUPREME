#include <bits/stdc++.h>
using namespace std;

void stringReverse(string &str)
{
    int start = 0, end = str.size() - 1;
    while (start <= end)
        swap(str[start++], str[end--]);
}

int main()
{
    string str;
    cout << "Enter the String: " << endl;
    cin >> str;

    stringReverse(str);
    cout << "The Reverse of the string is: " << str;
    return 0;
}